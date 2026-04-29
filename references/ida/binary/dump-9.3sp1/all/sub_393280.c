__int64 __fastcall sub_393280(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  _QWORD *v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 i; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 j; // rbp
  __int64 *v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  size_t v25; // r15
  __int64 v26; // r9
  __int64 *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 k; // r12
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r13
  __int64 m; // r12
  __int64 *v37; // rax
  __int64 v38; // rdi
  char v40; // dl
  __int64 v41; // r9
  unsigned __int64 v42; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+10h] [rbp-B8h] BYREF
  __int64 (__fastcall **v44)(); // [rsp+18h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+28h] [rbp-A0h]
  void *src; // [rsp+30h] [rbp-98h]
  size_t n[3]; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **func)(std::exception *); // [rsp+50h] [rbp-78h] BYREF
  __int64 v50; // [rsp+58h] [rbp-70h]
  __int128 v51; // [rsp+60h] [rbp-68h]
  __int128 v52; // [rsp+70h] [rbp-58h]
  unsigned __int64 v53; // [rsp+88h] [rbp-40h]

  v1 = a1[1];
  v53 = __readfsqword(0x28u);
  v42 = *(_QWORD *)(v1 + 24);
  if ( *(_BYTE *)(a1[2] + 1LL) != 4 || (v40 = sub_384450((__int64 *)&v42, 1), v1 = a1[1], v40) )
  {
    v3 = *(_QWORD *)(v1 + 16);
    v4 = a1[3];
    v42 = v3;
    if ( v3 != -1 && v4 )
    {
      if ( (*(_BYTE *)v4 & 2) == 0
        || (v5 = *(_QWORD **)(*(_QWORD *)(v4 + 32) + 8LL),
            v6 = sub_330F80(v5, v3),
            !(unsigned __int8)sub_332920((__int64)(v5 + 1), v6)) )
      {
        v45 = 0;
        v46 = -1;
        src = nullptr;
        *(_OWORD *)n = 0;
        func = (__int64 (__fastcall **)(std::exception *))get_func();
        v7 = a1[3];
        v51 = 0;
        v50 = 0;
        v8 = *(_QWORD *)(*(_QWORD *)(v7 + 128) + 112LL);
        sub_14CDC0(&v43, v8, &func, &v45, 8);
        if ( v50 )
        {
          *(_QWORD *)&v51 = 0;
          qfree(v50);
        }
        v10 = v43;
        if ( v43 )
        {
          v11 = a1[3];
          ++*(_DWORD *)(v43 + 104);
          func = (__int64 (__fastcall **)(std::exception *))v10;
          sub_390360(v11, (__int64 *)&func, 0);
          v12 = (*(_DWORD *)(v10 + 104))-- == 1;
          if ( v12 )
          {
            sub_258970((__int64 *)v10);
            v13 = *(_QWORD *)(v10 + 184);
            if ( v13 )
            {
              v14 = *(_QWORD *)(v10 + 192);
              if ( v14 )
              {
                for ( i = 0; i != v14; ++i )
                {
                  v16 = (__int64 *)(v13 + 24 * i);
                  v17 = *v16;
                  if ( *v16 )
                  {
                    v16[1] = 0;
                    qfree(v17);
                    v13 = *(_QWORD *)(v10 + 184);
                  }
                }
              }
              *(_QWORD *)(v10 + 192) = 0;
              qfree(v13);
            }
            v18 = *(_QWORD *)(v10 + 160);
            if ( v18 )
            {
              *(_QWORD *)(v10 + 168) = 0;
              qfree(v18);
            }
            v19 = *(_QWORD *)(v10 + 128);
            if ( v19 )
            {
              v20 = *(_QWORD *)(v10 + 136);
              if ( v20 )
              {
                for ( j = 0; j != v20; ++j )
                {
                  v22 = (__int64 *)(v19 + 32 * j);
                  v23 = *v22;
                  if ( *v22 )
                  {
                    v22[1] = 0;
                    qfree(v23);
                    v19 = *(_QWORD *)(v10 + 128);
                  }
                }
              }
              *(_QWORD *)(v10 + 136) = 0;
              qfree(v19);
            }
            sub_255050(v10 + 16);
            j__qfree(v10);
          }
          *(_DWORD *)a1[3] |= 2u;
        }
        else
        {
          v24 = v46;
          if ( v46 == -1 )
          {
            v46 = v3;
            v24 = v3;
          }
          v25 = n[0];
          func = off_4DBCD0;
          v51 = v24;
          v44 = off_4E3C38;
          LODWORD(v50) = v45;
          v52 = 0;
          if ( n[0] )
          {
            *((_QWORD *)&v51 + 1) = qalloc_or_throw(n[0], v8, (unsigned int)v45, v9);
            *((_QWORD *)&v52 + 1) = v25;
            memcpy(*((void **)&v51 + 1), src, v25);
            *(_QWORD *)&v52 = v25;
          }
          sub_33C260(0.0, (__int64)&v44, *(_QWORD *)(a1[3] + 128LL), (__int64)&func);
          func = off_4DBCD0;
          if ( *((_QWORD *)&v51 + 1) )
          {
            *(_QWORD *)&v52 = 0;
            qfree(*((__int64 *)&v51 + 1));
          }
          std::exception::~exception((std::exception *)&func);
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            115,
            v3,
            0xFFFFFFFFLL,
            5,
            &callui,
            v26);
        }
        v27 = (__int64 *)v43;
        if ( v43 )
        {
          v12 = (*(_DWORD *)(v43 + 104))-- == 1;
          if ( v12 )
          {
            sub_258970(v27);
            v28 = v27[23];
            if ( v28 )
            {
              v29 = v27[24];
              if ( v29 )
              {
                for ( k = 0; k != v29; ++k )
                {
                  v31 = (__int64 *)(v28 + 24 * k);
                  v32 = *v31;
                  if ( *v31 )
                  {
                    v31[1] = 0;
                    qfree(v32);
                    v28 = v27[23];
                  }
                }
              }
              v27[24] = 0;
              qfree(v28);
            }
            v33 = v27[20];
            if ( v33 )
            {
              v27[21] = 0;
              qfree(v33);
            }
            v34 = v27[16];
            if ( v34 )
            {
              v35 = v27[17];
              if ( v35 )
              {
                for ( m = 0; m != v35; ++m )
                {
                  v37 = (__int64 *)(v34 + 32 * m);
                  v38 = *v37;
                  if ( *v37 )
                  {
                    v37[1] = 0;
                    qfree(v38);
                    v34 = v27[16];
                  }
                }
              }
              v27[17] = 0;
              qfree(v34);
            }
            sub_255050((__int64)(v27 + 2));
            j__qfree((__int64)v27);
          }
        }
        if ( src )
        {
          n[0] = 0;
          qfree((__int64)src);
        }
      }
      v4 = a1[3];
    }
    sub_38B490(v4, 0);
    sub_33E140(*(_QWORD *)(a1[3] + 128LL), 0x6Bu);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
      115,
      *(_QWORD *)(v1 + 24),
      0xFFFFFFFFLL,
      5,
      &callui,
      v41);
  }
  return 0;
}
