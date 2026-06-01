__int64 __fastcall sub_15020C0(__int64 a1, unsigned int a2, __int64 a3, __m128i a4, __m128 a5)
{
  int *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax
  unsigned __int16 v11; // r13
  char v12; // al
  __int64 *v13; // rdi
  int v14; // r15d
  __int16 v15; // dx
  int v16; // r9d
  int *v17; // r8
  _BYTE *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rdi
  char v26; // dl
  __int64 v27; // r12
  int v28; // r15d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // r8
  char *v40; // rax
  __int64 *v41; // rdi
  __int64 *v42; // rdi
  unsigned __int16 v43; // r15
  char v44; // al
  unsigned __int64 v45; // r8
  unsigned __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 *v53; // rax
  size_t v54; // rax
  __int64 v55; // [rsp+0h] [rbp-158h]
  __int64 v56; // [rsp+0h] [rbp-158h]
  __int64 v57; // [rsp+0h] [rbp-158h]
  __int64 v58; // [rsp+0h] [rbp-158h]
  unsigned __int64 v59; // [rsp+0h] [rbp-158h]
  unsigned __int64 v60; // [rsp+8h] [rbp-150h]
  int v61; // [rsp+18h] [rbp-140h] BYREF
  int v62; // [rsp+1Ch] [rbp-13Ch] BYREF
  __int16 v63; // [rsp+20h] [rbp-138h] BYREF
  __int128 v64; // [rsp+28h] [rbp-130h]
  __int64 v65[4]; // [rsp+40h] [rbp-118h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v67[32]; // [rsp+70h] [rbp-E8h] BYREF
  void *v68; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+98h] [rbp-C0h]
  int v70; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-B0h]

  v7 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) == 3 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v8 + 760) )
    {
      *(_BYTE *)(v8 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v8 + 48) + 6LL) = 1;
    }
    v9 = *(_QWORD *)(a1 + 96);
    *(_WORD *)(a1 + 32) = 1;
    sub_1717620(*(_QWORD *)(v9 + 656), *(_QWORD *)(v9 + 608));
    return 0;
  }
  sub_14F4710((const __m128i *)a1, 10, a4, a5);
  if ( (unsigned __int8)sub_15648A0(a1) )
    return 0;
  v11 = *(_WORD *)(a1 + 32);
  v12 = sub_141A630(v11);
  if ( v11 == 1 || v12 )
    v55 = 0;
  else
    v55 = *(_QWORD *)(a1 + 24);
  v13 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v13, v7);
  v14 = *(_DWORD *)(a1 + 40);
  if ( *(_WORD *)(a1 + 32) == 63 )
  {
    v25 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v25, v7);
    LODWORD(v68) = v14;
    v69 = v55;
    return sub_1895550(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a2, &v68, 1, a3);
  }
  sub_14FAB60(a1, a2);
  v15 = *(_WORD *)(a1 + 32);
  if ( v15 == 66 )
  {
    v70 = v14;
    v68 = &v70;
    v69 = 0x800000001LL;
    v71 = v55;
    do
    {
      v42 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v42, v7);
      if ( (unsigned __int8)sub_15648A0(a1) )
      {
        LOWORD(ptr[0]) = 63;
        sub_15680D0(a1, ptr, 1, 0);
        result = 0;
        goto LABEL_18;
      }
      v43 = *(_WORD *)(a1 + 32);
      v44 = sub_141A630(v43);
      if ( v43 == 1 || v44 )
        v37 = 0;
      else
        v37 = *(_QWORD *)(a1 + 24);
      v38 = (unsigned int)v69;
      v39 = *(unsigned int *)(a1 + 16);
      if ( (unsigned int)v69 >= (unsigned __int64)HIDWORD(v69) )
      {
        v45 = v60 & 0xFFFFFFFF00000000LL | v39;
        v60 = v45;
        if ( HIDWORD(v69) < (unsigned __int64)(unsigned int)v69 + 1 )
        {
          v59 = v45;
          sub_2237220(&v68, &v70, (unsigned int)v69 + 1LL, 16);
          v38 = (unsigned int)v69;
          v45 = v59;
        }
        v46 = (unsigned __int64 *)((char *)v68 + 16 * v38);
        *v46 = v45;
        v46[1] = v37;
        LODWORD(v69) = v69 + 1;
      }
      else
      {
        v40 = (char *)v68 + 16 * (unsigned int)v69;
        *(_DWORD *)v40 = v39;
        *((_QWORD *)v40 + 1) = v37;
        LODWORD(v69) = v69 + 1;
      }
      v41 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v41, v7);
    }
    while ( *(_WORD *)(a1 + 32) == 66 );
    v54 = j__strlen("@protocol");
    if ( (unsigned __int8)sub_1569A00(a1, 63, 15, "@protocol", v54) )
      result = 0;
    else
      result = sub_1895550(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a2, v68, (unsigned int)v69, a3);
    goto LABEL_18;
  }
  v16 = 0;
  v17 = &v70;
  v18 = v67;
  v61 = 0;
  v62 = 0;
  v68 = &v70;
  v69 = 0x800000000LL;
  ptr[0] = v67;
  ptr[1] = (void *)0x800000000LL;
  if ( v15 != 47 )
    goto LABEL_14;
  v26 = sub_14F5A70(a1, (__int64)&v68, (__int64)ptr, 0, 1u, &v61, (__int64)&v62, 1u);
  result = 0;
  if ( !v26 )
  {
    v16 = v69;
    LODWORD(v17) = (_DWORD)v68;
    v18 = ptr[0];
LABEL_14:
    v63 = 0;
    v19 = *(_QWORD *)(a1 + 96);
    v64 = 0;
    v20 = sub_189AE10(*(_QWORD *)(v19 + 736), a2, v55, v14, (_DWORD)v17, v16, (__int64)v18, v62, a3, (__int64)&v63);
    sub_1501640(a1, 10, v20, (__m128i)0LL, a5);
    if ( HIBYTE(v63) )
    {
      v27 = v64;
      v58 = *(_QWORD *)(a1 + 96);
      v28 = sub_BAA660(v20, 10, v21, v22, v23, v24);
      if ( v28 == (unsigned int)sub_BAA660(v27, 10, v29, v30, v31, v32) )
      {
        sub_1A39AF0(v58, v27);
        v51 = *(_QWORD *)(v27 + 104);
        if ( !v51 )
        {
          sub_A79820((__int64 *)(*(_QWORD *)(v27 + 96) + 88LL), *(_QWORD *)(v27 + 96), v47, v48, v49, v50);
          v51 = *(_QWORD *)(v27 + 104);
        }
        v52 = 0;
        v53 = (__int64 *)(v51 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v53 )
          v52 = *v53;
        sub_BA8DD0(v20, v52);
      }
      else
      {
        v33 = *(_QWORD *)(a1 + 8);
        v34 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL);
        v65[0] = *(_QWORD *)(a1 + 104);
        v35 = *(_QWORD *)(v20 + 104);
        v36 = *(_QWORD *)(v33 + 56);
        v65[1] = v34;
        v65[2] = v36;
        sub_EA3150(v65, v27, v20, v35 & 0xFFFFFFFFFFFFFFF8LL);
      }
    }
    result = sub_17A2530(*(_QWORD *)(a1 + 96), v20, 0);
  }
  if ( ptr[0] != v67 )
  {
    v56 = result;
    free(ptr[0]);
    result = v56;
  }
LABEL_18:
  if ( v68 != &v70 )
  {
    v57 = result;
    free(v68);
    return v57;
  }
  return result;
}
