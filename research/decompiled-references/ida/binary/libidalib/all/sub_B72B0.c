__int64 __fastcall sub_B72B0(__int64 a1, __int64 a2, double a3, __m128i a4)
{
  bool v4; // zf
  const char *v6; // rsi
  unsigned int v7; // ebp
  size_t v9; // rbp
  void *v10; // rax
  void *v11; // rsi
  void *src; // [rsp+0h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 16) == 0;
  v14 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  v6 = s1;
  src = nullptr;
  if ( !v4 )
    v6 = *(const char **)(a1 + 8);
  v7 = 3;
  if ( (unsigned __int8)sub_B6D50((__int64)&src, v6, 0.0, a4) )
  {
    free_idcv();
    v9 = n[0];
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v9 )
    {
      v10 = (void *)qalloc_or_throw();
      *(_QWORD *)(a2 + 24) = v9;
      v11 = src;
      *(_QWORD *)(a2 + 8) = v10;
      memcpy(v10, v11, v9);
      *(_QWORD *)(a2 + 16) = v9;
    }
    v7 = 0;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v7;
}

