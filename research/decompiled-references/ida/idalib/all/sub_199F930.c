unsigned __int64 __fastcall sub_199F930(unsigned __int64 a1)
{
  unsigned __int64 result; // rax
  __int16 v2; // dx
  unsigned __int64 *v3; // rcx
  __int64 v4; // rdx

  result = sub_BFBAE0(a1);
  v2 = *(_WORD *)result & 0x1FF;
  if ( v2 == 53 )
  {
    v3 = *(unsigned __int64 **)(result + 16);
    v4 = *(_QWORD *)(result + 24);
    result = 0;
    if ( (unsigned int)((v4 - (__int64)v3) >> 3) == 1 )
    {
      result = sub_BFBAE0(*v3);
      if ( (*(_WORD *)result & 0x1FF) != 0x6A )
        return 0;
    }
  }
  else if ( v2 != 106 )
  {
    return 0;
  }
  return result;
}
