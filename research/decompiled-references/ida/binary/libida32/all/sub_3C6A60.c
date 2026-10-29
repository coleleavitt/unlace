unsigned __int64 __fastcall sub_3C6A60(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 *v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v8; // r12
  __int64 *v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char v12; // r14
  unsigned __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // edx
  char v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int *v26; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v27[2]; // [rsp+8h] [rbp-60h] BYREF
  __m128i v28; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v4 = (__int64 *)(*(_QWORD *)(a1 + 1480) + a4);
  v29 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = v5 + *(unsigned int *)(a2 + 4);
  v28 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v6);
  if ( v5 < v6 )
  {
    v8 = (__int64)(v4 + 8);
    v9 = v4;
    while ( 1 )
    {
      v27[0] = unpack_dd(&v28);
      v14 = unpack_dd(&v28);
      v13 = v28.m128i_u64[1];
      v27[1] = v14;
      v16 = v14;
      v17 = v28.m128i_i64[0];
      if ( v28.m128i_i64[0] >= (unsigned __int64)v28.m128i_i64[1] )
        break;
      v10 = *(unsigned __int8 *)v28.m128i_i64[0];
      v11 = ++v28.m128i_i64[0];
      if ( (_BYTE)v10 )
      {
        if ( v11 >= v28.m128i_i64[1] )
        {
          v22 = 0;
LABEL_42:
          if ( a3 )
          {
LABEL_10:
            v12 = 0;
            goto LABEL_11;
          }
LABEL_28:
          v23 = v9[9];
          v24 = v8;
          if ( !v23 )
            goto LABEL_39;
          do
          {
            while ( 1 )
            {
              v10 = *(unsigned int *)(v23 + 32);
              if ( (unsigned int)v10 < v27[0] || v27[0] >= (unsigned int)v10 && *(_DWORD *)(v23 + 36) < v16 )
                break;
              v24 = v23;
              v23 = *(_QWORD *)(v23 + 16);
              if ( !v23 )
                goto LABEL_35;
            }
            v23 = *(_QWORD *)(v23 + 24);
          }
          while ( v23 );
LABEL_35:
          if ( v8 == v24 || (v25 = *(_DWORD *)(v24 + 32), v27[0] < v25) || v25 >= v27[0] && v16 < *(_DWORD *)(v24 + 36) )
          {
LABEL_39:
            v26 = v27;
            v24 = sub_3B4ED0(v9, v24, (__int64 **)&v26, v10, v27[0], v15);
            v13 = v28.m128i_u64[1];
          }
          *(_BYTE *)(v24 + 40) = v22;
          goto LABEL_7;
        }
        v22 = *(_BYTE *)(v17 + 1);
        v28.m128i_i64[0] = v17 + 2;
        if ( (unsigned __int64)(v17 + 2) >= v28.m128i_i64[1] )
          goto LABEL_42;
        v12 = *(_BYTE *)(v17 + 2);
        v28.m128i_i64[0] = v17 + 3;
        if ( !a3 )
          goto LABEL_28;
LABEL_11:
        v18 = v9[9];
        v19 = v8;
        if ( !v18 )
          goto LABEL_22;
        do
        {
          while ( 1 )
          {
            v10 = *(unsigned int *)(v18 + 32);
            if ( (unsigned int)v10 < v27[0] || v27[0] >= (unsigned int)v10 && *(_DWORD *)(v18 + 36) < v16 )
              break;
            v19 = v18;
            v18 = *(_QWORD *)(v18 + 16);
            if ( !v18 )
              goto LABEL_18;
          }
          v18 = *(_QWORD *)(v18 + 24);
        }
        while ( v18 );
LABEL_18:
        if ( v8 == v19 || (v20 = *(_DWORD *)(v19 + 32), v27[0] < v20) || v20 >= v27[0] && v16 < *(_DWORD *)(v19 + 36) )
        {
LABEL_22:
          v26 = v27;
          v19 = sub_3B4ED0(v9, v19, (__int64 **)&v26, v10, v27[0], v15);
          v13 = v28.m128i_u64[1];
        }
        *(_BYTE *)(v19 + 40) = v12;
        if ( v28.m128i_i64[0] >= v13 )
          return v29 - __readfsqword(0x28u);
      }
      else
      {
        if ( v11 >= v28.m128i_i64[1] )
          break;
        v12 = *(_BYTE *)(v17 + 1);
        v28.m128i_i64[0] = v17 + 2;
        if ( a3 )
          goto LABEL_11;
LABEL_6:
        sub_3C6720(v9, v27);
        v13 = v28.m128i_u64[1];
LABEL_7:
        if ( v28.m128i_i64[0] >= v13 )
          return v29 - __readfsqword(0x28u);
      }
    }
    if ( a3 )
      goto LABEL_10;
    goto LABEL_6;
  }
  return v29 - __readfsqword(0x28u);
}

