__int64 __fastcall sub_1889AD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        int a9,
        char a10)
{
  char v10; // r13
  __m128i *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i *v14; // r14
  unsigned int v15; // r15d
  __int64 *v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // rbp
  unsigned int v27; // ebx
  __int64 *v28; // r12
  __int64 v29; // r13
  __int64 v30; // rax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // r15
  unsigned __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rbp
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  unsigned int v57; // [rsp+4h] [rbp-F4h]
  unsigned int v58; // [rsp+8h] [rbp-F0h]
  unsigned int v59; // [rsp+8h] [rbp-F0h]
  __int64 v60; // [rsp+8h] [rbp-F0h]
  int v61; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v62; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v63; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v64; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v65; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v66[200]; // [rsp+30h] [rbp-C8h] BYREF

  v10 = a4;
  v63 = a3;
  v62 = a5;
  v61 = a6;
  v57 = a2;
  v11 = (__m128i *)sub_F63270(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  if ( !v11 )
    return 1;
  v14 = v11;
  v15 = v62;
  v16 = nullptr;
  v17 = (*(_DWORD *)&byte_8[v63 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned int)v63) & 7;
  if ( a10 )
  {
    v64 = 0;
    v16 = &v64;
  }
  switch ( v62 )
  {
    case 0u:
      v18 = v11[6].m128i_i64[1];
      sub_7052B0((__int64 *)(v18 + 96), v18, v62, v17, v12, v13);
      if ( (*(_BYTE *)(v14[8].m128i_i64[0] + 9) & 1) != 0
        || (unsigned __int8)sub_B9BFC0((__int64)v14, v18, v19, v17, v36, v37) )
      {
        v18 = v14[6].m128i_i64[1];
        sub_7052B0((__int64 *)(v18 + 96), v18, v19, v17, v36, v37);
        if ( *(char *)(v14[8].m128i_i64[0] + 4) < 0 )
          return 1;
      }
      if ( !v16 )
        goto LABEL_15;
      if ( (unsigned __int8)sub_B9BFC0((__int64)v14, v18, v19, v17, v36, v37) )
      {
        v18 = (__int64)v14;
        sub_1889700(a1, (__int64)v14, a7, a8);
      }
      v38 = sub_B8E970((__int64)v14[4].m128i_i64);
      v39 = v38;
      if ( !v38 )
        goto LABEL_44;
      if ( (*(_BYTE *)(v38 + 28) & 0x7F) == 0x26 )
        goto LABEL_56;
      while ( 1 )
      {
        v40 = *(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v39 = v40;
        if ( !v40 )
          break;
        if ( (*(_BYTE *)(v40 + 28) & 0x7F) == 0x26 )
        {
LABEL_56:
          v60 = 0;
LABEL_57:
          if ( !sub_B98FC0(v39, v18) || (v60 = v39, (unsigned __int8)sub_B967A0(v39, v18, v19, v17)) )
          {
            while ( 1 )
            {
              v48 = *(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v39 = v48;
              if ( !v48 )
                break;
              if ( (*(_BYTE *)(v48 + 28) & 0x7F) == 0x26 )
                goto LABEL_57;
            }
          }
LABEL_45:
          *v16 = v60;
          goto LABEL_15;
        }
      }
LABEL_44:
      v60 = 0;
      goto LABEL_45;
    case 1u:
      v18 = v11[6].m128i_i64[1];
      v58 = v17;
      sub_7052B0((__int64 *)(v18 + 96), v18, v62, v17, v12, v13);
      v17 = v58;
      if ( (*(_BYTE *)(v14[8].m128i_i64[0] + 5) & 1) == 0 )
      {
        if ( a9 != 1 )
          goto LABEL_7;
        v18 = v14[6].m128i_i64[1];
        sub_7052B0((__int64 *)(v18 + 96), v18, v19, v58, v20, v21);
        v17 = v58;
        if ( (*(_BYTE *)(v14[8].m128i_i64[0] + 5) & 0x40) == 0 )
          goto LABEL_7;
      }
      goto LABEL_25;
    case 2u:
    case 4u:
      goto LABEL_8;
    case 3u:
      v18 = v11[6].m128i_i64[1];
      v59 = v17;
      sub_7052B0((__int64 *)(v18 + 96), v18, v62, v17, v12, v13);
      v17 = v59;
      if ( (*(_BYTE *)(v14[8].m128i_i64[0] + 5) & 4) != 0 )
      {
LABEL_25:
        if ( (_DWORD)v17 == 1 )
          return 1;
      }
      else
      {
LABEL_7:
        if ( !v16 )
          goto LABEL_15;
      }
LABEL_8:
      v18 = (__int64)v14;
      v22 = sub_18379F0(a1, (int)v14, v62, v17, v10);
      v19 = (v22 >> 1) & 3;
      if ( v19 == 1 )
        return 1;
      v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v23 )
      {
        if ( v16 )
          *v16 = v23;
        v24 = *(_QWORD *)(v23 + 80);
        if ( a9 == 1 && v15 - 1 <= 1 )
          v25 = BYTE3(v24) & 1;
        else
          v25 = BYTE2(v24) >> 7;
        if ( v25 )
          return 1;
      }
LABEL_15:
      if ( !a10 )
        return 0;
      if ( v10 )
        v63 |= 1uLL;
      v26 = v64;
      if ( v64 )
      {
        v27 = sub_B967A0(v64, v18, v19, v17);
        if ( (_BYTE)v27 )
        {
          v28 = (__int64 *)(a1 + 8);
          if ( v61 == 2 )
          {
            sub_168B9F0((__int64)v66, v28, *(_DWORD *)(v26 + 24), 0x17F9u, 0);
            v46 = sub_1853590((__int64)v66, &v61);
            v65 = sub_6D5440(&v63);
            v47 = sub_162B6D0(v46, (__int64 *)&v65);
            sub_184A780(v47, (int *)&v62);
            v27 = 0;
            sub_15F7200(v66);
            return v27;
          }
          sub_168B9F0((__int64)v66, v28, v57, 0x17F9u, 0);
          v29 = sub_1853590((__int64)v66, &v61);
          v65 = sub_6D5440(&v63);
          v30 = sub_162B6D0(v29, (__int64 *)&v65);
          sub_184A780(v30, (int *)&v62);
          sub_15F7200(v66);
          v31 = *(_DWORD *)(v26 + 24);
          v32 = 103;
          goto LABEL_22;
        }
        if ( v61 != 2 )
        {
          sub_168B9F0((__int64)v66, (__int64 *)(a1 + 8), v57, 0x17F8u, 0);
          v44 = sub_1853590((__int64)v66, &v61);
          v65 = sub_6D5440(&v63);
          v45 = sub_162B6D0(v44, (__int64 *)&v65);
          sub_184A780(v45, (int *)&v62);
          sub_15F7200(v66);
        }
        sub_188A5F0(a1, v26, v62, 0, 1);
      }
      else
      {
        v28 = (__int64 *)(a1 + 8);
        if ( v62 )
        {
          sub_168B9F0((__int64)v66, v28, v57, 0x17F4u, 0);
          v41 = sub_1853590((__int64)v66, &v61);
          v65 = sub_6D5440(&v63);
          v42 = sub_162B6D0(v41, (__int64 *)&v65);
          v43 = sub_184A780(v42, (int *)&v62);
          sub_1605D30(v43, &v63);
          v27 = 0;
          sub_15F7200(v66);
          return v27;
        }
        sub_168B9F0((__int64)v66, v28, v57, 0x17F5u, 0);
        v49 = sub_1853590((__int64)v66, &v61);
        v65 = sub_6D5440(&v63);
        sub_162B6D0(v49, (__int64 *)&v65);
        sub_15F7200(v66);
        v50 = sub_183A950((__int64)v14);
        if ( v50 )
        {
          do
          {
LABEL_64:
            if ( (*(_BYTE *)(v50 + 29) & 2) == 0 )
              goto LABEL_80;
            v50 = *(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v50 )
              goto LABEL_70;
          }
          while ( (*(_BYTE *)(v50 + 28) & 0x7F) == 0x26 );
          while ( 1 )
          {
            v51 = *(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v50 = v51;
            if ( !v51 )
              break;
            if ( (*(_BYTE *)(v51 + 28) & 0x7F) == 0x26 )
              goto LABEL_64;
          }
        }
LABEL_70:
        v52 = sub_B8E970((__int64)v14[4].m128i_i64);
        v53 = v52;
        if ( !v52 )
          return 0;
        if ( (*(_BYTE *)(v52 + 28) & 0x7F) == 0x47 )
        {
LABEL_81:
          v50 = *(_QWORD *)(v53 + 48);
          if ( (*(_BYTE *)(v50 + 28) & 0x7F) == 0x26 )
          {
LABEL_80:
            v31 = *(_DWORD *)(v50 + 24);
            v32 = 6454;
LABEL_22:
            sub_168B9F0((__int64)v66, v28, v31, v32, 0);
            sub_15F7200(v66);
            return 0;
          }
          v55 = *(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v55 )
            return 0;
          while ( (*(_BYTE *)(v55 + 28) & 0x7F) == 0x47 )
          {
LABEL_88:
            v50 = *(_QWORD *)(v55 + 48);
            if ( (*(_BYTE *)(v50 + 28) & 0x7F) == 0x26 )
              goto LABEL_80;
            v55 = *(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v55 )
              return 0;
          }
          while ( 1 )
          {
            v56 = *(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v55 = v56;
            if ( !v56 )
              return 0;
            if ( (*(_BYTE *)(v56 + 28) & 0x7F) == 0x47 )
              goto LABEL_88;
          }
        }
        else
        {
          while ( 1 )
          {
            v54 = *(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v53 = v54;
            if ( !v54 )
              return 0;
            if ( (*(_BYTE *)(v54 + 28) & 0x7F) == 0x47 )
              goto LABEL_81;
          }
        }
      }
      return v27;
    case 5u:
      v18 = v11[6].m128i_i64[1];
      sub_7052B0((__int64 *)(v18 + 96), v18, v62, v17, v12, v13);
      if ( (*(_BYTE *)(v14[8].m128i_i64[0] + 5) & 0x10) != 0 )
        return 1;
      if ( a9 == 1 )
      {
        v18 = v14[6].m128i_i64[1];
        sub_7052B0((__int64 *)(v18 + 96), v18, v19, v17, v34, v35);
        if ( (*(_BYTE *)(v14[8].m128i_i64[0] + 6) & 4) != 0 )
          return 1;
      }
      if ( v16 )
      {
        v18 = v14[6].m128i_i64[1];
        sub_7052B0((__int64 *)(v18 + 96), v18, v19, v17, v34, v35);
        if ( (*(_BYTE *)(v14[8].m128i_i64[0] + 9) & 0x20) == 0 )
        {
          v18 = (__int64)v14;
          sub_18892E0(a1, v14, a7, a8);
        }
        *v16 = sub_B97300((__int64)v14);
      }
      goto LABEL_15;
  }
}
