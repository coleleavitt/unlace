void __fastcall clang_disposeDiagnosticSet(_QWORD *a1)
{
  void (*v2)(void); // rax
  __int64 *v3; // r12
  __int64 *v4; // rbx
  __int64 v5; // rdi

  if ( a1 && *((_BYTE *)a1 + 32) )
  {
    v2 = *(void (**)(void))(*a1 + 8LL);
    if ( (char *)v2 == (char *)sub_62FCA0 )
    {
      v3 = (__int64 *)a1[2];
      v4 = (__int64 *)a1[1];
      *a1 = &off_47CFF88;
      if ( v3 != v4 )
      {
        do
        {
          while ( 1 )
          {
            v5 = *v4;
            if ( !*v4 )
              break;
            ++v4;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
            *(v4 - 1) = 0;
            if ( v3 == v4 )
              goto LABEL_7;
          }
          ++v4;
        }
        while ( v3 != v4 );
LABEL_7:
        v4 = (__int64 *)a1[1];
      }
      if ( v4 )
        operator delete(v4, a1[3] - (_QWORD)v4);
      operator delete(a1, 0x28u);
    }
    else
    {
      v2();
    }
  }
}

