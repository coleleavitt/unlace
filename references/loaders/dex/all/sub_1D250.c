__int64 __fastcall sub_1D250(unsigned __int8 **a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // rdx
  unsigned __int8 v4; // bl
  unsigned __int64 v5; // r12
  unsigned __int8 *v6; // r14
  char v8; // bl
  int v9; // ebx
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rbp
  char v13; // di
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  __int64 v23; // rbx
  char *v24; // r12
  _DWORD *v25; // rsi
  _DWORD *v27; // rsi
  __int64 *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int8 v31; // [rsp+Fh] [rbp-69h]
  __int64 v33; // [rsp+18h] [rbp-60h]
  __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  __m128i v35; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v2 = 4293066845LL;
  v36 = __readfsqword(0x28u);
  v3 = *a1;
  v4 = **a1;
  v5 = v4 & 0x1F;
  v31 = _bittest64(&v2, v5);
  if ( v31 )
  {
    if ( (unsigned __int8)(v5 - 28) <= 1u )
    {
      return 0;
    }
    else
    {
      v6 = v3 + 1;
      *a1 = v3 + 1;
      if ( (_BYTE)v5 == 30 )
      {
        v27 = (_DWORD *)*a2;
        if ( (unsigned __int64)a2[2] <= 4 )
        {
          v28 = a2;
          v29 = qvector_reserve(a2, v27, 5, 1);
          *v28 = v29;
          v27 = (_DWORD *)v29;
        }
        a2[1] = 5;
        *v27 = 1280070990;
        *(_BYTE *)(*a2 + 4) = 0;
      }
      else
      {
        v8 = v4 >> 5;
        if ( (_BYTE)v5 == 31 )
        {
          if ( v8 )
          {
            v22 = 5;
            v23 = 4;
            v24 = "true";
          }
          else
          {
            v22 = 6;
            v23 = 5;
            v24 = "false";
          }
          v25 = (_DWORD *)*a2;
          if ( a2[2] < v22 )
          {
            v30 = qvector_reserve(a2, v25, v22, 1);
            *a2 = v30;
            v25 = (_DWORD *)v30;
          }
          a2[1] = v22;
          *v25 = *(_DWORD *)v24;
          *(_DWORD *)((char *)v25 + (unsigned int)v23 - 4) = *(_DWORD *)&v24[(unsigned int)v23 - 4];
          *(_BYTE *)(*a2 + v23) = 0;
        }
        else
        {
          if ( (_BYTE)v5 )
          {
            v21 = (unsigned __int8)(v8 + 1);
            v9 = (unsigned __int8)(v8 + 1);
            v33 = v21;
          }
          else
          {
            v33 = 1;
            v9 = 1;
          }
          v10 = 1;
          v11 = 0;
          while ( 1 )
          {
            v12 = v11 << 8;
            v13 = getinf_flag(3, 32);
            v14 = (unsigned int)(v9 - v10);
            if ( v13 )
              v14 = (unsigned int)(v10 - 1);
            v15 = v6[v14];
            v6 = *a1;
            v11 = v12 | v15;
            if ( v9 == v10 )
              break;
            ++v10;
          }
          v34 = 0;
          v35 = 0;
          *a1 = &v6[v33];
          switch ( v5 )
          {
            case 0uLL:
              sub_E410(&v34, (__int64)"0x%hhx", (unsigned __int8)v11);
              goto LABEL_29;
            case 2uLL:
            case 4uLL:
              sub_E410(&v34, (__int64)"%d", v11 << (64 - 8 * (unsigned __int8)v33) >> (64 - 8 * (unsigned __int8)v33));
              goto LABEL_29;
            case 3uLL:
              sub_E410(&v34, (__int64)"0x%hx", (unsigned __int16)v11);
              goto LABEL_29;
            case 6uLL:
              sub_E410(&v34, (__int64)"%lld", v11 << (64 - 8 * (unsigned __int8)v33) >> (64 - 8 * (unsigned __int8)v33));
              goto LABEL_29;
            case 0x10uLL:
              sub_E410(&v34, (__int64)"%f", COERCE_FLOAT((_DWORD)v11 << (8 * (4 - v33))));
              goto LABEL_29;
            case 0x11uLL:
              sub_E410(&v34, (__int64)"%lf", COERCE_DOUBLE(v11 << (8 * (8 - (unsigned __int8)v33))));
              goto LABEL_29;
            case 0x15uLL:
              sub_E410(&v34, (__int64)"METHOD_TYPE(%x)", v11);
              goto LABEL_29;
            case 0x16uLL:
              sub_E410(&v34, (__int64)"METHOD_HANDLE(%x)", v11);
              goto LABEL_29;
            case 0x17uLL:
              sub_E410(&v34, (__int64)"STRING(%x)", v11);
              goto LABEL_29;
            case 0x18uLL:
              sub_E410(&v34, (__int64)"TYPE(%x)", v11);
              goto LABEL_29;
            case 0x19uLL:
              sub_E410(&v34, (__int64)"FIELD(%x)", v11);
              goto LABEL_29;
            case 0x1AuLL:
              sub_E410(&v34, (__int64)"METHOD(%x)", v11);
              goto LABEL_29;
            case 0x1BuLL:
              sub_E410(&v34, (__int64)"ENUM(%x)", v11);
LABEL_29:
              v17 = v34;
              v16 = _mm_loadu_si128(&v35);
              break;
            default:
              v16 = 0;
              v17 = 0;
              break;
          }
          v18 = *a2;
          v19 = a2[2];
          *a2 = v17;
          *(__m128i *)(a2 + 1) = v16;
          v34 = v18;
          v35.m128i_i64[1] = v19;
          if ( v18 )
          {
            v35.m128i_i64[0] = 0;
            qfree(v18);
          }
        }
      }
    }
  }
  return v31;
}
