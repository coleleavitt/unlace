__int64 __fastcall sub_16AEC0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  int v6; // eax
  int v7; // eax
  int v8; // edx
  __int64 v9; // r13
  char *v10; // rax
  __int64 v11; // r14
  int v12; // eax
  _DWORD *v13; // r8
  int v14; // eax
  char *v15; // rcx
  char *v16; // rax
  char *v17; // rax
  __int64 v18; // rax
  unsigned __int64 *v19; // rdi
  signed int v20; // edx
  _DWORD *v21; // r9
  unsigned int v22; // r12d
  int *v23; // rax
  int v24; // eax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rcx
  char v29; // al
  int v30; // r8d
  int v31; // r9d
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // rdi
  __int32 v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  int v42; // r9d
  int v43; // eax
  int v44; // edx
  __int32 v45; // eax
  __int32 v46; // eax
  __int32 v47; // eax
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // [rsp+0h] [rbp-130h]
  __int64 v51; // [rsp+8h] [rbp-128h]
  char *v52; // [rsp+18h] [rbp-118h]
  int v53; // [rsp+20h] [rbp-110h]
  __int64 v54; // [rsp+20h] [rbp-110h]
  unsigned __int8 *v55; // [rsp+28h] [rbp-108h]
  char *v56; // [rsp+30h] [rbp-100h]
  __int64 v57; // [rsp+30h] [rbp-100h]
  __int64 v58; // [rsp+30h] [rbp-100h]
  __int64 v59; // [rsp+30h] [rbp-100h]
  char *v60; // [rsp+38h] [rbp-F8h]
  __int64 v61; // [rsp+38h] [rbp-F8h]
  char v62; // [rsp+47h] [rbp-E9h]
  char *v63; // [rsp+48h] [rbp-E8h]
  __int64 v64; // [rsp+48h] [rbp-E8h]
  __int64 v65; // [rsp+48h] [rbp-E8h]
  int v66; // [rsp+48h] [rbp-E8h]
  char *v67; // [rsp+50h] [rbp-E0h]
  char *v68; // [rsp+50h] [rbp-E0h]
  __int64 v69; // [rsp+50h] [rbp-E0h]
  __int64 v70; // [rsp+50h] [rbp-E0h]
  _DWORD *v72; // [rsp+68h] [rbp-C8h] BYREF
  char *v73; // [rsp+70h] [rbp-C0h] BYREF
  __int64 v74; // [rsp+78h] [rbp-B8h] BYREF
  __int64 v75; // [rsp+80h] [rbp-B0h] BYREF
  __int64 v76; // [rsp+88h] [rbp-A8h] BYREF
  _QWORD v77[2]; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v78[2]; // [rsp+A0h] [rbp-90h] BYREF
  char v79[32]; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v80[2]; // [rsp+D0h] [rbp-60h] BYREF
  char v81[24]; // [rsp+E0h] [rbp-50h] BYREF
  unsigned __int64 v82; // [rsp+F8h] [rbp-38h]

  v4 = a3;
  v82 = __readfsqword(0x28u);
  v6 = sub_330DE0(a3);
  if ( v6 <= 0 )
    return 0;
  if ( **(_DWORD **)(v4 + 56) == 55 )
  {
    if ( v6 != 2 )
      return 0;
  }
  else if ( v6 != 1 )
  {
    return 0;
  }
  v7 = sub_330DE0(a4);
  v8 = v7;
  if ( v7 <= 0 )
    return 0;
  if ( **(_DWORD **)(a4 + 56) == 55 )
    v8 = v7 - 1;
  if ( v8 != 1 )
    return 0;
  if ( *(_DWORD *)(v4 + 376) != 1 )
    return 0;
  if ( *(_DWORD *)(a4 + 376) != 1 )
    return 0;
  if ( **(_DWORD **)(a4 + 368) != **(_DWORD **)(v4 + 368) )
    return 0;
  v9 = sub_1229A0(*(_QWORD *)(v4 + 48));
  v10 = (char *)sub_1229A0(*(_QWORD *)(a4 + 48));
  v72 = (_DWORD *)v9;
  v11 = (__int64)v10;
  v73 = v10;
  v12 = *(_DWORD *)v9;
  if ( *(_DWORD *)v11 != *(_DWORD *)v9 )
    return 0;
  if ( v12 == 13 )
  {
    if ( *(_BYTE *)(v9 + 48) != 4 || *(_BYTE *)(v11 + 48) != 4 )
      return 0;
    v13 = *(_DWORD **)(v9 + 56);
    v62 = 0;
    v73 = *(char **)(v11 + 56);
    v14 = *v13;
    v72 = v13;
  }
  else
  {
    v62 = v12 == 8 || v12 == 5;
    if ( !v62 )
    {
      v15 = (char *)v11;
      v13 = (_DWORD *)v9;
      goto LABEL_18;
    }
    if ( v12 != 8 )
      goto LABEL_15;
    if ( !(unsigned __int8)sub_1679C0(&v72, (__int64 *)&v73) )
      return 0;
    v13 = v72;
    if ( *v72 == 10 )
    {
      if ( !(unsigned __int8)sub_1679C0(&v72, (__int64 *)&v73) )
        return 0;
      v13 = v72;
    }
    v14 = *v13;
    if ( *v13 == 5 )
    {
LABEL_15:
      v62 = sub_1679C0(&v72, (__int64 *)&v73);
      if ( !v62 )
        return 0;
      v13 = v72;
      v14 = *v72;
    }
    else
    {
      v62 = 0;
    }
  }
  v15 = v73;
  if ( *(_DWORD *)v73 != v14 )
    return 0;
LABEL_18:
  v63 = v15;
  v67 = (char *)v13;
  v55 = (unsigned __int8 *)(v9 + 64);
  if ( !sub_125B60((unsigned __int8 *)(v9 + 64), v11 + 64, 0) )
    return 0;
  v16 = sub_1687A0(&v74, v67);
  if ( !v16 )
    return 0;
  if ( *v16 != 4 )
    return 0;
  v56 = v16;
  v60 = v67;
  v68 = v63;
  v17 = sub_1687A0(&v75, v63);
  v64 = (__int64)v17;
  if ( !v17 )
    return 0;
  if ( *(_DWORD *)v68 == 20 )
  {
    v26 = 8 * *((_DWORD *)v17 + 1) - 1;
    v27 = 0;
    if ( (unsigned __int64)v26 <= 0x3F )
      v27 = 1LL << v26;
    v75 &= v27 - 1;
  }
  v69 = v74;
  if ( v74 != v75 )
    return 0;
  v53 = *(_DWORD *)v60;
  if ( *(_DWORD *)v9 == 13 )
  {
    if ( v53 != 24 )
      goto LABEL_27;
    return 0;
  }
  if ( v53 != 24 && *(_DWORD *)v9 == 5 )
    return 0;
LABEL_27:
  v57 = *((_QWORD *)v56 + 1);
  if ( *(_DWORD *)v57 != 12 )
    return 0;
  v52 = (char *)(v57 + 32);
  if ( !sub_125B60((unsigned __int8 *)(v57 + 32), v64, 0)
    || !(unsigned __int8)sub_11FD80((char *)(v57 + 48), &v76, 0)
    || v69 != v76
    || (v76 & (v76 + 1)) != 0 )
  {
    return 0;
  }
  v18 = a1[30].m128i_i64[0];
  v77[0] = 0xFFFFFFFF00000000LL;
  v19 = *(unsigned __int64 **)(v18 + 112);
  v20 = *(_DWORD *)(v57 + 36);
  v77[1] = 0;
  v61 = (__int64)v19;
  v21 = sub_167B10(v19, a2, v20, (__int64)v77);
  if ( !v21 )
    goto LABEL_39;
  v22 = sub_12EA80((__int64)v19, a1, a1[3].m128i_i64[1], v64, a1[3].m128i_i64[1], (__int64)v21, 0);
  if ( !(_BYTE)v22 )
    goto LABEL_39;
  v51 = v76;
  v70 = a1[3].m128i_i64[1];
  v50 = sub_167E70(a1[4].m128i_i64[0], *(_DWORD *)(v70 + 72));
  if ( v53 == 24 )
  {
    *(_DWORD *)v70 = 16;
    sub_125180(v70 + 64, v55);
LABEL_67:
    sub_11CA10((char *)(v70 + 32), v52);
    v41 = v51 + 1;
    if ( v62 )
      v41 = -v41;
    sub_120A10(v70 + 48, v61, v41, *(_DWORD *)(v70 + 36), -1, 0);
    v42 = *(_DWORD *)(v70 + 68);
    if ( *(_DWORD *)v9 == 8 && *(_BYTE *)(v9 + 32) == 4 )
    {
      v49 = *(_QWORD *)(v9 + 40);
      if ( *(_DWORD *)v49 == 10 )
      {
        if ( *(_DWORD *)(v9 + 68) == v42 )
        {
          if ( *(_BYTE *)(v49 + 32) == 4 )
          {
            v66 = *(_DWORD *)(v70 + 68);
            if ( (unsigned __int8)sub_12B6F0(v70, v61, 10, *(_DWORD *)(v9 + 36), 1) )
            {
              if ( !(unsigned __int8)sub_12B6F0(v70, v61, 8, v66, 1) )
              {
                if ( !under_debugger )
                  sub_383060(51961);
                goto LABEL_104;
              }
LABEL_74:
              sub_11D5A0(v9);
              v45 = a1[1].m128i_i32[2];
              BYTE1(v45) &= ~2u;
              LOBYTE(v45) = v45 | 0x80;
              a1[1].m128i_i32[2] = v45;
              sub_11D5A0(v11);
              v46 = a1[1].m128i_i32[2];
              BYTE1(v46) &= ~2u;
              LOBYTE(v46) = v46 | 0x80;
              if ( v4 == v50 )
                v4 = a4;
              a1[1].m128i_i32[2] = v46;
              sub_112550((__int64)a1, v4, v50);
              v47 = a1[1].m128i_i32[2];
              BYTE1(v47) &= ~2u;
              LOBYTE(v47) = v47 | 0x80;
              a1[1].m128i_i32[2] = v47;
              v48 = *(_DWORD *)(v50 + 24);
              BYTE1(v48) &= ~2u;
              LOBYTE(v48) = v48 | 0x80;
              *(_DWORD *)(v50 + 24) = v48;
              sub_A2520((__int64)a1, (__int64)"SDIVMOD_POWER2");
              goto LABEL_40;
            }
            if ( !under_debugger )
              sub_383060(51960);
          }
          else if ( !under_debugger )
          {
            sub_383060(51959);
          }
        }
        else if ( !under_debugger )
        {
          sub_383060(51958);
        }
LABEL_104:
        BUG();
      }
    }
    v43 = *(_DWORD *)(v70 + 36);
    if ( v43 != v42 )
    {
      v44 = 10;
      *(_DWORD *)(v70 + 68) = v43;
      if ( v43 < v42 )
        v44 = 8;
      sub_12B6F0(v70, v61, v44, v42, 1);
    }
    goto LABEL_74;
  }
  if ( *(_DWORD *)v9 == 13 )
  {
    if ( !sub_125B60((unsigned __int8 *)(v9 + 32), v64, 0) || !sub_125B60((unsigned __int8 *)(v11 + 32), v64, 0) )
      goto LABEL_39;
    sub_125180(v70 + 64, v55);
LABEL_66:
    *(_DWORD *)v70 = 18;
    goto LABEL_67;
  }
  v54 = sub_167E70(a1[4].m128i_i64[0], **(_DWORD **)(v4 + 368));
  v23 = (int *)sub_1229A0(*(_QWORD *)(v54 + 48));
  v65 = (__int64)v23;
  if ( v23 )
  {
    v24 = *v23;
    if ( v24 == 8 )
    {
      if ( (int)log2ceil() >= (unsigned __int64)(8 * *(_DWORD *)(v65 + 36)) )
        goto LABEL_39;
      if ( *(_BYTE *)(v65 + 32) != 4 )
        goto LABEL_39;
      v28 = *(_QWORD *)(v65 + 40);
      if ( *(_DWORD *)v28 != 13 )
        goto LABEL_39;
      if ( *(_DWORD *)(v57 + 36) <= *(_DWORD *)(v28 + 36) )
      {
LABEL_60:
        v58 = v28;
        if ( !sub_125B60((unsigned __int8 *)(v28 + 48), (__int64)v55, 0) )
          goto LABEL_39;
        v29 = sub_12EA80((__int64)v19, a1, a1[3].m128i_i64[1], v58 + 32, a1[3].m128i_i64[1], (__int64)v52, 0);
        goto LABEL_62;
      }
    }
    else
    {
      if ( *(_DWORD *)(v65 + 36) >= *(_DWORD *)(v57 + 36) )
      {
        if ( v24 != 13 )
          goto LABEL_39;
        v28 = v65;
        goto LABEL_60;
      }
      v28 = v65;
    }
    v59 = v28;
    if ( !(unsigned __int8)sub_127420(v28 + 48, (__int64)v19, v55, v28) )
      goto LABEL_39;
    v29 = sub_1321C0(a1, a1[3].m128i_i64[1], v59 + 32, a1[3].m128i_i64[1], (__int64)v52);
LABEL_62:
    if ( !v29 )
      goto LABEL_39;
    sub_127A20((__int64)v78, v4, v9, 1, v30, v31);
    sub_127A20((__int64)v80, v54, v65, 0, v32, v33);
    sub_64640(v78, v80, v34, v35, v36, v37);
    sub_317C60(v79, v81);
    sub_93B40(v80);
    v38 = *(_QWORD *)(a1[4].m128i_i64[0] + 784);
    if ( !v38
      || (unsigned __int8)sub_17C4E0(v38, (unsigned int)v78, *(_DWORD *)(v54 + 72), -1, *(_QWORD *)(v65 + 8), 0, 2, 1) )
    {
      sub_93B40(v78);
      goto LABEL_39;
    }
    sub_11CA10((char *)(v70 + 64), (char *)(v65 + 64));
    sub_11D5A0(v65);
    v39 = a1[1].m128i_i32[2];
    BYTE1(v39) &= ~2u;
    LOBYTE(v39) = v39 | 0x80;
    a1[1].m128i_i32[2] = v39;
    v40 = *(_DWORD *)(v54 + 24);
    BYTE1(v40) &= ~2u;
    LOBYTE(v40) = v40 | 0x80;
    *(_DWORD *)(v54 + 24) = v40;
    sub_93B40(v78);
    goto LABEL_66;
  }
LABEL_39:
  v22 = 0;
LABEL_40:
  sub_11CDA0((__int64)v77);
  return v22;
}
