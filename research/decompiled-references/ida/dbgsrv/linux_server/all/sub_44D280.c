/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D280
// Address: 0x000000000044D280

//----- (000000000044D280) ----------------------------------------------------
__int64 __fastcall sub_44D280(__m128i *a1, char **a2, _BYTE *a3, int a4, int a5, int a6)
{
  int v6; // r15d
  char v7; // r12
  int v8; // ebp
  __int64 result; // rax
  int v12; // ecx
  __int64 v13; // r8
  int v14; // r9d
  char *v15; // rdx
  char v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  _BYTE *v20; // rsi
  __int64 v21; // rax
  char v22; // r10
  unsigned __int64 v23; // rdx
  _BYTE *v24; // rsi
  __int64 v25; // r12
  unsigned __int64 v26; // r14
  void *v27; // rdi
  __int32 v28; // eax
  char *v29; // rdx
  void **v30; // rax
  __m128i v31; // xmm0
  char *v32; // rax
  char *v33; // rax
  char *v34; // rsi
  char *v35; // rax
  __int64 v36; // rdx
  char *v37; // rax
  unsigned int v38; // [rsp+0h] [rbp-78h]
  unsigned __int64 v39; // [rsp+0h] [rbp-78h]
  unsigned __int64 v40; // [rsp+0h] [rbp-78h]
  unsigned __int64 v41; // [rsp+0h] [rbp-78h]
  char v42; // [rsp+Fh] [rbp-69h]
  char v43; // [rsp+Fh] [rbp-69h]
  char v44; // [rsp+Fh] [rbp-69h]
  __int64 v45; // [rsp+10h] [rbp-68h]
  __int64 v46; // [rsp+10h] [rbp-68h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  char **v48; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v50; // [rsp+28h] [rbp-50h]
  unsigned __int64 v51; // [rsp+38h] [rbp-40h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v48 = a2;
  v51 = __readfsqword(0x28u);
  *a3 = 1;
  ptr = nullptr;
  v50 = 0;
  for ( result = sub_44D040(a1, (__int64)a2, (__int64)a3, a4, a5, a6);
        ;
        result = sub_44D040(a1, (__int64)a2, (__int64)v15, v12, v13, v14) )
  {
    if ( (_DWORD)result == 34 )
    {
      result = sub_479EB0((v8 << 31 >> 31) & 0x26);
      goto LABEL_34;
    }
    if ( (_DWORD)result )
      goto LABEL_34;
    v15 = (char *)a1->m128i_i64[1];
    if ( (_BYTE)v8 )
      break;
    if ( *v15 != 40 )
    {
      *a3 = 0;
      v27 = ptr;
      goto LABEL_35;
    }
    v12 = (_DWORD)v15 + 1;
    a1->m128i_i64[1] = (__int64)(v15 + 1);
    if ( v15[1] == 41 )
    {
      a1->m128i_i64[1] = (__int64)(v15 + 2);
LABEL_34:
      v27 = ptr;
      goto LABEL_35;
    }
LABEL_7:
    v8 = 1;
  }
  while ( 2 )
  {
    v14 = (unsigned __int8)*v15;
    switch ( (char)v14 )
    {
      case 0:
        goto LABEL_29;
      case 9:
      case 10:
      case 32:
        if ( v7 )
        {
          a1->m128i_i64[1] = (__int64)++v15;
          continue;
        }
        v7 = v8;
        goto LABEL_10;
      case 34:
        while ( 2 )
        {
          v13 = v50.m128i_i64[0];
          v21 = v50.m128i_i64[0];
          if ( !(_BYTE)v14 )
            goto LABEL_30;
          a1->m128i_i64[1] = (__int64)(v15 + 1);
          v22 = *v15;
          v23 = 2;
          if ( v13 )
            v23 = v13-- + 1;
          v24 = ptr;
          if ( v50.m128i_i64[1] < v23 )
          {
            v45 = v13;
            v42 = v22;
            v39 = v23;
            ptr = sub_481540((__int64)&ptr, ptr, v23, 1u);
            v13 = v45;
            v24 = ptr;
            v22 = v42;
            v23 = v39;
          }
          v50.m128i_i64[0] = v23;
          v24[v13] = v22;
          *((_BYTE *)ptr + v13 + 1) = 0;
          v15 = (char *)a1->m128i_i64[1];
          v14 = (unsigned __int8)*v15;
          if ( v22 != 92 )
            goto LABEL_21;
          if ( (_BYTE)v14 )
          {
            v18 = v50.m128i_i64[0];
            v19 = 2;
            if ( v50.m128i_i64[0] )
            {
              v19 = v50.m128i_i64[0] + 1;
              v18 = v50.m128i_i64[0] - 1;
            }
            v20 = ptr;
            if ( v50.m128i_i64[1] < v19 )
            {
              v47 = v18;
              v44 = v14;
              v41 = v19;
              ptr = sub_481540((__int64)&ptr, ptr, v19, 1u);
              v18 = v47;
              v20 = ptr;
              LOBYTE(v14) = v44;
              v19 = v41;
            }
            v50.m128i_i64[0] = v19;
            v20[v18] = v14;
            *((_BYTE *)ptr + v18 + 1) = 0;
            v15 = (char *)(a1->m128i_i64[1] + 1);
            a1->m128i_i64[1] = (__int64)v15;
            v14 = (unsigned __int8)*v15;
LABEL_21:
            if ( (_BYTE)v14 == 34 )
              goto LABEL_10;
            continue;
          }
          break;
        }
LABEL_29:
        v21 = v50.m128i_i64[0];
LABEL_30:
        v25 = v21;
        v26 = 2;
        if ( v21 )
        {
          a2 = (char **)ptr;
          v26 = v21 + 1;
          v25 = v21 - 1;
          if ( v50.m128i_i64[1] >= (unsigned __int64)(v21 + 1) )
            goto LABEL_32;
        }
        else
        {
          a2 = (char **)ptr;
          if ( v50.m128i_i64[1] >= 2uLL )
            goto LABEL_32;
        }
        ptr = sub_481540((__int64)&ptr, a2, v26, 1u);
        a2 = (char **)ptr;
LABEL_32:
        v50.m128i_i64[0] = v26;
        *((_BYTE *)a2 + v25) = 32;
        *((_BYTE *)ptr + v25 + 1) = 0;
        v7 = v8;
        goto LABEL_7;
      case 40:
        if ( (a1[40].m128i_i8[12] & 2) != 0 && v15[1] == 42 )
          goto LABEL_7;
        ++v6;
        goto LABEL_10;
      case 41:
        if ( v6 )
        {
          --v6;
LABEL_10:
          v13 = v50.m128i_i64[0];
          a1->m128i_i64[1] = (__int64)(v15 + 1);
          v16 = *v15;
          v17 = 2;
          if ( v13 )
            v17 = v13-- + 1;
          a2 = (char **)ptr;
          if ( v50.m128i_i64[1] < v17 )
          {
            v46 = v13;
            v43 = v16;
            v40 = v17;
            ptr = sub_481540((__int64)&ptr, ptr, v17, 1u);
            v13 = v46;
            a2 = (char **)ptr;
            v16 = v43;
            v17 = v40;
          }
          v50.m128i_i64[0] = v17;
          *((_BYTE *)a2 + v13) = v16;
          *((_BYTE *)ptr + v13 + 1) = 0;
          v15 = (char *)a1->m128i_i64[1];
          continue;
        }
        v33 = v48[1];
        v34 = *v48;
        if ( v48[2] < v33 + 1 )
        {
          v37 = (char *)sub_481540((__int64)v48, v34, (unsigned __int64)(v33 + 1), 0x18u);
          *v48 = v37;
          v34 = v37;
          v33 = v48[1];
        }
        v35 = &v34[24 * (_QWORD)v33];
        *(_QWORD *)v35 = 0;
        *(_OWORD *)(v35 + 8) = 0;
        ++v48[1];
        v27 = *(void **)v35;
        v36 = *((_QWORD *)v35 + 2);
        *(_QWORD *)v35 = ptr;
        ptr = v27;
        *(__m128i *)(v35 + 8) = v50;
        result = 0;
        ++a1->m128i_i64[1];
        v50.m128i_i64[1] = v36;
LABEL_35:
        if ( v27 )
        {
          v38 = result;
          v50.m128i_i64[0] = 0;
          j__free(v27);
          return v38;
        }
        return result;
      case 44:
        if ( v6 )
          goto LABEL_10;
        v29 = v48[1];
        a2 = (char **)*v48;
        if ( v48[2] < v29 + 1 )
        {
          v32 = (char *)sub_481540((__int64)v48, a2, (unsigned __int64)(v29 + 1), 0x18u);
          *v48 = v32;
          v29 = v48[1];
          a2 = (char **)v32;
        }
        v30 = (void **)&a2[3 * (_QWORD)v29];
        *v30 = nullptr;
        *(_OWORD *)(v30 + 1) = 0;
        ++v48[1];
        v15 = (char *)*v30;
        v31 = _mm_loadu_si128((const __m128i *)(v30 + 1));
        *v30 = ptr;
        ptr = v15;
        v30[1] = (void *)v50.m128i_i64[0];
        v12 = v50.m128i_i32[2];
        v30[2] = (void *)v50.m128i_i64[1];
        v50 = v31;
        ++a1->m128i_i64[1];
        goto LABEL_7;
      case 47:
        v28 = a1[40].m128i_i32[3];
        if ( (v28 & 1) != 0 && v15[1] == 42 || (v28 & 4) != 0 && v15[1] == 47 )
          goto LABEL_7;
        goto LABEL_9;
      case 59:
        if ( (a1[40].m128i_i8[12] & 8) != 0 )
          goto LABEL_7;
        goto LABEL_9;
      default:
LABEL_9:
        v7 = 0;
        goto LABEL_10;
    }
  }
}
// 44D314: variable 'v15' is possibly undefined
// 44D314: variable 'v12' is possibly undefined
// 44D314: variable 'v13' is possibly undefined
// 44D314: variable 'v14' is possibly undefined
