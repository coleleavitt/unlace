/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: main
// Address: 0x0000000140040260

//----- (0000000140040260) ----------------------------------------------------
int __fastcall main(int argc, const char **argv, const char **envp)
{
  char *v5; // r8
  void *v7[2]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v8; // [rsp+30h] [rbp-19h]
  void *v9; // [rsp+40h] [rbp-9h] BYREF
  __int64 v10; // [rsp+48h] [rbp-1h]
  __int64 v11; // [rsp+50h] [rbp+7h]
  void *v12; // [rsp+58h] [rbp+Fh]
  __int128 v13; // [rsp+60h] [rbp+17h]
  void *Block[2]; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+37h]
  __int64 (*v16)(char *, ...); // [rsp+88h] [rbp+3Fh]
  char v17; // [rsp+90h] [rbp+47h]

  sub_14002DD00();
  qword_1400CB070 = (__int64)sub_14005D640();
  if ( qword_1400CB070 && sub_140017CA0() )
  {
    *(_OWORD *)v7 = 0;
    v8 = 0;
    if ( sub_14005D470("IDA_DBGSRV_PASSWD", (__int64)v7) )
    {
      v5 = (char *)v7[1] - 1;
      if ( !v7[1] )
        v5 = nullptr;
      if ( v5 )
        sub_140001810((__int64)&xmmword_1400CB100, v7[0], (size_t)v5);
      else
        *(&xmmword_1400CB100 + 1) = nullptr;
    }
    sub_1400542D0("IDA Windows 64-bit remote debug server(MT) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9, 3, 31);
    byte_1400CB118 = byte_1400CB120;
    v9 = nullptr;
    v10 = 0;
    v11 = 0;
    v12 = nullptr;
    v13 = 0;
    *(_OWORD *)Block = 0;
    v15 = 0;
    v16 = sub_1400542D0;
    v17 = 1;
    sub_1400538E0((__int64)&qword_1400CB090, (__int64)&v9, 1);
    sub_140068920((__int64)&v9, (__int128 *)&qword_140096760, 1);
    if ( byte_1400CB118 )
      sub_140068920((__int64)&v9, (__int128 *)"k", 2);
    sub_1400689D0((__int64)&v9, argc, (const void **)argv, (__int64)&qword_1400CB090);
    sub_1400540A0((__int64)&qword_1400CB090);
    sub_140053930((__int64)&qword_1400CB090);
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
      Block[0] = nullptr;
      v15 = 0;
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      j_free(v12);
      v12 = nullptr;
      *((_QWORD *)&v13 + 1) = 0;
    }
    if ( v9 )
    {
      v10 = 0;
      j_free(v9);
      v9 = nullptr;
      v11 = 0;
    }
    if ( v7[0] )
    {
      v7[1] = nullptr;
      j_free(v7[0]);
    }
    return 0;
  }
  else
  {
    sub_1400542D0("Could not initialize subsystem!");
    return -1;
  }
}
// 140096760: using guessed type __int64 qword_140096760;
// 1400CB070: using guessed type __int64 qword_1400CB070;
// 1400CB090: using guessed type __int64 qword_1400CB090;
// 1400CB118: using guessed type char byte_1400CB118;
// 1400CB120: using guessed type char byte_1400CB120;
