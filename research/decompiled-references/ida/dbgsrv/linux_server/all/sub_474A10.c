/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474A10
// Address: 0x0000000000474A10

//----- (0000000000474A10) ----------------------------------------------------
__int64 __fastcall sub_474A10(_QWORD *a1)
{
  unsigned int v1; // eax
  __int64 v2; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 96LL))(*a1);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const char *))(*(_QWORD *)*a1 + 104LL))(*a1, v1, "irs");
  a1[1] = v2;
  if ( !v2 )
    return 0;
  (*(void (__fastcall **)(_QWORD, __int64, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 112LL))(
    *a1,
    v2,
    sub_472BF0);
  (*(void (__fastcall **)(_QWORD, _QWORD, _BOOL8 (__fastcall *)(__int64, int)))(*(_QWORD *)*a1 + 120LL))(
    *a1,
    a1[1],
    sub_472C20);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64, const char *)))(*(_QWORD *)*a1 + 128LL))(
    *a1,
    a1[1],
    sub_472CF0);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 136LL))(
    *a1,
    a1[1],
    sub_473040);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 144LL))(
    *a1,
    a1[1],
    sub_472F60);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64)))(*(_QWORD *)*a1 + 152LL))(
    *a1,
    a1[1],
    sub_472CC0);
  return 1;
}
