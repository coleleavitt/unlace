__int64 __fastcall sub_C36A70(__int64 a1, _DWORD *a2, __m128i *a3, _QWORD *a4, __int64 a5, char a6)
{
  unsigned __int64 *v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int i; // r8d
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 result; // rax
  const __m128i *v26; // rbx
  __int8 v27; // al
  __int8 v28; // al
  __int8 v29; // al
  __int8 v30; // al
  __int64 v31; // rdx
  unsigned __int8 v32; // [rsp+0h] [rbp-88h]
  __int64 v33; // [rsp+0h] [rbp-88h]
  __int64 v34; // [rsp+0h] [rbp-88h]
  unsigned int v35; // [rsp+Ch] [rbp-7Ch]
  __int64 v36[15]; // [rsp+10h] [rbp-78h] BYREF

  if ( (unsigned __int8)sub_B981D0(a4, (__int64)a2) )
  {
    v11 = (unsigned __int64 *)a4[15];
    v12 = *(_QWORD *)(a1 + 32);
    v13 = *v11;
    v14 = *(_QWORD *)(v12 + 48);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v11 + 48)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 > 1 )
    {
      if ( v14 )
      {
        v21 = (unsigned __int8)(*(_WORD *)(v13 + 98) >> 4);
        if ( v21 == 255 )
        {
          v34 = *(_QWORD *)(v12 + 48);
          v21 = sub_B74880(v13);
          v12 = *(_QWORD *)(a1 + 32);
          v14 = v34;
        }
        v13 = *(_QWORD *)(*(_QWORD *)(v14 + 120) + 8LL * v21);
      }
      v22 = *(_DWORD *)(v12 + 56);
      v23 = *(_DWORD *)(v12 + 128);
      if ( v22 < v23 )
      {
        v24 = v12;
        do
        {
          v24 = *(_QWORD *)(v24 + 16);
          v23 = *(_DWORD *)(v24 + 128);
        }
        while ( v22 < v23 );
      }
      if ( v22 != v23 )
        BUG();
      sub_A4F2A0((__int64)v36, v13, v22, *(_DWORD *)(v12 + 60));
      sub_C24210((__int64)a3, v36[0], (__int64 *)v36[1], 0);
    }
    else
    {
      v15 = *(_DWORD *)(v12 + 56);
      v16 = *(_DWORD *)(v12 + 128);
      for ( i = *(_DWORD *)(v12 + 60); v16 > v15; v16 = *(_DWORD *)(v12 + 128) )
        v12 = *(_QWORD *)(v12 + 16);
      if ( v15 != v16 )
        goto LABEL_42;
      if ( v14 )
      {
        v18 = (unsigned __int8)(*(_WORD *)(v13 + 98) >> 4);
        if ( v18 == 255 )
        {
          v35 = i;
          v33 = v14;
          v18 = sub_B74880(v13);
          i = v35;
          v14 = v33;
        }
        v13 = *(_QWORD *)(*(_QWORD *)(v14 + 120) + 8LL * v18);
      }
      v19 = *(_QWORD *)(v12 + 88);
      if ( !v19 )
        goto LABEL_42;
      v20 = v12 + 80;
      do
      {
        while ( v13 <= *(_QWORD *)(v19 + 32) && (v13 != *(_QWORD *)(v19 + 32) || i <= *(_DWORD *)(v19 + 40)) )
        {
          v20 = v19;
          v19 = *(_QWORD *)(v19 + 16);
          if ( !v19 )
            goto LABEL_17;
        }
        v19 = *(_QWORD *)(v19 + 24);
      }
      while ( v19 );
LABEL_17:
      if ( v12 + 80 == v20 || v13 != *(_QWORD *)(v20 + 32) || i != *(_DWORD *)(v20 + 40) )
LABEL_42:
        BUG();
      if ( (*(_BYTE *)(v20 + 52) & 1) == 0 || *(_DWORD *)(v20 + 48) > 1u )
        sub_C245D0((__int64)a3, *(_QWORD **)(a1 + 16), v20 + 48);
    }
  }
  else
  {
    v26 = *(const __m128i **)(*(_QWORD *)(a1 + 32) + 32LL);
    *a3 = _mm_loadu_si128(v26);
    a3[1].m128i_i64[0] = v26[1].m128i_i64[0];
    v27 = v26[1].m128i_i8[8] & 1 | a3[1].m128i_i8[8] & 0xFE;
    a3[1].m128i_i8[8] = v27;
    v28 = v26[1].m128i_i8[8] & 2 | v27 & 0xFD;
    a3[1].m128i_i8[8] = v28;
    v29 = v26[1].m128i_i8[8] & 4 | v28 & 0xFB;
    a3[1].m128i_i8[8] = v29;
    a3[1].m128i_i8[8] = v26[1].m128i_i8[8] & 8 | v29 & 0xF7;
    a3[1].m128i_i32[2] = v26[1].m128i_i32[2] & 0xFFFFFFF0 | a3[1].m128i_i32[2] & 0xF;
    a3[2].m128i_i64[0] = v26[2].m128i_i64[0];
    a3[2].m128i_i64[1] = v26[2].m128i_i64[1];
    sub_C25E10(a3[3].m128i_i64, v26[3].m128i_i64);
    v30 = v26[8].m128i_i8[0] & 1 | a3[8].m128i_i8[0] & 0xFE;
    a3[8].m128i_i8[0] = v30;
    a3[8].m128i_i8[0] = v26[8].m128i_i8[0] & 2 | v30 & 0xFD;
    a3[8].m128i_i8[1] = v26[8].m128i_i8[1];
  }
  result = sub_C15060(a1, (__int64)a2, (__int64)a3, a5);
  if ( (_BYTE)result && a6 )
  {
    v31 = *(_QWORD *)(a5 + 48);
    BYTE4(v36[0]) &= ~1u;
    LODWORD(v36[0]) = 0;
    result = sub_C36570(a1, a2, v31, (__int64)a3, (__int64)v36, 0);
    if ( (_BYTE)result )
    {
      v32 = result;
      sub_C245D0((__int64)a3, *(_QWORD **)(a1 + 16), (__int64)v36);
      result = v32;
      if ( LODWORD(v36[0]) > 1 )
      {
        sub_A4F8E0((int *)v36);
        return v32;
      }
    }
    else if ( LODWORD(v36[0]) > 1 )
    {
      sub_A4F8E0((int *)v36);
      return 0;
    }
  }
  return result;
}
