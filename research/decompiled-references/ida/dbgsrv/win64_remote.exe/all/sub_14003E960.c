/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003E960
// Address: 0x000000014003E960

//----- (000000014003E960) ----------------------------------------------------
__int64 __fastcall sub_14003E960(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_14003D910(a1);
  *(_QWORD *)(a1 + 224) = sub_14003B940;
  *(_QWORD *)(a1 + 232) = a1 + 240;
  *(_QWORD *)(a1 + 240) = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 344) = 0;
  result = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 312) = 0;
  *(_BYTE *)(a1 + 152) = 0;
  if ( a3 )
  {
    sub_14003E470(a1);
    *(_QWORD *)(a1 + 648) = a3;
    *(_BYTE *)(a1 + 720) = 1;
    return 0;
  }
  return result;
}
