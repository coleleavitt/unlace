/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006E530
// Address: 0x000000010006E530

//----- (000000010006E530) ----------------------------------------------------
bool __fastcall sub_10006E530(_QWORD *a1)
{
  unsigned int v1; // eax
  __int64 v2; // r14

  v1 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 96LL))(*a1);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const char *))(*(_QWORD *)*a1 + 104LL))(*a1, v1, "irs");
  a1[1] = v2;
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 112LL))(
      *a1,
      v2,
      sub_10006E600);
    (*(void (__fastcall **)(_QWORD, _QWORD, _BOOL8 (__fastcall *)(__int64, int)))(*(_QWORD *)*a1 + 120LL))(
      *a1,
      a1[1],
      sub_10006E630);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64, const char *)))(*(_QWORD *)*a1 + 128LL))(
      *a1,
      a1[1],
      sub_10006E640);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 136LL))(
      *a1,
      a1[1],
      sub_10006E6A0);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 144LL))(
      *a1,
      a1[1],
      sub_10006E720);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 152LL))(
      *a1,
      a1[1],
      sub_10006E790);
  }
  return v2 != 0;
}
