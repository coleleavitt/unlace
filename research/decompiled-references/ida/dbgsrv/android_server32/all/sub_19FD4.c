/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19FD4
// Address: 0x00019FD4

//----- (00019FD4) --------------------------------------------------------
int __fastcall sub_19FD4(int a1, int a2, unsigned __int64 *a3)
{
  int v3; // r0
  int v4; // r6
  int v5; // r5
  ssize_t v6; // r0
  char *v7; // r4
  _DWORD *v8; // r0
  _DWORD *v10; // [sp+8h] [bp-10h]
  char *endptr; // [sp+1Ch] [bp+4h] BYREF
  char buf[988]; // [sp+20h] [bp+8h] BYREF
  _BYTE v14[68]; // [sp+420h] [bp+408h] BYREF

  sub_1A0A8((int)v14, 64, 64, (int)"/proc/%d/task/%d/status", a1, a2);
  v3 = _open_2(v14, 0);
  v4 = -1;
  if ( v3 >= 0 )
  {
    v5 = v3;
    while ( 1 )
    {
      v6 = read(v5, buf, 0x3FFu);
      if ( v6 >= 0 )
        break;
      if ( *(_DWORD *)_errno(v6) != 4 )
        goto LABEL_11;
    }
    buf[v6] = 0;
    v7 = strstr(buf, "CapPrm:");
    v8 = (_DWORD *)_errno(v7);
    if ( v7 )
    {
      *v8 = 0;
      v10 = v8;
      *a3 = strtoull(v7 + 8, &endptr, 16);
      v4 = -1;
      if ( !*v10 )
        v4 = 0;
    }
    else
    {
      *v8 = 22;
    }
LABEL_11:
    close(v5);
  }
  return v4;
}
// 192E0: using guessed type int __fastcall _open_2(_DWORD, _DWORD);
// 192F8: using guessed type int __fastcall _errno(_DWORD);
