__int64 __fastcall sub_38FF60(_QWORD *a1)
{
  char v3[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v4; // [rsp+1008h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  get_root_filename(v3);
  (*(void (**)(_QWORD, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL))(
    *a1,
    a1[1],
    "This difference file was created by IDA\n\n%s\n",
    v3);
  visit_patched_bytes(a1[3], a1[4], sub_38F200, a1);
  return *((_BYTE *)a1 + 44) ^ 1u;
}
