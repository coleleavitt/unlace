double __fastcall sub_15CF60(__int64 a1, __int64 a2, __int64 a3)
{
  double result; // xmm0_8

  if ( sub_153BD0(*(_QWORD *)(a1 + 96)) )
  {
    if ( *(_DWORD *)(a3 + 32) != *(_DWORD *)(a2 + 32)
      || *(_DWORD *)(a3 + 24) != *(_DWORD *)(a2 + 24)
      || *(_DWORD *)(a3 + 28) != *(_DWORD *)(a2 + 28)
      || (result = *(double *)a3, *(double *)a3 != *(double *)a2)
      || (result = *(double *)(a3 + 8), result != *(double *)(a2 + 8))
      || (result = *(double *)(a3 + 16), result != *(double *)(a2 + 16)) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 96) + 608LL))(
        *(_QWORD *)(a1 + 96),
        a2,
        a3,
        1);
    }
  }
  return result;
}

