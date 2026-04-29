__int64 __fastcall sub_3CE110(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax

  v2 = *(_QWORD *)(a2 + 64);
  if ( v2 )
  {
    if ( (unsigned int)(*(_DWORD *)(v2 + 60) - 1) >= 2 )
      v2 = 0;
  }
  v3 = *(_QWORD *)(v2 + 64);
  v4 = sub_3CDFD0(**(_QWORD **)(a1 + 16), v3);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    if ( !(unsigned int)sub_138180(v4, v3) )
    {
      *(_QWORD *)(**(_QWORD **)(a1 + 16) + 1344LL) = v5;
      v6 = sub_62EE0(v5);
      sub_3C5380(v6, 0, 0);
      sub_80090((__int64)v5);
      j__qfree(v5);
      return 1;
    }
    sub_80090((__int64)v5);
    j__qfree(v5);
  }
  return 0;
}
