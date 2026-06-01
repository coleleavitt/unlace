/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DBD0
// Address: 0x0005DBD0

//----- (0005DBD0) --------------------------------------------------------
int __cdecl sub_5DBD0(char *a1, char *a2, char *s2, char *a4, unsigned int a5, int a6)
{
  char *v6; // edi
  int v7; // esi
  char *v8; // ecx
  char *v9; // eax
  unsigned int i; // esi
  char *v11; // edi
  const char *v12; // eax
  const char *v13; // esi
  size_t v14; // eax
  size_t v15; // edi
  unsigned int v16; // edx
  int v17; // ecx
  void *v18; // eax
  _DWORD *v19; // esi
  int v20; // ecx
  int v21; // eax
  char *v22; // eax
  unsigned int v23; // edi
  int j; // esi
  int v25; // esi
  int v26; // esi
  const char *v28; // [esp+4h] [ebp-B8h]
  char *v29; // [esp+24h] [ebp-98h]
  int v30; // [esp+24h] [ebp-98h]
  char *v31; // [esp+28h] [ebp-94h]
  unsigned int v32; // [esp+28h] [ebp-94h]
  unsigned int v33; // [esp+28h] [ebp-94h]
  char *v34; // [esp+30h] [ebp-8Ch] BYREF
  unsigned int v35; // [esp+34h] [ebp-88h]
  int v36; // [esp+38h] [ebp-84h]
  _BYTE v37[80]; // [esp+40h] [ebp-7Ch] BYREF
  int v38; // [esp+90h] [ebp-2Ch] BYREF
  void *v39; // [esp+94h] [ebp-28h]
  int v40; // [esp+98h] [ebp-24h]
  int v41; // [esp+9Ch] [ebp-20h]
  int v42; // [esp+A0h] [ebp-1Ch]
  unsigned int v43; // [esp+A8h] [ebp-14h]

  v43 = __readgsdword(0x14u);
  v6 = a1;
  LOBYTE(v38) = 2;
  v40 = 0;
  v39 = nullptr;
  v42 = 0;
  v41 = 0;
  if ( !a2 || s2 )
  {
    if ( get_idcv_attr((int)&v38, (int)a2, s2, 0) )
      goto LABEL_13;
  }
  else
  {
    copy_idcv((char *)&v38, a2);
  }
  if ( deref_idcv((char *)&v38, 2) )
  {
    if ( (_BYTE)v38 == 6 )
    {
      v7 = a5;
      v34 = nullptr;
      v35 = 0;
      v36 = 0;
      if ( a2 )
      {
        sub_5E070((int)&v34, a5 + 1);
        v29 = v34;
        copy_idcv(v34, a2);
        v8 = a4;
        if ( a5 )
        {
          v9 = v29 + 20;
          for ( i = 0; i < a5; ++i )
          {
            v31 = v9;
            v11 = v8;
            copy_idcv(v9, v8);
            v9 = v31 + 20;
            v8 = v11 + 20;
          }
          v7 = a5 + 1;
          v6 = a1;
        }
        else
        {
          v7 = 1;
        }
      }
      else
      {
        v29 = a4;
      }
      sub_5FB80((int)v37, 0, 0);
      LOBYTE(v21) = sub_5D3A0((int)v37, nullptr, (int)v39, v7, v29, v6, a6);
      v30 = v21;
      sub_5FE80((int)v37);
      v22 = v34;
      if ( v34 )
      {
        v33 = v35;
        if ( v35 )
        {
          v23 = 1;
          for ( j = 0; ; j += 20 )
          {
            free_idcv(&v22[j]);
            if ( v23 >= v33 )
              break;
            v22 = v34;
            ++v23;
          }
          v22 = v34;
        }
        v35 = 0;
        qfree(v22);
        v34 = nullptr;
        v36 = 0;
      }
      v20 = v30;
      goto LABEL_32;
    }
    set_qerrno(1541);
  }
LABEL_13:
  sub_5CC60(a1);
  if ( a6 )
  {
    v12 = qstrerror(0xFFFFFFFF);
    v13 = v12;
    if ( v12 && (v14 = strlen(v12)) != 0 )
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = a6;
      if ( *(_DWORD *)(a6 + 8) >= v14 + 1 )
      {
        v18 = *(void **)a6;
      }
      else
      {
        v32 = v14 + 1;
        v18 = qvector_reserve(a6, *(void **)a6, v16, 1u);
        v17 = a6;
        *(_DWORD *)a6 = v18;
        v16 = v32;
      }
      *(_DWORD *)(v17 + 4) = v16;
      v28 = v13;
      v19 = (_DWORD *)v17;
      memmove(v18, v28, v15);
      *(_BYTE *)(*v19 + v15) = 0;
    }
    else
    {
      *(_DWORD *)(a6 + 4) = 0;
    }
  }
  v20 = 0;
LABEL_32:
  if ( (char)v38 == 5 )
  {
    v26 = v20;
    sub_59680(v39, (char *)&v38);
    return v26;
  }
  else if ( (char)v38 == 7 && v39 )
  {
    v25 = v20;
    v40 = 0;
    qfree(v39);
    v39 = nullptr;
    v41 = 0;
    return v25;
  }
  return v20;
}
// 5DE4A: variable 'v21' is possibly undefined
