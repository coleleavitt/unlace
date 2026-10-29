__int64 __fastcall sub_717EC0(__int64 a1, __int64 a2, void (__fastcall *a3)(_QWORD), signed int a4)
{
  unsigned int *v6; // rbx
  char v7; // al
  unsigned int v8; // r14d
  void *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned int v13; // r13d
  __int64 v14; // rax

  v6 = (unsigned int *)operator new(0x16D0u);
  sub_717300((__int64)v6, a1, 2048, nullptr);
  sub_715AF0(v6, 33, 7u);
  if ( !v7 )
  {
    if ( v6 )
    {
      sub_717510((__int64)v6);
      operator delete(v6, 0x16D0u);
    }
    return 0;
  }
  v10 = (void *)operator new(0x16D0u);
  sub_722C00(v10, a2, 2048, 0);
  if ( !a4 )
    a4 = *v6;
  if ( !(unsigned __int8)sub_71C350(v10, a4) || (v8 = sub_71C740(v10, 0, 0), !(_BYTE)v8) )
  {
    if ( v6 )
    {
      sub_717510((__int64)v6);
      operator delete(v6, 0x16D0u);
    }
    if ( v10 )
    {
      sub_722E10(v10);
      operator delete(v10, 0x16D0u);
    }
    return 0;
  }
  v11 = sub_715F40((__int64)v6);
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v11 != 1 )
    {
      v13 = 0;
      do
      {
        ++v13;
        if ( __ROR4__(989560465 * v13 + 3435968, 4) <= (unsigned int)&stru_68DB8 )
          a3(v13);
        sub_71CD80(v10, v12 + 1, 0xFFFF, 0, 0);
        v14 = sub_7165E0((__int64)v6);
        if ( !v14 )
          break;
        v12 = v14 - 1;
      }
      while ( v14 != 1 );
    }
  }
  if ( v6 )
  {
    sub_717510((__int64)v6);
    operator delete(v6, 0x16D0u);
  }
  if ( v10 )
  {
    sub_722E10(v10);
    operator delete(v10, 0x16D0u);
  }
  return v8;
}

