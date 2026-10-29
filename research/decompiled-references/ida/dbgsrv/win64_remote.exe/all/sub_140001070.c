/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140001070
// Address: 0x0000000140001070

//----- (0000000140001070) ----------------------------------------------------
int sub_140001070()
{
  _QWORD *v0; // rbx

  sub_140001810((__int64)&qword_1400C6BB0, "//", 2u);
  v0 = sub_14002E1F0((__int64)qword_1400C6BC8);
  sub_140001810((__int64)v0, "/*", 2u);
  sub_140001810((__int64)(v0 + 3), "*/", 2u);
  sub_14002BF00(
    (__int64)&off_1400C6B70,
    "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw",
    1);
  sub_14002BF00((__int64)&off_1400C6B70, "long|string|__int64|success|char|float|void", 2);
  sub_14002BF00((__int64)&off_1400C6B70, "BADADDR|BADSEL|MAXADDR", 3);
  return atexit(sub_140090700);
}
// 1400C6B70: using guessed type __int64 (__fastcall *off_1400C6B70)(void *Block);
// 1400C6BC8: using guessed type __int64 qword_1400C6BC8[4];
