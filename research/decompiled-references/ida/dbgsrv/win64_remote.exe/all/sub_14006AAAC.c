/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006AAAC
// Address: 0x000000014006AAAC

//----- (000000014006AAAC) ----------------------------------------------------
__int64 __fastcall sub_14006AAAC(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(a4 + 56);
  sub_14006AA4C(a2, a4);
  result = 1;
  if ( ((((*(_DWORD *)(a1 + 4) & 0x66) != 0) + 1) & *(_DWORD *)(v4 + 4)) != 0 )
    return sub_14006C3C8(a1, a2, a3, a4);
  return result;
}
