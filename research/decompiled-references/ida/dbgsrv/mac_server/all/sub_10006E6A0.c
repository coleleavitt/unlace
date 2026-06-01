/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006E6A0
// Address: 0x000000010006E6A0

//----- (000000010006E6A0) ----------------------------------------------------
__int64 __fastcall sub_10006E6A0(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned int v2; // r12d
  __int64 v3; // rax

  v1 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)xmmword_1000AE410 + 184LL))(
                    xmmword_1000AE410,
                    a1);
  v2 = -1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v1 + 152))(v1)
    || (int)sub_10006AAB0(v1[4]) <= 0
    || (v3 = sub_10006AA80(v1[4]), v2 = v3, v3 <= 0) )
  {
    v1[8] = (__int64)"irs";
  }
  return v2;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
