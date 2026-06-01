void __fastcall sub_21E7670(__int64 a1)
{
  char *v1; // r12
  char *v2; // rbp
  char *v3; // rbx
  unsigned __int64 v4; // rax
  char *v5; // r15
  unsigned int v6; // r13d
  unsigned int v7; // edx
  char *v8; // rax
  unsigned int v9; // esi
  unsigned int v10; // edx
  char *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  unsigned __int64 v14; // r14
  unsigned int v15; // ebx
  __int64 v16; // rsi
  unsigned __int32 v17; // eax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  const __m128i *v21; // rsi
  __int8 *v22; // rsi
  unsigned int v23; // r15d
  unsigned int v24; // edx
  char *v25; // rax
  char *v26; // rax
  unsigned __int32 *v27; // [rsp+8h] [rbp-D0h]
  unsigned __int32 v28; // [rsp+14h] [rbp-C4h]
  __int64 v29; // [rsp+28h] [rbp-B0h]
  unsigned __int32 *v30; // [rsp+38h] [rbp-A0h]
  void *v31; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int32 v32; // [rsp+58h] [rbp-80h]
  void *v33; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v34; // [rsp+68h] [rbp-70h]
  void *v35; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v36; // [rsp+78h] [rbp-60h]
  __m128i v37; // [rsp+80h] [rbp-58h] BYREF
  __int64 v38; // [rsp+90h] [rbp-48h]

  v1 = *(char **)(a1 + 56);
  v2 = *(char **)(a1 + 48);
  if ( v2 != v1 )
  {
    v3 = v2 + 4;
    _BitScanReverse64(&v4, (v1 - v2) >> 2);
    sub_21E7350(*(char **)(a1 + 48), *(char **)(a1 + 56), 2LL * (int)(63 - (v4 ^ 0x3F)));
    if ( v1 - v2 <= 64 )
    {
      for ( ; v1 != v3; v3 += 4 )
      {
        v23 = *(_DWORD *)v3;
        if ( *(_DWORD *)v3 < *(_DWORD *)v2 )
        {
          if ( v2 != v3 )
            memmove(v2 + 4, v2, v3 - v2);
          *(_DWORD *)v2 = v23;
        }
        else
        {
          v24 = *((_DWORD *)v3 - 1);
          v25 = v3 - 4;
          if ( v23 < v24 )
          {
            while ( 1 )
            {
              *((_DWORD *)v25 + 1) = v24;
              v24 = *((_DWORD *)v25 - 1);
              if ( v23 >= v24 )
                break;
              v25 -= 4;
            }
          }
          else
          {
            v25 = v3;
          }
          *(_DWORD *)v25 = v23;
        }
      }
    }
    else
    {
      v5 = v2 + 64;
      do
      {
        while ( 1 )
        {
          v6 = *(_DWORD *)v3;
          if ( *(_DWORD *)v3 < *(_DWORD *)v2 )
            break;
          v7 = *((_DWORD *)v3 - 1);
          v8 = v3 - 4;
          if ( v6 < v7 )
          {
            while ( 1 )
            {
              *((_DWORD *)v8 + 1) = v7;
              v7 = *((_DWORD *)v8 - 1);
              if ( v6 >= v7 )
                break;
              v8 -= 4;
            }
          }
          else
          {
            v8 = v3;
          }
          v3 += 4;
          *(_DWORD *)v8 = v6;
          if ( v5 == v3 )
            goto LABEL_13;
        }
        if ( v2 != v3 )
          memmove(v2 + 4, v2, v3 - v2);
        v3 += 4;
        *(_DWORD *)v2 = v6;
      }
      while ( v5 != v3 );
LABEL_13:
      while ( v1 != v5 )
      {
        while ( 1 )
        {
          v9 = *(_DWORD *)v5;
          v10 = *((_DWORD *)v5 - 1);
          v11 = v5 - 4;
          if ( *(_DWORD *)v5 < v10 )
            break;
          v26 = v5;
          v5 += 4;
          *(_DWORD *)v26 = v9;
          if ( v1 == v5 )
            goto LABEL_19;
        }
        while ( 1 )
        {
          *((_DWORD *)v11 + 1) = v10;
          v10 = *((_DWORD *)v11 - 1);
          if ( v9 >= v10 )
            break;
          v11 -= 4;
        }
        v5 += 4;
        *(_DWORD *)v11 = v9;
      }
    }
LABEL_19:
    v12 = a1 + 8;
    v30 = *(unsigned __int32 **)(a1 + 56);
    if ( *(unsigned __int32 **)(a1 + 48) != v30 )
    {
      v27 = *(unsigned __int32 **)(a1 + 48);
      v13 = 0;
      v29 = *(_QWORD *)(a1 + 24);
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = *(_QWORD *)(a1 + 96);
        v17 = *v27;
        v32 = 128;
        v28 = v17;
        sub_2205470(&v31, v16, 0);
        v34 = 128;
        sub_2205470(&v33, v28, 0);
        v36 = 128;
        sub_2205470(&v35, 1000000, 0);
        sub_2209DE0(&v31, &v33);
        sub_2207BA0(&v37);
        if ( v32 > 0x40 && v31 )
          operator delete[](v31);
        v18 = v37.m128i_i64[0];
        v31 = (void *)v37.m128i_i64[0];
        v32 = v37.m128i_u32[2];
        if ( v37.m128i_i32[2] > 0x40u )
          v18 = *(_QWORD *)v37.m128i_i64[0];
        v19 = v29;
        if ( v12 != v29 && v18 > v14 )
        {
          do
          {
            v13 = *(_QWORD *)(v19 + 32);
            v20 = *(unsigned int *)(v19 + 40);
            v15 += v20;
            v14 += v13 * v20;
            v19 = std::_Rb_tree_increment(v19, (const char *)&v31);
          }
          while ( v12 != v19 && v14 < v18 );
          v29 = v19;
        }
        v21 = *(const __m128i **)(a1 + 80);
        v37.m128i_i64[1] = v13;
        v37.m128i_i32[0] = v28;
        v38 = v15;
        if ( v21 == *(const __m128i **)(a1 + 88) )
        {
          sub_21E74E0(a1 + 72, v21, &v37);
        }
        else
        {
          v22 = &v21[1].m128i_i8[8];
          *(__m128i *)(v22 - 24) = _mm_load_si128(&v37);
          *((_QWORD *)v22 - 1) = v38;
          *(_QWORD *)(a1 + 80) = v22;
        }
        if ( v36 > 0x40 && v35 )
          operator delete[](v35);
        if ( v34 > 0x40 && v33 )
          operator delete[](v33);
        if ( v32 > 0x40 )
        {
          if ( v31 )
            operator delete[](v31);
        }
        ++v27;
      }
      while ( v30 != v27 );
    }
  }
}
