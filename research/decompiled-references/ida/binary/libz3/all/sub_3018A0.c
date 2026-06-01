void __fastcall sub_3018A0(_QWORD *a1)
{
  __int64 *v1; // rbx
  unsigned int v3; // r14d
  __int64 (__fastcall *v4)(); // rax
  __int64 v5; // r12
  _DWORD *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 *v9; // [rsp+18h] [rbp-70h]
  void *v10; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v11[11]; // [rsp+30h] [rbp-58h] BYREF

  v1 = (__int64 *)a1[4];
  if ( v1 )
  {
    v9 = &v1[7 * *((unsigned int *)v1 - 1)];
    if ( v9 != v1 )
    {
      v3 = 0;
      do
      {
        v5 = *v1;
        if ( !*(_WORD *)(*v1 + 4) )
        {
          v6 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
          if ( v6 )
          {
            if ( !*v6 && v6[1] == 8 && *(_DWORD *)(v5 + 24) == 1 )
              v5 = *(_QWORD *)(v5 + 32);
          }
        }
        sub_1850940(&v10, qword_1C7F2C0, v1 + 2);
        v7 = std::__ostream_insert<char,std::char_traits<char>>();
        if ( v10 != v11 )
          operator delete(v10, v11[0] + 1LL);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v10, v5, *a1, 0, 0, 0);
        sub_160E8B0(v7, &v10);
        v8 = a1[3];
        if ( v8 )
        {
          v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v8 + 40LL);
          if ( v4 != sub_303CD0 )
            ((void (__fastcall *)(__int64, _QWORD))v4)(v8, v3);
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        ++v3;
        v1 += 7;
        sub_18572D0(v11);
      }
      while ( v9 != v1 );
    }
  }
}

