__int64 __fastcall sub_1287B30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rax

  if ( (unsigned __int8)sub_21B7850(a2, 1348, 1709, 0) )
  {
    v6 = *(unsigned int *)(a3 + 8);
    if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v6 + 1, 8);
      v6 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v6) = "-D_HAS_STATIC_RTTI=0";
    ++*(_DWORD *)(a3 + 8);
  }
  result = sub_10DF140(a2, 0x8D5u);
  if ( result )
  {
    v5 = *(_QWORD *)(result + 16);
    if ( !v5 )
      v5 = result;
    *(_BYTE *)(v5 + 44) |= 2u;
  }
  return result;
}
