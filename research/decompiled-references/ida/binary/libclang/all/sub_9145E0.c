__int64 __fastcall sub_9145E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  const __m128i *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __m128i v15; // [rsp+0h] [rbp-88h] BYREF
  __int64 v16; // [rsp+10h] [rbp-78h]
  _QWORD v17[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  unsigned int v19; // [rsp+40h] [rbp-48h]
  int v20; // [rsp+50h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (const __m128i *)sub_A1A5A0(v2, 24);
  v4 = _mm_loadu_si128(v3);
  v5 = v3[1].m128i_i64[0];
  v15 = v4;
  v16 = v5;
  sub_A1A5E0(v2, 24);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v17, v7);
  sub_A1A5E0(v6, 56);
  v8 = sub_9E26A0(a1, a2, v17);
  if ( (_BYTE)v8 )
  {
    v9 = v18;
    if ( !v20 )
    {
      if ( !v18 )
      {
        v10 = 64;
        goto LABEL_6;
      }
      if ( !v19 )
      {
        v10 = *(_QWORD *)(v18 + 32);
        goto LABEL_6;
      }
      sub_A1DB00(v17);
      sub_A1C490(v17);
      v9 = v18;
      if ( !v20 )
      {
        v10 = *(_QWORD *)(v18 + 32);
        if ( *(_DWORD *)(v10 + 16) != v19 && v19 )
          v10 = *(_QWORD *)(v18 + v19 + 32);
LABEL_6:
        v11 = v17[0];
        if ( *(_BYTE *)(v10 + 51) )
        {
          v12 = v9 + v19 + 72;
          if ( v19 == v17[0] )
            goto LABEL_12;
        }
        goto LABEL_11;
      }
    }
    v11 = v17[0];
LABEL_11:
    v12 = v9 + v11 + 40;
LABEL_12:
    v13 = _mm_load_si128(&v15);
    *(_BYTE *)(v12 + 16) = v16;
    *(__m128i *)v12 = v13;
  }
  sub_A1C0C0(v17);
  return v8;
}

