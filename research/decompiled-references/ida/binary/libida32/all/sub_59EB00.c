__int64 __fastcall sub_59EB00(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // esi
  unsigned int v6; // eax
  __int64 v7; // rax
  _DWORD *v8; // r14
  void *v9; // rdi
  int v10; // edx
  unsigned int v11; // r12d
  unsigned int v12; // ebp
  int i; // eax
  unsigned int v14; // eax
  int v15; // r15d
  unsigned int v16; // eax
  int v17; // edx
  int v18; // [rsp+8h] [rbp-70h]
  char v19; // [rsp+Fh] [rbp-69h]
  __m128i v20; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( !a2 || *(char *)(a2 + 9) < 0 )
    return 0;
  result = *(_QWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 40) && !result )
  {
    v4 = *(_DWORD *)a2;
    ptr = nullptr;
    v22 = 0;
    v6 = sub_3B90A0(a1, v4);
    if ( netnode_qgetblob(v6, &ptr, 1, 4096, 83) <= 0 )
      sub_375400();
    v7 = qcalloc((int)((*(_DWORD *)(a2 + 40) + 31) & 0xFFFFFFE0), 8);
    *(_QWORD *)(a2 + 48) = v7;
    v8 = (_DWORD *)v7;
    if ( !v7 )
      sub_3B74D0((int)"read sp");
    v9 = ptr;
    v10 = *(_DWORD *)(a2 + 40);
    v11 = *(_DWORD *)a2;
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)((unsigned __int64)ptr + v22));
    if ( v10 )
    {
      v18 = 0;
      v12 = 0;
      v19 = 0;
      for ( i = unpack_dd(&v20); ; i = unpack_dd(&v20) )
      {
        v15 = i;
        v16 = unpack_dd(&v20);
        if ( v15 <= 0 )
        {
          if ( v12 )
            goto LABEL_11;
        }
        v11 += v15;
        v17 = v16 >> 1;
        *v8 = v11;
        if ( (v16 & 1) == 0 )
          v17 = -(v16 >> 1);
        v18 += v17;
        v8[1] = v18;
        if ( (int)sub_5AEEA0(a1, a2, v11) < 0 )
        {
LABEL_11:
          v19 = 1;
          v14 = *(_DWORD *)(a2 + 40) - 1;
          *(_DWORD *)(a2 + 40) = v14;
        }
        else
        {
          v14 = *(_DWORD *)(a2 + 40);
          v8 += 2;
          ++v12;
        }
        if ( v12 >= v14 )
          break;
      }
      if ( v19 )
      {
        if ( !v14 )
        {
          qfree(*(void **)(a2 + 48));
          *(_QWORD *)(a2 + 48) = 0;
        }
        sub_5ACD60(a1, a2, 0);
      }
      v9 = ptr;
    }
    if ( v9 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v9);
    }
    return *(_QWORD *)(a2 + 48);
  }
  return result;
}

