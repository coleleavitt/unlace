/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A20
// Address: 0x0000000000047A20

//----- (0000000000047A20) ----------------------------------------------------
unsigned __int64 __fastcall sub_47A20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  void **v4; // r14
  void *v5; // rdi
  _OWORD v7[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+20h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  v3 = 16 * a3;
  v7[0] = *(_OWORD *)(a1 + v3 + 976);
  v7[1] = *(_OWORD *)(a1 + v3 + 1392);
  v4 = (void **)(a2 + 8);
  if ( *(int *)a2 >= -1 )
  {
    v5 = *v4;
    if ( *v4 )
    {
      *(_QWORD *)(a2 + 16) = 0;
      qfree(v5);
      *(_QWORD *)(a2 + 8) = 0;
      *(_QWORD *)(a2 + 24) = 0;
    }
    *(_DWORD *)a2 = -2;
  }
  sub_4B610((__int64)v4, v7, 0x20u);
  *(_DWORD *)a2 = 0;
  return __readfsqword(0x28u);
}
