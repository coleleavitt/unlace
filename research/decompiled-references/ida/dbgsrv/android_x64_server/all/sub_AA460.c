/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AA460
// Address: 0x00000000000AA460

//----- (00000000000AA460) ----------------------------------------------------
char *__fastcall sub_AA460(_BYTE *a1, int a2, const char *a3, __int64 a4)
{
  int v6; // ebp
  const char *v7; // rax
  const char *v8; // rbx
  size_t v9; // rax
  void *v10; // rax
  char *v11; // rbx
  char *s[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h]
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( a1[68] )
  {
    if ( !(_BYTE)under_debugger )
      interr(1621);
    BUG();
  }
  v6 = 53;
  if ( a2 )
    v6 = 2 * (a2 > 0) + 52;
  sub_AB1F0((__int64)ptr, v6);
  *(_OWORD *)s = 0;
  v14 = 0;
  sub_4BA10((__int64)s, a3, a4);
  if ( s[1] )
    v7 = s[0];
  else
    v7 = s1;
  v8 = &byte_EB522;
  if ( v7 )
    v8 = v7;
  v9 = strlen(v8);
  sub_56350((__int64)ptr, v8, v9 + 1);
  v10 = (void *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD, void **))(*(_QWORD *)a1 + 16LL))(
                  a1,
                  (unsigned __int8)v6,
                  ptr);
  qfree(v10);
  if ( v6 == 52 )
    exit(1);
  v11 = s[1] - 1;
  if ( !s[1] )
    v11 = nullptr;
  if ( s[0] )
  {
    s[1] = nullptr;
    qfree(s[0]);
    s[0] = nullptr;
    v14 = 0;
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return v11;
}
// 158B40: using guessed type __int64 under_debugger;
