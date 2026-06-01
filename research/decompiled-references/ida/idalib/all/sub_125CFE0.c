__int64 __fastcall sub_125CFE0(__int64 a1)
{
  unsigned int v2; // ebp
  int v3; // eax
  int v5; // edx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __m128 v8; // xmm0
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm0
  int v12; // eax
  __int64 v13; // rdi
  int v14; // edx
  __m128 v15; // xmm0
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rbp
  int v20; // eax
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  _QWORD *v24; // rdi
  __m128i v25; // xmm0
  int v26; // eax
  __m128i v27; // rax
  __m128i v28; // xmm0
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  __m128i v34; // [rsp+8h] [rbp-B0h] BYREF
  __m128i v35; // [rsp+18h] [rbp-A0h]
  __int64 v36; // [rsp+30h] [rbp-88h] BYREF
  __m128i v37; // [rsp+38h] [rbp-80h]
  __int64 v38; // [rsp+60h] [rbp-58h] BYREF
  _OWORD v39[5]; // [rsp+68h] [rbp-50h]

  if ( !*(_DWORD *)(a1 + 152) )
  {
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    v12 = *(_DWORD *)a1;
    v13 = *(_QWORD *)(a1 + 256);
    v14 = *(_DWORD *)a1 & 8;
    if ( (*(_DWORD *)a1 & 0x10) != 0 )
    {
      if ( (v12 & 1) != 0 )
      {
        v38 = *(_QWORD *)(a1 + 384);
        if ( v14 )
          v15 = _mm_loadh_ps((const double *)off_2C78610);
        else
          v15 = _mm_loadh_ps((const double *)off_2C78F78);
      }
      else if ( v14 )
      {
        v15 = _mm_loadh_ps((const double *)off_2C78E40);
        v38 = *(_QWORD *)(a1 + 384);
      }
      else
      {
        v15 = _mm_loadh_ps((const double *)&off_2C78198);
      }
    }
    else if ( (v12 & 1) != 0 )
    {
      v38 = *(_QWORD *)(a1 + 384);
      if ( v14 )
        v15 = _mm_loadh_ps((const double *)off_2C78858);
      else
        v15 = _mm_loadh_ps((const double *)off_2C78D30);
    }
    else if ( v14 )
    {
      v15 = _mm_loadh_ps((const double *)off_2C77B90);
      v38 = *(_QWORD *)(a1 + 384);
    }
    else
    {
      v15 = _mm_loadh_ps((const double *)off_2C78348);
    }
    *(__m128 *)((char *)v39 + 8) = v15;
    v16 = sub_1252B20(v13, (__m128i *)&v38);
    v17 = *(_QWORD *)(a1 + 256);
    v34.m128i_i64[0] = v16;
    v18 = _mm_loadl_epi64(&v34);
    v36 = v17;
    v37 = _mm_unpacklo_epi64(v18, v18);
    sub_1253440((_QWORD *)(a1 + 304), (const __m128i *)&v36);
    if ( *((_QWORD *)&v39[0] + 1) )
      (*((void (__fastcall **)(__int64 *, __int64 *, __int64))&v39[0] + 1))(&v38, &v38, 3);
    return 1;
  }
  v2 = sub_1251410(a1);
  if ( !(_BYTE)v2 )
  {
    v3 = *(_DWORD *)(a1 + 152);
    switch ( v3 )
    {
      case 4:
        sub_9EE8A0(a1 + 272, a1 + 208);
        sub_12510C0((unsigned __int8 *)(a1 + 8));
        v19 = *(_QWORD *)(a1 + 256);
        v20 = sub_12513B0(a1, 10);
        if ( (*(_BYTE *)(v19 + 25) & 4) == 0 && (unsigned __int64)v20 < *(_QWORD *)(v19 + 40) )
        {
          v21 = *(_QWORD **)v19;
          v22 = *(_QWORD **)(v19 + 8);
          if ( *(_QWORD **)v19 != v22 )
          {
            if ( v20 == *v21 )
              break;
            v23 = v21 + 1;
            while ( v22 != v23 )
            {
              if ( v20 == *v23++ )
                goto LABEL_58;
            }
          }
          *(_BYTE *)(v19 + 48) = 1;
          v37.m128i_i64[1] = v20;
          LODWORD(v36) = 3;
          v37.m128i_i64[0] = -1;
          sub_124FC70((__m128i *)&v38, (const __m128i *)&v36);
          v24 = (_QWORD *)v19;
          v2 = 1;
          v34.m128i_i64[0] = sub_1252950(v24, (const __m128i *)&v38);
          sub_124FBE0((__int64)&v38);
          sub_124FBE0((__int64)&v36);
          v25 = _mm_loadl_epi64(&v34);
          v38 = *(_QWORD *)(a1 + 256);
          v39[0] = _mm_unpacklo_epi64(v25, v25);
          sub_1253440((_QWORD *)(a1 + 304), (const __m128i *)&v38);
          return v2;
        }
        break;
      case 14:
        sub_9EE8A0(a1 + 272, a1 + 208);
        sub_12510C0((unsigned __int8 *)(a1 + 8));
        v26 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 1) != 0 )
        {
          if ( (v26 & 8) != 0 )
            sub_1256720((_QWORD *)a1);
          else
            sub_1256C20((_QWORD *)a1);
          return 1;
        }
        else
        {
          if ( (v26 & 8) != 0 )
            sub_1257190((_QWORD *)a1);
          else
            sub_12562B0((_QWORD *)a1);
          return 1;
        }
      case 6:
        sub_9EE8A0(a1 + 272, a1 + 208);
        sub_12510C0((unsigned __int8 *)(a1 + 8));
        v27.m128i_i64[0] = sub_12529C0(*(_QWORD **)(a1 + 256));
        v27.m128i_i64[1] = *(_QWORD *)(a1 + 256);
        v34 = v27;
        v28 = _mm_loadl_epi64(&v34);
        v35 = _mm_unpacklo_epi64(v28, v28);
        sub_125D8E0(a1);
        if ( *(_DWORD *)(a1 + 152) == 8 )
        {
          sub_9EE8A0(a1 + 272, a1 + 208);
          v2 = 1;
          sub_12510C0((unsigned __int8 *)(a1 + 8));
          sub_124FB10((__m128i *)&v38, (__m128 *)a1);
          *(_QWORD *)(*(_QWORD *)(v34.m128i_i64[1] + 56) + 48 * v35.m128i_i64[1] + 8) = *(_QWORD *)&v39[0];
          v35.m128i_i64[1] = *((_QWORD *)&v39[0] + 1);
          sub_1253380((_QWORD *)(a1 + 304), (const __m128i *)&v34.m128i_u64[1]);
          return v2;
        }
        break;
      case 5:
        sub_9EE8A0(a1 + 272, a1 + 208);
        sub_12510C0((unsigned __int8 *)(a1 + 8));
        v29 = sub_1252CD0(*(_QWORD *)(a1 + 256));
        v30 = *(_QWORD *)(a1 + 256);
        v34.m128i_i64[0] = v29;
        v31 = _mm_loadl_epi64(&v34);
        v36 = v30;
        v37 = _mm_unpacklo_epi64(v31, v31);
        sub_125D8E0(a1);
        if ( *(_DWORD *)(a1 + 152) == 8 )
        {
          sub_9EE8A0(a1 + 272, a1 + 208);
          sub_12510C0((unsigned __int8 *)(a1 + 8));
          sub_124FB10((__m128i *)&v38, (__m128 *)a1);
          *(_QWORD *)(*(_QWORD *)(v36 + 56) + 48 * v37.m128i_i64[1] + 8) = *(_QWORD *)&v39[0];
          v32 = *(_QWORD *)(a1 + 256);
          v37.m128i_i64[1] = *((_QWORD *)&v39[0] + 1);
          v33 = sub_1252C10(v32);
          *(_QWORD *)(*(_QWORD *)(v36 + 56) + 48 * v37.m128i_i64[1] + 8) = v33;
          v37.m128i_i64[1] = v33;
          sub_1253380((_QWORD *)(a1 + 304), (const __m128i *)&v36);
          return 1;
        }
        break;
      default:
        return (unsigned int)sub_125CF10(a1);
    }
LABEL_58:
    abort();
  }
  v5 = *(_DWORD *)a1 & 8;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    if ( v5 )
      sub_12535E0(a1);
    else
      sub_1253520(a1);
    return v2;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 256);
    if ( v5 )
    {
      v7 = *(_QWORD *)(a1 + 384);
      LOBYTE(v39[0]) = **(_BYTE **)(a1 + 272);
      v38 = v7;
      v8 = _mm_loadh_ps((const double *)off_2C785D0);
    }
    else
    {
      BYTE1(v38) = **(_BYTE **)(a1 + 272);
      v8 = _mm_loadh_ps((const double *)off_2C77CE8);
    }
    *(__m128 *)((char *)v39 + 8) = v8;
    v9 = sub_1252B20(v6, (__m128i *)&v38);
    v10 = *(_QWORD *)(a1 + 256);
    v34.m128i_i64[0] = v9;
    v11 = _mm_loadl_epi64(&v34);
    v36 = v10;
    v37 = _mm_unpacklo_epi64(v11, v11);
    sub_1253440((_QWORD *)(a1 + 304), (const __m128i *)&v36);
    if ( !*((_QWORD *)&v39[0] + 1) )
      return v2;
    (*((void (__fastcall **)(__int64 *, __int64 *, __int64))&v39[0] + 1))(&v38, &v38, 3);
    return v2;
  }
}
