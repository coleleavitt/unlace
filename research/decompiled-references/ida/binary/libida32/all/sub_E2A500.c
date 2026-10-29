void __fastcall sub_E2A500(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  int v9; // eax

  v7 = sub_E195F0(*a1, a2);
  if ( a4 )
  {
    sub_E33550(a1, a2, a3, a4);
  }
  else
  {
    v8 = v7;
    v9 = *(_BYTE *)(v7 + 8) & 0x7F;
    if ( !v9 || (_BYTE)v9 == 24 && sub_E19A80(a1, v8) )
      sub_E2A160(a1, a2, v8, 0, a5);
    else
      sub_E2C6C0(a1, a2, 0, v8, 0, 0);
  }
}

