__int64 __fastcall sub_4693C0(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 9) & 1) != 0 )
  {
    v4 = *a2;
    sub_3BEFF0(*(__int64 **)(*a1 + 1672), v5, *a2);
    sub_3CF0D0(a1[1], v4, v5[0]);
  }
  return 0;
}
