/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FEE0
// Address: 0x000000000005FEE0

//----- (000000000005FEE0) ----------------------------------------------------
__int64 __fastcall sub_5FEE0(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  char v7; // bl
  bool v8; // cf
  char *v9; // rsi
  size_t v10; // rax
  char v12; // [rsp+0h] [rbp-428h] BYREF
  char v13; // [rsp+1h] [rbp-427h] BYREF
  unsigned __int64 v14; // [rsp+408h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v12 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( (unsigned int)(v3 - 2) <= 0x1E )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( !v4 )
      goto LABEL_9;
    v5 = 0;
    do
    {
      v6 = v4 % (int)v3;
      v7 = 48;
      if ( (int)v6 > 9 )
        v7 = 55;
      *(&v12 + v5++) = v6 + v7;
      v8 = v4 < (int)v3;
      v4 /= (unsigned __int64)(int)v3;
    }
    while ( !v8 );
    if ( v5 )
    {
      v9 = &v12 + v5;
    }
    else
    {
LABEL_9:
      v9 = &v13;
      v12 = 48;
    }
    *v9 = 0;
    memrev(&v12, v9 - &v12);
  }
  v10 = __strlen_chk(&v12, 1024);
  *a2 = 7;
  sub_4ABC0((__int64)(a2 + 8), &v12, v10);
  return 0;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
