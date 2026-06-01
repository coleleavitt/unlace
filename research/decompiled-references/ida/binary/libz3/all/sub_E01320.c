__int64 __fastcall sub_E01320(__int64 a1)
{
  char **exception; // rbx
  char **v2; // r12
  void (__fastcall ***v4)(void *); // rbp
  bool v5; // zf
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // edx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbp
  _OWORD *v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  _QWORD *v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  __int64 *v32; // rax
  int v33; // r14d
  __int64 v34; // rax
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // r14
  __int64 v39; // rdi
  __int64 v40; // rdi
  unsigned int v42; // r12d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  int v46; // ecx
  unsigned int v47; // ebp
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  int v53; // [rsp+0h] [rbp-118h]
  unsigned int v54; // [rsp+Ch] [rbp-10Ch]
  char v55[8]; // [rsp+18h] [rbp-100h] BYREF
  _BYTE v56[16]; // [rsp+20h] [rbp-F8h] BYREF
  int *v57; // [rsp+30h] [rbp-E8h] BYREF
  int v58; // [rsp+38h] [rbp-E0h]
  __int128 v59; // [rsp+40h] [rbp-D8h]
  __int128 v60; // [rsp+50h] [rbp-C8h]
  __int64 v61; // [rsp+60h] [rbp-B8h]
  __int16 v62; // [rsp+68h] [rbp-B0h]
  __int64 v63; // [rsp+70h] [rbp-A8h]
  _OWORD v64[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-78h]
  _OWORD *v66; // [rsp+A8h] [rbp-70h]
  __int64 v67; // [rsp+B0h] [rbp-68h]
  int v68; // [rsp+B8h] [rbp-60h]
  __int128 v69; // [rsp+C0h] [rbp-58h]
  int v70; // [rsp+D0h] [rbp-48h]

  v4 = *(void (__fastcall ****)(void *))(a1 + 872);
  if ( v4 )
  {
    v5 = (*((_DWORD *)v4 + 12))-- == 1;
    if ( v5 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  *(_QWORD *)(a1 + 872) = 0;
  sub_DFBCB0(a1);
  v6 = *(_QWORD **)(a1 + 848);
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
    {
      v47 = (unsigned int)(3 * v7 + 1) >> 1;
      v48 = 8 * (v47 + ((3 * (_DWORD)v7 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * (int)v7 + 8 >= (unsigned int)v48 || (unsigned int)v7 >= v47 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DF63A0((__int64 *)v64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v64);
        sub_233E40((__int64)v64);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v49 = (unsigned int *)sub_186B300(v6 - 1, v48);
      v6 = v49 + 2;
      *v49 = v47;
      v50 = v49[1];
      *(_QWORD *)(a1 + 848) = v6;
      v8 = &v6[3 * v50];
    }
    else
    {
      v8 = &v6[3 * v7];
    }
  }
  else
  {
    v52 = (_QWORD *)sub_186B270(0x38u);
    v6 = v52 + 1;
    *v52 = 2;
    *(_QWORD *)(a1 + 848) = v52 + 1;
    v8 = v52 + 1;
  }
  v8[2] = 0;
  *(_OWORD *)v8 = 0;
  v9 = *((unsigned int *)v6 - 1);
  *((_DWORD *)v6 - 1) = v9 + 1;
  v10 = &v6[3 * v9];
  v11 = *(_QWORD *)(a1 + 720);
  if ( v11 )
  {
    *v10 = *(_DWORD *)(v11 - 4);
    v12 = *(_QWORD *)(a1 + 728);
    if ( v12 )
      goto LABEL_9;
  }
  else
  {
    *v10 = 0;
    v12 = *(_QWORD *)(a1 + 728);
    if ( v12 )
    {
LABEL_9:
      v10[1] = *(_DWORD *)(v12 - 4);
      v13 = *(_QWORD *)(a1 + 744);
      if ( v13 )
        goto LABEL_10;
      goto LABEL_47;
    }
  }
  v10[1] = 0;
  v13 = *(_QWORD *)(a1 + 744);
  if ( v13 )
  {
LABEL_10:
    v10[4] = *(_DWORD *)(v13 - 4);
    v14 = *(_QWORD *)(a1 + 736);
    if ( v14 )
      goto LABEL_11;
    goto LABEL_48;
  }
LABEL_47:
  v10[4] = 0;
  v14 = *(_QWORD *)(a1 + 736);
  if ( v14 )
  {
LABEL_11:
    v10[2] = *(_DWORD *)(v14 - 4);
    v15 = *(_QWORD *)(a1 + 752);
    if ( v15 )
      goto LABEL_12;
LABEL_49:
    v10[3] = 0;
    v16 = *(_QWORD *)(a1 + 760);
    if ( v16 )
      goto LABEL_13;
    goto LABEL_50;
  }
LABEL_48:
  v10[2] = 0;
  v15 = *(_QWORD *)(a1 + 752);
  if ( !v15 )
    goto LABEL_49;
LABEL_12:
  v10[3] = *(_DWORD *)(v15 - 4);
  v16 = *(_QWORD *)(a1 + 760);
  if ( v16 )
  {
LABEL_13:
    v17 = *(_DWORD *)(v16 - 4);
    goto LABEL_14;
  }
LABEL_50:
  v17 = 0;
LABEL_14:
  v5 = *(_BYTE *)(a1 + 257) == 0;
  v10[5] = v17;
  if ( v5 )
  {
    v18 = *(_QWORD **)(a1 + 312);
    if ( !v18 )
    {
      sub_DFBCB0(a1);
      v18 = *(_QWORD **)(a1 + 312);
    }
    sub_DE67F0(v18);
  }
  sub_DFBCB0(a1);
  v19 = *(_QWORD *)(a1 + 296);
  sub_DFBCB0(a1);
  v20 = *(_QWORD *)(a1 + 296);
  v65 = 0;
  v64[0] = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v19);
  v64[1] = 0;
  v21 = (_OWORD *)sub_186B270(0x80u);
  v66 = v21;
  *v21 = 0;
  v21[1] = 0;
  v21[2] = 0;
  v21[3] = 0;
  v21[4] = 0;
  v21[5] = 0;
  v21[6] = 0;
  v21[7] = 0;
  v67 = 8;
  v68 = 0;
  v70 = 0;
  v69 = 0;
  if ( v19 != v20 )
  {
    sub_15DA640(DWORD2(v64[0]), v64[0], v22, v23, v24, v25, v53);
    sub_15D2280(*((_QWORD *)&v64[0] + 1), *(_QWORD *)&v64[0]);
  }
  v26 = *(_QWORD **)(a1 + 288);
  if ( !v26 )
  {
    v28 = MEMORY[0x7FFFFFFF8];
    if ( !MEMORY[0x7FFFFFFF8] )
      goto LABEL_44;
    goto LABEL_22;
  }
  v27 = *((_DWORD *)v26 - 1);
  v28 = v26[v27 - 1];
  if ( v28 )
  {
LABEL_22:
    v29 = sub_1333690(v28, v64);
    v28 = v29;
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v26 = *(_QWORD **)(a1 + 288);
    if ( v26 )
    {
      v27 = *((_DWORD *)v26 - 1);
      if ( *((_DWORD *)v26 - 2) != v27 )
      {
LABEL_26:
        v30 = v27;
        v31 = v27 + 1;
        v32 = &v26[v30];
        goto LABEL_27;
      }
      goto LABEL_36;
    }
LABEL_44:
    v51 = (_QWORD *)sub_186B270(0x18u);
    v26 = v51 + 1;
    *v51 = 2;
    v31 = 1;
    *(_QWORD *)(a1 + 288) = v51 + 1;
    v32 = v51 + 1;
    goto LABEL_27;
  }
  if ( *((_DWORD *)v26 - 2) != v27 )
    goto LABEL_26;
LABEL_36:
  v42 = (3 * v27 + 1) >> 1;
  v43 = 8 * v42 + 8;
  if ( 8 * v27 + 8 >= (unsigned int)v43 || v27 >= v42 )
  {
    v2 = (char **)__cxa_allocate_exception(0x28u);
    sub_DF63A0((__int64 *)&v57, "Overflow encountered when expanding vector");
    *v2 = (char *)off_1C63128;
    sub_2333C0(v2 + 1, &v57);
    sub_233E40((__int64)&v57);
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v44 = (unsigned int *)sub_186B300(v26 - 1, v43);
  v26 = v44 + 2;
  *v44 = v42;
  v45 = v44[1];
  *(_QWORD *)(a1 + 288) = v26;
  v46 = v45;
  v32 = &v26[v45];
  v31 = v46 + 1;
LABEL_27:
  *v32 = v28;
  *((_DWORD *)v26 - 1) = v31;
  v33 = *(_DWORD *)(a1 + 116);
  sub_DFBCB0(a1);
  sub_1829790(*(_QWORD *)(a1 + 296), *(unsigned int *)(a1 + 112));
  sub_DFBCB0(a1);
  v34 = *(_QWORD *)(a1 + 296);
  v62 = 0;
  v58 = 0;
  v57 = &off_1C4C9C8;
  v61 = 0;
  v63 = v34;
  v59 = 0;
  v60 = 0;
  sub_18086F0(v56, &v57, 1);
  sub_18561B0((unsigned int)v55, v33, (unsigned int)&v57, v35, v36, v37);
  v54 = *(_DWORD *)(a1 + 112);
  sub_DFBCB0(a1);
  v38 = *(_QWORD *)(a1 + 296);
  sub_1829790(v38, v54);
  v39 = *(_QWORD *)(a1 + 864);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 192LL))(v39);
  v40 = *(_QWORD *)(a1 + 880);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 88LL))(v40);
  sub_1829100(v38);
  sub_1856400(v55);
  sub_1808900(v56);
  v57 = &off_1C4C9C8;
  if ( (_BYTE)v62 )
    sub_18296D0(v63);
  if ( HIBYTE(v62) )
    sub_1829760(v63);
  return sub_15CE760(v64);
}

