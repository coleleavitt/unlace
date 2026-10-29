__int64 __fastcall sub_7F1300(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // r15
  __m128i v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r15
  __m128i v23; // [rsp+0h] [rbp-88h] BYREF
  __int64 v24; // [rsp+10h] [rbp-78h]
  __m128i v25; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]

  if ( (unsigned __int8)sub_7EF1F0((__int64)a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24), a4, a5, a6) )
  {
    v7 = sub_7F0C20(a1, *(_QWORD *)(a2 + 32), *(__int64 **)(a2 + 48));
    if ( (_BYTE)v7 )
    {
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0 && *(_DWORD *)(a2 + 56) && (v20 = *(unsigned int *)(a2 + 68), (_DWORD)v20) )
      {
        v21 = a2 + 72;
        v22 = a2 + 72 + 32 * v20;
        while ( (unsigned __int8)sub_7EF520(a1, v21, v9, v10, v11, v12) )
        {
          v21 += 32;
          if ( v21 == v22 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        sub_AC4830(&v25);
        v16 = v27;
        v17 = v28;
        v24 = v26;
        v18 = _mm_load_si128(&v25);
        v23 = v18;
LABEL_7:
        if ( v16 == v18.m128i_i64[0] )
        {
LABEL_13:
          if ( v17 == v18.m128i_i64[1] )
            return v7;
        }
        v19 = v18.m128i_i8[8] & 3;
        if ( (_DWORD)v19 )
          v18.m128i_i64[0] = sub_ACE280(&v23, a2, v19, v13, v14, v15);
        while ( 1 )
        {
          a2 = *(_QWORD *)v18.m128i_i64[0];
          if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v18.m128i_i64[0], a3) )
            break;
          v18.m128i_i64[1] = v23.m128i_i64[1];
          if ( (v23.m128i_i8[8] & 3) != 0 )
          {
            if ( v23.m128i_i64[1] <= 3uLL )
            {
              a2 = 1;
              sub_ACE0F0(&v23, 1);
            }
            else
            {
              sub_ACE150(&v23);
            }
            v18 = v23;
            goto LABEL_7;
          }
          v18.m128i_i64[0] = v23.m128i_i64[0] + 8;
          v23.m128i_i64[0] = v18.m128i_i64[0];
          if ( v16 == v18.m128i_i64[0] )
            goto LABEL_13;
        }
      }
    }
  }
  return 0;
}

