__int64 __fastcall sub_2221210(__int64 a1, _QWORD **a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // r13
  void **v4; // rbx
  __int64 (__fastcall ***v5)(); // r12
  __int64 (__fastcall **v6)(); // rbx
  __int64 (__fastcall **v7)(); // rbp
  bool v8; // zf
  __int64 (__fastcall *v9)(); // rax
  __int64 (__fastcall *v10)(); // rax
  __int64 (__fastcall *v11)(); // rbp
  __int64 (__fastcall *v12)(); // r15
  __int64 v13; // rax
  __int64 (__fastcall *v14)(); // rsi
  char *v15; // rsi
  __int64 (__fastcall *v16)(); // rdx
  __int64 v17; // rsi
  __int64 v18; // rsi
  void **v19; // r13
  void **v20; // r12
  unsigned __int64 v21; // rsi
  void **v22; // rbx
  void **v23; // r12
  __int64 (__fastcall *v25)(__int64, __int64); // rax
  _BYTE *v26; // r12
  __m128i *v27; // rdx
  unsigned __int64 v28; // rsi
  __m128i *v29; // rax
  __int64 (__fastcall *v30)(__int64, __int64); // rax
  _BYTE *v31; // r15
  __m128i *v32; // rdx
  unsigned __int64 v33; // rsi
  __m128i *v34; // rax
  char v35; // al
  char *v36; // rsi
  void *v37; // rax
  __int64 (__fastcall *v38)(); // rsi
  char *v39; // rsi
  __int64 (__fastcall *v40)(); // rsi
  __int64 (__fastcall ***v41)(); // [rsp+10h] [rbp-118h]
  __int64 (__fastcall **v42)(); // [rsp+38h] [rbp-F0h]
  void *v43; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+48h] [rbp-E0h]
  _BYTE v45[16]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 (__fastcall **v46)(); // [rsp+60h] [rbp-C8h] BYREF
  int v47; // [rsp+68h] [rbp-C0h]
  __int128 v48; // [rsp+70h] [rbp-B8h]
  __int64 v49; // [rsp+80h] [rbp-A8h]
  char v50; // [rsp+88h] [rbp-A0h]
  int v51; // [rsp+8Ch] [rbp-9Ch]
  void **v52; // [rsp+90h] [rbp-98h]
  void *ptr; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-80h]
  _BYTE v55[120]; // [rsp+B0h] [rbp-78h] BYREF

  v2 = a1;
  v3 = *a2;
  *a2 = nullptr;
  v4 = (void **)v55;
  ptr = v55;
  v54 = 0x200000000LL;
  if ( !v3 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_BYTE *)(a1 + 16) = 0;
    goto LABEL_29;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v3 + 48LL))(v3, &unk_2D0AA9B) )
  {
    (*(void (__fastcall **)(_QWORD *, void *))(*v3 + 48LL))(v3, &unk_2D0AA9C);
    v25 = *(__int64 (__fastcall **)(__int64, __int64))(*v3 + 24LL);
    if ( v25 == sub_AE9D50 )
    {
      v43 = v45;
      v48 = 0;
      v45[0] = 0;
      v44 = 0;
      v47 = 0;
      v50 = 0;
      v51 = 1;
      v49 = 0;
      v46 = &off_2BEBE68;
      v52 = &v43;
      sub_227B8B0(&v46, 0, 0, 0);
      (*(void (__fastcall **)(_QWORD *, __int64 (__fastcall ***)()))(*v3 + 16LL))(v3, &v46);
      v46 = &off_2BEBE68;
      sub_227B7A0(&v46);
    }
    else
    {
      v25((__int64)&v43, (__int64)v3);
    }
    v26 = ptr;
    v27 = (__m128i *)&v43;
    v28 = (unsigned int)v54 + 1LL;
    v29 = (__m128i *)((char *)ptr + 32 * (unsigned int)v54);
    if ( v28 > HIDWORD(v54) )
    {
      if ( ptr > &v43 || v29 <= (__m128i *)&v43 )
      {
        sub_A8C1F0((__int64)&ptr, v28);
        v27 = (__m128i *)&v43;
        v29 = (__m128i *)((char *)ptr + 32 * (unsigned int)v54);
      }
      else
      {
        sub_A8C1F0((__int64)&ptr, v28);
        v27 = (__m128i *)((char *)ptr + (char *)&v43 - v26);
        v29 = (__m128i *)((char *)ptr + 32 * (unsigned int)v54);
      }
    }
    v29->m128i_i64[0] = (__int64)v29[1].m128i_i64;
    if ( (__m128i *)v27->m128i_i64[0] == &v27[1] )
    {
      v29[1] = _mm_loadu_si128(v27 + 1);
    }
    else
    {
      v29->m128i_i64[0] = v27->m128i_i64[0];
      v29[1].m128i_i64[0] = v27[1].m128i_i64[0];
    }
    v29->m128i_i64[1] = v27->m128i_i64[1];
    v27->m128i_i64[0] = (__int64)v27[1].m128i_i64;
    v27->m128i_i64[1] = 0;
    v27[1].m128i_i8[0] = 0;
    LODWORD(v54) = v54 + 1;
    if ( v43 != v45 )
      operator delete(v43);
    goto LABEL_39;
  }
  v5 = (__int64 (__fastcall ***)())v3[1];
  v41 = (__int64 (__fastcall ***)())v3[2];
  if ( v5 == v41 )
  {
LABEL_39:
    (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
    goto LABEL_17;
  }
  v6 = nullptr;
  do
  {
    while ( 1 )
    {
      v7 = *v5;
      *v5 = nullptr;
      if ( (*((unsigned __int8 (__fastcall **)(__int64 (__fastcall **)(), void *))*v7 + 6))(v7, &unk_2D0AA9C) )
      {
        v30 = *((__int64 (__fastcall **)(__int64, __int64))*v7 + 3);
        if ( v30 == sub_AE9D50 )
        {
          v48 = 0;
          v43 = v45;
          v44 = 0;
          v45[0] = 0;
          v47 = 0;
          v50 = 0;
          v51 = 1;
          v49 = 0;
          v46 = &off_2BEBE68;
          v52 = &v43;
          sub_227B8B0(&v46, 0, 0, 0);
          (*((void (__fastcall **)(__int64 (__fastcall **)(), __int64 (__fastcall ***)()))*v7 + 2))(v7, &v46);
          v46 = &off_2BEBE68;
          sub_227B7A0(&v46);
        }
        else
        {
          v30((__int64)&v43, (__int64)v7);
        }
        v31 = ptr;
        v32 = (__m128i *)&v43;
        v33 = (unsigned int)v54 + 1LL;
        v34 = (__m128i *)((char *)ptr + 32 * (unsigned int)v54);
        if ( v33 > HIDWORD(v54) )
        {
          if ( ptr > &v43 || v34 <= (__m128i *)&v43 )
          {
            sub_A8C1F0((__int64)&ptr, v33);
            v32 = (__m128i *)&v43;
            v34 = (__m128i *)((char *)ptr + 32 * (unsigned int)v54);
          }
          else
          {
            sub_A8C1F0((__int64)&ptr, v33);
            v32 = (__m128i *)((char *)ptr + (char *)&v43 - v31);
            v34 = (__m128i *)((char *)ptr + 32 * (unsigned int)v54);
          }
        }
        v34->m128i_i64[0] = (__int64)v34[1].m128i_i64;
        if ( (__m128i *)v32->m128i_i64[0] == &v32[1] )
        {
          v34[1] = _mm_loadu_si128(v32 + 1);
        }
        else
        {
          v34->m128i_i64[0] = v32->m128i_i64[0];
          v34[1].m128i_i64[0] = v32[1].m128i_i64[0];
        }
        v34->m128i_i64[1] = v32->m128i_i64[1];
        v32->m128i_i64[0] = (__int64)v32[1].m128i_i64;
        v32->m128i_i64[1] = 0;
        v32[1].m128i_i8[0] = 0;
        LODWORD(v54) = v54 + 1;
        if ( v43 != v45 )
          operator delete(v43);
        (*((void (__fastcall **)(__int64 (__fastcall **)()))*v7 + 1))(v7);
        if ( v6 )
          goto LABEL_48;
        v7 = nullptr;
        goto LABEL_55;
      }
      if ( v6 )
        break;
LABEL_55:
      v6 = v7;
LABEL_48:
      if ( v41 == ++v5 )
        goto LABEL_16;
    }
    v8 = (*((unsigned __int8 (__fastcall **)(__int64 (__fastcall **)(), void *))*v6 + 6))(v6, &unk_2D0AA9B) == 0;
    v9 = *v7;
    if ( v8 )
    {
      v35 = (*((__int64 (__fastcall **)(__int64 (__fastcall **)(), void *))v9 + 6))(v7, &unk_2D0AA9B);
      v46 = v6;
      if ( !v35 )
      {
        v43 = v7;
        v6 = (__int64 (__fastcall **)())operator new(0x20u);
        v6[1] = nullptr;
        v6[2] = nullptr;
        *v6 = (__int64 (__fastcall *)())&off_2BEADB8;
        v6[3] = nullptr;
        sub_A054C0((__int64)(v6 + 1), nullptr, &v46);
        v36 = (char *)v6[2];
        if ( (char *)v6[3] == v36 )
        {
          sub_A054C0((__int64)(v6 + 1), v36, &v43);
        }
        else
        {
          v37 = v43;
          v38 = (__int64 (__fastcall *)())(v36 + 8);
          v43 = nullptr;
          *((_QWORD *)v38 - 1) = v37;
          v6[2] = v38;
        }
        if ( v43 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v43 + 8LL))(v43);
        goto LABEL_60;
      }
      sub_AEA3D0(v7 + 1, (char *)v7[1], (__int64 *)&v46);
      if ( v46 )
        (*((void (__fastcall **)(__int64 (__fastcall **)()))*v46 + 1))(v46);
      goto LABEL_55;
    }
    if ( !(*((unsigned __int8 (__fastcall **)(__int64 (__fastcall **)(), void *))v9 + 6))(v7, &unk_2D0AA9B) )
    {
      v46 = v7;
      v39 = (char *)v6[2];
      if ( v39 == (char *)v6[3] )
      {
        sub_A054C0((__int64)(v6 + 1), v39, &v46);
      }
      else
      {
        v46 = nullptr;
        v40 = (__int64 (__fastcall *)())(v39 + 8);
        *((_QWORD *)v40 - 1) = v7;
        v6[2] = v40;
      }
LABEL_60:
      if ( v46 )
        (*((void (__fastcall **)(__int64 (__fastcall **)()))*v46 + 1))(v46);
      goto LABEL_48;
    }
    v10 = v7[1];
    if ( v10 != v7[2] )
    {
      v42 = v7;
      v11 = v7[2];
      v12 = v10;
      do
      {
        while ( 1 )
        {
          v15 = (char *)v6[2];
          if ( v15 == (char *)v6[3] )
            break;
          v13 = *(_QWORD *)v12;
          v14 = (__int64 (__fastcall *)())(v15 + 8);
          *(_QWORD *)v12 = 0;
          v12 = (__int64 (__fastcall *)())((char *)v12 + 8);
          *((_QWORD *)v14 - 1) = v13;
          v6[2] = v14;
          if ( v11 == v12 )
            goto LABEL_14;
        }
        v16 = v12;
        v12 = (__int64 (__fastcall *)())((char *)v12 + 8);
        sub_A054C0((__int64)(v6 + 1), v15, v16);
      }
      while ( v11 != v12 );
LABEL_14:
      v7 = v42;
    }
    ++v5;
    (*((void (__fastcall **)(__int64 (__fastcall **)()))*v7 + 1))(v7);
  }
  while ( v41 != v5 );
LABEL_16:
  v2 = a1;
  (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
LABEL_17:
  v17 = (unsigned int)v54;
  *(_BYTE *)(v2 + 16) = 0;
  v4 = (void **)ptr;
  *(_QWORD *)v2 = v2 + 16;
  v18 = 4 * v17;
  *(_QWORD *)(v2 + 8) = 0;
  v19 = &v4[v18];
  if ( &v4[v18] != v4 )
  {
    v20 = v4;
    v21 = ((v18 * 8) >> 5) - 1;
    do
    {
      v21 += (unsigned __int64)v20[1];
      v20 += 4;
    }
    while ( v19 != v20 );
    v22 = v4 + 4;
    sub_995C30(v2, v21);
    sub_9EE560((_QWORD *)v2, *(v22 - 4), (size_t)*(v22 - 3));
    if ( v19 != v22 )
    {
      if ( *(_QWORD *)(v2 + 8) == 0x7FFFFFFFFFFFFFFFLL )
LABEL_80:
        std::__throw_length_error("basic_string::append");
      while ( 1 )
      {
        v22 += 4;
        sub_9EE560((_QWORD *)v2, "\n", 1u);
        sub_9EE560((_QWORD *)v2, *(v22 - 4), (size_t)*(v22 - 3));
        if ( v20 == v22 )
          break;
        if ( *(_QWORD *)(v2 + 8) == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_80;
      }
    }
    v4 = (void **)ptr;
    v23 = (void **)((char *)ptr + 32 * (unsigned int)v54);
    if ( v23 != ptr )
    {
      do
      {
        while ( 1 )
        {
          v23 -= 4;
          if ( *v23 == v23 + 2 )
            break;
          operator delete(*v23);
          if ( v4 == v23 )
            goto LABEL_28;
        }
      }
      while ( v4 != v23 );
LABEL_28:
      v4 = (void **)ptr;
    }
  }
LABEL_29:
  if ( v4 != (void **)v55 )
    free(v4);
  return v2;
}
