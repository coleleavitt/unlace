__int64 __fastcall sub_9ECED0(_WORD *a1, const void *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned int v8; // ebx
  unsigned int *v10; // rax
  unsigned int *v11; // rdx
  __int64 v12; // rax
  const char *v13; // rax
  size_t v14; // rdx
  char *v15; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-68h] BYREF
  _OWORD v17[5]; // [rsp+20h] [rbp-58h] BYREF

  if ( (*a1 & 0x1FF) == 0x5C
    && (v4 = sub_C946E0(a1), (v5 = sub_C94710(a1)) != 0)
    && v4
    && (v6 = *(_QWORD *)(v5 + 40), (v6 & 7) == 0)
    && (v7 = v6 & 0xFFFFFFFFFFFFFFF8LL, (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0)
    && (unsigned __int8)sub_B8EC80(v5)
    && (v10 = *(unsigned int **)(v7 + 16),
        v15 = (char *)"span",
        v11 = v10 + 4,
        v12 = *v10,
        v16[0] = v11,
        v16[1] = v12,
        v15 = "array",
        v17[0] = _mm_loadh_ps((const double *)&v15),
        v15 = "basic_string_view",
        v17[1] = _mm_loadh_ps((const double *)&v15),
        v15 = "initializer_list",
        v17[2] = _mm_loadh_ps((const double *)&v15),
        v8 = sub_9ECE50((const char **)v17, 6, (__int64)v16),
        (_BYTE)v8)
    && (v13 = sub_995750(v4), v14 == a3) )
  {
    if ( v14 )
      LOBYTE(v8) = memcmp(v13, a2, v14) == 0;
  }
  else
  {
    return 0;
  }
  return v8;
}
