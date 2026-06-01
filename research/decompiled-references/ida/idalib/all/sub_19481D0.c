__int64 __fastcall sub_19481D0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v4; // rax
  int v5; // ebx
  int v6; // r12d
  int v7; // eax
  __int64 v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = sub_1946B40(a1, *(void ***)(a2 + 16), a3, a4);
  if ( !v4 )
    return 1;
  v5 = (int)v4;
  v6 = *(_DWORD *)(a2 + 4);
  v9[0] = (__int64)*v4;
  v9[1] = (__int64)(v4 + 1);
  v7 = sub_F6CE20(v9);
  return sub_19AB130(*a1, v5, v7, 0, 0, v6, 0);
}
