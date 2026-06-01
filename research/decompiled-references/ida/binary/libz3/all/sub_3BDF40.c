__int64 __fastcall sub_3BDF40(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  int v10; // eax
  _DWORD *v11; // rdx
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  int v17; // ecx
  __int64 v18; // r13
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned int v24; // r14d
  int v25; // eax
  int v26; // [rsp+0h] [rbp-88h] BYREF
  char v27; // [rsp+8h] [rbp-80h]
  _DWORD v28[8]; // [rsp+10h] [rbp-78h] BYREF
  int v29; // [rsp+30h] [rbp-58h] BYREF
  char v30; // [rsp+38h] [rbp-50h]
  _BYTE v31[72]; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 == a3 )
    return 1;
  if ( *(_WORD *)(a2 + 4) || *(_WORD *)(a3 + 4) )
    return 0;
  if ( (unsigned __int8)sub_15D26C0(*a1, a2) )
  {
    v8 = (_QWORD *)*a1;
    v9 = a3;
    if ( (unsigned __int8)sub_15D26C0(*a1, a3) )
    {
      if ( (unsigned int)sub_180B130(v8) > 1 )
      {
        if ( (unsigned __int8)sub_186A530() )
        {
LABEL_22:
          sub_186A4C0();
          v18 = sub_180B150(v8, v9);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(&v26, a2, *a1, 0, 0, 0);
          v19 = sub_160E8B0(v18, &v26);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(&v29, a3, *a1, 0, 0, 0);
          v20 = sub_160E8B0(v19, &v29);
          sub_3BCC00(v20, "\n");
          sub_18572D0(v31);
          sub_18572D0(v28);
          sub_186A500(v28, "\n");
          return (unsigned int)-1;
        }
LABEL_24:
        v21 = sub_180B150(v8, v9);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v26, a2, *a1, 0, 0, 0);
        v22 = sub_160E8B0(v21, &v26);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v29, a3, *a1, 0, 0, 0);
        v23 = sub_160E8B0(v22, &v29);
        sub_3BCC00(v23, "\n");
        sub_18572D0(v31);
        sub_18572D0(v28);
      }
      return (unsigned int)-1;
    }
  }
  v10 = sub_15F0200(a1 + 2);
  if ( !*(_WORD *)(a2 + 4) )
  {
    v11 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v11 )
    {
      if ( v10 == *v11 )
      {
        v9 = (unsigned int)v11[1];
        if ( !(_DWORD)v9 )
        {
          v8 = a1 + 2;
          v12 = sub_15F0200(a1 + 2);
          if ( !*(_WORD *)(a3 + 4) )
          {
            v15 = *(_QWORD *)(a3 + 16);
            v16 = *(_DWORD **)(v15 + 24);
            if ( v16 )
            {
              if ( v12 == *v16 )
              {
                v17 = v16[1];
                if ( !v17 )
                {
                  if ( *(_QWORD *)(a2 + 16) != v15 )
                  {
                    if ( (unsigned int)sub_180B130(v8) > 1 )
                    {
                      if ( (unsigned __int8)sub_186A530() )
                        goto LABEL_22;
                      goto LABEL_24;
                    }
                    return (unsigned int)-1;
                  }
                  if ( *(_DWORD *)(a2 + 24) )
                  {
                    v24 = 0;
                    LOBYTE(v5) = 1;
                    while ( 1 )
                    {
                      v25 = sub_3BDF40(
                              (_DWORD)a1,
                              *(_QWORD *)(a2 + 8 * (v24 + 4LL)),
                              *(_QWORD *)(a3 + 8 * (v24 + 4LL)),
                              v17,
                              v13,
                              v14,
                              v26,
                              v27,
                              v28[0],
                              v28[2],
                              v28[4],
                              v28[6],
                              v29,
                              v30);
                      if ( v25 == -1 )
                        break;
                      ++v24;
                      v5 = (v25 != 0) & (unsigned __int8)v5;
                      if ( v24 >= *(_DWORD *)(a2 + 24) )
                        return v5;
                    }
                    return (unsigned int)-1;
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

