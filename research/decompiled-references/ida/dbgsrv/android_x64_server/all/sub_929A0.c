/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_929A0
// Address: 0x00000000000929A0

//----- (00000000000929A0) ----------------------------------------------------
__int64 __fastcall sub_929A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD **v7; // rdi
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+8h] [rbp-10h]
  unsigned __int64 v11; // [rsp+10h] [rbp-8h]

  v11 = __readfsqword(0x28u);
  v7 = (_QWORD **)(a1 - 192);
  if ( !a1 )
    v7 = nullptr;
  v9 = a3;
  v10 = a3 + a4;
  if ( (int)a2 < 0x1000000 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64))(*v7[55] + 400LL))(
             v7[55],
             a2,
             a3,
             a4,
             a5,
             a6,
             v9,
             v10,
             v11);
  else
    return ((__int64 (__fastcall *)(_QWORD **, __int64, __int64, __int64, __int64 *))(*v7)[4])(v7, a2, a5, a6, &v9);
}
