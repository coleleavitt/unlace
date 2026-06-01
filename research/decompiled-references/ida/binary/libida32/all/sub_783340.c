__int64 __fastcall sub_783340(__m128i *a1, __int64 *a2, _BYTE *a3)
{
  int v3; // r15d
  char v4; // r12
  int v5; // ebp
  __int64 result; // rax
  char *v9; // rdx
  __int64 v10; // r8
  char v11; // r9
  unsigned __int64 v12; // rdx
  char v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  _BYTE *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rax
  char v19; // r10
  unsigned __int64 v20; // rdx
  _BYTE *v21; // rsi
  __int64 v22; // r12
  __int64 v23; // r14
  void *v24; // rdi
  __int32 v25; // eax
  __int64 v26; // rdx
  char *v27; // rax
  void *v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rsi
  void **v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned int v36; // [rsp+0h] [rbp-78h]
  unsigned __int64 v37; // [rsp+0h] [rbp-78h]
  unsigned __int64 v38; // [rsp+0h] [rbp-78h]
  unsigned __int64 v39; // [rsp+0h] [rbp-78h]
  char v40; // [rsp+Fh] [rbp-69h]
  char v41; // [rsp+Fh] [rbp-69h]
  char v42; // [rsp+Fh] [rbp-69h]
  __int64 v43; // [rsp+10h] [rbp-68h]
  __int64 v44; // [rsp+10h] [rbp-68h]
  __int64 v45; // [rsp+10h] [rbp-68h]
  __int64 *v46; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v48; // [rsp+28h] [rbp-50h]
  unsigned __int64 v49; // [rsp+38h] [rbp-40h]

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v46 = a2;
  v49 = __readfsqword(0x28u);
  *a3 = 1;
  ptr = nullptr;
  v48 = 0;
  for ( result = sub_783100(a1); ; result = sub_783100(a1) )
  {
    if ( (_DWORD)result == 34 )
    {
      result = set_qerrno((v5 << 31 >> 31) & 0x26, a2);
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
      v24 = ptr;
      goto LABEL_35;
    }
    a1->m128i_i64[1] = (__int64)(v9 + 1);
    if ( v9[1] == 41 )
    {
      a1->m128i_i64[1] = (__int64)(v9 + 2);
LABEL_34:
      v24 = ptr;
      goto LABEL_35;
    }
LABEL_7:
    v5 = 1;
  }
  while ( 2 )
  {
    v13 = *v9;
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
          v17 = v48.m128i_i64[0];
          v18 = v48.m128i_i64[0];
          if ( !v13 )
            goto LABEL_30;
          a1->m128i_i64[1] = (__int64)(v9 + 1);
          v19 = *v9;
          v20 = 2;
          if ( v17 )
            v20 = v17-- + 1;
          v21 = ptr;
          if ( v48.m128i_i64[1] < v20 )
          {
            v43 = v17;
            v40 = v19;
            v37 = v20;
            ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
            v17 = v43;
            v21 = ptr;
            v19 = v40;
            v20 = v37;
          }
          v48.m128i_i64[0] = v20;
          v21[v17] = v19;
          *((_BYTE *)ptr + v17 + 1) = 0;
          v9 = (char *)a1->m128i_i64[1];
          v13 = *v9;
          if ( v19 != 92 )
            goto LABEL_21;
          if ( v13 )
          {
            v14 = v48.m128i_i64[0];
            v15 = 2;
            if ( v48.m128i_i64[0] )
            {
              v15 = v48.m128i_i64[0] + 1;
              v14 = v48.m128i_i64[0] - 1;
            }
            v16 = ptr;
            if ( v48.m128i_i64[1] < v15 )
            {
              v45 = v14;
              v42 = v13;
              v39 = v15;
              ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
              v14 = v45;
              v16 = ptr;
              v13 = v42;
              v15 = v39;
            }
            v48.m128i_i64[0] = v15;
            v16[v14] = v13;
            *((_BYTE *)ptr + v14 + 1) = 0;
            v9 = (char *)(a1->m128i_i64[1] + 1);
            a1->m128i_i64[1] = (__int64)v9;
            v13 = *v9;
LABEL_21:
            if ( v13 == 34 )
              goto LABEL_10;
            continue;
          }
          break;
        }
LABEL_29:
        v18 = v48.m128i_i64[0];
LABEL_30:
        v22 = v18;
        v23 = 2;
        if ( v18 )
        {
          a2 = (__int64 *)ptr;
          v23 = v18 + 1;
          v22 = v18 - 1;
          if ( v48.m128i_i64[1] >= (unsigned __int64)(v18 + 1) )
            goto LABEL_32;
        }
        else
        {
          a2 = (__int64 *)ptr;
          if ( v48.m128i_i64[1] >= 2uLL )
            goto LABEL_32;
        }
        ptr = (void *)qvector_reserve(&ptr, a2, v23, 1);
        a2 = (__int64 *)ptr;
LABEL_32:
        v48.m128i_i64[0] = v23;
        *((_BYTE *)a2 + v22) = 32;
        *((_BYTE *)ptr + v22 + 1) = 0;
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
          v10 = v48.m128i_i64[0];
          a1->m128i_i64[1] = (__int64)(v9 + 1);
          v11 = *v9;
          v12 = 2;
          if ( v10 )
            v12 = v10-- + 1;
          a2 = (__int64 *)ptr;
          if ( v48.m128i_i64[1] < v12 )
          {
            v44 = v10;
            v41 = v11;
            v38 = v12;
            ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
            v10 = v44;
            a2 = (__int64 *)ptr;
            v11 = v41;
            v12 = v38;
          }
          v48.m128i_i64[0] = v12;
          *((_BYTE *)a2 + v10) = v11;
          *((_BYTE *)ptr + v10 + 1) = 0;
          v9 = (char *)a1->m128i_i64[1];
          continue;
        }
        v31 = v46[1];
        v32 = (_QWORD *)*v46;
        if ( v46[2] < (unsigned __int64)(v31 + 1) )
        {
          v35 = qvector_reserve(v46, v32, v31 + 1, 24);
          *v46 = v35;
          v32 = (_QWORD *)v35;
          v31 = v46[1];
        }
        v33 = (void **)&v32[3 * v31];
        *v33 = nullptr;
        *(_OWORD *)(v33 + 1) = 0;
        ++v46[1];
        v24 = *v33;
        v34 = (__int64)v33[2];
        *v33 = ptr;
        ptr = v24;
        *(__m128i *)(v33 + 1) = v48;
        result = 0;
        ++a1->m128i_i64[1];
        v48.m128i_i64[1] = v34;
LABEL_35:
        if ( v24 )
        {
          v36 = result;
          v48.m128i_i64[0] = 0;
          qfree(v24);
          return v36;
        }
        return result;
      case 44:
        if ( v3 )
          goto LABEL_10;
        v26 = v46[1];
        a2 = (__int64 *)*v46;
        if ( v46[2] < (unsigned __int64)(v26 + 1) )
        {
          v30 = qvector_reserve(v46, a2, v26 + 1, 24);
          *v46 = v30;
          v26 = v46[1];
          a2 = (__int64 *)v30;
        }
        v27 = (char *)&a2[3 * v26];
        *(_QWORD *)v27 = 0;
        *(_OWORD *)(v27 + 8) = 0;
        ++v46[1];
        v28 = *(void **)v27;
        v29 = _mm_loadu_si128((const __m128i *)(v27 + 8));
        *(_QWORD *)v27 = ptr;
        ptr = v28;
        *(__m128i *)(v27 + 8) = v48;
        v48 = v29;
        ++a1->m128i_i64[1];
        goto LABEL_7;
      case 47:
        v25 = a1[40].m128i_i32[3];
        if ( (v25 & 1) != 0 && v9[1] == 42 || (v25 & 4) != 0 && v9[1] == 47 )
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

