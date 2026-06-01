__int64 __fastcall sub_176C6B0(_QWORD *a1, __int64 a2, __m128 a3)
{
  void **v3; // rax
  __int64 *v4; // rbp
  __int64 result; // rax
  int v6; // ebx
  int v7; // eax
  __int64 v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = sub_176A140(a1, *(void ***)(a2 + 16), a3);
  if ( !v3 )
    return 1;
  v4 = (__int64 *)v3;
  if ( *(_DWORD *)(*a1 + 12632LL) || (result = a2, v4 != *(__int64 **)(a2 + 16)) )
  {
    v6 = *(_DWORD *)(a2 + 4);
    v8[0] = *v4;
    v8[1] = (__int64)(v4 + 1);
    v7 = sub_F6CE20(v8);
    return sub_19AB130(*a1, (_DWORD)v4, v7, 0, 0, v6, 0);
  }
  return result;
}
