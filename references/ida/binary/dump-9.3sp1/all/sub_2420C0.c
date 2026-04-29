__int64 __fastcall sub_2420C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // bp
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 i; // r8
  unsigned __int64 *v11; // rdx
  unsigned __int64 *j; // rsi
  __int64 v13; // rcx
  unsigned int tinfo_size; // r15d
  int tinfo_property; // eax
  __int64 result; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  const void *v19; // rbp
  void *v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax

  v7 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 112);
  for ( i = v9 + 56LL * *(_QWORD *)(a1 + 120); i != v9; v9 += 56 )
  {
    v11 = *(unsigned __int64 **)(v9 + 32);
    for ( j = &v11[*(_QWORD *)(v9 + 40)]; j != v11; v7 |= (unsigned __int8)(v13 - 32) > 0x5Fu )
    {
      while ( 1 )
      {
        v13 = (char)*v11;
        if ( v8 < *v11 )
          v8 = *v11;
        if ( v13 == *v11 )
          break;
        ++v11;
        v7 = 1;
        if ( j == v11 )
          goto LABEL_9;
      }
      ++v11;
    }
LABEL_9:
    ;
  }
  tinfo_size = get_tinfo_size();
  tinfo_property = get_tinfo_property();
  sub_2400B0(a1 + 64, *(_QWORD *)(*(_QWORD *)(a2 + 216) + 112LL), v8, tinfo_size, tinfo_property);
  result = sub_240140(a1 + 72, a2, a3, v8);
  if ( !(_BYTE)result )
  {
    if ( !a4 || (*(_BYTE *)(a4 + 5) & 1) == 0 )
    {
      if ( v7 )
        return result;
      v17 = 0x33333303300000LL;
      return sub_329C80(a1 + 72, v17);
    }
    *(_DWORD *)(a1 + 72) = *(_DWORD *)a4;
    result = *(unsigned __int8 *)(a4 + 4);
    *(_BYTE *)(a1 + 76) = result;
    *(_BYTE *)(a1 + 77) = *(_BYTE *)(a4 + 5);
    *(_BYTE *)(a1 + 78) = *(_BYTE *)(a4 + 6);
    *(_BYTE *)(a1 + 79) = *(_BYTE *)(a4 + 7);
    if ( a1 + 80 != a4 + 8 )
    {
      v18 = *(_QWORD *)(a4 + 16);
      if ( v18 < 2 )
      {
        *(_QWORD *)(a1 + 88) = 0;
      }
      else
      {
        v19 = *(const void **)(a4 + 8);
        v20 = *(void **)(a1 + 80);
        if ( *(_QWORD *)(a1 + 96) < v18 )
        {
          v23 = qvector_reserve(a1 + 80, *(_QWORD *)(a1 + 80), *(_QWORD *)(a4 + 16), 1);
          *(_QWORD *)(a1 + 80) = v23;
          v20 = (void *)v23;
        }
        *(_QWORD *)(a1 + 88) = v18;
        memmove(v20, v19, v18 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 80) + v18 - 1) = 0;
        result = *(unsigned __int8 *)(a1 + 76);
      }
    }
    v21 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a1 + 104) = v21;
    if ( (_BYTE)result )
    {
      v22 = sub_329C10(v21, (unsigned int)*(char *)(a4 + 4), 0);
      *(_BYTE *)(a1 + 76) = 0;
      v17 = v22;
      return sub_329C80(a1 + 72, v17);
    }
  }
  return result;
}
