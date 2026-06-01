void __fastcall sub_E5E150(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  const char *v8; // rsi
  __int64 v9; // rdx
  size_t v10; // rax
  __int64 v11; // rbx
  char *v12; // rdx
  char *v13; // rdi
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  char *v16; // rbx
  size_t v17; // rax
  char *v18; // rbp
  char *v19; // rdi
  void *v20; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-98h] BYREF
  void *v22[2]; // [rsp+20h] [rbp-88h] BYREF
  char *v23; // [rsp+30h] [rbp-78h]
  __int16 v24; // [rsp+40h] [rbp-68h] BYREF
  __m128 v25; // [rsp+48h] [rbp-60h]
  char *v26; // [rsp+58h] [rbp-50h]

  v5 = *(_QWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 24) )
  {
    v6 = a1 + 1048;
    if ( v5 )
    {
      v8 = sub_B3B200(a2, a3);
    }
    else
    {
      v7 = *(_QWORD *)(a2 + 16);
      v8 = *(const char **)(v7 + 8);
      v9 = *(_QWORD *)(v7 + 16);
    }
    sub_E59830((__int64)&v24, (__int64)v8, v9);
    v10 = j__strlen("param");
    sub_222AB70(v6, "param", v10);
    sub_222CAC0(v6, &v24);
    sub_2229BF0(v6);
    sub_222B2A0(&v24);
    v5 = *(_QWORD *)(a2 + 48);
  }
  if ( v5 )
  {
    v23 = nullptr;
    *(_OWORD *)v22 = 0;
    if ( (_DWORD)v5 )
    {
      v11 = 0;
      v12 = nullptr;
      v13 = nullptr;
      v14 = 4LL * (unsigned int)(v5 - 1);
      while ( 1 )
      {
        v15 = *(unsigned int *)(*(_QWORD *)(a2 + 40) + v11);
        v24 = 3;
        v25.m128_u64[0] = v15;
        if ( v13 == v12 )
        {
          sub_E5DF50((__int64)v22, v13, (__int64)&v24);
          sub_222B2A0(&v24);
          if ( v14 == v11 )
          {
LABEL_12:
            v16 = (char *)v22[0];
            if ( v22[1] != v22[0] )
            {
              v20 = v22[1];
              v24 = 8;
              v26 = v23;
              v23 = nullptr;
              v25 = _mm_loadh_ps((const double *)&v20);
              *(_OWORD *)v22 = 0;
              v17 = j__strlen("positions");
              v21[0] = &v24;
              v21[1] = a1 + 1048;
              sub_E585D0(a1 + 1048, (__int64)"positions", v17, (__int64)sub_E58580, v21);
              sub_222B2A0(&v24);
              v18 = (char *)v22[1];
              v16 = (char *)v22[0];
              if ( v22[1] != v22[0] )
              {
                do
                {
                  v19 = v16;
                  v16 += 40;
                  sub_222B2A0(v19);
                }
                while ( v18 != v16 );
                v16 = (char *)v22[0];
              }
            }
            if ( v16 )
              operator delete(v16);
            return;
          }
        }
        else
        {
          sub_2229580(v13, &v24);
          v22[1] = (char *)v22[1] + 40;
          sub_222B2A0(&v24);
          if ( v14 == v11 )
            goto LABEL_12;
        }
        v13 = (char *)v22[1];
        v12 = v23;
        v11 += 4;
      }
    }
  }
}
