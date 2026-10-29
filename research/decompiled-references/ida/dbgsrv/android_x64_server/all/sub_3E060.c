/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E060
// Address: 0x000000000003E060

//----- (000000000003E060) ----------------------------------------------------
bool __fastcall sub_3E060(_QWORD *a1, double a2, double a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+20h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  v3 = a1[20];
  *(_OWORD *)ptr = 0;
  v7 = 0;
  if ( (unsigned int)sub_3E150((unsigned __int64)a1, (__int64)ptr, 0, 0.0, a3) == 1 )
    sub_3E870((__int64)a1, (__int64 *)ptr, 0.0, a3);
  sub_3DB60(a1);
  v4 = a1[20];
  if ( ptr[0] )
  {
    sub_385C0((__int64 *)ptr, 0);
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v7 = 0;
  }
  return v4 != (int)v3;
}
