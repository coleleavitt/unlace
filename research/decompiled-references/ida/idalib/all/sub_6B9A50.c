__int64 __fastcall sub_6B9A50(__int64 a1, _QWORD *a2, const char *a3, __int64 *a4, char a5)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 result; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rbp
  unsigned __int64 v18; // r9
  size_t v19; // r10
  __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  const char *v24; // r11
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v28; // [rsp+10h] [rbp-58h]
  unsigned __int64 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+18h] [rbp-50h]
  size_t v31; // [rsp+20h] [rbp-48h]
  const char *v32; // [rsp+28h] [rbp-40h]

  sub_6B9940(a1, a2, 45, a3, a5);
  v8 = a4[1];
  v28 = a1 + 40;
  if ( *(_QWORD *)(a1 + 56) < v8 )
    *(_QWORD *)(a1 + 40) = qvector_reserve(a1 + 40, *(_QWORD *)(a1 + 40), v8, 32);
  if ( (*(_BYTE *)(a1 + 32) & 0x3F) == 0x2D )
  {
    if ( *(_QWORD *)(a1 + 136) < v8 )
      *(_QWORD *)(a1 + 120) = qvector_reserve(a1 + 120, *(_QWORD *)(a1 + 120), v8, 8);
  }
  else if ( *(_QWORD *)(a1 + 160) < v8 )
  {
    *(_QWORD *)(a1 + 144) = qvector_reserve(a1 + 144, *(_QWORD *)(a1 + 144), v8, 144);
  }
  v9 = a4[1];
  v10 = *a4;
  result = 7 * v9;
  v12 = *a4 + 56 * v9;
  if ( *a4 != v12 )
  {
    do
    {
      v13 = -1;
      if ( a5 )
      {
        v14 = haystack;
        if ( *(_QWORD *)(v10 + 8) )
          v14 = *(const char **)v10;
        v13 = sub_6B9860(a2, v14, 0, 0);
      }
      v15 = *(_QWORD *)(a1 + 48);
      v16 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v15 + 1) )
      {
        v23 = qvector_reserve(v28, v16, v15 + 1, 32);
        v15 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = v23;
        v16 = v23;
      }
      v17 = v16 + 32 * v15;
      *(_QWORD *)v17 = 0;
      *(_QWORD *)(v17 + 24) = -1;
      *(_OWORD *)(v17 + 8) = 0;
      ++*(_QWORD *)(a1 + 48);
      if ( v17 != v10 )
      {
        v18 = *(_QWORD *)(v10 + 8);
        if ( v18 && (v19 = v18 - 1, v18 != 1) )
        {
          v24 = *(const char **)v10;
          v25 = *(void **)v17;
          if ( *(_QWORD *)(v17 + 16) < v18 )
          {
            v32 = *(const char **)v10;
            v31 = v18 - 1;
            v30 = *(_QWORD *)(v10 + 8);
            v26 = qvector_reserve(v17, *(_QWORD *)v17, v30, 1);
            v24 = v32;
            v19 = v31;
            *(_QWORD *)v17 = v26;
            v18 = v30;
            v25 = (void *)v26;
          }
          *(_QWORD *)(v17 + 8) = v18;
          v29 = v18;
          memmove(v25, v24, v19);
          *(_BYTE *)(*(_QWORD *)v17 + v29 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v17 + 8) = 0;
        }
      }
      *(_QWORD *)(v17 + 24) = v13;
      result = *(_QWORD *)(a1 + 128);
      v20 = *(_QWORD *)(v10 + 48);
      v21 = *(_QWORD *)(a1 + 120);
      if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(result + 1) )
      {
        v22 = qvector_reserve(a1 + 120, v21, result + 1, 8);
        *(_QWORD *)(a1 + 120) = v22;
        v21 = v22;
        result = *(_QWORD *)(a1 + 128);
      }
      v10 += 56;
      *(_QWORD *)(v21 + 8 * result) = v20;
      ++*(_QWORD *)(a1 + 128);
    }
    while ( v12 != v10 );
  }
  return result;
}
