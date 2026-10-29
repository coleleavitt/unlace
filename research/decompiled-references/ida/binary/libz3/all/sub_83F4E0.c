__int64 __fastcall sub_83F4E0(__int64 a1, __int64 **a2)
{
  size_t v2; // rbx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 *v5; // r13
  __int64 *v6; // rbp
  __int64 v7; // rax
  void *v8; // r12
  __int64 v9; // [rsp+0h] [rbp-40h]

  v2 = (char *)a2[1] - (char *)*a2;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v9 = 0;
  if ( v2 )
    v9 = sub_186B270(v2);
  result = v9;
  *(_QWORD *)(a1 + 16) = v9 + v2;
  v4 = v9;
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
  v5 = a2[1];
  v6 = *a2;
  if ( *a2 != v5 )
  {
    while ( 1 )
    {
      v7 = *v6;
      v8 = qword_1C7F2C0;
      *(_DWORD *)(v4 + 8) = 0;
      *(_BYTE *)(v4 + 12) &= 0xFCu;
      *(_BYTE *)(v4 + 28) &= 0xFCu;
      *(_QWORD *)v4 = v7;
      *(_QWORD *)(v4 + 16) = 0;
      *(_DWORD *)(v4 + 24) = 1;
      *(_QWORD *)(v4 + 32) = 0;
      if ( (*((_BYTE *)v6 + 12) & 1) != 0 )
      {
        sub_182C690(v8, v4 + 8, v6 + 1);
        if ( (*((_BYTE *)v6 + 28) & 1) != 0 )
          goto LABEL_9;
LABEL_6:
        result = *((unsigned int *)v6 + 6);
        v6 += 5;
        *(_BYTE *)(v4 + 28) &= ~1u;
        v4 += 40;
        *(_DWORD *)(v4 - 16) = result;
        if ( v5 == v6 )
          break;
      }
      else
      {
        *(_DWORD *)(v4 + 8) = *((_DWORD *)v6 + 2);
        if ( (*((_BYTE *)v6 + 28) & 1) == 0 )
          goto LABEL_6;
LABEL_9:
        result = sub_182C690(v8, v4 + 24, v6 + 3);
        v6 += 5;
        v4 += 40;
        if ( v5 == v6 )
          break;
      }
    }
  }
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}

