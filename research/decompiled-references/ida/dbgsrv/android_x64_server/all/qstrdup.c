/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrdup
// Address: 0x00000000000C31D0

//----- (00000000000C31D0) ----------------------------------------------------
_BYTE *__fastcall qstrdup(const char *a1)
{
  size_t v1; // rbx
  _BYTE *v2; // rax
  _BYTE *v3; // r15

  if ( !a1 )
    return nullptr;
  v1 = strlen(a1) + 1;
  v2 = malloc(v1);
  if ( !v2 )
  {
    set_qerrno(1u);
    *(_DWORD *)__errno(1) = 12;
    set_qerrno(1u);
    return nullptr;
  }
  v3 = v2;
  qstrncpy(v2, (__int64)a1, v1);
  return v3;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
