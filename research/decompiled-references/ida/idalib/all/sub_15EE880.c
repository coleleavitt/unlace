unsigned __int64 __fastcall sub_15EE880(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  *a1 = 4;
  a1[1] = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  v2 = *(_QWORD *)(a2 + 40);
  result = (v2 >> 1) & 3;
  if ( ((v2 >> 1) & 3) != 0 )
  {
    if ( result == 2 )
      *a1 = v2 & 0xFFFFFFFFFFFFFFF8LL | 4;
  }
  else
  {
    result = sub_15EE760(*(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 16));
    *a1 = result;
  }
  return result;
}
