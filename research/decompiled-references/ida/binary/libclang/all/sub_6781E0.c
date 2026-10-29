__int64 __fastcall sub_6781E0(__int64 *a1, __int64 a2, double a3, __m128i a4, __m128i a5, __m128 a6)
{
  __int64 v6; // rbx
  __m128i si128; // xmm0
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // r13d
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v21; // [rsp+8h] [rbp-C0h]
  _BYTE v22[176]; // [rsp+18h] [rbp-B0h] BYREF

  v6 = *(_QWORD *)(a2 + 88);
  sub_66C060(a1, v6, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
  ptr = v22;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v21 = si128;
  sub_11240B0(v6, &ptr);
  v8 = sub_FC8D80(a1[1], ptr, v21.m128i_i64[0]);
  if ( v8 && *(_DWORD *)(v8 + 356) == 6 )
  {
    v9 = sub_79C190(a2 + 48);
    if ( v9 )
    {
      while ( (*(_BYTE *)(v9 + 28) & 0x7F) != 0x10 )
      {
        v10 = *(_QWORD *)(v9 + 8);
        v9 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v10 <= 7 )
        {
          v9 = 0;
          break;
        }
      }
    }
    sub_6696E0(a1, v9, *(double *)si128.m128i_i64, *(double *)a4.m128i_i64, a5, a6);
    v11 = sub_79C190(a2 + 48);
    if ( v11 )
    {
      while ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x49 )
      {
        v12 = *(_QWORD *)(v11 + 8);
        v11 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v12 <= 7 )
        {
          v11 = 0;
          break;
        }
      }
    }
    sub_667A20(a1, v11);
    v13 = sub_79C190(a2 + 48);
    if ( v13 )
    {
      while ( (*(_BYTE *)(v13 + 28) & 0x7F) != 0x30 )
      {
        v14 = *(_QWORD *)(v13 + 8);
        v13 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v14 <= 7 )
        {
          sub_64D440(a1, 0, 0);
          goto LABEL_16;
        }
      }
    }
    sub_64D440(a1, v13, 0);
  }
LABEL_16:
  if ( ptr != v22 )
    free(ptr);
  v15 = sub_66F3A0(a1, a2 + 48, *(double *)si128.m128i_i64, a4, *(double *)a5.m128i_i64, a6);
  if ( (_BYTE)v15 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v17 = nullptr;
      v18 = sub_79A2B0(a2);
      v19 = *(_QWORD *)v18 + 8LL * *(unsigned int *)(v18 + 8);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v17 = *(__int64 **)sub_79A2B0(a2);
      while ( (__int64 *)v19 != v17 )
      {
        if ( !(unsigned __int8)sub_6777E0(a1, *v17, *(double *)si128.m128i_i64, a4, *(double *)a5.m128i_i64, a6) )
          return 0;
        ++v17;
      }
    }
  }
  else
  {
    return 0;
  }
  return v15;
}

