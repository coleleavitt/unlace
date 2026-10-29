__int64 __fastcall sub_11C6770(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+4h] [rbp-14h] BYREF
  unsigned int v6; // [rsp+Ch] [rbp-Ch]

  sub_11C59A0((__int64)v5, a1, a2);
  result = v6;
  if ( v6 )
  {
    result = *(unsigned int *)(a3 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, result + 1, 8);
      result = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-KPIC";
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}
