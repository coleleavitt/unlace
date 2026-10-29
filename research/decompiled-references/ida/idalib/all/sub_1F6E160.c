char __fastcall sub_1F6E160(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  LOBYTE(v2) = sub_B8DA40(a2);
  if ( (_BYTE)v2 )
  {
    v2 = *(unsigned int *)(a1 + 3392);
    if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 3396) )
    {
      sub_2237220(a1 + 3384, a1 + 3400, v2 + 1, 8);
      v2 = *(unsigned int *)(a1 + 3392);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 3384) + 8 * v2) = a2;
    ++*(_DWORD *)(a1 + 3392);
  }
  return v2;
}
