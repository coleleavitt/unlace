/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E8C20
// Address: 0x00000000000E8C20

//----- (00000000000E8C20) ----------------------------------------------------
unsigned __int64 __fastcall sub_E8C20(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  _QWORD *v5; // rbx
  unsigned __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-1B0h] BYREF
  _BYTE v8[296]; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v9; // [rsp+138h] [rbp-80h]
  __int64 v10; // [rsp+140h] [rbp-78h]
  int v11; // [rsp+150h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+1B8h] [rbp+0h]

  v3 = 60;
  v5 = a1;
  while ( v3 )
  {
    *a1++ = 0;
    --v3;
  }
  v5[19] = retaddr;
  v5[24] = 0x4000000000000000LL;
  if ( (unsigned int)sub_E891E(v5, (__int64)v8) )
    abort();
  if ( (!&pthread_create || pthread_once(&dword_1590A0, sub_E7970)) && !byte_1590B0[0] )
    sub_E7970();
  sub_E79E8((__int64)v5, a2, &v7);
  v11 = 1;
  v10 = 7;
  v9 = 0;
  result = sub_E86DB((__int64)v5, (__int64)v8);
  v5[19] = a3;
  return result;
}
