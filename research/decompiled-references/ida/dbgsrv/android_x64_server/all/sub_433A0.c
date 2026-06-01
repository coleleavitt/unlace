/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433A0
// Address: 0x00000000000433A0

//----- (00000000000433A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_433A0(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r13
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rbp
  const char *v8; // rdi
  const char *v9; // rsi
  bool v10; // cc
  unsigned __int64 v11; // r13
  unsigned __int64 v13; // [rsp+0h] [rbp-38h]

  if ( *a2 > (unsigned __int64)a3 || (v4 = 80LL * a2[1] + *a2, v4 <= (unsigned __int64)a3) )
  {
    if ( !(_BYTE)under_debugger )
      interr(30067);
LABEL_19:
    BUG();
  }
  v5 = a3[1];
  if ( !v5 )
    return 0;
  v13 = *a3;
  v6 = a3 + 10;
  if ( a3 + 10 != (unsigned __int64 *)v4 )
  {
    v7 = a3[3];
    do
    {
      v8 = s1;
      if ( v7 )
        v8 = (const char *)a3[2];
      v9 = s1;
      if ( v6[3] )
        v9 = (const char *)v6[2];
      if ( strcmp(v8, v9) )
        break;
      v5 = v6[1];
      v6 += 10;
    }
    while ( (_QWORD *)v4 != v6 );
  }
  v10 = v5 <= v13;
  v11 = v5 - v13;
  if ( v10 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30068);
    goto LABEL_19;
  }
  return v11;
}
// 158B40: using guessed type __int64 under_debugger;
