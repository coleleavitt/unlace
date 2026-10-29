__int64 __fastcall sub_12CA250(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( !sub_10DECA0(a2, 0x199u, 0x3F1u) )
  {
    v6 = *(unsigned int *)(a3 + 8);
    if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v6 + 1, 8);
      v6 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v6) = "-faligned-alloc-unavailable";
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (unsigned __int8)sub_21B7850(a2, 1958, 1486, 1) )
  {
    v5 = *(unsigned int *)(a3 + 8);
    if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v5 + 1, 8);
      v5 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "-fxl-pragma-pack";
    ++*(_DWORD *)(a3 + 8);
  }
  result = sub_10DECA0(a2, 0x70Fu, 0x57Cu);
  if ( !result )
  {
    result = *(unsigned int *)(a3 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, result + 1, 8);
      result = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-fno-sized-deallocation";
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}
