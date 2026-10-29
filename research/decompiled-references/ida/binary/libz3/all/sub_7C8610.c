__int64 __fastcall sub_7C8610(__int64 a1, __int64 a2, char a3, unsigned __int8 a4, __m128i a5)
{
  __int64 v6; // r13
  int v7; // r8d
  int v8; // r9d
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, unsigned __int8); // rax
  int v15; // eax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, unsigned __int8); // rax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r9
  int *v21; // rbx
  void *v22; // r14
  __int64 v23; // rdx
  void *v24; // r13
  void *v25; // r14
  void *v26; // r15
  unsigned int v27; // ebx
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(__int64, unsigned __int8); // rax
  int v30; // eax
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  unsigned int v34; // r12d
  __int64 v35; // rdi
  unsigned int v36; // esi
  int v37; // eax
  unsigned int v38; // ebx
  void *v39; // r15
  unsigned int v41; // eax
  __int64 v42; // r9
  __int64 v43; // rdi
  unsigned int v44; // r12d
  unsigned int v45; // r14d
  __int64 (__fastcall *v46)(__int64, unsigned __int8); // rax
  int v47; // eax
  unsigned int v48; // r15d
  __int64 v49; // rdi
  bool v50; // zf
  __m128i *v51; // rax
  __int128 v52; // xmm0
  int v54; // [rsp+30h] [rbp-D0h]
  char v55; // [rsp+37h] [rbp-C9h]
  int v56; // [rsp+40h] [rbp-C0h]
  int *v59; // [rsp+50h] [rbp-B0h]
  int *v60; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  __m128i v62; // [rsp+70h] [rbp-90h] BYREF
  __int64 v63; // [rsp+80h] [rbp-80h]
  __int32 v64; // [rsp+90h] [rbp-70h] BYREF
  char v65; // [rsp+94h] [rbp-6Ch]
  int v66; // [rsp+A0h] [rbp-60h] BYREF
  char v67; // [rsp+A4h] [rbp-5Ch]
  __m128i v68; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h]

  sub_168DDF0(&v64, a1 + 96, *(_QWORD *)(a2 + 16));
  v60 = nullptr;
  v61 = 0;
  sub_7C7230(a1, a2, &v61);
  v6 = v61;
  sub_7C7B20(a1, a2, &v61, &v60, v7, v8);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v55 = a3 & (a4 ^ 1);
  if ( !v55 )
    goto LABEL_8;
  v9 = *(_QWORD **)(a1 + 24);
  v10 = *(__int64 (**)(void))(*v9 + 72LL);
  if ( v10 == sub_7C9C70 )
  {
    v11 = v9[525];
    if ( !v11 )
    {
LABEL_51:
      v56 = 0x7FFFFFFF;
      v54 = 0x7FFFFFFF;
      goto LABEL_13;
    }
    v12 = *(_DWORD *)(v11 - 4);
  }
  else
  {
    v12 = v10();
  }
  if ( !v12 )
    goto LABEL_51;
LABEL_8:
  v13 = *(_QWORD *)(a1 + 24);
  v14 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v13 + 24LL);
  if ( v14 == sub_788600 )
    v15 = sub_11CA540(v13, 1, 1);
  else
    v15 = v14(v13, 1u);
  v56 = v15;
  v16 = *(_QWORD *)(a1 + 24);
  v17 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v16 + 24LL);
  if ( v17 == sub_788600 )
    v18 = sub_11CA540(v16, 1, 1);
  else
    v18 = v17(v16, 1u);
  v54 = v18;
  v55 = 0;
LABEL_13:
  v19 = sub_182D020(qword_1C7F2C0, &v64);
  sub_7B9630(a1, v56, 0, &v60, v19, v20, a5);
  sub_1831620(qword_1C7F2C0, &v64);
  v21 = v60;
  if ( v60 )
  {
    v59 = &v60[2 * *(v60 - 1)];
    if ( v59 != v60 )
    {
      do
      {
        v23 = (unsigned int)*v21;
        v21[1] ^= 1u;
        v24 = qword_1C7F2C0;
        v68 = 0u;
        v69 = 1;
        v70 = 0;
        if ( (int)v23 < 0 )
          sub_1830C40(qword_1C7F2C0, &v68, v23);
        else
          v68.m128i_i32[0] = v23;
        sub_182CBA0(v24, &v69);
        LODWORD(v69) = 1;
        BYTE4(v69) &= ~1u;
        v25 = qword_1C7F2C0;
        if ( v68.m128i_i32[0] )
        {
          if ( v64 )
          {
            if ( (v67 & 1) == 0 && v66 == 1 )
            {
              sub_1831A80(qword_1C7F2C0, &v64, &v68, &v64);
              sub_182CBA0(v25, &v66);
              v67 &= ~1u;
              v66 = 1;
            }
            else
            {
              sub_1851D20(qword_1C7F2C0, &v64, &v68, &v64);
            }
          }
          else
          {
            if ( (v68.m128i_i8[4] & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v64, &v68);
            }
            else
            {
              v65 &= ~1u;
              v64 = v68.m128i_i32[0];
            }
            if ( (v69 & 0x100000000LL) != 0 )
            {
              sub_182C690(v25, &v66, &v69);
            }
            else
            {
              v67 &= ~1u;
              v66 = v69;
            }
          }
        }
        else
        {
          if ( (v65 & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v64, &v64);
          else
            v65 &= ~1u;
          if ( (v67 & 1) != 0 )
            sub_182C690(v25, &v66, &v66);
          else
            v67 &= ~1u;
        }
        v21 += 2;
        v22 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v68);
        sub_182CBA0(v22, &v69);
      }
      while ( v59 != v21 );
    }
  }
  v68 = 0u;
  v69 = 1;
  v70 = 0;
  sub_182CBA0(qword_1C7F2C0, &v69);
  LODWORD(v69) = 1;
  BYTE4(v69) &= ~1u;
  v26 = qword_1C7F2C0;
  if ( (v67 & 1) == 0 && v66 == 1 )
  {
    if ( (v65 & 1) != 0 || (v68.m128i_i8[4] & 1) != 0 )
    {
      v27 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v64, &v68) >> 31;
      v26 = qword_1C7F2C0;
    }
    else
    {
      LOBYTE(v27) = v64 < v68.m128i_i32[0];
    }
  }
  else
  {
    LOBYTE(v27) = sub_1848D40(qword_1C7F2C0, &v64, &v68);
    v26 = qword_1C7F2C0;
  }
  sub_182CBA0(v26, &v68);
  sub_182CBA0(v26, &v69);
  if ( (_BYTE)v27 )
  {
    v28 = *(_QWORD *)(a1 + 24);
    v29 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v28 + 24LL);
    if ( v29 == sub_788600 )
      v30 = sub_11CA540(v28, 0, 1);
    else
      v30 = v29(v28, 0);
    v34 = 2 * v30;
    v62.m128i_i32[0] = 0;
    LODWORD(v63) = 0;
    v35 = *(_QWORD *)(a1 + 24);
    v36 = (2 * v30) ^ 1;
    v62.m128i_i64[1] = 0;
    v37 = *(_DWORD *)(*(_QWORD *)(v35 + 3288) + 4LL * v36);
    if ( v37 )
    {
      if ( v37 == 1 )
      {
        v50 = *(_BYTE *)(v35 + 3832) == 0;
        v68.m128i_i32[0] = 0;
        v68.m128i_i64[1] = 0;
        LODWORD(v69) = 0;
        if ( v50 )
        {
          v51 = (__m128i *)(*(_QWORD *)(v35 + 3296) + 24LL * (v36 >> 1));
          if ( v51->m128i_i32[0] )
          {
            *v51 = _mm_load_si128(&v68);
            v51[1].m128i_i32[0] = v69;
          }
        }
      }
      else if ( v37 == -1 )
      {
        LODWORD(v63) = 0;
        v62.m128i_i32[0] = 0;
        v62.m128i_i64[1] = 0;
        sub_11B4C90(v35, v34, v36, v31, v32, v33, (__int128)_mm_load_si128(&v62), 0);
      }
    }
    else
    {
      v62.m128i_i32[0] = 0;
      v62.m128i_i64[1] = 0;
      v52 = (__int128)_mm_load_si128(&v62);
      LODWORD(v63) = 0;
      sub_11C3360(v35, v36, v36, v31, v32, v33, v52, v63);
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 88) + 64LL))(*(_QWORD *)(a1 + 88), a2, v34);
    v38 = v34 ^ a4;
  }
  else
  {
    sub_7C71D0(a1, (__int64)&v64);
    v41 = sub_182D020(qword_1C7F2C0, &v64);
    sub_7B9630(a1, v54, 0, &v60, v41, v42, a5);
    if ( v55 )
    {
      v38 = -2;
    }
    else
    {
      v43 = *(_QWORD *)(a1 + 24);
      v44 = 2 * v54;
      v45 = 2 * v56;
      v46 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v43 + 24LL);
      if ( v46 == sub_788600 )
        v47 = sub_11CA540(v43, 0, 1);
      else
        v47 = v46(v43, 0);
      v48 = 2 * v47;
      v49 = *(_QWORD *)(a1 + 24);
      v68 = (__m128i)0xFFFFFFFF00000001LL;
      sub_11C4C70(v49, (2 * v47) ^ 1u, v45, &v68);
      v68 = (__m128i)0xFFFFFFFF00000001LL;
      sub_11C4C70(*(_QWORD *)(a1 + 24), v48 ^ 1, v44, &v68);
      v68 = (__m128i)0xFFFFFFFF00000001LL;
      sub_11C4E60(*(_QWORD *)(a1 + 24), v45 ^ 1, v44 ^ 1, v48, &v68);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 88) + 64LL))(*(_QWORD *)(a1 + 88), a2, v48);
      v38 = v48 ^ a4;
    }
  }
  if ( v60 )
    sub_186B220(v60 - 2);
  v39 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v64);
  sub_182CBA0(v39, &v66);
  return v38;
}

