char __fastcall sub_1479810(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _BYTE *v5; // r12
  char result; // al
  __int64 v7; // rbx
  unsigned __int16 v8; // bp

  if ( a3 && !sub_FF8060(*(_QWORD *)(*a1 + 96) + 200LL, a2, a3, *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 56LL)) )
  {
    v7 = *a1;
    v8 = *(_WORD *)(*a1 + 32);
    result = (v8 == 1) | sub_141A630(v8);
    if ( result )
    {
      *(_QWORD *)&dword_0 = 0x10102464C4400LL;
      BUG();
    }
    **(_QWORD **)(v7 + 24) = **(_QWORD **)(v7 + 24) & 0xFFFFFFF7FFFFFE00LL | 0x800000005LL;
    *(_WORD *)(v7 + 32) = 5;
  }
  else
  {
    v5 = (_BYTE *)a1[1];
    *v5 = sub_15AE040(a1[2], a4, *(unsigned int *)a1[3], a1[4], a1[5], a1[6]);
    return 1;
  }
  return result;
}
