__int64 __fastcall sub_552D00(__int64 a1, int a2)
{
  __int64 result; // rax

  sub_186A780(a1, (unsigned int)(2 * a2));
  *(_QWORD *)(a1 + 544) = 0;
  sub_17E9B40(a1 + 560, "doc");
  result = sub_1829AC0(a1);
  *(_QWORD *)(a1 + 552) = result;
  return result;
}

