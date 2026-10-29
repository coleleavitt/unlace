unsigned __int64 __fastcall sub_F5BD50(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // r9
  int v7; // ebx
  unsigned int i; // eax
  _QWORD *v9; // rsi
  unsigned int v10; // eax
  __m128 v12; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  if ( (_DWORD)v3 )
  {
    v5 = *a2;
    v6 = a2[1];
    v7 = 1;
    for ( i = (v3 - 1)
            & (((0xBF58476D1CE4E5B9LL
               * (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)
                | ((unsigned __int64)(((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4)) << 32))) >> 31)
             ^ (484763065 * (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)))); ; i = (v3 - 1) & v10 )
    {
      v9 = (_QWORD *)(v4 + 24LL * i);
      if ( v5 == *v9 && v6 == v9[1] )
        break;
      if ( *v9 == -4096 && v9[1] == -4096 )
        goto LABEL_7;
      v10 = v7 + i;
      ++v7;
    }
    sub_F5BCD0(&v12, v9, (_QWORD *)(v4 + 24 * v3), a1, 1);
    return v12.m128_u64[0];
  }
  else
  {
LABEL_7:
    sub_F5BCD0(&v12, (_QWORD *)(v4 + 24 * v3), (_QWORD *)(v4 + 24 * v3), a1, 1);
    return v12.m128_u64[0];
  }
}

