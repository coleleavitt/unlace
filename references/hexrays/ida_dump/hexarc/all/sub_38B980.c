__int64 __fastcall sub_38B980(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  _QWORD *v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 (__fastcall **v8)(std::exception *); // r12
  __int64 v9; // rdi
  bool v10; // zf
  __int64 (__fastcall *v11)(std::exception *); // rdx
  __int64 (__fastcall *v12)(std::exception *); // r13
  __int64 (__fastcall *i)(std::exception *); // rbp
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(std::exception *); // rdi
  __int64 (__fastcall *v17)(std::exception *); // rdx
  __int64 (__fastcall *v18)(std::exception *); // r13
  __int64 (__fastcall *j)(std::exception *); // rbp
  __int64 *v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  size_t v23; // r15
  __int64 v24; // r9
  __int64 *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 k; // r12
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 m; // r12
  __int64 *v35; // rax
  __int64 v36; // rdi
  char v38; // dl
  __int64 v39; // r9
  unsigned __int64 v40; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+10h] [rbp-B8h] BYREF
  __int64 (__fastcall **v42)(); // [rsp+18h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+28h] [rbp-A0h]
  void *src; // [rsp+30h] [rbp-98h]
  size_t n[3]; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **func)(std::exception *); // [rsp+50h] [rbp-78h] BYREF
  __int64 v48; // [rsp+58h] [rbp-70h]
  __int128 v49; // [rsp+60h] [rbp-68h]
  __int128 v50; // [rsp+70h] [rbp-58h]
  unsigned __int64 v51; // [rsp+88h] [rbp-40h]

  v1 = a1[1];
  v51 = __readfsqword(0x28u);
  v40 = *(_QWORD *)(v1 + 24);
  if ( *(_BYTE *)(a1[2] + 1LL) != 4 || (v38 = sub_37CB50((__int64 *)&v40, 1), v1 = a1[1], v38) )
  {
    v3 = *(_QWORD *)(v1 + 16);
    v4 = a1[3];
    v40 = v3;
    if ( v3 != -1 && v4 )
    {
      if ( (*(_BYTE *)v4 & 2) == 0
        || (v5 = *(_QWORD **)(*(_QWORD *)(v4 + 32) + 8LL),
            v6 = sub_329920(v5, v3),
            !(unsigned __int8)sub_32B2E0(v5 + 1, v6)) )
      {
        v43 = 0;
        v44 = -1;
        src = nullptr;
        *(_OWORD *)n = 0;
        func = (__int64 (__fastcall **)(std::exception *))get_func(v3);
        v7 = a1[3];
        v49 = 0;
        v48 = 0;
        sub_146700(&v41, *(_QWORD *)(*(_QWORD *)(v7 + 128) + 112LL), &func, &v43, 8);
        if ( v48 )
        {
          *(_QWORD *)&v49 = 0;
          qfree(v48);
        }
        v8 = (__int64 (__fastcall **)(std::exception *))v41;
        if ( v41 )
        {
          v9 = a1[3];
          ++*(_DWORD *)(v41 + 104);
          func = v8;
          sub_388A60(v9, (__int64 *)&func, 0);
          v10 = (*((_DWORD *)v8 + 26))-- == 1;
          if ( v10 )
          {
            sub_2515F0((__int64 *)v8);
            v11 = v8[23];
            if ( v11 )
            {
              v12 = v8[24];
              if ( v12 )
              {
                for ( i = nullptr; i != v12; i = (__int64 (__fastcall *)(std::exception *))((char *)i + 1) )
                {
                  v14 = (__int64 *)((char *)v11 + 24 * (_QWORD)i);
                  v15 = *v14;
                  if ( *v14 )
                  {
                    v14[1] = 0;
                    qfree(v15);
                    v11 = v8[23];
                  }
                }
              }
              v8[24] = nullptr;
              qfree(v11);
            }
            v16 = v8[20];
            if ( v16 )
            {
              v8[21] = nullptr;
              qfree(v16);
            }
            v17 = v8[16];
            if ( v17 )
            {
              v18 = v8[17];
              if ( v18 )
              {
                for ( j = nullptr; j != v18; j = (__int64 (__fastcall *)(std::exception *))((char *)j + 1) )
                {
                  v20 = (__int64 *)((char *)v17 + 32 * (_QWORD)j);
                  v21 = *v20;
                  if ( *v20 )
                  {
                    v20[1] = 0;
                    qfree(v21);
                    v17 = v8[16];
                  }
                }
              }
              v8[17] = nullptr;
              qfree(v17);
            }
            sub_24DCD0((__int64)(v8 + 2));
            j__qfree(v8);
          }
          *(_DWORD *)a1[3] |= 2u;
        }
        else
        {
          v22 = v44;
          if ( v44 == -1 )
          {
            v44 = v3;
            v22 = v3;
          }
          v23 = n[0];
          func = off_4A8510;
          v49 = v22;
          v42 = off_4B0438;
          LODWORD(v48) = v43;
          v50 = 0;
          if ( n[0] )
          {
            *((_QWORD *)&v49 + 1) = qalloc_or_throw(n[0]);
            *((_QWORD *)&v50 + 1) = v23;
            memcpy(*((void **)&v49 + 1), src, v23);
            *(_QWORD *)&v50 = v23;
          }
          sub_3349E0(0.0, (__int64)&v42, *(_QWORD *)(a1[3] + 128LL), (__int64)&func);
          func = off_4A8510;
          if ( *((_QWORD *)&v49 + 1) )
          {
            *(_QWORD *)&v50 = 0;
            qfree(*((_QWORD *)&v49 + 1));
          }
          std::exception::~exception((std::exception *)&func);
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            115,
            v3,
            0xFFFFFFFFLL,
            5,
            &callui,
            v24);
        }
        v25 = (__int64 *)v41;
        if ( v41 )
        {
          v10 = (*(_DWORD *)(v41 + 104))-- == 1;
          if ( v10 )
          {
            sub_2515F0(v25);
            v26 = v25[23];
            if ( v26 )
            {
              v27 = v25[24];
              if ( v27 )
              {
                for ( k = 0; k != v27; ++k )
                {
                  v29 = (__int64 *)(v26 + 24 * k);
                  v30 = *v29;
                  if ( *v29 )
                  {
                    v29[1] = 0;
                    qfree(v30);
                    v26 = v25[23];
                  }
                }
              }
              v25[24] = 0;
              qfree(v26);
            }
            v31 = v25[20];
            if ( v31 )
            {
              v25[21] = 0;
              qfree(v31);
            }
            v32 = v25[16];
            if ( v32 )
            {
              v33 = v25[17];
              if ( v33 )
              {
                for ( m = 0; m != v33; ++m )
                {
                  v35 = (__int64 *)(v32 + 32 * m);
                  v36 = *v35;
                  if ( *v35 )
                  {
                    v35[1] = 0;
                    qfree(v36);
                    v32 = v25[16];
                  }
                }
              }
              v25[17] = 0;
              qfree(v32);
            }
            sub_24DCD0((__int64)(v25 + 2));
            j__qfree(v25);
          }
        }
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
      }
      v4 = a1[3];
    }
    sub_383B90(v4, 0);
    sub_3368C0(*(_QWORD *)(a1[3] + 128LL), 0x6Bu);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
      115,
      *(_QWORD *)(v1 + 24),
      0xFFFFFFFFLL,
      5,
      &callui,
      v39);
  }
  return 0;
}
