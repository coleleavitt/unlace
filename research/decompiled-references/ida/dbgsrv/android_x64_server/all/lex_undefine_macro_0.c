/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_undefine_macro_0
// Address: 0x0000000000083C80

//----- (0000000000083C80) ----------------------------------------------------
unsigned __int64 __fastcall lex_undefine_macro_0(__int64 a1, const char *a2)
{
  _QWORD *v2; // r14
  size_t v3; // rax
  size_t v4; // rbx
  char *v5; // r13
  size_t v6; // rbp
  __int64 *v7; // rbx
  __int128 dest; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h]
  unsigned __int64 v11; // [rsp+20h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 504) )
  {
    if ( !(_BYTE)under_debugger )
      interr(303);
    BUG();
  }
  v2 = *(_QWORD **)(a1 + 456);
  dest = 0;
  ptr = nullptr;
  v3 = strlen(a2);
  if ( v3 >= 0xFFFFFFFFFFFFFFF0LL )
    sub_8BF30();
  v4 = v3;
  if ( v3 >= 0x17 )
  {
    v6 = (v3 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    v5 = (char *)operator new(v6);
    ptr = v5;
    *(_QWORD *)&dest = v6 | 1;
    *((_QWORD *)&dest + 1) = v4;
    goto LABEL_7;
  }
  LOBYTE(dest) = 2 * v3;
  v5 = (char *)&dest + 1;
  if ( v3 )
LABEL_7:
    memcpy(v5, a2, v4);
  v5[v4] = 0;
  v7 = sub_8C8F0(v2, (unsigned __int8 *)&dest);
  if ( (dest & 1) != 0 )
    operator delete(ptr);
  if ( v7 )
    sub_8D710(*(_QWORD **)(a1 + 456), v7);
  return __readfsqword(0x28u);
}
// 158B40: using guessed type __int64 under_debugger;
