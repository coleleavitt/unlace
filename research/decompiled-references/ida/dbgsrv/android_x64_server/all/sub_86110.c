/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86110
// Address: 0x0000000000086110

//----- (0000000000086110) ----------------------------------------------------
__int64 __fastcall sub_86110(__int64 a1, int a2, __int64 a3, double a4, __m128 a5)
{
  __int64 result; // rax
  int v7; // eax
  const char *v8; // r15
  size_t v9; // rax
  size_t v10; // r12
  char *v11; // r13
  size_t v12; // rbp
  __int64 *v13; // rbx
  __int128 dest; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h]
  unsigned __int64 v16; // [rsp+20h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( !a2 )
    sub_851A0(a1, a3);
  if ( (unsigned __int8)sub_856B0(a1, a3) )
    return 0;
  v7 = sub_85330(a1, a3, &dest, a4, a5);
  result = (unsigned __int8)dest | (unsigned int)-(v7 != 0);
  if ( (_DWORD)result != -1 )
  {
    if ( (_DWORD)result == 2 )
      return 0;
    if ( (_DWORD)result == 1 )
      return 1;
    if ( *(_QWORD *)(a3 + 8) )
      v8 = *(const char **)a3;
    else
      v8 = s1;
    dest = 0;
    ptr = nullptr;
    v9 = strlen(v8);
    if ( v9 >= 0xFFFFFFFFFFFFFFF0LL )
      sub_8BF30();
    v10 = v9;
    if ( v9 >= 0x17 )
    {
      v12 = (v9 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      v11 = (char *)operator new(v12);
      ptr = v11;
      *(_QWORD *)&dest = v12 | 1;
      *((_QWORD *)&dest + 1) = v10;
    }
    else
    {
      LOBYTE(dest) = 2 * v9;
      v11 = (char *)&dest + 1;
      if ( !v9 )
        goto LABEL_19;
    }
    memcpy(v11, v8, v10);
LABEL_19:
    v11[v10] = 0;
    v13 = sub_8D8D0((_QWORD *)(a1 + 88), (unsigned __int8 *)&dest);
    if ( (dest & 1) != 0 )
      operator delete(ptr);
    if ( v13 )
      *(_WORD *)(a3 + 24) = *((_WORD *)v13 + 20);
    else
      *(_WORD *)(a3 + 24) = 2;
    return 0;
  }
  return result;
}
