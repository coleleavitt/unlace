__int64 __fastcall sub_1DE0(__int64 a1)
{
  unsigned __int64 v1; // r13
  unsigned __int64 v2; // r12
  int i; // eax
  int v4; // r14d
  int v5; // r14d
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v12; // ebp
  int v13; // eax
  __int64 v14; // rsi

  v1 = 0;
  v2 = -1;
  qlseek(a1, 0, 0);
  set_processor_type("6809", 1);
  set_target_assembler(5);
LABEL_2:
  for ( i = qlgetc(a1); i != -1; i = qlgetc(a1) )
  {
    if ( i != 2 )
    {
      if ( i == 22 )
      {
        v12 = qlgetc(a1);
        v13 = qlgetc(a1);
        setinf(15, v13 | (v12 << 8));
        v14 = getinf(12);
        setinf(14, v14);
        goto LABEL_2;
      }
      if ( !i )
        goto LABEL_2;
      if ( under_debugger )
        BUG();
      interr(20065);
    }
    v4 = qlgetc(a1);
    v5 = qlgetc(a1) | (v4 << 8);
    v6 = (int)qlgetc(a1);
    v7 = 16 * getinf(12) + v5;
    v8 = v7 + v6;
    v9 = qlseek(a1, 0, 1);
    file2base(a1, v9, v7, v8, 1);
    if ( v2 > v7 )
      v2 = v7;
    if ( v1 < v8 )
      v1 = v8;
  }
  v10 = getinf(12);
  sub_1750(v10, v2, v1);
  create_filename_cmt();
  return sub_15E0(0xBB8u);
}
