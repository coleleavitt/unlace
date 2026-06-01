/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006E720
// Address: 0x000000010006E720

//----- (000000010006E720) ----------------------------------------------------
__int64 __fastcall sub_10006E720(__int64 a1)
{
  __int64 *v1; // rbx
  char v2; // cl
  __int64 result; // rax

  v1 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)xmmword_1000AE410 + 184LL))(
                    xmmword_1000AE410,
                    a1);
  v2 = (*(__int64 (__fastcall **)(__int64 *))(*v1 + 152))(v1);
  result = -1;
  if ( v2 || (result = sub_10006AA70(v1[4]), result <= 0) )
    v1[8] = (__int64)"irs";
  return result;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
