__int64 __fastcall sub_130C810(__int64 a1, char **a2)
{
  _QWORD *v2; // rbp
  char *v3; // r12
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 == *(_QWORD **)(a1 + 16) )
  {
    sub_1245DD0((void ***)a1, *(const __m128i **)(a1 + 8), a2);
    return *(_QWORD *)(a1 + 8) - 32LL;
  }
  else
  {
    v3 = *a2;
    v4 = -1;
    *v2 = v2 + 2;
    if ( v3 )
      v4 = (__int64)&v3[strlen(v3)];
    sub_12FAAE0(v2, v3, v4);
    result = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = result + 32;
  }
  return result;
}
