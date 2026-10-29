/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_678AC
// Address: 0x000678AC

//----- (000678AC) --------------------------------------------------------
void sub_678AC(char *a1, ...)
{
  const char *v1; // r1
  int v2; // r2
  int v3; // r3
  int *v4; // r1
  void *ptr; // [sp+8h] [bp-10h] BYREF
  int v6; // [sp+Ch] [bp-Ch]
  int v7; // [sp+10h] [bp-8h]
  int varg_r1; // [sp+2Ch] [bp+14h] BYREF
  va_list varg_r1a; // [sp+2Ch] [bp+14h]
  int varg_r2; // [sp+30h] [bp+18h]
  va_list varg_r3; // [sp+34h] [bp+1Ch] BYREF

  va_start(varg_r3, a1);
  va_start(varg_r1a, a1);
  varg_r1 = va_arg(varg_r3, _DWORD);
  varg_r2 = va_arg(varg_r3, _DWORD);
  ptr = nullptr;
  v6 = 0;
  v7 = 0;
  sub_18864((int)&ptr, a1, (int)varg_r1a);
  if ( v6 )
    v1 = (const char *)ptr;
  else
    v1 = (const char *)&dword_8DB98;
  sub_695E4("%s\n", v1);
  v3 = v6;
  if ( v6 )
  {
    v4 = (int *)ptr;
  }
  else
  {
    v3 = 1568;
    v4 = &dword_8DB98;
  }
  sub_23528((int)"%s", (int)v4, v2, v3);
  if ( ptr )
  {
    v6 = 0;
    sub_77F70(ptr);
  }
}
// 678EC: variable 'v2' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
