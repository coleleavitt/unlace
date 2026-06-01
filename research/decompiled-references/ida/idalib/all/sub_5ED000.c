__int64 __fastcall sub_5ED000(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 400);
  if ( v1 )
    *(_QWORD *)(a1 + 400) = v1 - 1;
  sub_5ECF10((_QWORD *)a1, *(unsigned __int8 *)(a1 + 757) + 1LL);
  return 0;
}
