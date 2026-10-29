/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F678
// Address: 0x000000000047F678

//----- (000000000047F678) ----------------------------------------------------
__int64 __fastcall sub_47F678(__int64 a1, unsigned __int64 a2, int a3, __int64 *a4)
{
  __int64 v7; // x7
  __int64 v8; // x2
  __int64 v9; // x3
  char *v10; // x20
  int v11; // w19
  int v12; // w28
  char *v13; // x1
  int v14; // w3
  bool v15; // nf
  int v16; // w19
  int v17; // w19
  int v18; // w19
  int v20; // w0
  char s1[8]; // [xsp+60h] [xbp-450h] BYREF
  __int64 v22; // [xsp+68h] [xbp-448h]
  __int64 v23; // [xsp+70h] [xbp-440h]
  __int64 v24; // [xsp+78h] [xbp-438h]
  __int64 v25; // [xsp+88h] [xbp-428h]
  __int64 v26; // [xsp+90h] [xbp-420h]
  __int64 v27; // [xsp+98h] [xbp-418h]
  __int64 v28; // [xsp+A0h] [xbp-410h]
  _BYTE v29[1024]; // [xsp+A8h] [xbp-408h] BYREF
  __int64 v30; // [xsp+4A8h] [xbp-8h] BYREF

  v7 = a4[1];
  v25 = *a4;
  v26 = v7;
  v8 = a4[2];
  v9 = a4[3];
  *(_QWORD *)s1 = v25;
  v22 = v7;
  v23 = v8;
  v24 = v9;
  v27 = v8;
  v28 = v9;
  callui(23, a3, s1);
  if ( a1 )
  {
    v10 = v29;
    v11 = 0;
    v12 = 0;
    while ( a2 > v11 )
    {
      while ( 1 )
      {
        v13 = (char *)((char *)&v30 - v10);
        if ( !v12 )
        {
          v10 += (int)sub_49B748(v10, (unsigned __int64)v13, "%04X:", v11);
          v13 = (char *)((char *)&v30 - v10);
        }
        v14 = v11 <= 0 ? -(-v11 & 0xF) : v12;
        ++v11;
        v10 += (int)sub_49B748(v10, (unsigned __int64)v13, " %02X", *(unsigned __int8 *)(a1 + v14));
        v12 = v11 & 0xF;
        if ( (v11 & 0xF) != 0 )
          break;
        sub_47F5E0(a1, 16, v10);
        sub_40A690((int)"%s\n", v29);
        a1 += 16;
        v10 = v29;
        if ( a2 <= v11 )
          goto LABEL_11;
      }
    }
LABEL_11:
    v16 = -v11;
    v15 = v16 < 0;
    v17 = v16 & 0xF;
    if ( v15 )
      v18 = v12;
    else
      v18 = -v17;
    if ( v18 )
    {
      v20 = sub_49B748(v10, (char *)&v30 - v10, "%*c", -3 * v18 + 48, 32);
      sub_47F5E0(a1, v18, &v10[v20]);
      sub_40A690((int)"%s\n", v29);
    }
  }
  else
  {
    sub_40A690((int)"vshow_hex(nullptr)\n");
  }
  return v30 ^ _stack_chk_guard;
}
// 47F678: could not find valid save-restore pair for x28
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
