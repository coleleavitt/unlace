/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_827A0
// Address: 0x00000000000827A0

//----- (00000000000827A0) ----------------------------------------------------
__int64 *__fastcall sub_827A0(__int64 a1, const char *a2)
{
  _QWORD *v2; // r14
  size_t v3; // rax
  size_t v4; // r13
  char *v5; // r12
  size_t v6; // rbx
  __int64 *v7; // rbx
  __int64 *result; // rax
  __int128 dest; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
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
    goto LABEL_6;
  }
  LOBYTE(dest) = 2 * v3;
  v5 = (char *)&dest + 1;
  if ( v3 )
LABEL_6:
    memcpy(v5, a2, v4);
  v5[v4] = 0;
  v7 = sub_8C8F0(v2, (unsigned __int8 *)&dest);
  if ( (dest & 1) != 0 )
    operator delete(ptr);
  result = v7 + 5;
  if ( !v7 )
    return nullptr;
  return result;
}
