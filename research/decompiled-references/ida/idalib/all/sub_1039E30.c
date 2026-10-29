_BYTE *__fastcall sub_1039E30(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        int a9,
        int a10,
        unsigned __int8 a11)
{
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  _BYTE *v14; // rax
  _BYTE *result; // rax
  __int64 v16; // rbx
  size_t v17; // r12
  void *v18; // rdi
  size_t v19; // rax
  void *v20; // rdi
  size_t v21; // rbp
  size_t v22; // rax
  void *v23; // rdi
  size_t v24; // rbp

  v12 = *a1;
  v13 = *(_QWORD **)(*a1 + 32);
  if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v13 > 7u )
  {
    *v13 = 0x20656E6966656423LL;
    *(_QWORD *)(v12 + 32) += 8LL;
  }
  else
  {
    v12 = sub_227BF10(*a1, "#define ", 8);
  }
  sub_2254180(a2, v12);
  v14 = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v12 + 24) )
  {
    v12 = sub_227BA10(v12, 32);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = v14 + 1;
    *v14 = 32;
  }
  sub_2254180(a3, v12);
  result = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v12 + 24) )
  {
    result = (_BYTE *)sub_227BA10(v12, 10);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = result + 1;
    *result = 10;
  }
  if ( a11 > 1u )
  {
    v16 = *a1;
    v17 = j__strlen("#pragma clang deprecated(");
    v18 = *(void **)(v16 + 32);
    if ( v17 > *(_QWORD *)(v16 + 24) - (_QWORD)v18 )
    {
      v16 = sub_227BF10(v16, "#pragma clang deprecated(", v17);
    }
    else if ( v17 )
    {
      memcpy(v18, "#pragma clang deprecated(", v17);
      *(_QWORD *)(v16 + 32) += v17;
    }
    sub_2254180(a2, v16);
    v19 = j__strlen(", \"");
    v20 = *(void **)(v16 + 32);
    v21 = v19;
    if ( v19 > *(_QWORD *)(v16 + 24) - (_QWORD)v20 )
    {
      v16 = sub_227BF10(v16, ", \"", v19);
    }
    else if ( v19 )
    {
      memcpy(v20, ", \"", v19);
      *(_QWORD *)(v16 + 32) += v21;
    }
    sub_2254180(&a7, v16);
    v22 = j__strlen("\")\n");
    v23 = *(void **)(v16 + 32);
    v24 = v22;
    result = (_BYTE *)(*(_QWORD *)(v16 + 24) - (_QWORD)v23);
    if ( v24 > (unsigned __int64)result )
    {
      return (_BYTE *)sub_227BF10(v16, "\")\n", v24);
    }
    else if ( v24 )
    {
      result = memcpy(v23, "\")\n", v24);
      *(_QWORD *)(v16 + 32) += v24;
    }
  }
  return result;
}
