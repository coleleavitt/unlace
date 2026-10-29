__int64 __fastcall sub_9F70E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = sub_186B270(0x68u);
  sub_1342CC0(v2, *(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 1592) = v2;
  result = sub_A6F1C0(a2, v2);
  if ( !*(_BYTE *)(a1 + 1536) )
  {
    sub_9B83E0(a1);
    return sub_9F5AB0(a1);
  }
  return result;
}

