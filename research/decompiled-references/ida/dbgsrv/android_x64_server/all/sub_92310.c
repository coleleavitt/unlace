/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92310
// Address: 0x0000000000092310

//----- (0000000000092310) ----------------------------------------------------
__int64 __fastcall sub_92310(int a1, __int64 a2, const char *a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // rbx
  void *ptr[3]; // [rsp+8h] [rbp-440h] BYREF
  char s[1024]; // [rsp+20h] [rbp-428h] BYREF
  unsigned __int64 v13; // [rsp+420h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  v6 = 53;
  if ( a1 )
    v6 = 2 * (a1 > 0) + 52;
  sub_AB1F0((__int64)ptr, v6);
  qvsnprintf(s, 1024, a3, a4);
  v7 = __strlen_chk(s, 1024);
  sub_56350((__int64)ptr, s, v7 + 1);
  v8 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)a2 + 16LL))(
                 a2,
                 (unsigned __int8)v6,
                 ptr);
  qfree(v8);
  if ( v6 == 52 )
    exit(1);
  v9 = __strlen_chk(s, 1024);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return v9;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
