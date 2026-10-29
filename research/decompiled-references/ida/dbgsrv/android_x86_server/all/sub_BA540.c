/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA540
// Address: 0x000BA540

//----- (000BA540) --------------------------------------------------------
int __cdecl sub_BA540(_DWORD *a1, char **a2, int *a3, size_t nbytes)
{
  unsigned int v4; // esi
  unsigned int v5; // esi
  unsigned int v6; // ecx
  char *v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  int *v10; // eax
  __suseconds_t v11; // eax
  unsigned int v12; // edx
  unsigned __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  int v17; // eax
  signed int v18; // edi
  int v19; // esi
  size_t v20; // ecx
  size_t v21; // edi
  char *v22; // eax
  ssize_t v23; // eax
  size_t v24; // ecx
  char *v25; // eax
  int v26; // eax
  int v27; // edi
  void *v28; // eax
  void *v29; // eax
  int v31; // [esp+Ch] [ebp-50h]
  signed int v32; // [esp+10h] [ebp-4Ch]
  int v33; // [esp+14h] [ebp-48h] BYREF
  int v34; // [esp+18h] [ebp-44h] BYREF
  size_t v35; // [esp+1Ch] [ebp-40h]
  size_t v36; // [esp+20h] [ebp-3Ch]
  int v37; // [esp+28h] [ebp-34h] BYREF
  unsigned int v38; // [esp+2Ch] [ebp-30h]
  unsigned int v39; // [esp+30h] [ebp-2Ch]
  int v40; // [esp+38h] [ebp-24h] BYREF
  unsigned int v41; // [esp+3Ch] [ebp-20h]
  int v42; // [esp+40h] [ebp-1Ch]
  char v43; // [esp+47h] [ebp-15h] BYREF
  unsigned int v44; // [esp+48h] [ebp-14h]

  v44 = __readgsdword(0x14u);
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v4 = a1[1];
  if ( v4 )
  {
    v40 = (int)qvector_reserve((int)&v40, nullptr, v4, 4u);
    memset((void *)(v40 + 4 * v41), 0, 4 * (v4 - v41));
    v41 = v4;
    v5 = a1[1];
    v6 = v38;
    if ( v38 >= v5 )
    {
      if ( v38 != v5 )
      {
        v34 = 0;
        sub_4EDA0((char **)&v37, v5, (char *)&v34);
      }
    }
    else
    {
      if ( v39 >= v5 )
      {
        v7 = (char *)v37;
      }
      else
      {
        v7 = (char *)qvector_reserve((int)&v37, (void *)v37, v5, 4u);
        v37 = (int)v7;
        v6 = v38;
      }
      memset(&v7[4 * v6], 0, 4 * (v5 - v6));
      v38 = v5;
    }
    if ( a1[1] )
    {
      v8 = 0;
      do
      {
        *(_DWORD *)(v40 + 4 * v8) = *(_DWORD *)(a1[2] + 4 * v8);
        *(_DWORD *)(v37 + 4 * v8) = v8;
        ++v8;
      }
      while ( v8 < a1[1] );
    }
  }
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v9 = v41;
  if ( !v41 )
  {
    v18 = 0;
    goto LABEL_50;
  }
  v10 = a3;
  v31 = 0;
  while ( 1 )
  {
    if ( *v10 < 0 )
    {
      LODWORD(v16) = v10[5];
    }
    else
    {
      v11 = qtime64();
      v13 = (unsigned int)v11 + (unsigned int)dword_F4240 * (unsigned __int64)v12;
      v14 = a3[3];
      HIDWORD(v15) = a3[4];
      if ( v13 + 10 >= __PAIR64__(HIDWORD(v15), v14) )
        goto LABEL_46;
      LODWORD(v15) = 999 - v13;
      v16 = (__PAIR64__((999 - v13) >> 32, v14) + v15) / 0x3E8;
      a3[5] = v16;
      v9 = v41;
    }
    v17 = qwait_for_handles(&v33, (int *)v40, v9, 0, v16);
    v18 = v17;
    if ( v17 < 0 )
    {
      v29 = winerr(v17);
      v31 = 1;
      sub_B69C0(a2, (char *)&qword_13ACD8 - 311612, v29);
      goto LABEL_44;
    }
    v19 = v33;
    if ( !v17 && v33 == -1 )
    {
      v31 = 2;
      goto LABEL_44;
    }
    v20 = v35;
    v21 = nbytes;
    if ( v35 >= nbytes )
    {
      if ( v35 != nbytes )
      {
        v43 = 0;
        sub_43860((char **)&v34, nbytes, &v43);
        v21 = nbytes;
      }
    }
    else
    {
      v22 = (char *)v34;
      if ( v36 < nbytes )
      {
        v22 = (char *)qvector_reserve((int)&v34, (void *)v34, nbytes, 1u);
        v34 = (int)v22;
        v20 = v35;
        v21 = nbytes;
      }
      memset(&v22[v20], 0, v21 - v20);
      v35 = v21;
    }
    v23 = read(*(_DWORD *)(v40 + 4 * v19), (void *)v34, v21);
    v18 = v23;
    if ( v23 <= 0 )
    {
      v26 = 0;
      if ( v18 < 0 )
      {
        v27 = -v18;
        v28 = winerr(v27);
        v31 = 1;
        sub_B69C0(a2, (char *)&qword_13ACD8 - 311584, v28);
        v26 = v27;
      }
      v32 = v26;
      memmove((void *)(v40 + 4 * v19), (const void *)(v40 + 4 * v19 + 4), (4 * v41-- + -4 - 4 * v19) & 0xFFFFFFFC);
      memmove((void *)(v37 + 4 * v19), (const void *)(v37 + 4 * v19 + 4), (4 * v38-- + -4 - 4 * v19) & 0xFFFFFFFC);
      v18 = v32;
      goto LABEL_38;
    }
    v24 = v35;
    if ( v35 >= v23 )
    {
      if ( v35 != v23 )
      {
        v43 = 0;
        sub_43860((char **)&v34, v23, &v43);
      }
    }
    else
    {
      v25 = (char *)v34;
      if ( v36 < v18 )
      {
        v25 = (char *)qvector_reserve((int)&v34, (void *)v34, v18, 1u);
        v34 = (int)v25;
        v24 = v35;
      }
      memset(&v25[v24], 0, v18 - v24);
      v35 = v18;
    }
    if ( !(*(unsigned __int8 (__cdecl **)(_DWORD *, _DWORD, int *))(*a1 + 8))(a1, *(_DWORD *)(v37 + 4 * v19), &v34) )
      break;
LABEL_38:
    v9 = v41;
    v10 = a3;
    if ( !v41 )
      goto LABEL_44;
  }
  v31 = 3;
LABEL_44:
  if ( v31 )
  {
    if ( v31 == 2 )
    {
LABEL_46:
      v18 = -1;
      goto LABEL_50;
    }
    if ( v31 == 3 )
      v18 = -2;
  }
  else
  {
    v18 = 0;
  }
LABEL_50:
  if ( v34 )
  {
    v35 = 0;
    qfree((void *)v34);
    v34 = 0;
    v36 = 0;
  }
  if ( v37 )
  {
    v38 = 0;
    qfree((void *)v37);
    v37 = 0;
    v39 = 0;
  }
  if ( v40 )
  {
    v41 = 0;
    qfree((void *)v40);
    v40 = 0;
    v42 = 0;
  }
  return v18;
}
// BA6D5: variable 'v12' is possibly undefined
// F4240: using guessed type int dword_F4240[37];
// 13ACD8: using guessed type __int64 qword_13ACD8;
