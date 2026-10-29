__int16 __fastcall sub_40BDE0(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r12
  void *v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int16 result; // ax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v2 = *a1;
  ptr = nullptr;
  v12 = 0;
  v3 = *(_QWORD *)(v2 + 1408);
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v12 = v5;
    memmove(ptr, a2, v6);
    *((_BYTE *)ptr + v6) = 0;
    v7 = ptr;
    v8 = sub_3D80D0(v3 + 40, (__int64)&ptr);
    if ( v7 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v7);
    }
  }
  else
  {
    v8 = sub_3D80D0(v3 + 40, (__int64)&ptr);
  }
  if ( v8 == (_QWORD *)(v3 + 48) )
    return 0;
  v9 = *((unsigned int *)v8 + 14);
  if ( !*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16 * v9) )
    return 0;
  result = v9 | 0x8000;
  if ( (_DWORD)v9 == -1 )
    return 0;
  return result;
}

