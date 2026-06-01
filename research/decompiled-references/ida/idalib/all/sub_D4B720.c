__int64 __fastcall sub_D4B720(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned __int64 v4; // rdx

  v2 = *a2;
  v3 = *((unsigned int *)a2 + 2);
  v4 = (unsigned __int64)(v3 + 63) >> 6;
  if ( v4 == 1 )
  {
    *(_DWORD *)(a1 + 8) = v3;
    if ( (unsigned int)v3 > 0x40 )
    {
      sub_2205470(a1, v2, 1);
    }
    else
    {
      *(_QWORD *)a1 = v2;
      sub_CF8100((unsigned __int64 *)a1);
    }
    return a1;
  }
  else
  {
    sub_2205610(a1, (unsigned int)v3, v4, v2);
    return a1;
  }
}
