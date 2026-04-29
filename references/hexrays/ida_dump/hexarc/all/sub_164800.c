__int64 __fastcall sub_164800(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v19; // rdi
  signed int v20; // edx
  _DWORD *v21; // r9
  unsigned int v22; // r12d
  int *v23; // rax
  int v24; // eax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // rdi
  __int32 v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  int v38; // r9d
  int v39; // eax
  int v40; // edx
  __int32 v41; // eax
  __int32 v42; // eax
  __int32 v43; // eax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-130h]
  __int64 v47; // [rsp+8h] [rbp-128h]
  char *v48; // [rsp+18h] [rbp-118h]
  int v49; // [rsp+20h] [rbp-110h]
  __int64 v50; // [rsp+20h] [rbp-110h]
  unsigned __int8 *v51; // [rsp+28h] [rbp-108h]
  char *v52; // [rsp+30h] [rbp-100h]
  __int64 v53; // [rsp+30h] [rbp-100h]
  __int64 v54; // [rsp+30h] [rbp-100h]
  __int64 v55; // [rsp+30h] [rbp-100h]
  char *v56; // [rsp+38h] [rbp-F8h]
  __int64 v57; // [rsp+38h] [rbp-F8h]
  char v58; // [rsp+47h] [rbp-E9h]
  char *v59; // [rsp+48h] [rbp-E8h]
  __int64 v60; // [rsp+48h] [rbp-E8h]
  __int64 v61; // [rsp+48h] [rbp-E8h]
  int v62; // [rsp+48h] [rbp-E8h]
  char *v63; // [rsp+50h] [rbp-E0h]
  char *v64; // [rsp+50h] [rbp-E0h]
  __int64 v65; // [rsp+50h] [rbp-E0h]
  __int64 v66; // [rsp+50h] [rbp-E0h]
  _DWORD *v68; // [rsp+68h] [rbp-C8h] BYREF
  char *v69; // [rsp+70h] [rbp-C0h] BYREF
  __int64 v70; // [rsp+78h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+80h] [rbp-B0h] BYREF
  __int64 v72; // [rsp+88h] [rbp-A8h] BYREF
  _QWORD v73[2]; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v74[2]; // [rsp+A0h] [rbp-90h] BYREF
  char v75[32]; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v76[2]; // [rsp+D0h] [rbp-60h] BYREF
  char v77[24]; // [rsp+E0h] [rbp-50h] BYREF
  unsigned __int64 v78; // [rsp+F8h] [rbp-38h]

  v4 = a3;
  v78 = __readfsqword(0x28u);
  v6 = sub_329780(a3);
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
  v7 = sub_329780(a4);
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
  v9 = sub_11C2E0(*(_QWORD *)(v4 + 48));
  v10 = (char *)sub_11C2E0(*(_QWORD *)(a4 + 48));
  v68 = (_DWORD *)v9;
  v11 = (__int64)v10;
  v69 = v10;
  v12 = *(_DWORD *)v9;
  if ( *(_DWORD *)v11 != *(_DWORD *)v9 )
    return 0;
  if ( v12 == 13 )
  {
    if ( *(_BYTE *)(v9 + 48) != 4 || *(_BYTE *)(v11 + 48) != 4 )
      return 0;
    v13 = *(_DWORD **)(v9 + 56);
    v58 = 0;
    v69 = *(char **)(v11 + 56);
    v14 = *v13;
    v68 = v13;
  }
  else
  {
    v58 = v12 == 8 || v12 == 5;
    if ( !v58 )
    {
      v15 = (char *)v11;
      v13 = (_DWORD *)v9;
      goto LABEL_18;
    }
    if ( v12 != 8 )
      goto LABEL_15;
    if ( !(unsigned __int8)sub_161300(&v68, (__int64 *)&v69) )
      return 0;
    v13 = v68;
    if ( *v68 == 10 )
    {
      if ( !(unsigned __int8)sub_161300(&v68, (__int64 *)&v69) )
        return 0;
      v13 = v68;
    }
    v14 = *v13;
    if ( *v13 == 5 )
    {
LABEL_15:
      v58 = sub_161300(&v68, (__int64 *)&v69);
      if ( !v58 )
        return 0;
      v13 = v68;
      v14 = *v68;
    }
    else
    {
      v58 = 0;
    }
  }
  v15 = v69;
  if ( *(_DWORD *)v69 != v14 )
    return 0;
LABEL_18:
  v59 = v15;
  v63 = (char *)v13;
  v51 = (unsigned __int8 *)(v9 + 64);
  if ( !sub_11F4A0((unsigned __int8 *)(v9 + 64), v11 + 64, 0) )
    return 0;
  v16 = sub_1620E0(&v70, v63);
  if ( !v16 )
    return 0;
  if ( *v16 != 4 )
    return 0;
  v52 = v16;
  v56 = v63;
  v64 = v59;
  v17 = sub_1620E0(&v71, v59);
  v60 = (__int64)v17;
  if ( !v17 )
    return 0;
  if ( *(_DWORD *)v64 == 20 )
  {
    v26 = 8 * *((_DWORD *)v17 + 1) - 1;
    v27 = 0;
    if ( (unsigned __int64)v26 <= 0x3F )
      v27 = 1LL << v26;
    v71 &= v27 - 1;
  }
  v65 = v70;
  if ( v70 != v71 )
    return 0;
  v49 = *(_DWORD *)v56;
  if ( *(_DWORD *)v9 == 13 )
  {
    if ( v49 != 24 )
      goto LABEL_27;
    return 0;
  }
  if ( v49 != 24 && *(_DWORD *)v9 == 5 )
    return 0;
LABEL_27:
  v53 = *((_QWORD *)v52 + 1);
  if ( *(_DWORD *)v53 != 12 )
    return 0;
  v48 = (char *)(v53 + 32);
  if ( !sub_11F4A0((unsigned __int8 *)(v53 + 32), v60, 0)
    || !(unsigned __int8)sub_1196C0((char *)(v53 + 48), &v72, 0)
    || v65 != v72
    || (v72 & (v72 + 1)) != 0 )
  {
    return 0;
  }
  v18 = a1[30].m128i_i64[0];
  v73[0] = 0xFFFFFFFF00000000LL;
  v19 = *(_QWORD *)(v18 + 112);
  v20 = *(_DWORD *)(v53 + 36);
  v73[1] = 0;
  v57 = v19;
  v21 = sub_161450(v19, a2, v20, (unsigned __int64)v73);
  if ( !v21 )
    goto LABEL_39;
  v22 = sub_1283C0(v19, a1, a1[3].m128i_i64[1], v60, a1[3].m128i_i64[1], (__int64)v21, 0);
  if ( !(_BYTE)v22 )
    goto LABEL_39;
  v47 = v72;
  v66 = a1[3].m128i_i64[1];
  v46 = sub_1617B0(a1[4].m128i_i64[0], *(_DWORD *)(v66 + 72));
  if ( v49 == 24 )
  {
    *(_DWORD *)v66 = 16;
    sub_11EAC0(v66 + 64, v51);
LABEL_67:
    sub_116350((char *)(v66 + 32), v48);
    v37 = v47 + 1;
    if ( v58 )
      v37 = -v37;
    sub_11A350(v66 + 48, v57, v37, *(_DWORD *)(v66 + 36), -1, 0);
    v38 = *(_DWORD *)(v66 + 68);
    if ( *(_DWORD *)v9 == 8 && *(_BYTE *)(v9 + 32) == 4 )
    {
      v45 = *(_QWORD *)(v9 + 40);
      if ( *(_DWORD *)v45 == 10 )
      {
        if ( *(_DWORD *)(v9 + 68) == v38 )
        {
          if ( *(_BYTE *)(v45 + 32) == 4 )
          {
            v62 = *(_DWORD *)(v66 + 68);
            if ( (unsigned __int8)sub_125030(v66, v57, 10, *(_DWORD *)(v9 + 36), 1) )
            {
              if ( !(unsigned __int8)sub_125030(v66, v57, 8, v62, 1) )
              {
                if ( !under_debugger )
                  sub_37B760(51961);
                goto LABEL_104;
              }
LABEL_74:
              sub_116EE0(v9);
              v41 = a1[1].m128i_i32[2];
              BYTE1(v41) &= ~2u;
              LOBYTE(v41) = v41 | 0x80;
              a1[1].m128i_i32[2] = v41;
              sub_116EE0(v11);
              v42 = a1[1].m128i_i32[2];
              BYTE1(v42) &= ~2u;
              LOBYTE(v42) = v42 | 0x80;
              if ( v4 == v46 )
                v4 = a4;
              a1[1].m128i_i32[2] = v42;
              sub_10BE90((__int64)a1, v4, v46);
              v43 = a1[1].m128i_i32[2];
              BYTE1(v43) &= ~2u;
              LOBYTE(v43) = v43 | 0x80;
              a1[1].m128i_i32[2] = v43;
              v44 = *(_DWORD *)(v46 + 24);
              BYTE1(v44) &= ~2u;
              LOBYTE(v44) = v44 | 0x80;
              *(_DWORD *)(v46 + 24) = v44;
              sub_9BE60((__int64)a1, (__int64)"SDIVMOD_POWER2");
              goto LABEL_40;
            }
            if ( !under_debugger )
              sub_37B760(51960);
          }
          else if ( !under_debugger )
          {
            sub_37B760(51959);
          }
        }
        else if ( !under_debugger )
        {
          sub_37B760(51958);
        }
LABEL_104:
        BUG();
      }
    }
    v39 = *(_DWORD *)(v66 + 36);
    if ( v39 != v38 )
    {
      v40 = 10;
      *(_DWORD *)(v66 + 68) = v39;
      if ( v39 < v38 )
        v40 = 8;
      sub_125030(v66, v57, v40, v38, 1);
    }
    goto LABEL_74;
  }
  if ( *(_DWORD *)v9 == 13 )
  {
    if ( !sub_11F4A0((unsigned __int8 *)(v9 + 32), v60, 0) || !sub_11F4A0((unsigned __int8 *)(v11 + 32), v60, 0) )
      goto LABEL_39;
    sub_11EAC0(v66 + 64, v51);
LABEL_66:
    *(_DWORD *)v66 = 18;
    goto LABEL_67;
  }
  v50 = sub_1617B0(a1[4].m128i_i64[0], **(_DWORD **)(v4 + 368));
  v23 = (int *)sub_11C2E0(*(_QWORD *)(v50 + 48));
  v61 = (__int64)v23;
  if ( v23 )
  {
    v24 = *v23;
    if ( v24 == 8 )
    {
      if ( (int)log2ceil(v72) >= (unsigned __int64)(8 * *(_DWORD *)(v61 + 36)) )
        goto LABEL_39;
      if ( *(_BYTE *)(v61 + 32) != 4 )
        goto LABEL_39;
      v28 = *(_QWORD *)(v61 + 40);
      if ( *(_DWORD *)v28 != 13 )
        goto LABEL_39;
      if ( *(_DWORD *)(v53 + 36) <= *(_DWORD *)(v28 + 36) )
      {
LABEL_60:
        v54 = v28;
        if ( !sub_11F4A0((unsigned __int8 *)(v28 + 48), (__int64)v51, 0) )
          goto LABEL_39;
        v29 = sub_1283C0(v19, a1, a1[3].m128i_i64[1], v54 + 32, a1[3].m128i_i64[1], (__int64)v48, 0);
        goto LABEL_62;
      }
    }
    else
    {
      if ( *(_DWORD *)(v61 + 36) >= *(_DWORD *)(v53 + 36) )
      {
        if ( v24 != 13 )
          goto LABEL_39;
        v28 = v61;
        goto LABEL_60;
      }
      v28 = v61;
    }
    v55 = v28;
    if ( !(unsigned __int8)sub_120D60(v28 + 48, v19, v51) )
      goto LABEL_39;
    v29 = sub_12BB00(a1, a1[3].m128i_i64[1], v55 + 32, a1[3].m128i_i64[1], (__int64)v48);
LABEL_62:
    if ( !v29 )
      goto LABEL_39;
    sub_121360((__int64)v74, v4, v9, 1u);
    sub_121360((__int64)v76, v50, v61, 0);
    sub_5E0C0(v74, v76, v30, v31, v32, v33);
    sub_3108E0(v75, v77);
    sub_8D480(v76);
    v34 = *(_QWORD *)(a1[4].m128i_i64[0] + 784);
    if ( !v34
      || (unsigned __int8)sub_175E20(v34, (unsigned int)v74, *(_DWORD *)(v50 + 72), -1, *(_QWORD *)(v61 + 8), 0, 2, 1) )
    {
      sub_8D480(v74);
      goto LABEL_39;
    }
    sub_116350((char *)(v66 + 64), (char *)(v61 + 64));
    sub_116EE0(v61);
    v35 = a1[1].m128i_i32[2];
    BYTE1(v35) &= ~2u;
    LOBYTE(v35) = v35 | 0x80;
    a1[1].m128i_i32[2] = v35;
    v36 = *(_DWORD *)(v50 + 24);
    BYTE1(v36) &= ~2u;
    LOBYTE(v36) = v36 | 0x80;
    *(_DWORD *)(v50 + 24) = v36;
    sub_8D480(v74);
    goto LABEL_66;
  }
LABEL_39:
  v22 = 0;
LABEL_40:
  sub_1166E0((__int64)v73);
  return v22;
}
