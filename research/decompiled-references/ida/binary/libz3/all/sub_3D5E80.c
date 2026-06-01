__int64 __fastcall sub_3D5E80(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // rbx
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r12
  bool v12; // zf
  _DWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  _DWORD *v19; // rdx
  int v20; // edx
  _DWORD *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+10h] [rbp-58h] BYREF
  __int64 v32; // [rsp+18h] [rbp-50h]
  _QWORD v33[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a2;
  v8 = a1[1];
  v9 = *a1;
  v31 = 0;
  v32 = v8;
  sub_1374250(v33, v9, a2);
  v10 = a1[1];
  v11 = v33[0];
  if ( v33[0] == *(_QWORD *)(v10 + 864) )
    v6 = sub_15E1A70(v10);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  sub_3D2CD0(v31, v32);
  v12 = *(_WORD *)(v6 + 4) == 0;
  v31 = v6;
  if ( v12 )
  {
    v13 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
    if ( v13 )
    {
      if ( !*v13 )
      {
        if ( v13[1] != 3 || *(_DWORD *)(v6 + 24) != 2 )
          goto LABEL_16;
        v23 = sub_15E1B70(a1[1]);
        v24 = v23;
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        sub_3D2CD0(v31, v32);
        v25 = a1[1];
        v31 = v24;
        v26 = sub_15E1A70(v25);
        v6 = v26;
        if ( v26 )
          ++*(_DWORD *)(v26 + 8);
        sub_3D2CD0(v31, v32);
        v12 = *(_WORD *)(v6 + 4) == 0;
        v31 = v6;
        if ( v12 )
        {
          v13 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
          if ( v13 )
          {
            if ( !*v13 )
            {
LABEL_16:
              if ( v13[1] == 8 && *(_DWORD *)(v6 + 24) == 1 )
              {
                v18 = *(_QWORD *)(v6 + 32);
                if ( !*(_WORD *)(v18 + 4) )
                {
                  v19 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL);
                  if ( v19 )
                  {
                    if ( !*v19 )
                    {
                      v20 = v19[1];
                      if ( v20 == 7 )
                      {
                        if ( *(_DWORD *)(v18 + 24) != 2 )
                          goto LABEL_8;
                        v27 = sub_15E1B70(a1[1]);
                      }
                      else
                      {
                        if ( v20 != 2 || *(_DWORD *)(v18 + 24) != 2 )
                          goto LABEL_8;
                        v21 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(v18 + 32)) + 24);
                        if ( !v21 || *v21 != 5 )
                          goto LABEL_26;
                        v28 = sub_15E1B70(a1[2]);
                        if ( v28 )
                          ++*(_DWORD *)(v28 + 8);
                        v30 = v28;
                        sub_3D2CD0(v31, v32);
                        v29 = *a1;
                        v31 = v30;
                        if ( (unsigned __int8)sub_1374270(v29, v30) )
                        {
LABEL_26:
                          v6 = v31;
                          goto LABEL_8;
                        }
                        v27 = sub_15E1B70(a1[2]);
                      }
                      v6 = v27;
                      if ( v27 )
                        ++*(_DWORD *)(v27 + 8);
                      sub_3D2CD0(v31, v32);
                      v31 = v6;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_8:
  v14 = *a1;
  if ( !(unsigned __int8)sub_1374270(*a1, v6) && (unsigned int)sub_180B130(v14) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v16 = sub_180B150(v14, v6);
      std::__ostream_insert<char,std::char_traits<char>>();
      v17 = sub_160EBE0(v16, &v31);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v17, ")\n");
    }
    else
    {
      v22 = sub_180B150(v14, v6);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_160EBE0(v22, &v31);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v33[0] = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  sub_3D5DC0((_QWORD *)(a3 + 8), v33);
  sub_3D2CD0(v11, v8);
  return sub_3D2CD0(v31, v32);
}

