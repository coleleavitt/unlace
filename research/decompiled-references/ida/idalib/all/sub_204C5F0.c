__int64 __fastcall sub_204C5F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rdi
  _QWORD *v7; // rdi
  __int64 v8; // r10

  if ( a3 == a1 + 48 )
  {
    v5 = sub_204C550(a1);
    if ( !v5 )
      v5 = (__int64)sub_204B170(v8);
    return sub_208B2C0(v5, a2, a4);
  }
  if ( !a3 )
    BUG();
  v5 = *(_QWORD *)(a3 + 40);
  if ( v5 )
    return sub_208B2C0(v5, a2, a4);
  v7 = (_QWORD *)operator new(0x18u);
  v7[1] = v7 + 1;
  v7[2] = v7 + 1;
  *(_QWORD *)(a3 + 40) = v7;
  *v7 = a3 - 24;
  return sub_208B2C0(v7, a2, a4);
}
