__int64 __fastcall same_value_jpt_0(unsigned __int16 *a1, const __m128i *a2, int a3)
{
  __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rax
  __int64 v8; // r13
  __int8 v9; // al
  char *v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebp
  _QWORD *v21; // rbx
  _QWORD *v22; // r12
  void *v23; // rdi
  _QWORD **v24; // rbx
  void *v25; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 (*v29)(); // rdx
  __int64 (__fastcall *v30)(unsigned __int16 *, void **); // rax
  unsigned __int8 v31; // r13
  unsigned __int8 v32; // al
  bool v33; // r14
  __int64 (__fastcall *v34)(__int64, __int64); // rax
  unsigned __int8 v35; // al
  bool v36; // dl
  bool v37; // cc
  bool v38; // al
  __int64 (__fastcall *v39)(__int64, __int64, __int64); // rax
  _BYTE *v40; // rsi
  char v41; // al
  unsigned __int8 v42; // dl
  unsigned __int8 v43; // al
  __int64 (__fastcall *v44)(__int64, __int64); // rax
  unsigned __int8 v45; // al
  bool v46; // dl
  char v47; // al
  void *v48; // [rsp+0h] [rbp-2A8h]
  unsigned __int8 v49; // [rsp+10h] [rbp-298h]
  bool v50; // [rsp+1Fh] [rbp-289h]
  void *ptr; // [rsp+20h] [rbp-288h] BYREF
  __int128 v52; // [rsp+28h] [rbp-280h]
  __int64 v53[3]; // [rsp+40h] [rbp-268h] BYREF
  char v54; // [rsp+58h] [rbp-250h]
  int v55; // [rsp+5Ch] [rbp-24Ch]
  __int128 v56; // [rsp+60h] [rbp-248h]
  __int64 v57; // [rsp+70h] [rbp-238h]
  __int64 v58; // [rsp+78h] [rbp-230h]
  int v59; // [rsp+80h] [rbp-228h]
  int v60; // [rsp+90h] [rbp-218h] BYREF
  void *v61; // [rsp+98h] [rbp-210h]
  int *v62; // [rsp+A0h] [rbp-208h]
  int *v63; // [rsp+A8h] [rbp-200h]
  __int64 v64; // [rsp+B0h] [rbp-1F8h]
  int v65; // [rsp+C0h] [rbp-1E8h] BYREF
  void *v66; // [rsp+C8h] [rbp-1E0h]
  int *v67; // [rsp+D0h] [rbp-1D8h]
  int *v68; // [rsp+D8h] [rbp-1D0h]
  __int64 v69; // [rsp+E0h] [rbp-1C8h]
  _BYTE *v70; // [rsp+E8h] [rbp-1C0h]
  __int64 *v71; // [rsp+F0h] [rbp-1B8h]
  _BYTE v72[360]; // [rsp+100h] [rbp-1A8h] BYREF
  unsigned __int64 v73; // [rsp+268h] [rbp-40h]

  v3 = 40LL * a3;
  v5 = *(_QWORD *)a1;
  v6 = *((_QWORD *)a1 + 108);
  v73 = __readfsqword(0x28u);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v5 + 8);
  v8 = v3 + v6;
  if ( v7 == sub_449EC0 )
  {
    v9 = a2->m128i_i8[1];
    if ( v9 != *(_BYTE *)(v8 + 1) )
      goto LABEL_3;
    if ( v9 == 99 )
    {
LABEL_33:
      v31 = *(_BYTE *)(v8 + 5);
      v32 = a2->m128i_u8[5];
      v33 = v31 <= 0xF9u;
      if ( v32 > 0xF9u )
      {
        if ( v32 >= v31 && v31 > 0xF9u )
          return 1;
      }
      else if ( v32 >= v31 || v31 > 0xF9u || v32 == 2 && *((_BYTE *)a1 + 8) )
      {
        return 1;
      }
      v34 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
      if ( v34 == sub_449F20 )
        goto LABEL_3;
      v35 = v34((__int64)a1, (__int64)a2);
      v36 = v33 || v35 < v31;
      v37 = v35 <= 0xF9u;
      v38 = v35 < v31 && v33;
      if ( !v37 )
        v38 = v36;
      if ( v38 )
        goto LABEL_3;
      return 1;
    }
    if ( v9 != 100 )
    {
      if ( v9 != 1 || a2->m128i_i16[3] != *(_WORD *)(v8 + 6) )
        goto LABEL_3;
      goto LABEL_33;
    }
    v47 = a2->m128i_i64[1] == *(_QWORD *)(v8 + 8);
  }
  else
  {
    v47 = v7((__int64)a1, (__int64)a2, v8);
  }
  if ( v47 )
    goto LABEL_33;
LABEL_3:
  ptr = nullptr;
  v52 = 0;
  sub_44A340((__int64)&ptr, 2u);
  v10 = (char *)ptr;
  *(__m128i *)ptr = _mm_loadu_si128(a2);
  v48 = a1 + 8;
  *((__m128i *)v10 + 1) = _mm_loadu_si128(a2 + 1);
  *((_DWORD *)v10 + 8) = a2[2].m128i_i32[0];
  v11 = *((_QWORD *)a1 + 108);
  v12 = _mm_loadu_si128((const __m128i *)(v11 + v3));
  v53[1] = (__int64)&ptr;
  *(__m128i *)(v10 + 40) = v12;
  v13 = _mm_loadu_si128((const __m128i *)(v11 + v3 + 16));
  v53[2] = (__int64)a1;
  *(__m128i *)(v10 + 56) = v13;
  LODWORD(v11) = *(_DWORD *)(v11 + v3 + 32);
  v54 = 0;
  *((_DWORD *)v10 + 18) = v11;
  qmemcpy(v72, a1 + 8, sizeof(v72));
  v14 = *((_QWORD *)a1 + 4);
  v62 = &v60;
  v63 = &v60;
  v53[0] = v14;
  v55 = 200;
  v57 = v14;
  v58 = -1;
  v59 = 0;
  v60 = 0;
  v61 = nullptr;
  v56 = 0;
  v64 = 0;
  v65 = 0;
  v66 = nullptr;
  v67 = &v65;
  v68 = &v65;
  v69 = 0;
  *(_QWORD *)&v56 = get_func(v14);
  if ( !(_QWORD)v56 )
  {
    *((_QWORD *)&v56 + 1) = getseg(v57);
    if ( !*((_QWORD *)&v56 + 1) )
    {
      if ( !under_debugger )
        interr(10183);
      BUG();
    }
  }
  v70 = (char *)a1 + 793;
  v71 = (__int64 *)(a1 + 400);
  do
  {
    while ( 1 )
    {
      v15 = sub_4514E0(v53);
      if ( *v70 )
      {
        if ( v15 == 21 )
          goto LABEL_9;
        *v70 = 0;
      }
      if ( !v15 )
        goto LABEL_10;
LABEL_9:
      if ( (~((unsigned __int16)get_flags_ex(v53[0], 4) >> 8) & 6) != 0
        || !(unsigned int)decode_insn(v48, v53[0], v16, v17, v18, v19, 0.0) )
      {
        goto LABEL_10;
      }
      v27 = v58;
      if ( v58 == -1 )
        v27 = v53[0];
      *v71 = v27;
      v28 = *(_QWORD *)a1;
      v29 = *(__int64 (**)())(*(_QWORD *)a1 + 16LL);
      if ( v29 == sub_449F10 )
        break;
      v20 = ((__int64 (__fastcall *)(unsigned __int16 *, void **))v29)(a1, &ptr);
      v28 = *(_QWORD *)a1;
      if ( !(_BYTE)v20 )
        break;
      v39 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v28 + 8);
      v40 = ptr;
      if ( v39 == sub_449EC0 )
      {
        v41 = *((_BYTE *)ptr + 1);
        if ( v41 == *((_BYTE *)ptr + 41) )
        {
          if ( v41 == 99 )
          {
LABEL_50:
            v42 = v40[45];
            v43 = v40[5];
            if ( v43 > 0xF9u )
            {
              if ( v43 >= v42 && v42 > 0xF9u )
                goto LABEL_11;
            }
            else if ( v43 >= v42 || v42 > 0xF9u || *((_BYTE *)a1 + 8) && v43 == 2 )
            {
              goto LABEL_11;
            }
            v44 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
            if ( v44 != sub_449F20 )
            {
              v50 = v42 <= 0xF9u;
              v49 = v40[45];
              v45 = ((__int64 (__fastcall *)(unsigned __int16 *))v44)(a1);
              v46 = v50 || v45 < v49;
              if ( v45 <= 0xF9u )
                v46 = v45 < v49 && v50;
              if ( !v46 )
                goto LABEL_11;
            }
          }
          else if ( v41 == 100 )
          {
            if ( *((_QWORD *)ptr + 1) == *((_QWORD *)ptr + 6) )
              goto LABEL_50;
          }
          else if ( v41 == 1 && *((_WORD *)ptr + 3) == *((_WORD *)ptr + 23) )
          {
            goto LABEL_50;
          }
        }
      }
      else
      {
        v40 = ptr;
        if ( (unsigned __int8)v39((__int64)a1, (__int64)ptr, (__int64)ptr + 40) )
          goto LABEL_50;
      }
    }
    v30 = *(__int64 (__fastcall **)(unsigned __int16 *, void **))(v28 + 24);
    if ( (char *)v30 == (char *)j__check_spoiled_jpt )
      check_spoiled_jpt(a1, &ptr);
    else
      v30(a1, &ptr);
  }
  while ( *((_BYTE *)ptr + 1) && *((_BYTE *)ptr + 41) );
LABEL_10:
  v20 = 0;
LABEL_11:
  qmemcpy(v48, v72, 0x168u);
  v21 = v66;
  if ( v66 )
  {
    do
    {
      v22 = v21;
      sub_44AE10((_QWORD *)v21[3]);
      v23 = (void *)v21[5];
      v21 = (_QWORD *)v21[2];
      if ( v23 )
      {
        v22[6] = 0;
        qfree(v23);
      }
      operator delete(v22, 0x48u);
    }
    while ( v21 );
  }
  v24 = (_QWORD **)v61;
  if ( v61 )
  {
    do
    {
      sub_44A540(v24[3]);
      v25 = v24;
      v24 = (_QWORD **)v24[2];
      operator delete(v25, 0x30u);
    }
    while ( v24 );
  }
  if ( ptr )
  {
    *(_QWORD *)&v52 = 0;
    qfree(ptr);
  }
  return v20;
}
