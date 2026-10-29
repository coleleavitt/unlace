__int64 __fastcall sub_14C87B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int16 v8; // dx
  char v9; // cl
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // zf
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // r12
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // [rsp+8h] [rbp-B90h] BYREF
  _QWORD v27[2]; // [rsp+10h] [rbp-B88h] BYREF
  __int64 *v28; // [rsp+20h] [rbp-B78h] BYREF
  __int64 v29; // [rsp+28h] [rbp-B70h]
  __int64 v30; // [rsp+30h] [rbp-B68h]
  void **p_ptr; // [rsp+38h] [rbp-B60h]
  _BYTE **v32; // [rsp+40h] [rbp-B58h]
  _BYTE *v33; // [rsp+50h] [rbp-B48h] BYREF
  char v34; // [rsp+58h] [rbp-B40h]
  __int64 v35; // [rsp+60h] [rbp-B38h]
  int v36; // [rsp+68h] [rbp-B30h]
  __int16 v37; // [rsp+6Ch] [rbp-B2Ch]
  __int64 (__fastcall *v38)(__int64); // [rsp+70h] [rbp-B28h]
  __int64 v39; // [rsp+78h] [rbp-B20h]
  __int64 v40; // [rsp+80h] [rbp-B18h]
  void *ptr; // [rsp+90h] [rbp-B08h] BYREF
  __int64 v42; // [rsp+98h] [rbp-B00h]
  _BYTE v43[96]; // [rsp+A0h] [rbp-AF8h] BYREF
  _QWORD v44[2]; // [rsp+100h] [rbp-A98h] BYREF
  __int128 v45; // [rsp+110h] [rbp-A88h]
  __int64 v46; // [rsp+120h] [rbp-A78h]
  __int64 v47; // [rsp+128h] [rbp-A70h]
  __int64 v48; // [rsp+130h] [rbp-A68h]
  int v49; // [rsp+138h] [rbp-A60h]
  __int64 v50; // [rsp+140h] [rbp-A58h]
  __int64 v51; // [rsp+150h] [rbp-A48h]
  __int64 v52; // [rsp+158h] [rbp-A40h]
  int v53; // [rsp+160h] [rbp-A38h]
  __int64 v54; // [rsp+168h] [rbp-A30h]
  __int64 v55; // [rsp+170h] [rbp-A28h]
  int v56; // [rsp+178h] [rbp-A20h]
  __int64 *v57; // [rsp+180h] [rbp-A18h]
  __int64 v58; // [rsp+188h] [rbp-A10h]
  __int64 v59; // [rsp+190h] [rbp-A08h] BYREF
  __int16 v60; // [rsp+3D0h] [rbp-7C8h]
  __int64 v61; // [rsp+3D8h] [rbp-7C0h]
  _QWORD *v62; // [rsp+3E0h] [rbp-7B8h]
  __int64 v63; // [rsp+3E8h] [rbp-7B0h]
  _QWORD v64[5]; // [rsp+3F0h] [rbp-7A8h] BYREF
  _QWORD v65[240]; // [rsp+418h] [rbp-780h] BYREF

  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v4 = *(_QWORD *)(a2 + 160);
  v65[2] = qword_2CD8AE0;
  v45 = 0;
  v52 = v4;
  v57 = &v59;
  v58 = 0x400000000LL;
  LODWORD(v4) = *(_DWORD *)a2;
  v44[0] = a2;
  v44[1] = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v5 = *(_QWORD *)(a2 + 72);
  LOBYTE(v60) = ((((unsigned int)v4 >> 12) & 0x7F) == 69) | v60 & 0xFE;
  v62 = v64;
  v64[2] = v5;
  v63 = 0x200000000LL;
  v64[3] = v65;
  v64[4] = 0x200000000LL;
  v51 = 0;
  v53 = 6;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v60 &= 0xFC01u;
  v61 = 0;
  memset(&v65[3], 0, 40);
  v6 = *(_QWORD *)(a1 + 96);
  v65[232] = 0;
  v7 = sub_1E85500(v6, v44);
  v8 = *(_WORD *)(a1 + 32);
  v26 = v7;
  if ( v8 == 24 )
  {
    v19 = *(unsigned int *)(a1 + 16);
    sub_1703EE0(a1 + 48, v19, v7);
    v20 = sub_14EE310(a1);
    if ( v20 == 1 )
    {
      v17 = 1;
    }
    else
    {
      v21 = *(_QWORD *)(a1 + 96);
      v22 = v20 & 0xFFFFFFFFFFFFFFFELL;
      ptr = (void *)(v20 & 0xFFFFFFFFFFFFFFFELL);
      v23 = sub_EEC140(v20 & 0xFFFFFFFFFFFFFFFELL);
      v24 = sub_EEB7E0(v22, v19, 0.0);
      v17 = sub_19ABD30(v21, v26, v24, (unsigned int)&ptr, 1, v23, 1);
    }
  }
  else
  {
    v35 = a1;
    v33 = (_BYTE *)(a1 + 1952);
    v9 = *(_BYTE *)(a1 + 1952);
    v36 = 1507350;
    v34 = v9;
    *(_BYTE *)(a1 + 1952) = 1;
    v37 = 63;
    v38 = sub_146A990;
    v39 = 0;
    v40 = 0;
    if ( v8 == 22 )
    {
      if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
        sub_1568800(&v33);
      else
        LODWORD(v40) = sub_146A990(a1);
      v7 = v26;
    }
    v10 = (__int64 *)*(unsigned int *)(a1 + 16);
    sub_1703EE0(a1 + 48, v10, v7);
    v15 = *(_WORD *)(a1 + 32) == 23;
    v29 = a1;
    ptr = v43;
    v42 = 0xC00000000LL;
    v28 = &v26;
    v30 = a2;
    p_ptr = &ptr;
    v32 = &v33;
    if ( v15
      || (v10 = (__int64 *)&ptr,
          v27[0] = a1,
          v27[1] = &v28,
          !(unsigned __int8)sub_14BDD40(
                              a1,
                              (__int64)&ptr,
                              (void (__fastcall *)(__int64))sub_14C5280,
                              (__int64)v27,
                              0,
                              (__m128i)0LL)) )
    {
      sub_14808E0((__int64)&v33, v10, v11, v12, v13, v14);
      if ( v26 )
        v17 = sub_19ABD30(*(_QWORD *)(a1 + 96), v26, v40, (_DWORD)ptr, v42, HIDWORD(v40), 0);
      else
        v17 = 1;
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 968LL) && !*(_BYTE *)(a1 + 368) )
      {
        v25 = v29;
        if ( *v28 )
        {
          sub_173F990(
            *(_QWORD *)(*(_QWORD *)(v29 + 96) + 656LL),
            *(_QWORD *)(*(_QWORD *)(*v28 & 0xFFFFFFFFFFFFFFF0LL) + 8LL),
            *(_DWORD *)(v30 + 164),
            (unsigned int)*p_ptr,
            *((_DWORD *)p_ptr + 2),
            *((_DWORD *)v32 + 12),
            0);
          v25 = v29;
        }
        *(_BYTE *)(v25 + 368) = 1;
      }
      v16 = a1;
      LOWORD(v27[0]) = 23;
      v17 = 1;
      sub_15680D0(v16, v27, 1, 1);
    }
    if ( ptr != v43 )
      free(ptr);
    *v33 = v34;
  }
  sub_147A7A0((char *)v44);
  return v17;
}
