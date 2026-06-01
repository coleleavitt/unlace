/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qerrstr
// Address: 0x00000000000B72D0

//----- (00000000000B72D0) ----------------------------------------------------
__int64 __fastcall qerrstr(__int64 errnum)
{
  int v1; // r15d
  char *v2; // rax
  char *v3; // rbx
  size_t v4; // rax
  size_t v5; // r14
  unsigned __int64 v6; // r13
  _QWORD *v7; // rax
  char *v8; // r12
  _QWORD *v9; // rbp
  _QWORD *v10; // rbp
  _QWORD *address; // rax

  v1 = errnum;
  if ( (_DWORD)errnum == -1 )
    v1 = *(_DWORD *)__errno(errnum);
  v2 = strerror(v1);
  if ( !v2 || (v3 = v2, (v4 = strlen(v2)) == 0) )
  {
    _emutls_get_address((unsigned __int64 *)qword_155628)[23] = 0;
LABEL_10:
    address = _emutls_get_address((unsigned __int64 *)qword_155628);
    sub_3BBA0((__int64)(address + 22), "unknown error code %d", v1);
    return _emutls_get_address((unsigned __int64 *)qword_155628)[22];
  }
  v5 = v4;
  v6 = v4 + 1;
  v7 = _emutls_get_address((unsigned __int64 *)qword_155628);
  v8 = (char *)v7[22];
  if ( v7[24] < v6 )
  {
    v9 = _emutls_get_address((unsigned __int64 *)qword_155628);
    v8 = (char *)qvector_reserve((__int64)(v9 + 22), v8, v6, 1u);
    v9[22] = v8;
  }
  v10 = _emutls_get_address((unsigned __int64 *)qword_155628);
  v10[23] = v6;
  memmove(v8, v3, v5);
  *(_BYTE *)(v10[22] + v5) = 0;
  if ( v10[23] <= 1u )
    goto LABEL_10;
  return _emutls_get_address((unsigned __int64 *)qword_155628)[22];
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 155628: using guessed type __int64 qword_155628[5];
