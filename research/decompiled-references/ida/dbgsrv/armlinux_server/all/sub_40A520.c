/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A520
// Address: 0x000000000040A520

//----- (000000000040A520) ----------------------------------------------------
__int64 __fastcall sub_40A520(__int64 result, __int64 a2)
{
  __int64 v2; // x2

  if ( *(_QWORD *)(a2 + 8) )
  {
    *(_DWORD *)result = *(_DWORD *)a2;
    v2 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(result + 8) = v2;
    *(_QWORD *)(result + 16) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(result + 24) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(v2 + 8) = result;
    *(_QWORD *)(result + 32) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = a2;
    *(_QWORD *)(a2 + 24) = a2;
    *(_QWORD *)(a2 + 32) = 0;
  }
  else
  {
    *(_DWORD *)result = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_QWORD *)(result + 16) = result;
    *(_QWORD *)(result + 24) = result;
    *(_QWORD *)(result + 32) = 0;
  }
  return result;
}
