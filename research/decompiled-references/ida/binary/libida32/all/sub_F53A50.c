__int64 __fastcall sub_F53A50(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rbx
  __int8 v9; // al
  _BOOL4 v10; // r12d
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // edi
  const void *v16; // r14
  size_t v17; // rax
  unsigned __int64 v18; // rdx
  _BYTE *v19; // rdi
  size_t v20; // r15
  __int64 v21; // rax
  _BYTE *v22; // rax
  unsigned __int64 v24; // rdx
  int v25; // r10d
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  int *v33; // rbx
  int v34; // edi
  unsigned int v35; // edx
  unsigned __int64 v36; // rsi
  int v37; // r8d
  int v38; // esi
  __int64 v39; // rdx
  int v40; // r11d
  unsigned __int64 v41; // [rsp+0h] [rbp-158h]
  __m128 v42; // [rsp+10h] [rbp-148h] BYREF
  _QWORD v43[32]; // [rsp+20h] [rbp-138h] BYREF
  char v44; // [rsp+120h] [rbp-38h] BYREF

  v8 = a3;
  v9 = a1->m128i_i8[2];
  v10 = (v9 & 8) != 0;
  if ( (v9 & 0x10) == 0 )
    a1->m128i_i8[2] = v9 & 0xF7;
  if ( !(_BYTE)byte_2CAE590 && __cxa_guard_acquire(&byte_2CAE590) )
  {
    memset(v43, 0, 0xF8u);
    LODWORD(v43[2]) = 1;
    v43[1] = "__add_lvalue_reference";
    v43[3] = "__add_pointer";
    v43[5] = "__add_rvalue_reference";
    v43[7] = "__decay";
    v43[9] = "__make_signed";
    v43[11] = "__make_unsigned";
    v43[13] = "__remove_all_extents";
    v43[15] = "__remove_const";
    v43[17] = "__remove_cv";
    v43[19] = "__remove_cvref";
    v43[21] = "__remove_extent";
    v43[23] = "__remove_pointer";
    v43[25] = "__remove_reference_t";
    v43[27] = "__remove_restrict";
    v43[29] = "__remove_volatile";
    v43[31] = "__underlying_type";
    LODWORD(v43[4]) = 2;
    LODWORD(v43[6]) = 3;
    LODWORD(v43[8]) = 4;
    LODWORD(v43[10]) = 5;
    LODWORD(v43[12]) = 6;
    LODWORD(v43[14]) = 7;
    LODWORD(v43[16]) = 8;
    LODWORD(v43[18]) = 9;
    LODWORD(v43[20]) = 10;
    LODWORD(v43[22]) = 11;
    LODWORD(v43[24]) = 12;
    LODWORD(v43[26]) = 13;
    LODWORD(v43[28]) = 14;
    LODWORD(v43[30]) = 15;
    dword_2CAE5B0 = 32;
    v27 = sub_220C370(512, 8, a3, 0, a5, a6);
    qword_2CAE5A8 = 0;
    qword_2CAE5A0 = v27;
    v30 = v27;
    v31 = (unsigned int)dword_2CAE5B0;
    v32 = v27 + 16LL * (unsigned int)dword_2CAE5B0;
    if ( v27 != v32 )
    {
      do
      {
        *(_DWORD *)v30 = 0x7FFFFFFF;
        v30 += 16;
      }
      while ( v32 != v30 );
    }
    v41 = v8;
    v33 = (int *)v43;
    while ( (_DWORD)v31 )
    {
      v34 = *v33;
      v35 = (v31 - 1) & (37 * *v33);
      v36 = v27 + 16LL * v35;
      v37 = *(_DWORD *)v36;
      if ( *v33 == *(_DWORD *)v36 )
        goto LABEL_32;
      v40 = 1;
      v29 = 0;
      if ( v37 != 0x7FFFFFFF )
      {
        while ( 1 )
        {
          if ( v37 == 0x80000000 && !v29 )
            v29 = v36;
          v35 = (v31 - 1) & (v40 + v35);
          v36 = v27 + 16LL * v35;
          v37 = *(_DWORD *)v36;
          if ( v34 == *(_DWORD *)v36 )
            break;
          if ( v37 == 0x7FFFFFFF )
          {
            if ( v29 )
              v36 = v29;
            goto LABEL_56;
          }
          ++v40;
        }
LABEL_32:
        sub_F4E240(&v42, (int *)v36, (int *)(v27 + 16LL * (unsigned int)v31), (__int64)&qword_2CAE5A0, 1);
        goto LABEL_33;
      }
LABEL_56:
      v28 = (unsigned int)(3 * v31);
      v42.m128_u64[0] = v36;
      v30 = (unsigned int)(qword_2CAE5A8 + 1);
      if ( 4 * (int)v30 >= (unsigned int)v28 )
        goto LABEL_37;
      v28 = (unsigned int)v31 >> 3;
      if ( (int)v31 - ((int)v30 + HIDWORD(qword_2CAE5A8)) > (unsigned int)v28 )
        goto LABEL_39;
      v38 = v31;
LABEL_38:
      sub_F4E050(&qword_2CAE5A0, v38, v30, v31, v28, v29);
      sub_F4DD10(&qword_2CAE5A0, v33, &v42);
      v34 = *v33;
      v27 = qword_2CAE5A0;
      v36 = v42.m128_u64[0];
      LODWORD(v30) = qword_2CAE5A8 + 1;
LABEL_39:
      LODWORD(qword_2CAE5A8) = v30;
      if ( *(_DWORD *)v36 != 0x7FFFFFFF )
        --HIDWORD(qword_2CAE5A8);
      v39 = *((_QWORD *)v33 + 1);
      *(_DWORD *)v36 = v34;
      *(_QWORD *)(v36 + 8) = v39;
      sub_F4E240(&v42, (int *)v36, (int *)(v27 + 16LL * (unsigned int)dword_2CAE5B0), (__int64)&qword_2CAE5A0, 1);
LABEL_33:
      v33 += 4;
      if ( v33 == (int *)&v44 )
      {
        v8 = v41;
        __cxa_atexit(sub_F4ACC0, &qword_2CAE5A0, &off_2AFC540);
        __cxa_guard_release(&byte_2CAE590);
        goto LABEL_4;
      }
      v27 = qword_2CAE5A0;
      v31 = (unsigned int)dword_2CAE5B0;
    }
    v42.m128_u64[0] = 0;
LABEL_37:
    v38 = 2 * v31;
    goto LABEL_38;
  }
LABEL_4:
  v11 = *(unsigned int *)(a2 + 48);
  v12 = dword_2CAE5B0;
  v42.m128_i32[0] = *(_DWORD *)(a2 + 48);
  if ( !dword_2CAE5B0 )
  {
    v43[0] = 0;
    goto LABEL_43;
  }
  a6 = (unsigned int)(dword_2CAE5B0 - 1);
  LODWORD(v13) = a6 & (37 * v11);
  v14 = qword_2CAE5A0 + 16LL * (unsigned int)v13;
  v15 = *(_DWORD *)v14;
  if ( (_DWORD)v11 == *(_DWORD *)v14 )
    goto LABEL_6;
  v25 = 1;
  v26 = 0;
  if ( v15 == 0x7FFFFFFF )
  {
LABEL_20:
    v43[0] = v14;
    a3 = (unsigned int)(qword_2CAE5A8 + 1);
    a5 = (unsigned int)(4 * a3);
    if ( (unsigned int)a5 < 3 * dword_2CAE5B0 )
    {
      a5 = (unsigned int)dword_2CAE5B0 >> 3;
      if ( dword_2CAE5B0 - HIDWORD(qword_2CAE5A8) - (int)a3 > (unsigned int)a5 )
      {
LABEL_22:
        LODWORD(qword_2CAE5A8) = a3;
        if ( *(_DWORD *)v14 != 0x7FFFFFFF )
          --HIDWORD(qword_2CAE5A8);
        *(_DWORD *)v14 = v11;
        *(_QWORD *)(v14 + 8) = 0;
        goto LABEL_25;
      }
LABEL_44:
      sub_F4E050(&qword_2CAE5A0, v12, a3, v11, a5, a6);
      sub_F4DD10(&qword_2CAE5A0, (int *)&v42, v43);
      LODWORD(v11) = v42.m128_i32[0];
      LODWORD(a3) = qword_2CAE5A8 + 1;
      v14 = v43[0];
      goto LABEL_22;
    }
LABEL_43:
    v12 = 2 * dword_2CAE5B0;
    goto LABEL_44;
  }
  while ( 1 )
  {
    if ( v15 == 0x80000000 && !v26 )
      v26 = v14;
    v13 = (unsigned int)a6 & ((_DWORD)v13 + v25);
    v14 = qword_2CAE5A0 + 16 * v13;
    v15 = *(_DWORD *)v14;
    if ( (_DWORD)v11 == *(_DWORD *)v14 )
      break;
    if ( v15 == 0x7FFFFFFF )
    {
      if ( v26 )
        v14 = v26;
      goto LABEL_20;
    }
    ++v25;
  }
LABEL_6:
  v16 = *(const void **)(v14 + 8);
  if ( !v16 )
  {
LABEL_25:
    v19 = *(_BYTE **)(v8 + 32);
    v18 = *(_QWORD *)(v8 + 24);
    v21 = v8;
    goto LABEL_9;
  }
  v17 = strlen(*(const char **)(v14 + 8));
  v18 = *(_QWORD *)(v8 + 24);
  v19 = *(_BYTE **)(v8 + 32);
  v20 = v17;
  if ( v17 <= v18 - (unsigned __int64)v19 )
  {
    v21 = v8;
    if ( v20 )
    {
      memcpy(v19, v16, v20);
      v24 = *(_QWORD *)(v8 + 24);
      v21 = v8;
      v19 = (_BYTE *)(v20 + *(_QWORD *)(v8 + 32));
      *(_QWORD *)(v8 + 32) = v19;
      if ( (unsigned __int64)v19 < v24 )
        goto LABEL_10;
      goto LABEL_18;
    }
  }
  else
  {
    v21 = sub_22581D0(v8, v16, v17);
    v19 = *(_BYTE **)(v21 + 32);
    v18 = *(_QWORD *)(v21 + 24);
  }
LABEL_9:
  if ( (unsigned __int64)v19 < v18 )
  {
LABEL_10:
    *(_QWORD *)(v21 + 32) = v19 + 1;
    *v19 = 40;
    goto LABEL_11;
  }
LABEL_18:
  sub_2257CD0(v21, 40);
LABEL_11:
  sub_F537A0(a1, *(_QWORD *)(a2 + 32), v8, nullptr, 0, a6);
  v22 = *(_BYTE **)(v8 + 32);
  if ( (unsigned __int64)v22 >= *(_QWORD *)(v8 + 24) )
  {
    sub_2257CD0(v8, 41);
  }
  else
  {
    *(_QWORD *)(v8 + 32) = v22 + 1;
    *v22 = 41;
  }
  if ( !a1[1].m128i_i8[4] )
    sub_F4ACE0(v8);
  a1->m128i_i8[2] = (8 * v10) | a1->m128i_i8[2] & 0xF7;
  return (unsigned int)(8 * v10);
}

