__int64 __fastcall sub_1836BF0(__int64 a1, __m128i *a2, __int64 a3, __m128 a4, __m128i a5)
{
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // rcx
  unsigned __int64 *v8; // rbx
  _WORD v10[100]; // [rsp+0h] [rbp-C8h] BYREF

  v5 = *(unsigned __int64 **)(a3 + 8);
  v6 = &v5[*(unsigned int *)(a3 + 16)];
  if ( v6 == v5 )
    return 0;
  v7 = *v5;
  if ( *(_WORD *)(*(_QWORD *)(*v5 + 72) + 8LL) == 26 )
  {
    v8 = v5 + 1;
    do
    {
      v10[0] = 1;
      sub_1833C10(a1, 0, a2, v7, v10, (_BYTE *)v10 + 1, a4, a5);
      if ( v6 == v8 )
        return 0;
      v7 = *v8++;
    }
    while ( *(_WORD *)(*(_QWORD *)(v7 + 72) + 8LL) == 26 );
  }
  sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), *(_DWORD *)(v7 + 24), 0x1233u, 0);
  sub_15F7200(v10);
  return 1;
}
