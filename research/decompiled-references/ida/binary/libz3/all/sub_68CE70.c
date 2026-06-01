__int64 *__fastcall sub_68CE70(__int64 *a1, __int64 a2)
{
  __m128i *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  void (__fastcall ***v6)(void *); // r12
  bool v7; // zf
  void (__fastcall ***v8)(_QWORD); // rbp
  void *ptr; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_68C3F0(a2);
  v3 = sub_1336AB0(*(_QWORD *)(a2 + 56), v2);
  *a1 = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  (*(void (__fastcall **)(void **))(**(_QWORD **)(a2 + 144) + 336LL))(&ptr);
  v4 = sub_1336AB0(*a1, ptr);
  v5 = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  v6 = (void (__fastcall ***)(void *))*a1;
  if ( *a1 )
  {
    v7 = (*((_DWORD *)v6 + 2))-- == 1;
    if ( v7 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  *a1 = v5;
  v8 = (void (__fastcall ***)(_QWORD))ptr;
  if ( !ptr )
    return a1;
  v7 = (*((_DWORD *)ptr + 2))-- == 1;
  if ( !v7 )
    return a1;
  (**v8)(v8);
  sub_186B220(v8);
  return a1;
}

