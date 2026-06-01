void __fastcall sub_A25F90(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rbx
  unsigned __int64 v6; // r12
  int v7; // eax
  unsigned int *v8; // r14
  int *v9; // r15
  int *v10; // rdi
  char *v11; // rax
  int *v12; // rdi
  char *v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  int v16; // r9d
  char *v17; // r10
  char *v18; // rsi
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rax
  int v26; // [rsp+1Ch] [rbp-ACh]
  int v27; // [rsp+1Ch] [rbp-ACh]
  int *v28; // [rsp+28h] [rbp-A0h] BYREF
  int v29; // [rsp+30h] [rbp-98h] BYREF
  char *v30; // [rsp+38h] [rbp-90h]
  __int64 v31; // [rsp+40h] [rbp-88h]
  char v32; // [rsp+48h] [rbp-80h] BYREF
  int v33; // [rsp+60h] [rbp-68h] BYREF
  char *v34; // [rsp+68h] [rbp-60h]
  __int64 v35; // [rsp+70h] [rbp-58h]
  char v36; // [rsp+78h] [rbp-50h] BYREF

  sub_A24A50((__int64 *)a1);
  v29 = -1;
  v30 = &v32;
  v31 = 0x200000000LL;
  v33 = -2;
  v34 = &v36;
  v35 = 0x200000000LL;
  if ( a2 != a3 )
  {
    v5 = (char *)(a2 + 24);
    v6 = a2 + ((a3 - 48 - a2) & 0xFFFFFFFFFFFFFFF0LL) + 72;
    do
    {
      v7 = *((_DWORD *)v5 - 6);
      v8 = (unsigned int *)(v5 - 24);
      if ( v7 != -1 )
      {
LABEL_4:
        if ( v7 != -2 || !(unsigned __int8)sub_A1EC00((__int64)v8, (__int64)&v33) )
          goto LABEL_5;
LABEL_17:
        v13 = *((char **)v5 - 2);
        goto LABEL_11;
      }
      while ( 1 )
      {
        if ( (unsigned __int8)sub_A1EC00((__int64)v8, (__int64)&v29) )
          goto LABEL_17;
LABEL_5:
        sub_A238C0((__int64 *)a1, v8, &v28);
        v9 = v28;
        v10 = v28 + 2;
        *v28 = *((_DWORD *)v5 - 6);
        if ( v10 == (int *)(v5 - 16) )
        {
          v13 = *((char **)v5 - 2);
        }
        else
        {
          v11 = *((char **)v5 - 2);
          if ( v11 == v5 )
          {
            v14 = *((unsigned int *)v5 - 2);
            v15 = (unsigned int)v9[4];
            v16 = *((_DWORD *)v5 - 2);
            if ( v14 <= v15 )
            {
              if ( *((_DWORD *)v5 - 2) )
              {
                v21 = *((_QWORD *)v9 + 1);
                v22 = 8 * v14;
                v23 = 0;
                do
                {
                  *(_QWORD *)(v21 + v23) = *(_QWORD *)&v8[v23 / 4 + 6];
                  v23 += 8LL;
                }
                while ( v22 != v23 );
              }
              v9[4] = v16;
              v13 = v5;
              *((_DWORD *)v5 - 2) = 0;
            }
            else
            {
              if ( v14 > (unsigned int)v9[5] )
              {
                v9[4] = 0;
                v27 = v14;
                sub_2237220(v10, v9 + 6, v14, 8);
                v13 = *((char **)v5 - 2);
                v17 = *((char **)v9 + 1);
                v19 = 0;
                v14 = *((unsigned int *)v5 - 2);
                v16 = v27;
                v18 = v13;
              }
              else
              {
                v17 = *((char **)v9 + 1);
                if ( v9[4] )
                {
                  v24 = 8 * v15;
                  v25 = 0;
                  v19 = v24;
                  do
                  {
                    *(_QWORD *)&v17[v25] = *(_QWORD *)&v8[v25 / 4 + 6];
                    v25 += 8LL;
                  }
                  while ( v24 != v25 );
                  v17 += v24;
                  v13 = v5;
                  v18 = &v5[v24];
                }
                else
                {
                  v18 = v5;
                  v13 = v5;
                  v19 = 0;
                }
              }
              v20 = 8 * v14;
              if ( v18 != &v13[v20] )
              {
                v26 = v16;
                memcpy(v17, v18, v20 - v19);
                v13 = *((char **)v5 - 2);
                v16 = v26;
              }
              v9[4] = v16;
              *((_DWORD *)v5 - 2) = 0;
            }
          }
          else
          {
            v12 = *((int **)v9 + 1);
            if ( v12 != v9 + 6 )
            {
              free(v12);
              v11 = *((char **)v5 - 2);
            }
            *((_QWORD *)v9 + 1) = v11;
            v13 = v5;
            v9[4] = *((_DWORD *)v5 - 2);
            v9[5] = *((_DWORD *)v5 - 1);
            *((_QWORD *)v5 - 2) = v5;
            *((_DWORD *)v5 - 1) = 0;
            *((_DWORD *)v5 - 2) = 0;
          }
        }
        *((_QWORD *)v28 + 5) = *((_QWORD *)v5 + 2);
        ++*(_DWORD *)(a1 + 8);
LABEL_11:
        if ( v5 != v13 )
          break;
        v5 += 48;
        if ( (char *)v6 == v5 )
          return;
        v7 = *((_DWORD *)v5 - 6);
        v8 = (unsigned int *)(v5 - 24);
        if ( v7 != -1 )
          goto LABEL_4;
      }
      free(v13);
      v5 += 48;
    }
    while ( (char *)v6 != v5 );
  }
}
