__int64 __fastcall sub_1B1A330(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // eax
  void *v23; // rax
  void *v24; // rdi
  __int64 v26; // rax
  __int64 *v27; // r12
  unsigned int v28; // eax
  __int64 v29; // rbx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 *v33; // r9
  __int64 v34; // rdx
  __int64 *v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // eax
  void *v40; // rax
  void (__fastcall *v41)(__int64, __int64 (__fastcall ***)(), unsigned __int64 *, __int64); // [rsp+0h] [rbp-1C8h]
  void (__fastcall *v42)(__int64, __int64 (__fastcall ***)(), unsigned __int64 *, __int64); // [rsp+0h] [rbp-1C8h]
  __int64 v43; // [rsp+8h] [rbp-1C0h] BYREF
  void *v44; // [rsp+10h] [rbp-1B8h] BYREF
  void *v45; // [rsp+18h] [rbp-1B0h]
  __int64 (__fastcall **v46)(); // [rsp+20h] [rbp-1A8h] BYREF
  int v47; // [rsp+28h] [rbp-1A0h]
  __int128 v48; // [rsp+30h] [rbp-198h]
  __int64 v49; // [rsp+40h] [rbp-188h]
  char v50; // [rsp+48h] [rbp-180h]
  int v51; // [rsp+4Ch] [rbp-17Ch]
  void **p_ptr; // [rsp+50h] [rbp-178h]
  unsigned __int64 v53; // [rsp+60h] [rbp-168h] BYREF
  __int64 v54; // [rsp+68h] [rbp-160h]
  void *ptr; // [rsp+F0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-D0h]
  _BYTE v57[192]; // [rsp+108h] [rbp-C0h] BYREF

  v43 = a3;
  v4 = sub_1AEE450(a3);
  if ( v4 == sub_1AEE450(a1[2]) )
  {
    v27 = (__int64 *)(*a1 + 8);
    v28 = sub_C00A40(a2, a2, v5, v6, v7);
    sub_168B9F0((__int64)&ptr, v27, v28, 0x120Du, 0);
    LODWORD(v53) = *((_BYTE *)a1 + 40) ^ 1;
    sub_1587D10((__int64)&ptr, (int *)&v53);
    LODWORD(v4) = 0;
    sub_15F7200(&ptr);
    return (unsigned int)v4;
  }
  v11 = sub_1AFA3A0(a1[1], v43);
  if ( !v11 )
    goto LABEL_12;
  v12 = v43;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 48 )
  {
    p_ptr = &ptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v46 = &off_2BEBEE0;
    v48 = 0;
    ptr = v57;
    v47 = 2;
    v50 = 0;
    v51 = 1;
    v49 = 0;
    sub_227B8B0(&v46, 0, 0, 0);
    v42 = *(void (__fastcall **)(__int64, __int64 (__fastcall ***)(), unsigned __int64 *, __int64))(*(_QWORD *)v43 + 96LL);
    v53 = sub_16043A0(*(_QWORD **)(*a1 + 248), *(_QWORD **)(*a1 + 240), v31, v32, (__int64)v42, v33);
    v54 = v34;
    v42(v43, &v46, &v53, 1);
    v35 = (__int64 *)(*a1 + 8);
    v39 = sub_C00A40(a2, (__int64)&v46, v36, v37, v38);
    sub_168B9F0((__int64)&v53, v35, v39, 0x1227u, 0);
    v40 = *p_ptr;
    v45 = p_ptr[1];
    v44 = v40;
    sub_166BAF0((__int64)&v53, (__int64)&v44);
    sub_15F7200(&v53);
    sub_168B9F0((__int64)&v53, (__int64 *)(*a1 + 8), *(_DWORD *)(v43 + 24), 0x188Bu, 0);
    sub_18DA350((__int64)&v53, &v43);
    sub_15F7200(&v53);
    v46 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v46);
    v24 = ptr;
    if ( ptr == v57 )
      goto LABEL_8;
    goto LABEL_7;
  }
  LODWORD(v4) = *((unsigned __int8 *)a1 + 41);
  if ( !(_BYTE)v4 )
  {
    v29 = *a1;
    v30 = sub_C00A40(a2, v43, v8, v9, v10);
    sub_168B9F0((__int64)&ptr, (__int64 *)(v29 + 8), v30, 0x11ABu, 0);
    sub_15F7200(&ptr);
    return (unsigned int)v4;
  }
  if ( !a1[3] )
  {
    if ( a1[4] )
    {
      v4 = sub_1AEE450(v43);
      v12 = v43;
      if ( v4 != sub_1AEE450(a1[4]) )
      {
        if ( !a1[3] )
        {
          v26 = a1[4];
          if ( v26 )
            a1[3] = v26;
        }
        goto LABEL_6;
      }
    }
    a1[3] = v12;
    *((_DWORD *)a1 + 11) = v11;
LABEL_12:
    LOBYTE(v4) = v11 != 0;
    return (unsigned int)v4;
  }
LABEL_6:
  p_ptr = &ptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v46 = &off_2BEBEE0;
  v48 = 0;
  ptr = v57;
  v47 = 2;
  v50 = 0;
  v51 = 1;
  v49 = 0;
  sub_227B8B0(&v46, 0, 0, 0);
  v13 = a1[3];
  v41 = *(void (__fastcall **)(__int64, __int64 (__fastcall ***)(), unsigned __int64 *, __int64))(*(_QWORD *)v13 + 96LL);
  v53 = sub_16043A0(*(_QWORD **)(*a1 + 248), *(_QWORD **)(*a1 + 240), v14, v15, (__int64)v41, v16);
  v54 = v17;
  v41(v13, &v46, &v53, 1);
  v18 = *a1;
  v22 = sub_C00A40(a2, (__int64)&v46, v19, v20, v21);
  sub_168B9F0((__int64)&v53, (__int64 *)(v18 + 8), v22, 0x11ACu, 0);
  v23 = *p_ptr;
  v45 = p_ptr[1];
  v44 = v23;
  sub_166BAF0((__int64)&v53, (__int64)&v44);
  sub_15F7200(&v53);
  v46 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v46);
  v24 = ptr;
  if ( ptr != v57 )
LABEL_7:
    free(v24);
LABEL_8:
  LODWORD(v4) = 0;
  return (unsigned int)v4;
}
