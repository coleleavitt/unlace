__int64 __fastcall sub_9F08E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = sub_186B270(0x68u);
  sub_1342CC0(v2, *(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 1496) = v2;
  result = sub_A6F1C0(a2, v2);
  if ( !*(_BYTE *)(a1 + 1440) )
  {
    sub_9B7160(a1);
    return sub_9EF250(a1);
  }
  return result;
}

