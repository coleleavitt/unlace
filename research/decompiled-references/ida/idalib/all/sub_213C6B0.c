__int64 __fastcall sub_213C6B0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // r12d
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r15
  size_t v17; // r8
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  const char *v23; // rax
  bool v24; // al
  size_t v25; // [rsp+0h] [rbp-88h]
  void *s2; // [rsp+8h] [rbp-80h]
  __m128 v27; // [rsp+10h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v29; // [rsp+40h] [rbp-48h]

  v2 = *(_QWORD *)a1;
  v27 = 0u;
  v3 = sub_2153C00(v2);
  v4 = sub_2124B50(v3);
  v9 = sub_213B1B0(*(_QWORD *)a1, &v27, v5, v6, v7, v8);
  if ( !(_BYTE)v9 )
  {
    v13 = *(_QWORD *)a1;
    v11 = v9;
    *(__m128i *)n = _mm_load_si128((const __m128i *)&v27);
    if ( *(_QWORD *)(v13 + 848) )
    {
      v24 = sub_21300B0(v13 + 808, (__int64)n) != v13 + 816;
    }
    else
    {
      v14 = *(_QWORD *)(v13 + 760);
      v15 = 16LL * *(unsigned int *)(v13 + 768);
      v16 = v14 + v15;
      if ( v14 == v14 + v15 )
        goto LABEL_11;
      v17 = n[1];
      s2 = (void *)n[0];
      while ( 1 )
      {
        if ( *(_QWORD *)(v14 + 8) == v17 )
        {
          if ( !v17 )
            break;
          v25 = v17;
          v18 = memcmp(*(const void **)v14, s2, v17);
          v17 = v25;
          if ( !v18 )
            break;
        }
        v14 += 16;
        if ( v16 == v14 )
          goto LABEL_11;
      }
      v24 = v14 != v16;
    }
    if ( v24 )
      return v11;
    v13 = *(_QWORD *)a1;
LABEL_11:
    v19 = *(_QWORD *)(v13 + 16);
    v29 = 261;
    *(__m128 *)n = v27;
    v20 = sub_21093A0(v19, (void ***)n);
    v21 = *(_QWORD *)a1;
    v22 = **(unsigned int **)(a1 + 8);
    if ( (*(_BYTE *)(v20 + 8) & 2) == 0 || (_DWORD)v22 == 29 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v21 + 24) + 296LL))(
             *(_QWORD *)(v21 + 24),
             v20,
             v22) )
      {
        return v11;
      }
      v21 = *(_QWORD *)a1;
      v23 = "unable to emit symbol attribute";
    }
    else
    {
      v23 = "non-local symbol required";
    }
    n[0] = (size_t)v23;
    v29 = 259;
    return (unsigned int)sub_2153E90(v21, v4, n, 0, 0);
  }
  v10 = *(_QWORD *)a1;
  v29 = 259;
  n[0] = (size_t)"expected identifier";
  return (unsigned int)sub_2153E90(v10, v4, n, 0, 0);
}
