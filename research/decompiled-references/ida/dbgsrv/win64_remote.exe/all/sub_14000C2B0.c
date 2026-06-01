/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000C2B0
// Address: 0x000000014000C2B0

//----- (000000014000C2B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14000C2B0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v5; // rcx
  __int64 v6; // r14
  unsigned __int64 *v7; // rdi
  __int64 v8; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v5 = *(unsigned __int64 **)a1;
  if ( (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v5) >> 3 >= a2 )
    return sub_140009D90(v5, *(unsigned __int64 **)(a1 + 8), &v10);
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    sub_140004220();
  v6 = a2;
  v7 = sub_140003060(8 * a2);
  v8 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( v8 )
    sub_140011C80(a1, *(void **)a1, v8);
  result = (unsigned __int64)&v7[v6];
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = &v7[v6];
  *(_QWORD *)(a1 + 16) = &v7[v6];
  if ( v7 != &v7[v6] )
  {
    do
      *v7++ = a3;
    while ( v7 != (unsigned __int64 *)result );
  }
  return result;
}
// 14000C377: control flows out of bounds to 14000C37C
