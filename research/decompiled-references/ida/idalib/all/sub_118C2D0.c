__int64 __fastcall sub_118C2D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax

  if ( !(unsigned __int8)sub_21B7850(a1, 393, 999, 1) )
  {
    v3 = *(unsigned int *)(a2 + 8);
    if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_2237220(a2, a2 + 16, v3 + 1, 8);
      v3 = *(unsigned int *)(a2 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v3) = "-fno-aapcs-bitfield-width";
    ++*(_DWORD *)(a2 + 8);
  }
  result = sub_10DCD30(a1, 0x188u);
  if ( result )
  {
    result = *(unsigned int *)(a2 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_2237220(a2, a2 + 16, result + 1, 8);
      result = *(unsigned int *)(a2 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = "-faapcs-bitfield-load";
    ++*(_DWORD *)(a2 + 8);
  }
  return result;
}
