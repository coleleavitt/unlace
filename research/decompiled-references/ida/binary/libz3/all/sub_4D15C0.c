__int64 __fastcall sub_4D15C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+8h] [rbp-10h] BYREF

  sub_180C5A0(&v2, "doc");
  result = sub_64B010(*(_QWORD *)(a1 + 48));
  if ( v2 == result )
    return sub_64B1D0(*(_QWORD *)(a1 + 48), 0);
  return result;
}

