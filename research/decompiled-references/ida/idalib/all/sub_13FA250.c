__int64 __fastcall sub_13FA250(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 result; // rax
  unsigned int *v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // edi
  _QWORD *v10; // r9
  unsigned __int64 v11; // rax
  int v12; // r8d
  __m128 v13; // [rsp+0h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a2 + 905) & 1) != 0 )
  {
    v6 = *(unsigned int *)(a1 + 536);
    v7 = a1 + 520;
    v8 = *(_QWORD *)(a1 + 520);
    if ( (_DWORD)v6 )
    {
      v9 = (v6 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v10 = (_QWORD *)(v8 + 16LL * v9);
      if ( a2 == *v10 )
      {
LABEL_8:
        sub_13FA1E0(&v13, v10, (_QWORD *)(16 * v6 + v8), v7, 1);
        v11 = v13.m128_u64[0];
        return *(unsigned int *)(v11 + 8);
      }
      if ( *v10 != -4096 )
      {
        v12 = 1;
        do
        {
          v9 = (v6 - 1) & (v12 + v9);
          v10 = (_QWORD *)(v8 + 16LL * v9);
          if ( a2 == *v10 )
            goto LABEL_8;
          ++v12;
        }
        while ( *v10 != -4096 );
      }
    }
    sub_13FA1E0(&v13, (_QWORD *)(v8 + 16LL * (unsigned int)v6), (_QWORD *)(v8 + 16LL * (unsigned int)v6), v7, 1);
    v11 = v13.m128_u64[0];
    return *(unsigned int *)(v11 + 8);
  }
  v2 = *(_DWORD *)(a2 + 32);
  result = 0;
  if ( v2 )
  {
    v4 = *(unsigned int **)a1;
    v5 = v2 & 0x7FFFFFFF;
    if ( v5 < v4[119] || v5 >= v4[120] )
      return sub_101D590((__int64)v4, v5);
    else
      return v4[118];
  }
  return result;
}
