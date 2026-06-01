__int64 __fastcall sub_851D60(__int64 *a1, _DWORD *a2)
{
  bool v2; // zf
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // r12
  __int64 v6; // r13
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // rbp
  _QWORD *v10; // rbp
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+8h] [rbp-50h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v2 = *((_BYTE *)a1 + 12) == 0;
  v13 = __readfsqword(0x28u);
  if ( !v2 )
    goto LABEL_2;
  v5 = *a1;
  ptr = nullptr;
  v12 = 0;
  v6 = *(_QWORD *)(v5 + 5720);
  v5 += 5128;
  v7 = strlen((const char *)v5);
  v8 = v7 + 1;
  v9 = v7;
  ptr = (void *)qvector_reserve(&ptr, 0, v7 + 1, 1);
  *(_QWORD *)&v12 = v8;
  memmove(ptr, (const void *)v5, v9);
  *((_BYTE *)ptr + v9) = 0;
  v10 = sub_851620(v6, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  if ( v10 == (_QWORD *)(v6 + 8) )
  {
LABEL_2:
    result = 0;
    v4 = 0;
    if ( !a2 )
      return result;
    goto LABEL_3;
  }
  result = 1;
  if ( a2 )
  {
    v4 = *(unsigned __int8 *)(v10[7] + 4LL);
    if ( (_BYTE)v4 == 1 || (unsigned __int8)(v4 - 3) <= 1u )
      result = 1;
    else
      v4 = 0;
LABEL_3:
    *a2 = v4;
  }
  return result;
}
