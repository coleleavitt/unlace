__int64 __fastcall sub_D47CB0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned __int64 v5; // rdx

  v3 = *a2;
  v4 = *((unsigned int *)a2 + 2);
  v5 = (unsigned __int64)(v4 + 63) >> 6;
  if ( v5 == 1 )
  {
    *(_DWORD *)(a1 + 8) = v4;
    if ( (unsigned int)v4 > 0x40 )
      sub_2205470(a1, v3, 0);
    else
      *(_QWORD *)a1 = v3;
    return a1;
  }
  else
  {
    sub_2205610(a1, (unsigned int)v4, v5, v3);
    return a1;
  }
}
