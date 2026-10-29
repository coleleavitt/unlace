__int64 __fastcall sub_F85670(__int64 a1, char *a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // r8d
  _QWORD *v8; // rsi
  int v10; // edx
  __m128 v11; // [rsp+0h] [rbp-18h] BYREF

  v4 = sub_F851A0(a1, a2);
  v5 = *(_QWORD *)v4;
  v6 = *(unsigned int *)(v4 + 16);
  if ( (_DWORD)v6 )
  {
    v7 = (v6 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
    v8 = (_QWORD *)(v5 + 16LL * v7);
    if ( a3 == *v8 )
    {
LABEL_3:
      sub_F80120(&v11, v8, (_QWORD *)(v5 + 16 * v6), v4, 1);
      return *(unsigned int *)(v11.m128_u64[0] + 8);
    }
    if ( *v8 != -4096 )
    {
      v10 = 1;
      do
      {
        v7 = (v6 - 1) & (v10 + v7);
        v8 = (_QWORD *)(v5 + 16LL * v7);
        if ( a3 == *v8 )
          goto LABEL_3;
        ++v10;
      }
      while ( *v8 != -4096 );
    }
  }
  sub_F80120(&v11, (_QWORD *)(v5 + 16LL * (unsigned int)v6), (_QWORD *)(v5 + 16LL * (unsigned int)v6), v4, 1);
  return *(unsigned int *)(v11.m128_u64[0] + 8);
}
