/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100000A10
// Address: 0x0000000100000A10

//----- (0000000100000A10) ----------------------------------------------------
__int64 __fastcall sub_100000A10(__int64 a1, int a2)
{
  size_t v3; // rsi
  int *v4; // rax
  char *v5; // rax
  unsigned int v6; // ebx
  size_t v8; // [rsp+8h] [rbp-58h] BYREF
  unsigned int v9; // [rsp+14h] [rbp-4Ch] BYREF
  size_t v10; // [rsp+18h] [rbp-48h] BYREF
  int v11[12]; // [rsp+20h] [rbp-40h] BYREF

  v10 = 12;
  if ( sysctlnametomib("sysctl.proc_cputype", v11, &v10) )
    goto LABEL_4;
  v3 = v10;
  if ( v10 < 0xC )
  {
    v11[v10] = a2;
    v10 = v3 + 1;
    v8 = 4;
    if ( !sysctl(v11, v3 + 1, &v9, &v8, nullptr, 0) )
      return v9;
LABEL_4:
    v4 = __error();
    v5 = strerror(*v4);
    v6 = 0;
    sub_100000AE0((int)"error from sysctl: %s\n", v5);
    return v6;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x37Fu);
  return sub_100000AE0(895);
}
// 1000AE23D: using guessed type char under_debugger;
