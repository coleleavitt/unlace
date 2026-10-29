__int64 __fastcall sub_586DF0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  __int64 (__fastcall *v3)(); // rax
  _QWORD *v4; // r14
  __int64 (__fastcall *v5)(); // rdx
  _QWORD *v6; // r15
  __int64 (__fastcall *v7)(); // rax
  _QWORD *v8; // rcx
  __int64 (__fastcall *v9)(); // rdx
  _QWORD *v10; // rcx
  __int64 (__fastcall *v11)(); // rax
  _QWORD *v12; // r8
  __int64 (__fastcall *v13)(); // rdx
  _QWORD *v14; // r9
  __int64 (__fastcall *v15)(); // rax
  _QWORD **v16; // r13
  __int64 (__fastcall *v17)(); // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rcx
  _QWORD *v25; // [rsp+0h] [rbp-58h]
  _QWORD *v26; // [rsp+8h] [rbp-50h]
  _QWORD *v27; // [rsp+8h] [rbp-50h]
  _QWORD *v28; // [rsp+8h] [rbp-50h]
  _QWORD *v29; // [rsp+8h] [rbp-50h]
  _QWORD *v30; // [rsp+8h] [rbp-50h]
  __int64 v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+10h] [rbp-48h]
  __int64 v33; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD **)(a1 + 40);
  v3 = *(__int64 (__fastcall **)())(*v2 + 120LL);
  if ( v3 == sub_586DF0 )
  {
    v4 = (_QWORD *)v2[5];
    v5 = *(__int64 (__fastcall **)())(*v4 + 120LL);
    if ( v5 == v3 )
    {
      v6 = (_QWORD *)v4[5];
      v7 = *(__int64 (__fastcall **)())(*v6 + 120LL);
      if ( v7 == v5 )
      {
        v8 = (_QWORD *)v6[5];
        v25 = v8;
        v9 = *(__int64 (__fastcall **)())(*v8 + 120LL);
        if ( v9 == v7 )
        {
          v10 = (_QWORD *)v8[5];
          v11 = *(__int64 (__fastcall **)())(*v10 + 120LL);
          if ( v11 == v9 )
          {
            v12 = (_QWORD *)v10[5];
            v13 = *(__int64 (__fastcall **)())(*v12 + 120LL);
            if ( v13 == v11 )
            {
              v14 = (_QWORD *)v12[5];
              v15 = *(__int64 (__fastcall **)())(*v14 + 120LL);
              if ( v15 == v13 )
              {
                v16 = (_QWORD **)v14[5];
                v34 = v12[5];
                v31 = v10[5];
                v26 = v10;
                v17 = (__int64 (__fastcall *)())(*v16)[15];
                if ( v17 == v15 )
                {
                  (*(void (__fastcall **)(_QWORD *))(*v16[5] + 120LL))(v16[5]);
                  sub_160EBE0(a2, v16 + 6);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v18 = v26;
                  v19 = v31;
                  v20 = v34;
                }
                else
                {
                  ((void (__fastcall *)(_QWORD))v17)(v14[5]);
                  v20 = v34;
                  v19 = v31;
                  v18 = v26;
                }
                v32 = v19;
                v27 = v18;
                sub_160EBE0(a2, v20 + 48);
                std::__ostream_insert<char,std::char_traits<char>>();
                v21 = v27;
                v22 = v32;
              }
              else
              {
                v33 = v10[5];
                v30 = v10;
                ((void (__fastcall *)(_QWORD *))v15)(v14);
                v22 = v33;
                v21 = v30;
              }
              v28 = v21;
              sub_160EBE0(a2, v22 + 48);
              std::__ostream_insert<char,std::char_traits<char>>();
              v23 = v28;
            }
            else
            {
              v29 = v10;
              ((void (__fastcall *)(_QWORD *))v13)(v12);
              v23 = v29;
            }
            sub_160EBE0(a2, v23 + 6);
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          else
          {
            ((void (__fastcall *)(_QWORD *))v11)(v10);
          }
          sub_160EBE0(a2, v25 + 6);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          ((void (__fastcall *)(_QWORD *))v9)(v8);
        }
        sub_160EBE0(a2, v6 + 6);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        ((void (__fastcall *)(_QWORD))v7)(v4[5]);
      }
      sub_160EBE0(a2, v4 + 6);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      ((void (__fastcall *)(_QWORD))v5)(v2[5]);
    }
    sub_160EBE0(a2, v2 + 6);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    ((void (__fastcall *)(_QWORD))v3)(*(_QWORD *)(a1 + 40));
  }
  sub_160EBE0(a2, a1 + 48);
  return std::__ostream_insert<char,std::char_traits<char>>();
}

