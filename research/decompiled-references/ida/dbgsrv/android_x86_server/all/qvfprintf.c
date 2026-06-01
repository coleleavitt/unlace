/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvfprintf
// Address: 0x000B9A10

//----- (000B9A10) --------------------------------------------------------
int __cdecl qvfprintf(FILE *a1, char *s, __gnuc_va_list __varargs)
{
  size_t v3; // eax
  const char *v4; // eax
  int v6; // ecx
  _DWORD v7[7]; // [esp+0h] [ebp-1Ch] BYREF

  v7[2] = __readgsdword(0x14u);
  if ( a1 )
  {
    v3 = strlen(s);
    v4 = sub_B9730(s, (unsigned int)v7 - ((v3 + 115) & 0xFFFFFFF0), v3 + 100);
    return vfprintf(a1, v4, __varargs);
  }
  else
  {
    set_qerrno(1);
    *(_DWORD *)__errno(v6) = 9;
    set_qerrno(1);
    return -1;
  }
}
// B9A80: variable 'v6' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
