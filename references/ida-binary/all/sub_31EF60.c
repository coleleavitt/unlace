unsigned __int64 __fastcall sub_31EF60(
        const char *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rbx
  __m128 v10; // xmm4
  __m128 v11; // xmm5
  __int64 v13; // [rsp+0h] [rbp-30h] BYREF
  __int128 v14; // [rsp+8h] [rbp-28h]
  unsigned __int64 v15; // [rsp+18h] [rbp-18h]

  v15 = __readfsqword(0x28u);
  v9 = qalloc_or_throw(8592);
  sub_31E6E0(v9, a1);
  v13 = 0;
  byte_8CD8D4 = 1;
  v14 = 0;
  sub_1697D0(
    (int)"BUTTON CANCEL NONE\n"
         "BUTTON YES NONE\n"
         "BUTTON NO NONE\n"
         "Database snapshot manager\n"
         "%/%*\n"
         "<Snapshot list:E1::30::>\n"
         "<Take ~s~napshot:B20:20:::><~R~estore:B21:21:::><Re~n~ame:B22:22:::><~D~elete:B23:23:::><~O~ptions:B25:25:::><~"
         "C~lose:B24:24:::>\n"
         "\n",
    (__int64)sub_31F8B0,
    v9,
    v9,
    (__int64)&v13,
    (__int64)sub_317F30,
    (__m128)0LL,
    a3,
    a4,
    a5,
    v10,
    v11,
    a8,
    a9,
    (char)sub_317F30);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  byte_8CD8D4 = 0;
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, (const char *)sub_31F8B0);
  }
  return v15 - __readfsqword(0x28u);
}
