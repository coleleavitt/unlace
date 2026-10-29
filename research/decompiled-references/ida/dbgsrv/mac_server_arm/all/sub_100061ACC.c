/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061ACC
// Address: 0x0000000100061ACC

//----- (0000000100061ACC) ----------------------------------------------------
bool __fastcall sub_100061ACC(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 v3; // x20

  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 96LL))(*a1);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, const char *))(*(_QWORD *)*a1 + 104LL))(*a1, v2, "irs");
  a1[1] = v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 112LL))(
      *a1,
      v3,
      sub_100061BBC);
    (*(void (__fastcall **)(_QWORD, _QWORD, bool (__fastcall *)(__int64, int)))(*(_QWORD *)*a1 + 120LL))(
      *a1,
      a1[1],
      sub_100061BEC);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64, const char *)))(*(_QWORD *)*a1 + 128LL))(
      *a1,
      a1[1],
      sub_100061BF8);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 136LL))(
      *a1,
      a1[1],
      sub_100061C68);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 144LL))(
      *a1,
      a1[1],
      sub_100061CFC);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 152LL))(
      *a1,
      a1[1],
      sub_100061D7C);
  }
  return v3 != 0;
}
