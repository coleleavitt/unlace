unsigned __int64 __fastcall sub_13F9B60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r9
  unsigned int v6; // edx
  __int64 *v7; // rsi
  __int64 v8; // rdi
  int v10; // esi
  int v11; // r8d
  __int64 v12; // rdi
  __m128 v13; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  if ( (_DWORD)v2 )
  {
    v6 = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v7 = (__int64 *)(v4 + 104LL * v6);
    v8 = *v7;
    if ( *v7 == a2 )
    {
LABEL_3:
      sub_13F9AB0(&v13, v7, (_QWORD *)(v4 + 104 * v2), a1, 1);
      return v13.m128_u64[0];
    }
    v10 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v11 = v10 + 1;
        v6 = (v2 - 1) & (v10 + v6);
        v7 = (__int64 *)(v4 + 104LL * v6);
        v12 = *v7;
        if ( *v7 == a2 )
          goto LABEL_3;
        v10 = v11;
      }
      while ( v12 != -4096 );
    }
  }
  sub_13F9AB0(&v13, (_QWORD *)(v4 + 104 * v2), (_QWORD *)(v4 + 104 * v2), a1, 1);
  return v13.m128_u64[0];
}
