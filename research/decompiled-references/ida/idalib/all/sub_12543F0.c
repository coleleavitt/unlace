unsigned __int64 __fastcall sub_12543F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  int v4; // r13d
  __int64 v5; // rcx
  unsigned int *v6; // r12
  unsigned __int64 v7; // kr18_8
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  char *v14; // rdx
  char *v15; // rcx
  __int64 v16; // rdx
  char *v17; // rcx
  __int64 v18; // rax
  char *v19; // rdx
  char *v20; // rsi
  __int64 v21; // r13
  unsigned __int8 *v22; // rax
  unsigned __int8 v23; // r13
  __int64 v24; // rbx
  int v25; // eax
  int v26; // eax
  unsigned __int8 *v27; // rdx
  __int64 *v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // r15
  char v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  signed __int64 v36; // r12
  __int64 v37; // rsi
  __m128i v38; // xmm0
  const __m128i *v39; // r8
  const __m128i *v40; // r9
  const __m128i *v41; // rdx
  unsigned __int64 v42; // rcx
  __m128i v43; // xmm1
  char v44; // bl
  int v45; // ecx
  unsigned __int8 v46; // r15
  __int64 v47; // rbx
  int v48; // eax
  __m128i v49; // [rsp+8h] [rbp-50h] BYREF
  __int64 v50; // [rsp+18h] [rbp-40h]

  result = a3 + *(_QWORD *)(a1 + 120);
  v4 = *(unsigned __int8 *)result;
  if ( !(_BYTE)v4 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    *(_BYTE *)result = 1;
    v6 = (unsigned int *)(*(_QWORD *)(v5 + 56) + 48 * a3);
    v7 = result;
    result = *v6;
    v9 = a2;
    switch ( *v6 )
    {
      case 1u:
        v10 = *((_QWORD *)v6 + 2);
        if ( (*(_BYTE *)(v5 + 24) & 0x10) != 0 )
        {
          result = sub_12543F0(a1, a2, v10);
          if ( !*(_BYTE *)(a1 + 140) )
            return sub_12543F0(a1, v9, *((_QWORD *)v6 + 1));
        }
        else
        {
          sub_12543F0(a1, a2, v10);
          v44 = *(_BYTE *)(a1 + 140);
          *(_BYTE *)(a1 + 140) = 0;
          result = sub_12543F0(a1, (unsigned int)a2, *((_QWORD *)v6 + 1));
          *(_BYTE *)(a1 + 140) |= v44;
        }
        return result;
      case 2u:
        if ( *((_BYTE *)v6 + 24) )
        {
          if ( !*(_BYTE *)(a1 + 140) )
          {
            result = sub_12543F0(a1, a2, *((_QWORD *)v6 + 1));
            if ( !*(_BYTE *)(a1 + 140) )
              return sub_1254980(a1, (unsigned int)a2, a3);
          }
        }
        else
        {
          sub_1254980(a1, a2, a3);
          return sub_12543F0(a1, (unsigned int)a2, *((_QWORD *)v6 + 1));
        }
        return result;
      case 3u:
        result = *(_QWORD *)a1;
        v11 = *(_QWORD *)a1 + 24LL * *((_QWORD *)v6 + 2);
        if ( *(_BYTE *)(v11 + 16) )
        {
          v12 = *(_QWORD *)(a1 + 24);
          v13 = *(_QWORD *)(a1 + 40);
          v14 = *(char **)v11;
          if ( v12 != v13 )
          {
            v15 = *(char **)(v11 + 8);
            if ( v15 == v14 )
            {
LABEL_61:
              v13 = v12;
            }
            else
            {
              while ( ++v12 != v13 )
              {
                if ( v15 == ++v14 )
                  goto LABEL_61;
              }
            }
          }
          v16 = *(_QWORD *)(a1 + 48);
          v17 = *(char **)(a1 + 24);
          v18 = *(_QWORD *)(v16 + 16) + 80LL;
          v49.m128i_i8[8] = *(_DWORD *)v16 & 1;
          v19 = *(char **)(v11 + 8);
          v20 = *(char **)v11;
          v50 = v18;
          result = sub_1251AE0((const std::locale **)&v49.m128i_i64[1], v20, v19, v17, v13);
          if ( (_BYTE)result )
          {
            v21 = *(_QWORD *)(a1 + 24);
            if ( v13 == v21 )
              return sub_12543F0(a1, v9, *((_QWORD *)v6 + 1));
            *(_QWORD *)(a1 + 24) = v13;
            result = sub_12543F0(a1, v9, *((_QWORD *)v6 + 1));
            *(_QWORD *)(a1 + 24) = v21;
          }
        }
        return result;
      case 4u:
        result = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 24) == result && (*(_BYTE *)(a1 + 136) & 0x81) == 0 )
          return sub_12543F0(a1, v9, *((_QWORD *)v6 + 1));
        return result;
      case 5u:
        result = *(_QWORD *)(a1 + 40);
        if ( *(_QWORD *)(a1 + 24) == result && (*(_BYTE *)(a1 + 136) & 2) == 0 )
          return sub_12543F0(a1, v9, *((_QWORD *)v6 + 1));
        return result;
      case 6u:
        v22 = *(unsigned __int8 **)(a1 + 24);
        if ( v22 == *(unsigned __int8 **)(a1 + 32) )
        {
          v45 = *(_DWORD *)(a1 + 136);
          if ( (v45 & 4) != 0 )
            goto LABEL_35;
          v27 = *(unsigned __int8 **)(a1 + 40);
          if ( v22 != v27 )
          {
            if ( (v45 & 0x80) == 0 )
            {
LABEL_60:
              v46 = *v22;
              v47 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 80LL;
              v48 = sub_1252DD0(v47, "w", "", 0);
              v4 ^= sub_12536A0(v47, v46, v48);
              goto LABEL_35;
            }
            goto LABEL_33;
          }
          if ( (v45 & 8) == 0 )
          {
            if ( (v45 & 0x80) == 0 )
            {
LABEL_34:
              if ( v27 == v22 )
                goto LABEL_35;
              goto LABEL_60;
            }
LABEL_33:
            v23 = *(v22 - 1);
            v24 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 80LL;
            v25 = sub_1252DD0(v24, "w", "", 0);
            v26 = sub_12536A0(v24, v23, v25);
            v27 = *(unsigned __int8 **)(a1 + 40);
            v4 = v26;
            v22 = *(unsigned __int8 **)(a1 + 24);
            goto LABEL_34;
          }
        }
        else if ( v22 != *(unsigned __int8 **)(a1 + 40) || (*(_BYTE *)(a1 + 136) & 8) == 0 )
        {
          goto LABEL_33;
        }
LABEL_35:
        result = *((unsigned __int8 *)v6 + 24) ^ 1u;
        if ( (*((_BYTE *)v6 + 24) ^ 1) == (_BYTE)v4 )
          return sub_12543F0(a1, v9, *((_QWORD *)v6 + 1));
        break;
      case 7u:
        result = sub_1254D30(a1, *((_QWORD *)v6 + 2));
        if ( (_BYTE)result == (*((_BYTE *)v6 + 24) ^ 1) )
          return sub_12543F0(a1, v9, *((_QWORD *)v6 + 1));
        return result;
      case 8u:
        v28 = (__int64 *)(*(_QWORD *)a1 + 24LL * *((_QWORD *)v6 + 2));
        v29 = *v28;
        *v28 = *(_QWORD *)(a1 + 24);
        result = sub_12543F0(a1, a2, *((_QWORD *)v6 + 1));
        *v28 = v29;
        return result;
      case 9u:
        v30 = *(_QWORD *)a1 + 24LL * *((_QWORD *)v6 + 2);
        v31 = *(_QWORD *)(v30 + 8);
        v32 = *(_BYTE *)(v30 + 16);
        v49.m128i_i64[0] = *(_QWORD *)v30;
        v33 = *(_QWORD *)(a1 + 24);
        *(_BYTE *)(v30 + 16) = 1;
        *(_QWORD *)(v30 + 8) = v33;
        result = sub_12543F0(a1, a2, *((_QWORD *)v6 + 1));
        *(_BYTE *)(v30 + 16) = v32;
        v49.m128i_i64[0] = v31;
        *(__m128 *)v30 = _mm_loadh_ps((const double *)v49.m128i_i64);
        return result;
      case 0xBu:
        result = *(_QWORD *)(a1 + 24);
        if ( result != *(_QWORD *)(a1 + 40) )
        {
          v49.m128i_i8[8] = *(_BYTE *)result;
          if ( !*((_QWORD *)v6 + 4) )
            std::__throw_bad_function_call();
          result = (*((__int64 (__fastcall **)(unsigned int *, unsigned __int64 *))v6 + 5))(v6 + 4, &v49.m128i_u64[1]);
          if ( (_BYTE)result )
          {
            v34 = *((_QWORD *)v6 + 1);
            v35 = *(_QWORD *)(a1 + 104);
            v49.m128i_i64[1] = v34;
            if ( v35 == *(_QWORD *)(a1 + 112) )
            {
              return sub_1251800(a1 + 96, (char *)v35, &v49.m128i_i64[1], (const __m128i **)a1);
            }
            else
            {
              v36 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
              *(_QWORD *)v35 = v34;
              *(_OWORD *)(v35 + 8) = 0;
              v37 = v35;
              *(_QWORD *)(v35 + 24) = 0;
              result = 0xAAAAAAAAAAAAAAABLL * (v36 >> 3);
              if ( result )
              {
                if ( result > 0xAAAAAAAAAAAAAAALL )
                  std::__throw_bad_alloc();
                result = operator new(v36);
                v37 = *(_QWORD *)(a1 + 104);
              }
              v49.m128i_i64[0] = result;
              v38 = _mm_loadl_epi64(&v49);
              *(_QWORD *)(v35 + 24) = result + v36;
              *(__m128i *)(v35 + 8) = _mm_unpacklo_epi64(v38, v38);
              v39 = *(const __m128i **)(a1 + 8);
              v40 = *(const __m128i **)a1;
              if ( v39 != *(const __m128i **)a1 )
              {
                v41 = *(const __m128i **)a1;
                v42 = result;
                do
                {
                  v43 = _mm_loadu_si128(v41);
                  v41 = (const __m128i *)((char *)v41 + 24);
                  v42 += 24LL;
                  *(__m128i *)(v42 - 24) = v43;
                  *(_QWORD *)(v42 - 8) = v41[-1].m128i_i64[1];
                }
                while ( v39 != v41 );
                result += 8 * ((unsigned __int64)((char *)&v39[-2].m128i_u64[1] - (char *)v40) >> 3) + 24;
              }
              *(_QWORD *)(v35 + 16) = result;
              *(_QWORD *)(a1 + 104) = v37 + 32;
            }
          }
        }
        return result;
      case 0xCu:
        result = *(_QWORD *)(a1 + 24);
        if ( (result != *(_QWORD *)(a1 + 32) || (*(_BYTE *)(a1 + 136) & 0x20) == 0)
          && ((_BYTE)a2 == 1 || result == *(_QWORD *)(a1 + 40))
          && !*(_BYTE *)(a1 + 140) )
        {
          *(_BYTE *)(a1 + 140) = 1;
          return (unsigned __int64)sub_1250570(*(const __m128i ***)(a1 + 64), (const __m128i **)a1);
        }
        return result;
      default:
        return v7;
    }
  }
  return result;
}
