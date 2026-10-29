/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrdup
// Address: 0x000000010007CD90

//----- (000000010007CD90) ----------------------------------------------------
_BYTE *__fastcall qstrdup(const char *a1)
{
  size_t v1; // r14
  _BYTE *v2; // rax
  _BYTE *v3; // rbx

  if ( !a1 )
    return nullptr;
  v1 = strlen(a1) + 1;
  v2 = malloc(v1);
  if ( v2 )
  {
    v3 = v2;
    qstrncpy(v2, (__int64)a1, v1);
    return v3;
  }
  else
  {
    set_qerrno();
    *__error() = 12;
    set_qerrno();
    return nullptr;
  }
}
