__int64 __fastcall sub_5F0A0(__int64 *a1, __int64 a2, const __m128i *a3)
{
  unsigned __int16 v5; // ax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  _DWORD *v10; // r14
  unsigned __int16 *v11; // rbp
  int v12; // esi
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rax
  bool v16; // al
  __m128i *v18; // rcx
  __int32 v19; // esi
  __m128i *v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // r12
  __int64 dtype_size; // rax
  __int64 i; // rdi
  __int64 v26; // r10
  __int64 v27; // r8
  void *v28; // rax
  __int64 v29; // rdi
  __int16 v30; // ax
  __m128i *v31; // rax
  __int32 v32; // ecx
  __m128i *v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int8 v36; // si
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 *v40; // [rsp+0h] [rbp-58h]
  int v41; // [rsp+Ch] [rbp-4Ch]
  __int64 v42[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a3[1].m128i_u16[4];
  v42[1] = __readfsqword(0x28u);
  if ( v5 <= 0x20u )
  {
    v7 = v5;
    if ( v5 <= 9u )
      goto LABEL_7;
    if ( ((1LL << v5) & 0x5400) != 0 )
    {
      if ( a3[7].m128i_i8[9] == 5 && a3[2].m128i_i8[13] == 7 && a3[5].m128i_i8[5] == 7 )
      {
        v18 = (__m128i *)a1[3];
        v19 = a3[5].m128i_u16[3];
        if ( v18 )
        {
          v20 = (__m128i *)(a1 + 2);
          do
          {
            if ( v19 <= v18[2].m128i_i32[0] )
            {
              v20 = v18;
              v18 = (__m128i *)v18[1].m128i_i64[0];
            }
            else
            {
              v18 = (__m128i *)v18[1].m128i_i64[1];
            }
          }
          while ( v18 );
          if ( a1 + 2 != (__int64 *)v20 && v19 >= v20[2].m128i_i32[0] )
          {
            v34 = a3[8].m128i_i64[0];
            if ( v34 )
            {
              v35 = a3[9].m128i_i64[0];
              if ( v35 )
              {
                v36 = a3[9].m128i_i8[9];
                if ( v36 )
                {
                  if ( v36 == 5 )
                    v34 = ((v34 + 1) << v35) - 1;
                  else
                    v34 = 0;
                }
                else
                {
                  v34 <<= v35;
                }
              }
            }
            v37 = v20[2].m128i_i64[1];
            if ( v5 == 14 )
            {
              v39 = v37 + v34;
            }
            else
            {
              v38 = v37 - v34;
              v39 = v37 & v34;
              if ( v5 == 12 )
                v39 = v38;
            }
            sub_5EE80(a1, a3, v39, a3[2].m128i_u16[7], v20);
            return 1;
          }
        }
      }
      goto LABEL_7;
    }
    if ( ((1LL << v5) & 0x140000000LL) == 0 )
    {
      if ( v5 == 23 && a3[5].m128i_i8[1] == 1 && a3[2].m128i_i8[13] == 7 && a3[5].m128i_i8[5] == 7 )
      {
        v31 = (__m128i *)a1[3];
        v32 = a3[5].m128i_u16[3];
        if ( v31 )
        {
          v33 = (__m128i *)(a1 + 2);
          do
          {
            if ( v32 <= v31[2].m128i_i32[0] )
            {
              v33 = v31;
              v31 = (__m128i *)v31[1].m128i_i64[0];
            }
            else
            {
              v31 = (__m128i *)v31[1].m128i_i64[1];
            }
          }
          while ( v31 );
          if ( v33 != (__m128i *)(a1 + 2) && v32 >= v33[2].m128i_i32[0] )
          {
            sub_5EE80(a1, a3, v33[2].m128i_i64[1], a3[2].m128i_u16[7], v33);
            return 1;
          }
        }
      }
      goto LABEL_7;
    }
    goto LABEL_41;
  }
  if ( v5 == 473 )
  {
LABEL_41:
    if ( (unsigned __int8)sub_5EB20(a1, v42, a3, (__int64)a3[5].m128i_i64) )
    {
      v29 = *a1;
      if ( *a1 )
      {
        v30 = a3[1].m128i_i16[4];
        if ( v30 == 32 || v30 == 473 )
          sub_5E7C0(v29, (__int64)a3, (__int64)&a3[2].m128i_i64[1], v42[0]);
      }
      return 1;
    }
    goto LABEL_42;
  }
  if ( (unsigned __int16)(v5 - 474) <= 1u )
  {
    if ( (unsigned __int8)sub_5EB20(a1, v42, a3, (__int64)&a3[7].m128i_i64[1]) )
    {
      v21 = *a1;
      if ( *a1 && a3[1].m128i_i16[4] == 475 )
      {
        v22 = v42[0];
        sub_5E7C0(v21, (__int64)a3, (__int64)&a3[2].m128i_i64[1], v42[0]);
        v23 = *a1;
        dtype_size = get_dtype_size();
        sub_5E7C0(v23, (__int64)a3, (__int64)a3[5].m128i_i64, v22 + dtype_size);
      }
      return 1;
    }
LABEL_42:
    v7 = a3[1].m128i_u16[4];
    goto LABEL_7;
  }
  v7 = v5;
LABEL_7:
  v8 = *(_QWORD *)(a2 + 16);
  v41 = 0;
  v9 = *(_DWORD *)(v8 + 104);
  if ( v7 >= v9 && v7 < *(_DWORD *)(v8 + 108) )
    v41 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 16LL * (v7 - v9) + 8);
  v10 = dword_8B1C0;
  v11 = &a3[2].m128i_u16[7];
  v40 = a1 + 2;
  while ( 1 )
  {
    if ( (*v10 & v41) == 0 || *((_BYTE *)v11 - 5) != 1 )
      goto LABEL_22;
    v12 = *v11;
    if ( v12 == 161 )
      return 0;
    v13 = (__int64)v40;
    if ( a1[3] )
    {
      v14 = a1[3];
      while ( 1 )
      {
        while ( v12 > *(_DWORD *)(v14 + 32) )
        {
          v14 = *(_QWORD *)(v14 + 24);
          if ( !v14 )
            goto LABEL_18;
        }
        v15 = *(_QWORD *)(v14 + 16);
        if ( v12 >= *(_DWORD *)(v14 + 32) )
          break;
        v13 = v14;
        v14 = *(_QWORD *)(v14 + 16);
        if ( !v15 )
        {
LABEL_18:
          v16 = v13 == (_QWORD)v40;
          goto LABEL_19;
        }
      }
      for ( i = *(_QWORD *)(v14 + 24); i; i = *(_QWORD *)(i + 24) )
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)(i + 16);
          if ( v12 >= *(_DWORD *)(i + 32) )
            break;
          v13 = i;
          i = *(_QWORD *)(i + 16);
          if ( !v26 )
            goto LABEL_47;
        }
      }
LABEL_47:
      while ( v15 )
      {
        while ( 1 )
        {
          v27 = *(_QWORD *)(v15 + 16);
          if ( v12 > *(_DWORD *)(v15 + 32) )
            break;
          v14 = v15;
          v15 = *(_QWORD *)(v15 + 16);
          if ( !v27 )
            goto LABEL_50;
        }
        v15 = *(_QWORD *)(v15 + 24);
      }
LABEL_50:
      if ( a1[4] != v14 )
        goto LABEL_54;
      if ( v40 == (__int64 *)v13 )
      {
LABEL_21:
        sub_5E340((_QWORD *)a1[3]);
        a1[3] = 0;
        a1[6] = 0;
        a1[4] = (__int64)v40;
        a1[5] = (__int64)v40;
        goto LABEL_22;
      }
      while ( v14 != v13 )
      {
        v14 = std::_Rb_tree_increment();
        v28 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v28, 0x30u);
        --a1[6];
LABEL_54:
        ;
      }
    }
    else
    {
      v16 = 1;
LABEL_19:
      if ( a1[4] == v13 && v16 )
        goto LABEL_21;
    }
LABEL_22:
    ++v10;
    v11 += 20;
    if ( &unk_8B1D4 == (_UNKNOWN *)v10 )
      return 1;
  }
}
