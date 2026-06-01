__int64 __fastcall sub_20D5C20(__int64 a1, _QWORD *a2)
{
  size_t v4; // r12
  __int64 v6; // rax
  size_t v7; // rsi
  const void *v8; // r13
  char *v9; // rdi
  unsigned __int64 v10; // rdx
  size_t v11; // rsi

  sub_20D5A60(*(_BYTE **)(a1 + 16), (__int64)a2, *(_BYTE *)(a1 + 9) & 0x3F, 1u);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    v6 = a2[2];
    v7 = a2[3];
    v8 = *(const void **)(a1 + 32);
    v9 = (char *)a2[1];
    if ( v6 + v4 > v7 )
    {
      v10 = v6 + v4 + 992;
      v11 = 2 * v7;
      if ( v10 > v11 )
      {
        a2[3] = v10;
        v11 = v6 + v4 + 992;
      }
      else
      {
        a2[3] = v11;
      }
      v9 = (char *)realloc(v9, v11);
      a2[1] = v9;
      if ( !v9 )
        abort();
      v6 = a2[2];
    }
    memcpy(&v9[v6], v8, v4);
    a2[2] += v4;
  }
  return sub_20D5A60(*(_BYTE **)(a1 + 40), (__int64)a2, *(_BYTE *)(a1 + 9) & 0x3F, 0);
}
