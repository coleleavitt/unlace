__int64 __fastcall sub_738400(__int64 a1, __int64 a2, void (__fastcall *a3)(_QWORD), signed int a4)
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
  sub_737840((__int64)v6, a1, 2048, nullptr);
  sub_736030(v6, 33, 7u);
  if ( !v7 )
  {
    if ( v6 )
    {
      sub_737A50((__int64)v6);
      operator delete(v6, 0x16D0u);
    }
    return 0;
  }
  v10 = (void *)operator new(0x16D0u);
  sub_743140(v10, a2, 2048, 0);
  if ( !a4 )
    a4 = *v6;
  if ( !(unsigned __int8)sub_73C890(v10, a4) || (v8 = sub_73CC80(v10, 0, 0), !(_BYTE)v8) )
  {
    if ( v6 )
    {
      sub_737A50((__int64)v6);
      operator delete(v6, 0x16D0u);
    }
    if ( v10 )
    {
      sub_743350(v10);
      operator delete(v10, 0x16D0u);
    }
    return 0;
  }
  v11 = sub_736480((__int64)v6);
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v11 != 1 )
    {
      v13 = 0;
      do
      {
        ++v13;
        if ( __ROR4__(989560465 * v13 + 3435968, 4) <= 0x68DB8u )
          a3(v13);
        sub_73D2C0(v10, v12 + 1, 0xFFFF, 0, 0);
        v14 = sub_736B20((__int64)v6);
        if ( !v14 )
          break;
        v12 = v14 - 1;
      }
      while ( v14 != 1 );
    }
  }
  if ( v6 )
  {
    sub_737A50((__int64)v6);
    operator delete(v6, 0x16D0u);
  }
  if ( v10 )
  {
    sub_743350(v10);
    operator delete(v10, 0x16D0u);
  }
  return v8;
}
