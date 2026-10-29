/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E2C0
// Address: 0x0001E2C0

//----- (0001E2C0) --------------------------------------------------------
int __cdecl sub_1E2C0(int a1, int a2, char a3)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // edi
  char v5; // bl
  int v6; // esi
  __pid_t v7; // esi
  int *v8; // eax
  __pid_t v9; // ecx
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ecx
  _DWORD *v13; // eax
  unsigned int v14; // eax
  char *v15; // ecx
  int v16; // eax
  int v17; // esi
  char *v18; // eax
  int v19; // edx
  char *v20; // eax
  _DWORD *v21; // eax
  int v22; // edi
  bool v23; // zf
  int (__cdecl **v24)(_DWORD, int); // eax
  int v25; // edx
  _DWORD *v26; // esi
  int v27; // ecx
  _DWORD *v28; // edi
  _DWORD *v29; // eax
  unsigned int i; // esi
  int *v32; // [esp+8h] [ebp-44h]
  int *v33; // [esp+Ch] [ebp-40h]
  int v34; // [esp+Ch] [ebp-40h]
  int *v35; // [esp+14h] [ebp-38h] BYREF
  int v36; // [esp+18h] [ebp-34h] BYREF
  unsigned int v37; // [esp+1Ch] [ebp-30h]
  unsigned int v38; // [esp+20h] [ebp-2Ch]
  int v39; // [esp+28h] [ebp-24h] BYREF
  int v40; // [esp+2Ch] [ebp-20h]
  unsigned int v41; // [esp+30h] [ebp-1Ch]
  unsigned int v42; // [esp+38h] [ebp-14h]

  v3 = (_DWORD *)a1;
  v42 = __readgsdword(0x14u);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v4 = *(_DWORD **)(a1 + 568);
  if ( (_DWORD *)(a1 + 572) == v4 )
    goto LABEL_52;
  v5 = a3;
  v6 = a2;
  do
  {
    if ( v5 != (v4[4] != v6) )
      goto LABEL_32;
    if ( v4[10] || *((_BYTE *)v4 + 44) || *((_BYTE *)v4 + 45) )
      goto LABEL_31;
    v33 = v4 + 5;
    v7 = v4[5];
    v8 = (int *)__errno(v3);
    v9 = v7;
    v32 = v8;
    *v8 = 0;
    if ( !*((_BYTE *)&qword_13ACD8 + 4168) )
    {
      v10 = syscall(238, v7, 19);
      if ( v10 && *v32 == 38 )
      {
        *v32 = 0;
        byte_13BD20 = 1;
        v9 = v7;
      }
      else
      {
        v9 = v7;
        if ( *((_BYTE *)&qword_13ACD8 + 4168) != 1 )
          goto LABEL_9;
      }
    }
    v10 = kill(v9, 19);
LABEL_9:
    if ( !v10 )
    {
      v35 = v4 + 5;
      v14 = v40 + 1;
      v15 = (char *)v39;
      if ( v39 > (unsigned int)&v35 || v39 + 4 * v41 <= (unsigned int)&v35 )
      {
        if ( v41 >= v14 )
        {
          v5 = a3;
          v6 = a2;
          v19 = v40;
        }
        else
        {
          v15 = (char *)qvector_reserve((int)&v39, (void *)v39, v40 + 1, 4u);
          v39 = (int)v15;
          v19 = v40;
          v33 = v35;
          v5 = a3;
          v6 = a2;
        }
        v20 = &v15[4 * v19];
      }
      else
      {
        if ( v41 >= v14 )
        {
          v5 = a3;
          v6 = a2;
          v16 = v40;
        }
        else
        {
          v15 = (char *)qvector_reserve((int)&v39, (void *)v39, v40 + 1, 4u);
          v39 = (int)v15;
          v16 = v40;
          v5 = a3;
          v6 = a2;
        }
        v20 = &v15[4 * v16];
      }
      *(_DWORD *)v20 = v33;
      ++v40;
      *((_BYTE *)v4 + 44) = 1;
LABEL_31:
      ++v4[6];
      goto LABEL_32;
    }
    v11 = *v33;
    if ( *v32 == 3 )
    {
      v12 = v37;
      if ( v38 >= v37 + 1 )
      {
        v13 = (_DWORD *)v36;
        v5 = a3;
        v6 = a2;
      }
      else
      {
        v34 = *v33;
        v13 = qvector_reserve((int)&v36, (void *)v36, v37 + 1, 4u);
        v5 = a3;
        v6 = a2;
        v36 = (int)v13;
        v12 = v37;
        v11 = v34;
      }
      v13[v12] = v11;
      ++v37;
    }
    else
    {
      v17 = *v33;
      v18 = strerror(*v32);
      sub_1C9D0(a1, (char *)&qword_13ACD8 - 384711, v17, v18);
      v6 = a2;
      v5 = a3;
    }
LABEL_32:
    v3 = (_DWORD *)v4[1];
    if ( v3 )
    {
      do
      {
        v21 = v3;
        v3 = (_DWORD *)*v3;
      }
      while ( v3 );
    }
    else
    {
      v21 = (_DWORD *)v4[2];
      if ( (_DWORD *)*v21 != v4 )
      {
        v22 = (int)(v4 + 2);
        do
        {
          v3 = *(_DWORD **)v22;
          v21 = *(_DWORD **)(*(_DWORD *)v22 + 8);
          v23 = *v21 == *(_DWORD *)v22;
          v22 = *(_DWORD *)v22 + 8;
        }
        while ( !v23 );
      }
    }
    v4 = v21;
  }
  while ( (_DWORD *)(a1 + 572) != v21 );
  while ( v40 )
  {
    while ( 1 )
    {
      v35 = nullptr;
      v24 = (int (__cdecl **)(_DWORD, int))sub_2F940(a1, (__time_t *)&v35, -1, (char)-*(_BYTE *)(a1 + 633));
      if ( (int)v24 > 0 )
        break;
LABEL_46:
      if ( !v40 )
        goto LABEL_52;
    }
    v25 = 4 * v40;
    if ( !(4 * v40) )
    {
LABEL_45:
      sub_201C0(a1, v24, (int (__cdecl **)(_DWORD, int))v35);
      goto LABEL_46;
    }
    v26 = (_DWORD *)v39;
    v27 = v39 + 4 * v40;
    while ( 1 )
    {
      v28 = (_DWORD *)*v26;
      if ( *(int (__cdecl ***)(_DWORD, int))*v26 == v24 )
        break;
      ++v26;
      v25 -= 4;
      if ( !v25 )
        goto LABEL_45;
    }
    if ( ((unsigned __int16)v35 & 0xFF7F) == 0x137F )
    {
      *((_BYTE *)v28 + 24) = 0;
      v28[5] = 1;
    }
    else
    {
      sub_201C0(a1, v24, (int (__cdecl **)(_DWORD, int))v35);
      v27 = v39 + 4 * v40;
    }
    memmove(v26, v26 + 1, (v27 + -4 - (_DWORD)v26) & 0xFFFFFFFC);
    --v40;
  }
LABEL_52:
  v29 = (_DWORD *)v36;
  if ( v37 )
  {
    for ( i = 0; i < v37; ++i )
    {
      sub_1DBC0(a1, v29[i], 3);
      v29 = (_DWORD *)v36;
    }
  }
  if ( v29 )
  {
    v37 = 0;
    qfree(v29);
    v36 = 0;
    v38 = 0;
  }
  if ( v39 )
  {
    v40 = 0;
    qfree((void *)v39);
    v39 = 0;
    v41 = 0;
  }
  return 1;
}
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13BD20: using guessed type char byte_13BD20;
