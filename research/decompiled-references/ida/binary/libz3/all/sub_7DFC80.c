__int64 __fastcall sub_7DFC80(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 (*v4)(void); // rax
  __int64 v5; // rdi
  _QWORD *v6; // r12
  _QWORD *v7; // r14
  char v8; // si
  _QWORD *v9; // rbp
  char *v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 (*v13)(void); // rax
  __int64 v14; // rdi
  _QWORD *v15; // r10
  _QWORD *v16; // r13
  _QWORD *v17; // r14
  _QWORD *v18; // r12
  char *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 (*v22)(void); // rax
  __int64 v23; // rdi
  _QWORD *v24; // r10
  _QWORD *v25; // r13
  _QWORD *v26; // r14
  _QWORD *v27; // r12
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rdi
  __int64 (*v31)(void); // rax
  __int64 v32; // rdi
  __int64 **v33; // r13
  __int64 v34; // r15
  __int64 v35; // r14
  __int64 **v38; // [rsp+8h] [rbp-70h]
  _BYTE v39[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v40[88]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 440LL);
  if ( (char *)v4 == (char *)sub_79F010 )
    v5 = v3 + 1592;
  else
    v5 = v4();
  v6 = *(_QWORD **)(v5 + 176);
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 != v7 )
    {
      v8 = 1;
      do
      {
        v9 = (_QWORD *)*v6;
        v10 = (char *)(*v6 + 88LL);
        if ( *(int *)v10 >> 8 != -1 )
        {
          while ( *(_DWORD *)(*(_QWORD *)(a1 + 1376) + 16LL) != *v10 )
          {
            v10 = *((char **)v10 + 1);
            if ( !v10 )
              goto LABEL_14;
          }
          if ( *(int *)v10 >> 8 != -1 )
          {
            if ( v8 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            v11 = std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(v39, *v9, *(_QWORD *)(a1 + 72), 0, 0, 0);
            sub_160E8B0(v11, v39);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_18572D0(v40);
            v8 = 0;
          }
        }
LABEL_14:
        ++v6;
      }
      while ( v7 != v6 );
      if ( !v8 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v12 = *(_QWORD *)(a1 + 80);
        v13 = *(__int64 (**)(void))(*(_QWORD *)v12 + 440LL);
        if ( (char *)v13 == (char *)sub_79F010 )
          v14 = v12 + 1592;
        else
          v14 = v13();
        v15 = *(_QWORD **)(v14 + 176);
        if ( v15 )
        {
          v16 = &v15[*((unsigned int *)v15 - 1)];
          if ( v16 != v15 )
          {
            v17 = *(_QWORD **)(v14 + 176);
            do
            {
              v18 = (_QWORD *)*v17;
              v19 = (char *)(*v17 + 88LL);
              if ( *(int *)v19 >> 8 != -1 )
              {
                while ( **(_DWORD **)(a1 + 1384) != *v19 )
                {
                  v19 = *((char **)v19 + 1);
                  if ( !v19 )
                    goto LABEL_27;
                }
                if ( *(int *)v19 >> 8 != -1 )
                {
                  v20 = std::ostream::operator<<();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1606360(v39, *v18, *(_QWORD *)(a1 + 72), 0, 0, 0);
                  sub_160E8B0(v20, v39);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_18572D0(v40);
                }
              }
LABEL_27:
              ++v17;
            }
            while ( v16 != v17 );
          }
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v21 = *(_QWORD *)(a1 + 80);
        v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 440LL);
        if ( (char *)v22 == (char *)sub_79F010 )
          v23 = v21 + 1592;
        else
          v23 = v22();
        v24 = *(_QWORD **)(v23 + 176);
        if ( v24 )
        {
          v25 = &v24[*((unsigned int *)v24 - 1)];
          if ( v25 != v24 )
          {
            v26 = *(_QWORD **)(v23 + 176);
            do
            {
              v27 = (_QWORD *)*v26;
              v28 = *v26 + 88LL;
              if ( *(int *)v28 >> 8 != -1 )
              {
                while ( *(_BYTE *)v28 != 5 )
                {
                  v28 = *(_QWORD *)(v28 + 8);
                  if ( !v28 )
                    goto LABEL_39;
                }
                if ( *(int *)v28 >> 8 != -1 )
                {
                  v29 = std::ostream::operator<<();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1606360(v39, *v27, *(_QWORD *)(a1 + 72), 0, 0, 0);
                  sub_160E8B0(v29, v39);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_18572D0(v40);
                }
              }
LABEL_39:
              ++v26;
            }
            while ( v25 != v26 );
          }
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v30 = *(_QWORD *)(a1 + 80);
        v31 = *(__int64 (**)(void))(*(_QWORD *)v30 + 440LL);
        if ( (char *)v31 == (char *)sub_79F010 )
          v32 = v30 + 1592;
        else
          v32 = v31();
        v33 = *(__int64 ***)(v32 + 176);
        if ( v33 )
        {
          v38 = &v33[*((unsigned int *)v33 - 1)];
          while ( v38 != v33 )
          {
            v34 = **v33;
            v35 = std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(v39, v34, *(_QWORD *)(a1 + 72), 0, 0, 0);
            sub_160E8B0(v35, v39);
            std::__ostream_insert<char,std::char_traits<char>>();
            ++v33;
            sub_18572D0(v40);
          }
        }
      }
    }
  }
  return a2;
}

