__int64 __fastcall sub_7F1C30(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  unsigned int v8; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // r15
  __m128i v23; // rax
  __int64 v24; // rdx
  __m128i v25; // [rsp+0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+10h] [rbp-78h]
  __m128i v27; // [rsp+20h] [rbp-68h] BYREF
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+40h] [rbp-48h]

  v7 = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int8)sub_7EF1F0((__int64)a1, *(_QWORD *)v7, *(_QWORD *)(v7 + 8), a4, a5, a6) )
  {
    v8 = sub_7F0C20(a1, *(_QWORD *)(v7 + 24), *(__int64 **)(v7 + 40));
    if ( (_BYTE)v8 )
    {
      v14 = *(_QWORD *)(v7 + 64);
      if ( v14 && (v15 = *(unsigned int *)(v14 + 8), (_DWORD)v15) )
      {
        v16 = v14 + 16;
        v17 = v16 + 32 * v15;
        while ( (unsigned __int8)sub_7EF520(a1, v16, v10, v11, v12, v13) )
        {
          v16 += 32;
          if ( v16 == v17 )
            goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        sub_AC4830(&v27);
        v21 = v29;
        v22 = v30;
        v25 = _mm_load_si128(&v27);
        v26 = v28;
        v23 = v25;
LABEL_11:
        if ( v21 == v23.m128i_i64[0] )
        {
LABEL_17:
          if ( v22 == v23.m128i_i64[1] )
            return v8;
        }
        v24 = v23.m128i_i8[8] & 3;
        if ( (_DWORD)v24 )
          v23.m128i_i64[0] = sub_ACE280(&v25, a2, v24, v18, v19, v20);
        while ( 1 )
        {
          a2 = *(_QWORD *)v23.m128i_i64[0];
          if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v23.m128i_i64[0], a3) )
            break;
          v23.m128i_i64[1] = v25.m128i_i64[1];
          if ( (v25.m128i_i8[8] & 3) != 0 )
          {
            if ( v25.m128i_i64[1] <= 3uLL )
            {
              a2 = 1;
              sub_ACE0F0(&v25, 1);
            }
            else
            {
              sub_ACE150(&v25);
            }
            v23 = v25;
            goto LABEL_11;
          }
          v23.m128i_i64[0] = v25.m128i_i64[0] + 8;
          v25.m128i_i64[0] = v23.m128i_i64[0];
          if ( v21 == v23.m128i_i64[0] )
            goto LABEL_17;
        }
      }
    }
  }
  return 0;
}

