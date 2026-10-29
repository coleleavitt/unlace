void __fastcall sub_17393A0(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // r12
  unsigned int *v3; // rcx
  size_t v4; // r13
  __int64 v5; // r14
  size_t v6; // rdx
  __int64 *v7; // r15
  unsigned int *v8; // rsi
  size_t v9; // rbp
  int v10; // eax
  bool v11; // zf
  char v12; // al
  char **v13; // rdi
  char v14; // al
  char v15; // al
  __int64 *v16; // rbp
  char **v17; // rdi
  int v18; // edx
  int v19; // eax
  unsigned int *v20; // [rsp+0h] [rbp-88h]
  __int64 v21; // [rsp+10h] [rbp-78h]
  void *ptr; // [rsp+18h] [rbp-70h] BYREF
  int v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+28h] [rbp-60h] BYREF
  char v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h]

  v1 = a1 + 1;
  v21 = *a1;
  sub_1737F30((__int64)&ptr, (__int64)(a1 + 1));
  v2 = v21;
  v26 = *((_DWORD *)a1 + 10);
  v3 = *(unsigned int **)(v21 + 16);
  v27 = a1[6];
  v4 = *v3;
  while ( 1 )
  {
    v5 = *(v1 - 8);
    v6 = v4;
    v7 = v1 - 1;
    v8 = *(unsigned int **)(v5 + 16);
    v9 = *v8;
    if ( v9 <= v4 )
      v6 = *v8;
    if ( !v6 )
      break;
    v20 = v3;
    v10 = memcmp(v3 + 4, v8 + 4, v6);
    v3 = v20;
    if ( !v10 )
      break;
    if ( v10 >= 0 )
      goto LABEL_8;
LABEL_15:
    v11 = *((_BYTE *)v1 + 24) == 0;
    v15 = *((_BYTE *)v1 - 32);
    *(v1 - 1) = v5;
    v16 = v1 - 7;
    if ( v11 )
    {
      if ( v15 )
      {
        v18 = *((_DWORD *)v16 + 2);
        *((_DWORD *)v16 + 16) = 0;
        *v1 = (__int64)(v1 + 2);
        *((_DWORD *)v16 + 17) = 1;
        if ( v18 )
        {
          sub_1712470((char ***)v1, (char ***)v1 - 7);
          v2 = v21;
        }
        v3 = *(unsigned int **)(v2 + 16);
        *((_BYTE *)v16 + 80) = 1;
        v4 = *v3;
      }
    }
    else if ( v15 )
    {
      sub_1712470((char ***)v1, (char ***)v1 - 7);
      v2 = v21;
      v3 = *(unsigned int **)(v21 + 16);
      v4 = *v3;
    }
    else
    {
      v17 = (char **)*v1;
      *((_BYTE *)v16 + 80) = 0;
      if ( v17 != (char **)(v1 + 2) )
      {
        free(v17);
        v2 = v21;
      }
      v3 = *(unsigned int **)(v2 + 16);
      v4 = *v3;
    }
    v1 -= 7;
    *((_DWORD *)v16 + 22) = *((_DWORD *)v16 + 8);
    v16[12] = v16[5];
  }
  if ( v9 != v4 && v9 > v4 )
    goto LABEL_15;
LABEL_8:
  v11 = *((_BYTE *)v7 + 32) == 0;
  v12 = v25;
  *v7 = v2;
  if ( v11 )
  {
    if ( !v12 )
      goto LABEL_32;
    *v1 = (__int64)(v1 + 2);
    v7[2] = 0x100000000LL;
    if ( !v23 )
    {
      v19 = v26;
      *((_BYTE *)v7 + 32) = 1;
      *((_DWORD *)v7 + 10) = v19;
      v7[6] = v27;
LABEL_29:
      if ( ptr != &v24 )
        free(ptr);
      return;
    }
    sub_1712470((char ***)v1, (char ***)&ptr);
    v14 = v25;
    *((_BYTE *)v7 + 32) = 1;
LABEL_12:
    *((_DWORD *)v7 + 10) = v26;
    v7[6] = v27;
    if ( !v14 )
      return;
    goto LABEL_29;
  }
  if ( v12 )
  {
    sub_1712470((char ***)v1, (char ***)&ptr);
    v14 = v25;
    goto LABEL_12;
  }
  v13 = (char **)*v1;
  *((_BYTE *)v7 + 32) = 0;
  if ( v13 != (char **)(v7 + 3) )
  {
    free(v13);
    v14 = v25;
    goto LABEL_12;
  }
LABEL_32:
  *((_DWORD *)v7 + 10) = v26;
  v7[6] = v27;
}
