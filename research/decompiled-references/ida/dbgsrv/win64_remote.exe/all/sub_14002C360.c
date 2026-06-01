/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002C360
// Address: 0x000000014002C360

//----- (000000014002C360) ----------------------------------------------------
unsigned __int64 __fastcall sub_14002C360(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned __int64 *v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // [rsp+20h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 120);
  v4 = (unsigned __int64 *)(a1 + 112);
  if ( v3 && (v5 = *(_QWORD *)(a1 + 120), result = *v4, *(_DWORD *)(*v4 + 8 * v5 - 8) == a2) )
  {
    *(_DWORD *)(result + 8 * v5 - 4) = a3;
  }
  else
  {
    v7 = __PAIR64__(a3, a2);
    sub_14002E420((__int64)v4, v3 + 1);
    result = v7;
    *(_QWORD *)(*v4 + 8 * v4[1]++) = v7;
  }
  return result;
}
