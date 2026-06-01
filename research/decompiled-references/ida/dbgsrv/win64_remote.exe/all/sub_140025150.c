/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140025150
// Address: 0x0000000140025150

//----- (0000000140025150) ----------------------------------------------------
void __fastcall sub_140025150(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  char *v6; // rbx
  const char *v7; // rax
  const char *v8; // r8
  char v9; // al
  const char *v10; // r8
  char v11; // al
  size_t v12; // r8
  const char *v13; // rdx
  char v14[8]; // [rsp+20h] [rbp-49h] BYREF
  void *v15[2]; // [rsp+28h] [rbp-41h]
  __int64 v16; // [rsp+38h] [rbp-31h]
  char v17[8]; // [rsp+40h] [rbp-29h] BYREF
  void *v18[2]; // [rsp+48h] [rbp-21h]
  __int64 v19; // [rsp+58h] [rbp-11h]
  char v20[8]; // [rsp+60h] [rbp-9h] BYREF
  void *v21[2]; // [rsp+68h] [rbp-1h]
  __int64 v22; // [rsp+78h] [rbp+Fh]
  char v23[8]; // [rsp+80h] [rbp+17h] BYREF
  void *v24[2]; // [rsp+88h] [rbp+1Fh]
  __int64 v25; // [rsp+98h] [rbp+2Fh]
  char v26[8]; // [rsp+A0h] [rbp+37h] BYREF
  void *Block[2]; // [rsp+A8h] [rbp+3Fh]
  __int64 v28; // [rsp+B8h] [rbp+4Fh]

  sub_140001810(a2, "Runtime error", 0xDu);
  v23[0] = 2;
  v25 = 0;
  *(_OWORD *)v24 = 0;
  v17[0] = 2;
  v18[1] = nullptr;
  v19 = 0;
  v18[0] = nullptr;
  sub_140029410(v17, a1, "line", 0);
  sub_140029410(v23, a1, "file", 0);
  if ( v17[0] == 2 && (__int64)v18[0] > 0 && v23[0] == 7 )
  {
    v6 = (char *)Str1;
    v7 = Str1;
    if ( v24[1] )
      v7 = (const char *)v24[0];
    v8 = "<unknown>";
    if ( *v7 )
      v8 = v7;
    sub_140024520(a2, " on %s:%d", v8, LODWORD(v18[0]));
  }
  else
  {
    v20[0] = 2;
    v21[1] = nullptr;
    v22 = 0;
    v21[0] = nullptr;
    sub_140029410(v20, a1, "func", 0);
    v6 = (char *)Str1;
    v9 = v20[0];
    if ( v20[0] == 7 && v21[1] > (void *)1 )
    {
      v26[0] = 2;
      Block[1] = nullptr;
      v28 = 0;
      Block[0] = nullptr;
      sub_140029410(v26, a1, (char *)&dword_1400920BC, 0);
      v10 = Str1;
      if ( v21[1] )
        v10 = (const char *)v21[0];
      sub_140024520(a2, " at %s+0x%a", v10, a4);
      if ( v26[0] == 5 )
      {
        sub_140024A20((_DWORD *)Block[0], v26);
      }
      else if ( v26[0] == 7 && Block[0] )
      {
        Block[1] = nullptr;
        j_free(Block[0]);
      }
      v9 = v20[0];
    }
    if ( v9 == 5 )
    {
      sub_140024A20((_DWORD *)v21[0], v20);
    }
    else if ( v9 == 7 && v21[0] )
    {
      v21[1] = nullptr;
      j_free(v21[0]);
    }
  }
  sub_1400048F0(a2, ": ", 2u);
  v14[0] = 2;
  v15[1] = nullptr;
  v16 = 0;
  v15[0] = nullptr;
  sub_140029410(v14, a1, "description", 0);
  v11 = v14[0];
  if ( v14[0] != 7 )
  {
    v12 = 19;
    v13 = "Unhandled exception";
    goto LABEL_31;
  }
  if ( !v15[1] || (v6 = (char *)v15[0]) != nullptr )
  {
    v12 = strlen(v6);
    v13 = v6;
LABEL_31:
    sub_1400048F0(a2, v13, v12);
    v11 = v14[0];
    v6 = (char *)v15[0];
  }
  if ( v11 == 5 )
  {
    sub_140024A20(v6, v14);
  }
  else if ( v11 == 7 && v6 )
  {
    v15[1] = nullptr;
    j_free(v6);
    v16 = 0;
  }
  v14[0] = 2;
  v15[0] = nullptr;
  if ( v17[0] == 5 )
  {
    sub_140024A20((_DWORD *)v18[0], v17);
  }
  else if ( v17[0] == 7 && v18[0] )
  {
    v18[1] = nullptr;
    j_free(v18[0]);
    v19 = 0;
  }
  v17[0] = 2;
  v18[0] = nullptr;
  if ( v23[0] == 5 )
  {
    sub_140024A20((_DWORD *)v24[0], v23);
  }
  else if ( v23[0] == 7 )
  {
    if ( v24[0] )
    {
      v24[1] = nullptr;
      j_free(v24[0]);
    }
  }
}
// 1400920BC: using guessed type int dword_1400920BC;
