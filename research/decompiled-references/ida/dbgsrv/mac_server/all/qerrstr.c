/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qerrstr
// Address: 0x00000001000745A0

//----- (00000001000745A0) ----------------------------------------------------
__int64 __fastcall qerrstr(int __errnum)
{
  int v1; // r15d
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  size_t v5; // rax
  size_t v6; // r15
  unsigned __int64 v7; // r12
  void *v8; // rax
  char __strerrbuf[1032]; // [rsp+0h] [rbp-430h] BYREF

  v1 = __errnum;
  if ( __errnum == -1 )
    v1 = *__error();
  off_1000ACFB0();
  v3 = v2;
  v4 = v2 + 176;
  if ( strerror_r(v1, __strerrbuf, 0x400u) )
  {
    sub_100002D00(v4, "unknown error code %d", v1);
  }
  else
  {
    v5 = strlen(__strerrbuf);
    if ( v5 )
    {
      v6 = v5;
      v7 = v5 + 1;
      v8 = *(void **)(v3 + 176);
      if ( *(_QWORD *)(v3 + 192) < v7 )
      {
        v8 = qvector_reserve(v4, *(void **)(v3 + 176), v7, 1u);
        *(_QWORD *)v4 = v8;
      }
      *(_QWORD *)(v3 + 184) = v7;
      memmove(v8, __strerrbuf, v6);
      *(_BYTE *)(*(_QWORD *)(v3 + 176) + v6) = 0;
    }
    else
    {
      *(_QWORD *)(v3 + 184) = 0;
    }
  }
  return *(_QWORD *)v4;
}
// 1000745D9: variable 'v2' is possibly undefined
// 1000ACFB0: using guessed type void (*off_1000ACFB0)(void);
