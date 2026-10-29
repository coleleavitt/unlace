__int64 __fastcall sub_19DCB10(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        __int64 a8,
        int a9,
        char a10)
{
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // r14
  unsigned int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r10
  unsigned __int8 v19; // al
  __int64 v20; // rax
  int v21; // r12d
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned __int64 v27; // r10
  __int64 v28; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // r10
  __int64 v40; // r13
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r13
  __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned __int64 v51; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v52; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v53; // [rsp+8h] [rbp-1C0h]
  __int64 v55; // [rsp+20h] [rbp-1A8h]
  __int64 v56; // [rsp+28h] [rbp-1A0h]
  __int64 v57; // [rsp+30h] [rbp-198h] BYREF
  __int64 v58; // [rsp+38h] [rbp-190h] BYREF
  unsigned __int8 v59; // [rsp+47h] [rbp-181h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-180h] BYREF
  _QWORD v61[2]; // [rsp+50h] [rbp-178h] BYREF
  __int64 v62; // [rsp+60h] [rbp-168h]
  unsigned __int8 *v63[11]; // [rsp+70h] [rbp-158h] BYREF
  char v64; // [rsp+C8h] [rbp-100h]
  unsigned int v65; // [rsp+D0h] [rbp-F8h]
  char v66; // [rsp+D4h] [rbp-F4h]
  __int64 v67; // [rsp+E0h] [rbp-E8h] BYREF
  _QWORD *v68; // [rsp+E8h] [rbp-E0h]
  __int64 v69; // [rsp+F0h] [rbp-D8h]
  _OWORD v70[5]; // [rsp+F8h] [rbp-D0h] BYREF
  __int64 v71; // [rsp+148h] [rbp-80h]
  __int64 v72; // [rsp+150h] [rbp-78h]
  __int64 v73; // [rsp+158h] [rbp-70h]
  int v74; // [rsp+160h] [rbp-68h]
  __int64 v75; // [rsp+168h] [rbp-60h] BYREF
  __int128 v76; // [rsp+170h] [rbp-58h]
  __int64 v77; // [rsp+180h] [rbp-48h]

  v58 = a3;
  v57 = a4;
  sub_168B6C0((__int64)a1);
  if ( (_BYTE)a9 )
    v11 = v57;
  else
    v11 = v58;
  v12 = (_QWORD *)sub_19D20B0(v11, a8);
  if ( !v12 )
    return 0;
  v13 = v12[5];
  v14 = 0;
  if ( v13 )
  {
    v15 = v12[6];
    v16 = v12[7];
    v70[4] = 0;
    v56 = v16;
    v17 = *a1;
    v55 = v15;
    v68 = v70;
    v69 = 0x800000000LL;
    v72 = v17;
    v67 = 0;
    v71 = 0;
    v73 = v13;
    v74 = 0;
    sub_B85890(&v75, v13);
    v76 = 0;
    v77 = 0x101010000LL;
    sub_1A395A0(&v67);
    v14 = sub_1A49A10(*a1, &v67, *(_QWORD *)(*a1 + 192), 0, 0);
    if ( !(_BYTE)v14 )
    {
      if ( a10 )
      {
        sub_168B9F0((__int64)v61, a1, a2, 0x10F9u, 0);
        if ( v64 )
        {
          sub_AE9DF0(v63, v13, 5u);
        }
        else if ( v66 )
        {
          v47 = sub_168B9E0(v61);
          v48 = v62;
          if ( v62 )
            v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
          v60 = v48;
          v49 = sub_1587BC0(v47, (__int64 *)&v60, v43, v44, v45, v46);
          sub_AE9DF0((unsigned __int8 **)(*v49 + 32LL * v65 + 8), v13, 5u);
        }
        v30 = sub_1605D30((__int64)v61, &v57);
        sub_1605D30(v30, &v58);
        sub_15F7200(v61);
        sub_168B9F0((__int64)v61, a1, *(_DWORD *)(*(_QWORD *)a8 + 56LL), 0x67u, 0);
        sub_15F7200(v61);
        goto LABEL_24;
      }
      goto LABEL_23;
    }
    v18 = *v68 & 0xFFFFFFFFFFFFFFF8LL;
    v19 = *(_BYTE *)(v18 + 28) & 0x7F;
    if ( (unsigned int)v19 - 53 <= 1 || ((v19 + 52) & 0x7Fu) <= 1 )
    {
      v20 = sub_B72ED0(*v68 & 0xFFFFFFFFFFFFFFF8LL);
      v18 = v20;
      if ( !v20 )
        goto LABEL_17;
      v19 = *(_BYTE *)(v20 + 28) & 0x7F;
    }
    if ( v19 == 20 )
    {
      *a5 = v18;
      LOBYTE(v13) = a9 & (v55 != 0);
      if ( (_BYTE)v13 )
      {
        v14 = v13;
        v60 = v55 & 0xFFFFFFFFFFFFFFF8LL | 2;
        v31 = sub_BAD910(v18, v60, 0, 0, 1, 0);
        *a6 = v31;
        if ( v31 )
          goto LABEL_24;
        if ( !a10 )
        {
LABEL_23:
          v14 = 0;
LABEL_24:
          sub_169D230((__int64)&v67);
          return v14;
        }
        sub_168B9F0((__int64)v61, a1, a2, 0x10FBu, 0);
        v32 = sub_1605D30((__int64)v61, &v57);
        v33 = sub_1605D30(v32, &v58);
        v25 = sub_19D3F70(v33, (__int64 *)&v60);
        v59 = 0;
      }
      else
      {
        v21 = a9 ^ 1;
        LOBYTE(v21) = (v56 != 0) & (a9 ^ 1);
        if ( !(_BYTE)v21 )
          goto LABEL_24;
        v14 = v21;
        v60 = v56 & 0xFFFFFFFFFFFFFFF8LL | 1;
        v22 = sub_BAD910(v18, v60, 1, 0, 1, 0);
        *a7 = v22;
        if ( v22 )
          goto LABEL_24;
        if ( !a10 )
          goto LABEL_23;
        sub_168B9F0((__int64)v61, a1, a2, 0x10FBu, 0);
        v23 = sub_1605D30((__int64)v61, &v57);
        v24 = sub_1605D30(v23, &v58);
        v25 = sub_19D3F70(v24, (__int64 *)&v60);
        v59 = 1;
      }
      sub_1588420(v25, &v59);
      sub_15F7200(v61);
      v26 = *(_DWORD *)(*(_QWORD *)a8 + 56LL);
LABEL_22:
      sub_168B9F0((__int64)v61, a1, v26, 0x67u, 0);
      sub_15F7200(v61);
      goto LABEL_23;
    }
LABEL_17:
    if ( !a10 )
      goto LABEL_23;
    v51 = v18;
    sub_168B9F0((__int64)v61, a1, a2, 0x10FAu, 0);
    v27 = v51;
    if ( v64 )
    {
      sub_AE9DF0(v63, v13, 5u);
      v27 = v51;
    }
    else if ( v66 )
    {
      v34 = sub_168B9E0(v61);
      v39 = v51;
      v40 = v34;
      v41 = v62;
      if ( v62 )
      {
        v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
        v39 = v51;
      }
      v53 = v39;
      v60 = v41;
      v42 = sub_1587BC0(v40, (__int64 *)&v60, v35, v36, v37, v38);
      sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v65 + 8), v13, 5u);
      v27 = v53;
    }
    v52 = v27;
    v28 = sub_1605D30((__int64)v61, &v57);
    sub_1605D30(v28, &v58);
    sub_15F7200(v61);
    sub_168B9F0((__int64)v61, a1, *(_DWORD *)(*(_QWORD *)a8 + 56LL), 0x67u, 0);
    sub_15F7200(v61);
    if ( !v52 )
      goto LABEL_23;
    v26 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v52 + 16LL))(v52);
    goto LABEL_22;
  }
  return v14;
}
