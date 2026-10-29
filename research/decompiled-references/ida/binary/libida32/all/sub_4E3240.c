__int64 __fastcall sub_4E3240(__int64 a1, __int64 *a2, __int64 a3)
{
  _BYTE *v5; // rax
  unsigned int v6; // r13d
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  size_t v9; // r9
  __int64 v10; // r8
  size_t v11; // r10
  _BYTE *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  _BYTE *v16; // rsi
  __m128i v17; // xmm0
  _DWORD *v19; // rax
  _BYTE *v20; // rax
  _BYTE *v21; // rax
  _BYTE *v22; // rax
  _BYTE *v23; // rax
  _BYTE *v24; // rax
  _BYTE *v25; // rax
  _BYTE *v26; // rax
  _BYTE *v27; // rax
  __int64 v28; // [rsp+0h] [rbp-98h]
  unsigned __int64 v29; // [rsp+0h] [rbp-98h]
  __int64 v30; // [rsp+8h] [rbp-90h]
  size_t v31; // [rsp+8h] [rbp-90h]
  __int64 v32; // [rsp+10h] [rbp-88h]
  __int64 v33; // [rsp+10h] [rbp-88h]
  size_t v34; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __m128i v36; // [rsp+28h] [rbp-70h] BYREF
  void *src; // [rsp+40h] [rbp-58h] BYREF
  __int128 v38; // [rsp+48h] [rbp-50h]
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v36 = 0;
  ptr = nullptr;
  switch ( *((_BYTE *)a2 + 24) )
  {
    case 0:
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v19 = (_DWORD *)qvector_reserve(a1, 0, 8, 1);
      *(_QWORD *)a1 = v19;
      *(_QWORD *)(a1 + 8) = 8;
      *v19 = 1347241276;
      *(_DWORD *)((char *)v19 + 3) = 1046041680;
      *(_BYTE *)(*(_QWORD *)a1 + 7LL) = 0;
      if ( ptr )
      {
        v36.m128i_i64[0] = 0;
        qfree(ptr);
      }
      return a1;
    case 1:
      v5 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
      ptr = v5;
      v36.m128i_i64[0] = 10;
      *(_QWORD *)v5 = 0x444E45444145443CLL;
      v5[8] = 62;
      *((_BYTE *)ptr + 9) = 0;
      goto LABEL_3;
    case 2:
      v27 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
      ptr = v27;
      v6 = 3;
      v36.m128i_i64[0] = 10;
      *(_QWORD *)v27 = 0x444554524F42413CLL;
      v27[8] = 62;
      *((_BYTE *)ptr + 9) = 0;
      goto LABEL_4;
    case 3:
      v22 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
      ptr = v22;
      v36.m128i_i64[0] = 10;
      *(_QWORD *)v22 = 0x4E534E494441423CLL;
      v22[8] = 62;
      *((_BYTE *)ptr + 9) = 0;
      goto LABEL_3;
    case 4:
      v21 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
      ptr = v21;
      v36.m128i_i64[0] = 10;
      *(_QWORD *)v21 = 0x4E534E494B4E553CLL;
      v21[8] = 62;
      *((_BYTE *)ptr + 9) = 0;
      goto LABEL_3;
    case 5:
      v20 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
      ptr = v20;
      v36.m128i_i64[0] = 10;
      *(_QWORD *)v20 = 0x434E55464B4E553CLL;
      v20[8] = 62;
      *((_BYTE *)ptr + 9) = 0;
      goto LABEL_3;
    case 6:
      v25 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
      ptr = v25;
      v36.m128i_i64[0] = 10;
      *(_QWORD *)v25 = 0x504F4F4C4B4E553CLL;
      v25[8] = 62;
      *((_BYTE *)ptr + 9) = 0;
      goto LABEL_3;
    case 7:
      v26 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
      ptr = v26;
      v36.m128i_i64[0] = 10;
      *(_QWORD *)v26 = 0x544C554D4B4E553CLL;
      v26[8] = 62;
      *((_BYTE *)ptr + 9) = 0;
      goto LABEL_3;
    case 8:
      v23 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
      ptr = v23;
      v36.m128i_i64[0] = 10;
      *(_QWORD *)v23 = 0x464552584B4E553CLL;
      v23[8] = 62;
      *((_BYTE *)ptr + 9) = 0;
      goto LABEL_3;
    case 9:
      v24 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
      ptr = v24;
      v36.m128i_i64[0] = 10;
      *(_QWORD *)v24 = 0x534C41564B4E553CLL;
      v24[8] = 62;
      *((_BYTE *)ptr + 9) = 0;
      goto LABEL_3;
    case 0xA:
    case 0xB:
      v6 = 1;
      goto LABEL_4;
    case 0xC:
    case 0xD:
      v6 = 2;
      goto LABEL_4;
    default:
LABEL_3:
      v6 = 0;
LABEL_4:
      v7 = *a2;
      if ( !(16 * a2[1]) )
        goto LABEL_21;
      break;
  }
  while ( 1 )
  {
    v38 = 0;
    src = nullptr;
    reg_value_def_dstr(v7, &src, v6, a3);
    v8 = v38;
    if ( (_QWORD)v38 )
    {
      v9 = v38 - 1;
      if ( (_QWORD)v38 != 1 )
      {
        v10 = v36.m128i_i64[0];
        v11 = v38 - 1;
        if ( v36.m128i_i64[0] )
        {
          v10 = v36.m128i_i64[0] - 1;
          v11 = v9 + v36.m128i_i64[0] - 1;
          v8 = v38 + v36.m128i_i64[0] - 1;
        }
        v12 = ptr;
        if ( v36.m128i_i64[1] < v8 )
        {
          v34 = v11;
          v33 = v10;
          v31 = v38 - 1;
          v29 = v8;
          ptr = (void *)qvector_reserve(&ptr, ptr, v8, 1);
          v11 = v34;
          v12 = ptr;
          v10 = v33;
          v9 = v31;
          v8 = v29;
        }
        v36.m128i_i64[0] = v8;
        v12[v11] = 0;
        memcpy((char *)ptr + v10, src, v9);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v38 = 0;
      qfree(src);
    }
    v7 += 16;
    if ( v7 == *a2 + 16 * a2[1] )
      break;
    if ( v7 != *a2 )
    {
      v13 = v36.m128i_i64[0];
      if ( v36.m128i_i64[0] )
      {
        v14 = v36.m128i_i64[0] + 1;
        v15 = v36.m128i_i64[0];
        v16 = ptr;
        v13 = v36.m128i_i64[0] - 1;
        if ( v36.m128i_i64[1] >= (unsigned __int64)(v36.m128i_i64[0] + 1) )
          goto LABEL_18;
      }
      else
      {
        v16 = ptr;
        v14 = 2;
        v15 = 1;
        if ( v36.m128i_i64[1] >= 2uLL )
          goto LABEL_18;
      }
      v32 = v13;
      v30 = v15;
      v28 = v14;
      ptr = (void *)qvector_reserve(&ptr, v16, v14, 1);
      v13 = v32;
      v16 = ptr;
      v15 = v30;
      v14 = v28;
LABEL_18:
      v36.m128i_i64[0] = v14;
      v16[v15] = 0;
      *((_BYTE *)ptr + v13) = 32;
    }
  }
LABEL_21:
  v17 = _mm_loadu_si128(&v36);
  *(_QWORD *)a1 = ptr;
  *(__m128i *)(a1 + 8) = v17;
  return a1;
}

