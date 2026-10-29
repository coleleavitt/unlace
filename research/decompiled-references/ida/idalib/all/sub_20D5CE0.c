__int64 __fastcall sub_20D5CE0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  size_t v4; // r12
  __int64 v5; // rax
  size_t v6; // rsi
  const void *v7; // rbx
  char *v8; // rdi
  unsigned __int64 v9; // rdx
  size_t v10; // rsi

  result = sub_20D5A60(*(_BYTE **)(a1 + 16), (__int64)a2, *(_BYTE *)(a1 + 9) & 0x3F, 1u);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    v5 = a2[2];
    v6 = a2[3];
    v7 = *(const void **)(a1 + 32);
    v8 = (char *)a2[1];
    if ( v5 + v4 > v6 )
    {
      v9 = v5 + v4 + 992;
      v10 = 2 * v6;
      if ( v9 > v10 )
      {
        a2[3] = v9;
        v10 = v5 + v4 + 992;
      }
      else
      {
        a2[3] = v10;
      }
      v8 = (char *)realloc(v8, v10);
      a2[1] = v8;
      if ( !v8 )
        abort();
      v5 = a2[2];
    }
    result = (__int64)memcpy(&v8[v5], v7, v4);
    a2[2] += v4;
  }
  return result;
}
