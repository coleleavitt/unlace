void __fastcall sub_FB05F0(int a1, __int64 a2)
{
  __int64 i; // rbx
  _DWORD *v5; // rsi
  int v6; // r15d
  _DWORD *v7; // r10
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  _DWORD *v13; // rsi
  void *v14; // r9
  unsigned __int64 v15; // r14
  void *v16; // r15
  void *v17; // rax
  void *v18; // [rsp+8h] [rbp-50h] BYREF
  void *src; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]

  for ( i = 0; i != 6933; ++i )
  {
    while ( a1 != ((*((_BYTE *)&unk_23F5940 + 10 * (unsigned int)i + 2) & 0x38) == 16) )
    {
LABEL_2:
      if ( ++i == 6933 )
        return;
    }
    v5 = *(_DWORD **)(a2 + 8);
    v6 = *((unsigned __int16 *)&unk_23F5940 + 5 * i);
    if ( v5 == *(_DWORD **)(a2 + 16) )
    {
      v7 = *(_DWORD **)a2;
      v8 = (__int64)v5 - *(_QWORD *)a2;
      v9 = v8 >> 2;
      if ( v8 >> 2 )
      {
        v10 = 2 * v9;
        v11 = -4;
        if ( v9 <= 2 * v9 )
        {
          if ( v10 > 0x3FFFFFFFFFFFFFFFLL )
          {
            v11 = -4;
          }
          else
          {
            if ( !v10 )
            {
              v14 = nullptr;
              v15 = 0;
              *(_DWORD *)v8 = v6;
              v16 = (void *)(v8 + 4);
              if ( v5 != v7 )
                goto LABEL_10;
              goto LABEL_16;
            }
            v11 = 8 * v9;
          }
        }
      }
      else
      {
        v11 = 4;
      }
      n = (size_t)v5 - *(_QWORD *)a2;
      src = v7;
      v18 = v5;
      v12 = operator new(v11);
      v8 = n;
      v13 = v18;
      v7 = src;
      v14 = (void *)v12;
      v15 = v12 + v11;
      *(_DWORD *)(v12 + n) = v6;
      v16 = (void *)(v12 + v8 + 4);
      if ( v13 != v7 )
      {
LABEL_10:
        v18 = v7;
        v17 = memmove(v14, v7, v8);
        v7 = v18;
        v14 = v17;
LABEL_11:
        v18 = v14;
        operator delete(v7);
LABEL_12:
        v18 = v16;
        *(_QWORD *)(a2 + 16) = v15;
        *(__m128 *)a2 = _mm_loadh_ps((const double *)&v18);
        goto LABEL_2;
      }
LABEL_16:
      if ( !v7 )
        goto LABEL_12;
      goto LABEL_11;
    }
    *v5 = v6;
    *(_QWORD *)(a2 + 8) = v5 + 1;
  }
}

