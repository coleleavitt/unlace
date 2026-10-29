/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvfprintf
// Address: 0x00084288

//----- (00084288) --------------------------------------------------------
int __fastcall qvfprintf(FILE *a1, char *s, void *a3)
{
  size_t v5; // r0
  const char *v6; // r0
  int v8; // r0
  __gnuc_va_list v9[3]; // [sp+4h] [bp-20h] BYREF
  int v10; // [sp+10h] [bp-14h] BYREF

  v9[1] = &_stack_chk_guard;
  v9[2] = &v10;
  if ( a1 )
  {
    v9[0] = a3;
    v5 = strlen(s);
    v6 = sub_840A0(s, (_BYTE *)v9 - ((v5 + 107) & 0xFFFFFFF8), v5 + 100);
    return vfprintf(a1, v6, v9[0]);
  }
  else
  {
    v8 = set_qerrno(1);
    *(_DWORD *)_errno(v8) = 9;
    set_qerrno(1);
    return -1;
  }
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
