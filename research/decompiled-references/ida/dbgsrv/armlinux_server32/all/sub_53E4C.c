/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53E4C
// Address: 0x00053E4C

//----- (00053E4C) --------------------------------------------------------
int sub_53E4C(int a1, char *a2, ...)
{
  int (*v4)(void); // r2
  int v5; // r8
  const char *v6; // r0
  va_list varg_r2; // [sp+28h] [bp+1Ch] BYREF

  va_start(varg_r2, a2);
  if ( *(_BYTE *)(a1 + 412) )
  {
    v4 = *(int (**)(void))(*(_DWORD *)a1 + 204);
    if ( v4 == sub_52F88 )
      v5 = *_errno_location();
    else
      v5 = v4();
    sub_53710(0, *(_BYTE **)(a1 + 248), a2, (int)varg_r2);
    v6 = (const char *)sub_79440(v5);
    sub_17480(a1, ": %s\n", v6);
  }
  return 0;
}
