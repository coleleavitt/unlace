void __fastcall sub_1739630(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // r15
  __int64 v5; // r14
  unsigned int *v6; // rdi
  unsigned int *v7; // rsi
  size_t v8; // rbp
  size_t v9; // r12
  size_t v10; // rdx
  int v11; // eax
  __int64 *v12; // r12
  __int64 *v13; // rax
  __int64 *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 *v17; // rdi
  int v18; // eax
  bool v19; // zf
  char v20; // al
  int v21; // edx
  char ***v22; // rdi
  __int64 *v23; // rdi
  char v24; // al
  int v25; // eax
  void *ptr; // [rsp+18h] [rbp-70h] BYREF
  int v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h] BYREF
  char v29; // [rsp+30h] [rbp-58h]
  int v30; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+40h] [rbp-48h]

  if ( a1 != a2 && a2 != a1 + 7 )
  {
    v2 = a1 + 7;
    do
    {
      v5 = *v2;
      v6 = *(unsigned int **)(*v2 + 16);
      v7 = *(unsigned int **)(*a1 + 16);
      v8 = *v6;
      v9 = *v7;
      v10 = v8;
      if ( v9 <= v8 )
        v10 = *v7;
      if ( v10 && (v11 = memcmp(v6 + 4, v7 + 4, v10)) != 0 )
      {
        if ( v11 >= 0 )
          goto LABEL_23;
      }
      else if ( v9 == v8 || v9 <= v8 )
      {
LABEL_23:
        v12 = v2 + 7;
        sub_17393A0(v2);
        goto LABEL_24;
      }
      v12 = v2 + 7;
      sub_1737F30((__int64)&ptr, (__int64)(v2 + 1));
      v30 = *((_DWORD *)v2 + 10);
      v31 = v2[6];
      v13 = v2;
      v14 = v2 + 3;
      v15 = (char *)v13 - (char *)a1;
      v16 = 0x6DB6DB6DB6DB6DB7LL * (v15 >> 3);
      if ( v15 > 0 )
      {
        do
        {
          v19 = *((_BYTE *)v14 + 8) == 0;
          *(v14 - 3) = *(v14 - 10);
          v20 = *((_BYTE *)v14 - 48);
          if ( v19 )
          {
            if ( v20 )
            {
              v21 = *((_DWORD *)v14 - 16);
              *(v14 - 2) = (__int64)v14;
              *((_DWORD *)v14 - 2) = 0;
              *((_DWORD *)v14 - 1) = 1;
              if ( v21 )
                sub_1712470((char ***)v14 - 2, (char ***)v14 - 9);
              *((_BYTE *)v14 + 8) = 1;
            }
          }
          else if ( v20 )
          {
            sub_1712470((char ***)v14 - 2, (char ***)v14 - 9);
          }
          else
          {
            v17 = (__int64 *)*(v14 - 2);
            *((_BYTE *)v14 + 8) = 0;
            if ( v17 != v14 )
              free(v17);
          }
          v18 = *((_DWORD *)v14 - 10);
          v14 -= 7;
          *((_DWORD *)v14 + 18) = v18;
          v14[10] = v14[3];
          --v16;
        }
        while ( v16 );
      }
      v19 = *((_BYTE *)a1 + 32) == 0;
      v22 = (char ***)(a1 + 1);
      *a1 = v5;
      if ( v19 )
      {
        if ( !v29 )
        {
LABEL_36:
          *((_DWORD *)a1 + 10) = v30;
          a1[6] = v31;
          goto LABEL_24;
        }
        a1[1] = (__int64)(a1 + 3);
        a1[2] = 0x100000000LL;
        if ( !v27 )
        {
          v25 = v30;
          *((_BYTE *)a1 + 32) = 1;
          *((_DWORD *)a1 + 10) = v25;
          a1[6] = v31;
LABEL_31:
          if ( ptr != &v28 )
            free(ptr);
          goto LABEL_24;
        }
        sub_1712470(v22, (char ***)&ptr);
        v24 = v29;
        *((_BYTE *)a1 + 32) = 1;
      }
      else if ( v29 )
      {
        sub_1712470(v22, (char ***)&ptr);
        v24 = v29;
      }
      else
      {
        v23 = (__int64 *)a1[1];
        *((_BYTE *)a1 + 32) = 0;
        if ( v23 == a1 + 3 )
          goto LABEL_36;
        free(v23);
        v24 = v29;
      }
      *((_DWORD *)a1 + 10) = v30;
      a1[6] = v31;
      if ( v24 )
        goto LABEL_31;
LABEL_24:
      v2 = v12;
    }
    while ( a2 != v12 );
  }
}
