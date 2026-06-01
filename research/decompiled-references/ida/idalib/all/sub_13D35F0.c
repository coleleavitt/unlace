__int64 __fastcall sub_13D35F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v8; // esi
  char *v9; // rax
  char v10; // dl
  __int64 v11; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __m128i *v15; // rax
  unsigned __int8 *v16; // [rsp+8h] [rbp-70h]
  char v17; // [rsp+1Fh] [rbp-59h] BYREF
  __m128i *v18; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h]
  __m128i v20[4]; // [rsp+30h] [rbp-48h] BYREF

  v8 = *(_DWORD *)a2;
  v17 = 0;
  v9 = (char *)sub_1021A70(a3, v8, &v17);
  v10 = v17;
  if ( a5 )
    *a5 = v17;
  v11 = a1 + 16;
  if ( v10 )
  {
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  else
  {
    v13 = *(unsigned int *)(a2 + 4);
    if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
    {
      v16 = (unsigned __int8 *)v9;
      v18 = v20;
      v19 = 0;
      v20[0].m128i_i8[0] = 0;
      sub_C05030(&v18, v13, 0);
      v14 = sub_13D19E0(a2, v16, a4, (__int64)v18);
      sub_C05030(&v18, v14, 0);
      v15 = v18;
      *(_QWORD *)a1 = v11;
      if ( v15 == v20 )
      {
        *(__m128i *)(a1 + 16) = _mm_load_si128(v20);
      }
      else
      {
        *(_QWORD *)a1 = v15;
        *(_QWORD *)(a1 + 16) = v20[0].m128i_i64[0];
      }
      *(_QWORD *)(a1 + 8) = v19;
    }
    else
    {
      *(_QWORD *)a1 = v11;
      sub_13D0630((_QWORD *)a1, v9, (__int64)&v9[v13]);
    }
  }
  return a1;
}
