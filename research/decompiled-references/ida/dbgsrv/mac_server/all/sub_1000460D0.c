/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000460D0
// Address: 0x00000001000460D0

//----- (00000001000460D0) ----------------------------------------------------
__int64 __fastcall sub_1000460D0(__int64 a1, const char *a2)
{
  _QWORD *v2; // r14
  size_t v3; // rax
  size_t v4; // r12
  char *v5; // r13
  size_t v6; // r14
  __int64 *v7; // r14
  _Unwind_Exception *v9; // rax
  _Unwind_Exception *v10; // rbx
  _QWORD *v11; // [rsp+0h] [rbp-50h]
  _QWORD __dst[2]; // [rsp+8h] [rbp-48h] BYREF
  void *__p; // [rsp+18h] [rbp-38h]

  if ( *(_BYTE *)(a1 + 568) == 1 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x12Fu);
    v10 = v9;
    if ( (__dst[0] & 1) != 0 )
    {
      operator delete(__p);
      _Unwind_Resume(v10);
    }
    _Unwind_Resume(v9);
  }
  v2 = *(_QWORD **)(a1 + 520);
  v3 = strlen(a2);
  if ( v3 >= 0xFFFFFFFFFFFFFFF8LL )
    sub_10004CF00();
  v4 = v3;
  if ( v3 >= 0x17 )
  {
    v11 = *(_QWORD **)(a1 + 520);
    v6 = 26;
    if ( (v3 | 7) != 0x17 )
      v6 = (v3 | 7) + 1;
    v5 = (char *)operator new(v6);
    __p = v5;
    __dst[0] = v6 + 1;
    v2 = v11;
    __dst[1] = v4;
    goto LABEL_9;
  }
  LOBYTE(__dst[0]) = 2 * v3;
  v5 = (char *)__dst + 1;
  if ( v3 )
LABEL_9:
    memcpy(v5, a2, v4);
  v5[v4] = 0;
  v7 = (__int64 *)sub_10004DC80(v2, (unsigned __int8 *)__dst);
  if ( (__dst[0] & 1) != 0 )
    operator delete(__p);
  if ( v7 )
    sub_10004F030(*(_QWORD **)(a1 + 520), v7);
  return __stack_chk_guard;
}
// 1000461FE: variable 'v9' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
