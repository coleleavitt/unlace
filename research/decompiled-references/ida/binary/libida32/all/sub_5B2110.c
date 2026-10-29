__int64 __fastcall sub_5B2110(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = 0;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( (v3 & 0x400) != 0 )
    {
      BYTE1(v3) &= ~4u;
      *(_QWORD *)(a2 + 8) = v3;
      sub_5ACD60((__int64)a1, (unsigned int *)a2, 0);
      if ( (sub_614FB0(*a1, 10) & 0x2000) != 0 )
        sub_5B1E60(a1, a2);
      return 1;
    }
  }
  return result;
}

