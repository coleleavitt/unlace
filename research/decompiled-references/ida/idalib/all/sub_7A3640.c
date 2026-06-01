__int64 __fastcall sub_7A3640(__m128i *a1, __int64 *a2, _BYTE *a3)
{
  int v3; // r15d
  char v4; // r12
  int v5; // ebp
  __int64 result; // rax
  char *v9; // rdx
  __int64 v10; // r8
  char v11; // r9
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rsi
  char v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rax
  char v20; // r10
  unsigned __int64 v21; // rdx
  _BYTE *v22; // rsi
  __int64 v23; // r12
  __int64 v24; // r14
  _BYTE *v25; // rsi
  void *v26; // rdi
  __int32 v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  void *v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // [rsp+0h] [rbp-78h]
  unsigned __int64 v40; // [rsp+0h] [rbp-78h]
  unsigned __int64 v41; // [rsp+0h] [rbp-78h]
  unsigned __int64 v42; // [rsp+0h] [rbp-78h]
  char v43; // [rsp+Fh] [rbp-69h]
  char v44; // [rsp+Fh] [rbp-69h]
  char v45; // [rsp+Fh] [rbp-69h]
  __int64 v46; // [rsp+10h] [rbp-68h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  __int64 v48; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v51; // [rsp+28h] [rbp-50h]
  unsigned __int64 v52; // [rsp+38h] [rbp-40h]

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v52 = __readfsqword(0x28u);
  *a3 = 1;
  ptr = nullptr;
  v51 = 0;
  for ( result = sub_7A3400(a1); ; result = sub_7A3400(a1) )
  {
    if ( (_DWORD)result == 34 )
    {
      result = set_qerrno((v5 << 31 >> 31) & 0x26);
      goto LABEL_34;
    }
    if ( (_DWORD)result )
      goto LABEL_34;
    v9 = (char *)a1->m128i_i64[1];
    if ( (_BYTE)v5 )
      break;
    if ( *v9 != 40 )
    {
      *a3 = 0;
      v26 = ptr;
      goto LABEL_35;
    }
    a1->m128i_i64[1] = (__int64)(v9 + 1);
    if ( v9[1] == 41 )
    {
      a1->m128i_i64[1] = (__int64)(v9 + 2);
LABEL_34:
      v26 = ptr;
      goto LABEL_35;
    }
LABEL_7:
    v5 = 1;
  }
  while ( 2 )
  {
    v14 = *v9;
    switch ( *v9 )
    {
      case 0:
        goto LABEL_29;
      case 9:
      case 10:
      case 32:
        if ( v4 )
        {
          a1->m128i_i64[1] = (__int64)++v9;
          continue;
        }
        v4 = v5;
        goto LABEL_10;
      case 34:
        while ( 2 )
        {
          v18 = v51.m128i_i64[0];
          v19 = v51.m128i_i64[0];
          if ( !v14 )
            goto LABEL_30;
          a1->m128i_i64[1] = (__int64)(v9 + 1);
          v20 = *v9;
          v21 = 2;
          if ( v18 )
            v21 = v18-- + 1;
          v22 = ptr;
          if ( v51.m128i_i64[1] < v21 )
          {
            v46 = v18;
            v43 = v20;
            v40 = v21;
            ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
            v18 = v46;
            v22 = ptr;
            v20 = v43;
            v21 = v40;
          }
          v51.m128i_i64[0] = v21;
          v22[v18] = v20;
          *((_BYTE *)ptr + v18 + 1) = 0;
          v9 = (char *)a1->m128i_i64[1];
          v14 = *v9;
          if ( v20 != 92 )
            goto LABEL_21;
          if ( v14 )
          {
            v15 = v51.m128i_i64[0];
            v16 = 2;
            if ( v51.m128i_i64[0] )
            {
              v16 = v51.m128i_i64[0] + 1;
              v15 = v51.m128i_i64[0] - 1;
            }
            v17 = ptr;
            if ( v51.m128i_i64[1] < v16 )
            {
              v48 = v15;
              v45 = v14;
              v42 = v16;
              ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
              v15 = v48;
              v17 = ptr;
              v14 = v45;
              v16 = v42;
            }
            v51.m128i_i64[0] = v16;
            v17[v15] = v14;
            *((_BYTE *)ptr + v15 + 1) = 0;
            v9 = (char *)(a1->m128i_i64[1] + 1);
            a1->m128i_i64[1] = (__int64)v9;
            v14 = *v9;
LABEL_21:
            if ( v14 == 34 )
              goto LABEL_10;
            continue;
          }
          break;
        }
LABEL_29:
        v19 = v51.m128i_i64[0];
LABEL_30:
        v23 = v19;
        v24 = 2;
        if ( v19 )
        {
          v25 = ptr;
          v24 = v19 + 1;
          v23 = v19 - 1;
          if ( v51.m128i_i64[1] >= (unsigned __int64)(v19 + 1) )
            goto LABEL_32;
        }
        else
        {
          v25 = ptr;
          if ( v51.m128i_i64[1] >= 2uLL )
            goto LABEL_32;
        }
        ptr = (void *)qvector_reserve(&ptr, v25, v24, 1);
        v25 = ptr;
LABEL_32:
        v51.m128i_i64[0] = v24;
        v25[v23] = 32;
        *((_BYTE *)ptr + v23 + 1) = 0;
        v4 = v5;
        goto LABEL_7;
      case 40:
        if ( (a1[40].m128i_i8[12] & 2) != 0 && v9[1] == 42 )
          goto LABEL_7;
        ++v3;
        goto LABEL_10;
      case 41:
        if ( v3 )
        {
          --v3;
LABEL_10:
          v10 = v51.m128i_i64[0];
          a1->m128i_i64[1] = (__int64)(v9 + 1);
          v11 = *v9;
          v12 = 2;
          if ( v10 )
            v12 = v10-- + 1;
          v13 = ptr;
          if ( v51.m128i_i64[1] < v12 )
          {
            v47 = v10;
            v44 = v11;
            v41 = v12;
            ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
            v10 = v47;
            v13 = ptr;
            v11 = v44;
            v12 = v41;
          }
          v51.m128i_i64[0] = v12;
          v13[v10] = v11;
          *((_BYTE *)ptr + v10 + 1) = 0;
          v9 = (char *)a1->m128i_i64[1];
          continue;
        }
        v34 = a2[1];
        v35 = *a2;
        if ( a2[2] < (unsigned __int64)(v34 + 1) )
        {
          v38 = qvector_reserve(a2, v35, v34 + 1, 24);
          *a2 = v38;
          v35 = v38;
          v34 = a2[1];
        }
        v36 = v35 + 24 * v34;
        *(_QWORD *)v36 = 0;
        *(_OWORD *)(v36 + 8) = 0;
        ++a2[1];
        v26 = *(void **)v36;
        v37 = *(_QWORD *)(v36 + 16);
        *(_QWORD *)v36 = ptr;
        ptr = v26;
        *(__m128i *)(v36 + 8) = v51;
        result = 0;
        ++a1->m128i_i64[1];
        v51.m128i_i64[1] = v37;
LABEL_35:
        if ( v26 )
        {
          v39 = result;
          v51.m128i_i64[0] = 0;
          qfree(v26);
          return v39;
        }
        return result;
      case 44:
        if ( v3 )
          goto LABEL_10;
        v28 = a2[1];
        v29 = *a2;
        if ( a2[2] < (unsigned __int64)(v28 + 1) )
        {
          v33 = qvector_reserve(a2, v29, v28 + 1, 24);
          *a2 = v33;
          v28 = a2[1];
          v29 = v33;
        }
        v30 = v29 + 24 * v28;
        *(_QWORD *)v30 = 0;
        *(_OWORD *)(v30 + 8) = 0;
        ++a2[1];
        v31 = *(void **)v30;
        v32 = _mm_loadu_si128((const __m128i *)(v30 + 8));
        *(_QWORD *)v30 = ptr;
        ptr = v31;
        *(__m128i *)(v30 + 8) = v51;
        v51 = v32;
        ++a1->m128i_i64[1];
        goto LABEL_7;
      case 47:
        v27 = a1[40].m128i_i32[3];
        if ( (v27 & 1) != 0 && v9[1] == 42 || (v27 & 4) != 0 && v9[1] == 47 )
          goto LABEL_7;
        goto LABEL_9;
      case 59:
        if ( (a1[40].m128i_i8[12] & 8) != 0 )
          goto LABEL_7;
        goto LABEL_9;
      default:
LABEL_9:
        v4 = 0;
        goto LABEL_10;
    }
  }
}
