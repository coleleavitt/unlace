__int64 __fastcall sub_30EA90(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  const char *v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  const char *v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // r13
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rbp
  const __m128i *v21; // rdx
  __m128i v22; // xmm0
  int v23; // ecx
  __int64 v24; // r8
  unsigned __int64 v25; // xmm0_8
  char v26; // cl
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r12
  unsigned __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // rsi
  unsigned __int64 v37; // r12
  __int64 *v38; // rdi
  __int64 v39; // r13
  unsigned __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // rsi
  __int64 v43; // r12
  unsigned __int64 v44; // r13
  __int64 v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rbp
  unsigned __int64 v48; // r12
  __int64 v49; // r13
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx

  result = *(_DWORD *)a1 & 0xF;
  switch ( *(_DWORD *)a1 & 0xF )
  {
    case 0:
      v11 = a2[1];
      if ( v11 )
      {
        v12 = v11 + 3;
        v13 = v11 + 4;
        --v11;
      }
      else
      {
        v13 = 5;
        v12 = 4;
      }
      v14 = *a2;
      if ( a2[2] < v13 )
      {
        result = qvector_reserve(a2, v14, v13, 1);
        *a2 = result;
        v14 = result;
      }
      a2[1] = v13;
      *(_BYTE *)(v14 + v12) = 0;
      *(_DWORD *)(*a2 + v11) = 1701736302;
      return result;
    case 1:
      v16 = a2[1];
      if ( v16 )
      {
        v17 = v16 + 2;
        v18 = v16 + 3;
        --v16;
      }
      else
      {
        v18 = 4;
        v17 = 3;
      }
      v19 = *a2;
      if ( a2[2] < v18 )
      {
        result = qvector_reserve(a2, v19, v18, 1);
        *a2 = result;
        v19 = result;
      }
      a2[1] = v18;
      *(_BYTE *)(v19 + v17) = 0;
      v20 = *a2 + v16;
      *(_WORD *)v20 = 27745;
      *(_BYTE *)(v20 + 2) = 108;
      return result;
    case 2:
      result = *(_QWORD *)(a1 + 16);
      if ( result == 1 )
        return (__int64)sub_30E780(*(__int64 **)(a1 + 8), a2, *(_DWORD *)(a1 + 4), 1);
      if ( result != 2 )
        goto LABEL_41;
      v21 = *(const __m128i **)(a1 + 8);
      if ( v21->m128i_i64[0] )
        goto LABEL_41;
      v22 = _mm_loadu_si128(v21 + 1);
      v23 = *(_DWORD *)(a1 + 4);
      v24 = v22.m128i_i64[0];
      v25 = _mm_add_epi64(v22, _mm_srli_si128(v22, 8)).m128i_u64[0];
      result = v25;
      if ( v23 == 8 )
      {
        if ( !v25 )
        {
          v54 = v21->m128i_i64[1];
          if ( v24 == v54 + 1 )
            return (__int64)sub_F4410(a2, (__int64)"!=%llX");
          result = 0x8000000000000000LL;
          if ( v24 == 0x8000000000000000LL )
            return (__int64)sub_F4410(a2, (__int64)"<%llX");
          if ( v54 == 0x8000000000000000LL )
            return (__int64)sub_F4410(a2, (__int64)">=-%llX");
        }
      }
      else
      {
        v26 = 8 * v23;
        if ( 1LL << v26 == v25 )
        {
          v27 = v21->m128i_i64[1];
          result = v27 + 1;
          if ( v27 + 1 != v24 )
          {
            v28 = 1LL << (v26 - 1);
            if ( v28 != v24 )
            {
              if ( v28 == v27 )
                return (__int64)sub_F4410(a2, (__int64)">=-%llX");
              goto LABEL_41;
            }
            return (__int64)sub_F4410(a2, (__int64)"<%llX");
          }
          return (__int64)sub_F4410(a2, (__int64)"!=%llX");
        }
      }
LABEL_41:
      v33 = a2[1];
      if ( v33 )
      {
        v34 = v33 + 1;
        v35 = a2[1];
        --v33;
      }
      else
      {
        v34 = 2;
        v35 = 1;
      }
      v36 = *a2;
      if ( a2[2] < v34 )
      {
        result = qvector_reserve(a2, v36, v34, 1);
        *a2 = result;
        v36 = result;
      }
      a2[1] = v34;
      *(_BYTE *)(v36 + v35) = 0;
      *(_BYTE *)(*a2 + v33) = 40;
      v37 = 0;
      if ( *(_QWORD *)(a1 + 16) )
      {
        while ( 1 )
        {
          v38 = (__int64 *)(*(_QWORD *)(a1 + 8) + 16LL * (int)v37++);
          result = (__int64)sub_30E780(v38, a2, *(_DWORD *)(a1 + 4), 0);
          if ( v37 >= *(_QWORD *)(a1 + 16) )
            break;
          v39 = a2[1];
          if ( v39 )
          {
            v40 = v39 + 1;
            v41 = a2[1];
            --v39;
          }
          else
          {
            v40 = 2;
            v41 = 1;
          }
          v42 = *a2;
          if ( a2[2] < v40 )
          {
            v51 = qvector_reserve(a2, v42, v40, 1);
            *a2 = v51;
            v42 = v51;
          }
          a2[1] = v40;
          *(_BYTE *)(v42 + v41) = 0;
          *(_BYTE *)(*a2 + v39) = 124;
        }
      }
      v47 = a2[1];
      if ( v47 )
      {
        v48 = v47 + 1;
        v49 = a2[1];
        --v47;
      }
      else
      {
        v48 = 2;
        v49 = 1;
      }
      v50 = *a2;
      if ( a2[2] < v48 )
      {
        result = qvector_reserve(a2, v50, v48, 1);
        *a2 = result;
        v50 = result;
      }
      a2[1] = v48;
      *(_BYTE *)(v50 + v49) = 0;
      *(_BYTE *)(*a2 + v47) = 41;
      return result;
    case 3:
      result = (__int64)sub_F4410(a2, (__int64)"[%llX..%llX]", *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
      goto LABEL_16;
    case 4:
      v31 = *(_QWORD *)(a1 + 8);
      if ( v31 < 0 )
        sub_F4410(a2, (__int64)"{-%llX..", -v31);
      else
        sub_F4410(a2, (__int64)"{%llX..", v31);
      v32 = *(_QWORD *)(a1 + 16);
      if ( v32 < 0 )
        result = (__int64)sub_F4410(a2, (__int64)"-%llX}", -v32);
      else
        result = (__int64)sub_F4410(a2, (__int64)"%llX}", v32);
LABEL_16:
      v15 = "/%lld";
      if ( *(_QWORD *)(a1 + 24) != 1 )
        return (__int64)sub_F4410(a2, (__int64)v15);
      return result;
    case 5:
      v29 = *(_QWORD *)(a1 + 8);
      if ( !v29 )
        goto LABEL_33;
      result = (__int64)sub_F4410(a2, (__int64)"z%llX", v29);
      v30 = *(_QWORD *)(a1 + 16);
      if ( !*(_QWORD *)(a1 + 8) )
        goto LABEL_34;
      if ( v30 )
      {
        v43 = a2[1];
        if ( v43 )
        {
          v44 = v43 + 1;
          v45 = a2[1];
          --v43;
        }
        else
        {
          v45 = 1;
          v44 = 2;
        }
        v46 = *a2;
        if ( a2[2] < v44 )
        {
          v53 = qvector_reserve(a2, v46, v44, 1);
          *a2 = v53;
          v46 = v53;
        }
        a2[1] = v44;
        *(_BYTE *)(v46 + v43) = 47;
        result = *a2;
        *(_BYTE *)(*a2 + v45) = 0;
LABEL_33:
        v30 = *(_QWORD *)(a1 + 16);
LABEL_34:
        v15 = "S%llX";
        if ( v30 )
          return (__int64)sub_F4410(a2, (__int64)v15);
      }
      return result;
    case 6:
      v5 = " & ";
      return sub_30F0F0(a1, a2, v5);
    case 7:
      v5 = " | ";
      return sub_30F0F0(a1, a2, v5);
    case 8:
      v6 = a2[1];
      if ( v6 )
      {
        v7 = v6 + 2;
        v8 = v6 + 3;
        --v6;
      }
      else
      {
        v8 = 4;
        v7 = 3;
      }
      v9 = *a2;
      if ( a2[2] < v8 )
      {
        v52 = qvector_reserve(a2, v9, v8, 1);
        *a2 = v52;
        v9 = v52;
      }
      a2[1] = v8;
      result = 28277;
      *(_BYTE *)(v9 + v7) = 0;
      v10 = *a2 + v6;
      *(_WORD *)v10 = 28277;
      *(_BYTE *)(v10 + 2) = 107;
      return result;
    default:
      if ( !under_debugger )
        sub_37B760(51824);
      BUG();
  }
}
