/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100076F2C
// Address: 0x0000000100076F2C

//----- (0000000100076F2C) ----------------------------------------------------
_QWORD *__fastcall sub_100076F2C(pid_t a1)
{
  __int64 v2; // x0
  char *v4; // x0
  char *v5; // x1
  char v6; // w2
  __int64 v7; // x3
  __int64 v8; // x4
  unsigned int v9; // [xsp+4h] [xbp-1Ch] BYREF

  v2 = sub_1000760CC();
  if ( (unsigned int)sub_10007596C(v2, &v9, a1, 0, -1) + 1 < 2 || (~v9 & 0x7F) != 0 )
    return nullptr;
  if ( under_debugger == 1 )
    __break(1u);
  interr(1150);
  return sub_100076FD8(v4, v5, v6, v7, v8);
}
// 100076FD5: variable 'v4' is possibly undefined
// 100076FD5: variable 'v5' is possibly undefined
// 100076FD5: variable 'v6' is possibly undefined
// 100076FD5: variable 'v7' is possibly undefined
// 100076FD5: variable 'v8' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
