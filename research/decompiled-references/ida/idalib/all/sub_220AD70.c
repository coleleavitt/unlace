__int64 __fastcall sub_220AD70(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp

  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v4;
  v5 = v4 - a3;
  if ( v4 > 0x40 )
  {
    sub_2205510(a1, (const void **)a2);
    v4 = *(_DWORD *)(a1 + 8);
    if ( v4 > 0x40 )
    {
      sub_220A970(*(_QWORD **)a1, ((unsigned __int64)v4 + 63) >> 6, v5);
      return a1;
    }
  }
  else
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
  }
  if ( v5 == v4 )
    *(_QWORD *)a1 = 0;
  else
    *(_QWORD *)a1 >>= v5;
  return a1;
}
