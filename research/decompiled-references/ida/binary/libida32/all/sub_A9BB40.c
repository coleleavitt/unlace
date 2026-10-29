__int64 __fastcall sub_A9BB40(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // r12d
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rsi
  unsigned __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // [rsp+8h] [rbp-1D0h] BYREF
  _QWORD v29[2]; // [rsp+10h] [rbp-1C8h] BYREF
  int v30; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-1B0h]
  __int64 v32; // [rsp+30h] [rbp-1A8h]
  __int128 v33; // [rsp+38h] [rbp-1A0h]
  __int64 v34; // [rsp+48h] [rbp-190h]
  __int64 (__fastcall **v35)(); // [rsp+50h] [rbp-188h] BYREF
  int v36; // [rsp+58h] [rbp-180h]
  __int128 v37; // [rsp+60h] [rbp-178h]
  __int64 v38; // [rsp+70h] [rbp-168h]
  char v39; // [rsp+78h] [rbp-160h]
  int v40; // [rsp+7Ch] [rbp-15Ch]
  void **p_ptr; // [rsp+80h] [rbp-158h]
  void *ptr; // [rsp+90h] [rbp-148h] BYREF
  __m128i si128; // [rsp+98h] [rbp-140h]
  _BYTE v44[304]; // [rsp+A8h] [rbp-130h] BYREF

  v28 = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384DA0);
  ptr = v44;
  v36 = 2;
  v39 = 0;
  v35 = &off_2BC1F40;
  v40 = 1;
  v38 = 0;
  v37 = 0;
  p_ptr = &ptr;
  sub_2257B70(&v35, 0, 0, 0);
  v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(unsigned __int8 *)(v5 + 16);
  v7 = v5;
  if ( (_BYTE)v6 != 42 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v3 + 16) != 42 )
      goto LABEL_10;
    v5 = sub_F3F310(v5, 0, v6, v3);
    if ( !v5 )
    {
      v5 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
      LODWORD(v6) = *(unsigned __int8 *)(v5 + 16);
      goto LABEL_10;
    }
    v6 = v28 & 0xFFFFFFFFFFFFFFF0LL;
    v7 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
  {
LABEL_3:
    v28 = sub_F44710(v7, 0, v6, v3, v4);
    goto LABEL_4;
  }
  LODWORD(v6) = *(unsigned __int8 *)(v7 + 16);
  v5 = v7;
LABEL_10:
  v10 = (unsigned int)(v6 - 43);
  if ( (unsigned int)v10 <= 1 || (v5 = sub_A32F40(v5, 0, v10, v3, v4)) != 0 )
  {
    v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_990B30(v5, 0, v10, v3, v4) & 0xFFFFFFFFFFFFFFF0LL)
                                                     + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
    if ( v11 == 25 || v11 == 26 )
    {
      v7 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_3;
    }
  }
LABEL_4:
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
  {
    v28 = sub_6B4E70(&v28);
    v14 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v14 + 16) == 33
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33
      && (v14 = sub_F3F310(v14, 0, v12, v13)) != 0 )
    {
      v15 = *(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v16 = *(_QWORD *)v15;
      if ( *(_BYTE *)(*(_QWORD *)v15 + 16LL) == 26
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
        && sub_F3F310(v16, 0, v12, v13) )
      {
        v17 = *(_QWORD *)(v14 + 32);
        v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v18 + 16) != 26 )
          v18 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL), 0, v12, v13);
        if ( (*(_BYTE *)(v18 + 19) & 0x1E) != 0 )
        {
          v20 = v17;
          v33 = 0;
          v30 = 0;
          v31 = 0;
          v32 = 0;
          v34 = 0;
          v29[0] = &v30;
          v29[1] = a1;
          v21 = sub_A5E4E0((__int64)a1, v17, (__int64 (__fastcall *)(__int64))sub_A50540, (__int64)v29);
          v25 = sub_F3DED0(v14, v20, v22, v23, v24);
          v28 = sub_A97CE0(a1, v21, *(_QWORD *)(v14 + 40), v25, v26, v27);
        }
      }
    }
    v19 = sub_A40BF0((__int64)a1, 0);
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64 (__fastcall ***)(), _QWORD))(*(_QWORD *)v19 + 184LL))(
      v19,
      v28,
      &v35,
      0);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  else
  {
    sub_A8A750(a1, (__int64)&v35, v28, v3, v4);
  }
  v8 = sub_2212730(ptr, si128.m128i_i64[0]);
  v35 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v35);
  if ( ptr != v44 )
    free(ptr);
  return v8;
}

