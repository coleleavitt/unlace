/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B5E0
// Address: 0x000000000045B5E0

//----- (000000000045B5E0) ----------------------------------------------------
__int64 __fastcall sub_45B5E0(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 (*v8)(); // rbx
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+8h] [rbp-20h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  if ( a1 )
    a1 -= 24;
  v9 = a3;
  v10 = a3 + a4;
  if ( a2 > 0xFFFFFF )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64 *))(*a1 + 32LL))(
             a1,
             (unsigned int)a2,
             a5,
             a6,
             &v9);
  v7 = a1[55];
  v8 = *(__int64 (**)())(*(_QWORD *)v7 + 400LL);
  result = 0;
  if ( v8 != sub_40C040 )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))v8)(
             v7,
             (unsigned int)a2,
             a3,
             a4,
             a5,
             a6,
             v9,
             v10);
  return result;
}
// 40C040: using guessed type __int64 sub_40C040();
