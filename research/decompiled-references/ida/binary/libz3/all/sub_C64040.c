__int64 __fastcall sub_C64040(__int64 a1, __int64 a2)
{
  sub_185D2A0(
    a2,
    "split_factors",
    1,
    "apply simplifications such as (= (* p1 p2) 0) --> (or (= p1 0) (= p2 0)).",
    "true",
    0);
  return sub_177BB10(a2);
}

