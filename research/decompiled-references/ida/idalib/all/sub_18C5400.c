void __fastcall sub_18C5400(__int64 a1, _BYTE *a2)
{
  _BYTE *v3; // r15
  _BYTE *v4; // rbp
  size_t v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  char *v8; // rax
  char *v9; // rbx
  char *v10; // r14
  char *v11; // rax
  char *v12; // r9
  size_t v13; // r8
  size_t n[2]; // [rsp+8h] [rbp-50h] BYREF
  void *dest; // [rsp+18h] [rbp-40h]

  v3 = *(_BYTE **)(a1 + 8);
  v4 = *(_BYTE **)a1;
  v5 = (size_t)&a2[-*(_QWORD *)a1];
  if ( !(0xAAAAAAAAAAAAAAABLL * ((__int64)&v3[-*(_QWORD *)a1] >> 3)) )
  {
    v6 = 1;
    goto LABEL_16;
  }
  v6 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v7 = -16;
  if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)&v3[-*(_QWORD *)a1] >> 3) > 0x5555555555555556LL
                                                                  * ((__int64)&v3[-*(_QWORD *)a1] >> 3)
    || v6 > 0xAAAAAAAAAAAAAAALL )
  {
    goto LABEL_3;
  }
  v10 = nullptr;
  v9 = nullptr;
  if ( v6 )
  {
LABEL_16:
    v7 = 24 * v6;
LABEL_3:
    n[0] = v5;
    v8 = (char *)operator new(v7);
    v5 = n[0];
    v9 = v8;
    v10 = &v8[v7];
  }
  v11 = &v9[v5];
  v12 = &v9[v5 + 24];
  v13 = v3 - a2;
  *(_QWORD *)v11 = 0;
  *((_QWORD *)v11 + 1) = 0;
  *((_DWORD *)v11 + 4) = 0;
  n[0] = (size_t)&v12[v3 - a2];
  if ( a2 != v4 )
  {
    dest = &v9[v5 + 24];
    memmove(v9, v4, v5);
    v13 = v3 - a2;
    v12 = (char *)dest;
    if ( a2 == v3 )
    {
LABEL_9:
      operator delete(v4);
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  if ( a2 != v3 )
LABEL_6:
    memcpy(v12, a2, v13);
  if ( v4 )
    goto LABEL_9;
LABEL_8:
  n[1] = (size_t)v9;
  *(_QWORD *)(a1 + 16) = v10;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)n);
}
