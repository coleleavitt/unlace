__int64 __fastcall sub_1D5C00(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  if ( v1 != *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24) )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_3312A0(v3, v1);
  return sub_332C60(v3 + 8, v4);
}
