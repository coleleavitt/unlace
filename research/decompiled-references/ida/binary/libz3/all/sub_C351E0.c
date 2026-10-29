__int64 __fastcall sub_C351E0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 *v5; // r15
  __int64 **v6; // r13
  unsigned int v8; // eax
  __int16 v9; // dx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // edx
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // rax
  int v33; // edx
  unsigned __int8 v34; // dl
  __int64 v35; // rax
  int v36; // r12d
  int v37; // r14d
  _QWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r13
  unsigned __int8 v43; // dl
  __int64 v44; // rax
  unsigned int v45; // r15d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rax
  int v49; // edx
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  char **exception; // rbx
  __int64 v54; // [rsp+8h] [rbp-2B0h]
  __int64 v55; // [rsp+10h] [rbp-2A8h]
  __int64 v56; // [rsp+18h] [rbp-2A0h]
  __int64 v57; // [rsp+20h] [rbp-298h]
  __int64 v58; // [rsp+28h] [rbp-290h]
  __int64 v59; // [rsp+28h] [rbp-290h]
  __int64 v60; // [rsp+30h] [rbp-288h] BYREF
  __int64 v61; // [rsp+38h] [rbp-280h] BYREF
  __int64 v62; // [rsp+40h] [rbp-278h] BYREF
  __int64 v63; // [rsp+48h] [rbp-270h]
  __int64 v64; // [rsp+50h] [rbp-268h] BYREF
  __int64 v65; // [rsp+58h] [rbp-260h]
  __int64 v66[19]; // [rsp+60h] [rbp-258h] BYREF
  int v67; // [rsp+F8h] [rbp-1C0h]
  __int64 v68; // [rsp+100h] [rbp-1B8h]
  _QWORD v69[19]; // [rsp+108h] [rbp-1B0h] BYREF
  int v70; // [rsp+1A0h] [rbp-118h]
  __int64 (__fastcall **v71)(); // [rsp+1A8h] [rbp-110h] BYREF
  int v72; // [rsp+238h] [rbp-80h]
  __int64 v73; // [rsp+240h] [rbp-78h]
  __int64 v74; // [rsp+248h] [rbp-70h]
  __int64 v75; // [rsp+250h] [rbp-68h]
  __int64 v76; // [rsp+258h] [rbp-60h]
  __int64 v77; // [rsp+260h] [rbp-58h]
  __int64 v78; // [rsp+268h] [rbp-50h]
  __int64 v79; // [rsp+270h] [rbp-48h]
  __int64 *v80; // [rsp+278h] [rbp-40h]

  v5 = (__int64 *)a1[18];
  v6 = (__int64 **)*v5;
  if ( *(_WORD *)(a2 + 4) == 2 )
  {
    sub_C28290(v5[25], v5[26]);
    v19 = *v5;
    v5[25] = 0;
    v20 = **(_QWORD **)v19;
    sub_1584DD0(v66, v20, *(unsigned __int8 *)(v19 + 16));
    v66[0] = (__int64)&off_1C584C0;
    v66[18] = (__int64)v5;
    v67 = 0;
    v68 = 0;
    sub_1584DD0(v69, v20, 0);
    v69[18] = 0;
    v70 = 0;
    v69[0] = &off_1C61DB8;
    sub_1584DD0(&v71, v20, 0);
    v21 = *(_QWORD *)(a2 + 24);
    v74 = v20;
    v76 = v20;
    v78 = v20;
    v71 = &off_1C61DE0;
    v22 = *v6;
    v72 = 0;
    v23 = *v22;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v66[0] = (__int64)&off_1C58500;
    v80 = v5;
    v62 = 0;
    v63 = v23;
    v64 = 0;
    v65 = v23;
    sub_C31440((__int64)v66, v21, &v62, &v64);
    v55 = v64;
    v54 = v62;
    v57 = v65;
    v56 = v63;
    v24 = sub_15DBB60(**v6, a2, v62);
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v58 = v24;
    sub_C282B0(v5[23], v5[24]);
    v25 = *((_BYTE *)v6 + 16) == 0;
    v5[23] = v58;
    if ( !v25 )
    {
      v26 = sub_15DE370(**v6);
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      v59 = v26;
      sub_C28290(v5[25], v5[26]);
      v27 = *v6;
      v5[25] = v59;
      v28 = sub_15DE750(*v27);
      v29 = v28;
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      sub_C28290(v5[25], v5[26]);
      v5[25] = v29;
    }
    sub_C28290(v55, v57);
    sub_C282B0(v54, v56);
    v66[0] = (__int64)&off_1C58500;
    sub_C28740(v66);
    v30 = v5[23];
    v31 = v5[25];
LABEL_34:
    v66[0] = v30;
    if ( v30 )
    {
      ++*(_DWORD *)(v30 + 8);
      sub_C28530(a1 + 7, v66);
      if ( a2 != v30 )
      {
        v32 = a1[5];
        if ( v32 )
        {
LABEL_37:
          v33 = *(_DWORD *)(v32 - 4);
          if ( v33 )
            *(_BYTE *)(v32 + 16LL * (unsigned int)(v33 - 1) + 8) |= 2u;
        }
      }
    }
    else
    {
      sub_C28530(a1 + 7, v66);
      v32 = a1[5];
      if ( v32 )
        goto LABEL_37;
    }
    v66[0] = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    goto LABEL_41;
  }
  if ( (unsigned __int8)sub_1666670(*v6, a2) && *(_BYTE *)(*v5 + 17) )
  {
    sub_C2C300(v5, a2, v5 + 23, v5 + 25);
    v30 = v5[23];
    v31 = v5[25];
    goto LABEL_34;
  }
  v8 = *(_DWORD *)(a2 + 8);
  if ( !a3 )
  {
    v66[0] = a2;
    *(_DWORD *)(a2 + 8) = v8 + 1;
    sub_C28530(a1 + 7, v66);
    v66[0] = 0;
    sub_C28470(a1 + 11, v66);
    return 1;
  }
  v9 = *(_WORD *)(a2 + 4);
  if ( v8 <= 1 || a2 == a1[15] )
  {
    v18 = 0;
    goto LABEL_21;
  }
  if ( v9 )
  {
    if ( v9 != 2 )
    {
      if ( v9 != 1 )
      {
LABEL_24:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_57;
    }
  }
  else if ( !*(_DWORD *)(a2 + 24) )
  {
LABEL_9:
    v10 = a1[1];
    ++*(_DWORD *)(a2 + 8);
    if ( (unsigned int)sub_C30200(a1[18], *(_QWORD *)(a2 + 16), 0, 0, (int)a1 + 480, (int)a1 + 496) == 5 )
    {
      ++*(_DWORD *)(a2 + 8);
      v66[0] = a2;
      sub_C28530(a1 + 7, v66);
      v64 = 0;
      sub_C28470(a1 + 11, &v64);
    }
    else
    {
      v11 = a1[60];
      v62 = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      sub_C28530(a1 + 7, &v62);
      v12 = a1[62];
      if ( v12 )
      {
        ++*(_DWORD *)(v12 + 8);
        v61 = v12;
        sub_C28470(a1 + 11, &v61);
      }
      else
      {
        v52 = sub_15DE370(a1[1]);
        v60 = v52;
        if ( v52 )
          ++*(_DWORD *)(v52 + 8);
        sub_C28470(a1 + 11, &v60);
      }
      sub_C28290(a1[62], a1[63]);
      v13 = a1[61];
      v14 = a1[60];
      a1[62] = 0;
      sub_C282B0(v14, v13);
      a1[60] = 0;
      v15 = a1[5];
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 - 4);
        if ( v16 )
          *(_BYTE *)(v15 + 16LL * (unsigned int)(v16 - 1) + 8) |= 2u;
      }
    }
    sub_C28290(a2, v10);
    return 1;
  }
  v41 = sub_1680FB0(a1[4], a2, 0);
  v42 = v41;
  if ( v41 )
  {
    v66[0] = v41;
    ++*(_DWORD *)(v41 + 8);
    sub_C28530(a1 + 7, v66);
    if ( a2 != v42 )
    {
      v48 = a1[5];
      if ( v48 )
      {
        v49 = *(_DWORD *)(v48 - 4);
        if ( v49 )
          *(_BYTE *)(v48 + 16LL * (unsigned int)(v49 - 1) + 8) |= 2u;
      }
    }
    v50 = sub_1680FB0(a1[9], a2, 0);
    v66[0] = v50;
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
LABEL_41:
    sub_C28470(a1 + 11, v66);
    return 1;
  }
  v9 = *(_WORD *)(a2 + 4);
  v18 = 1;
LABEL_21:
  if ( v9 == 1 )
  {
LABEL_57:
    sub_C30560(a1, a2);
    return 1;
  }
  if ( v9 != 2 )
  {
    if ( v9 )
      goto LABEL_24;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_9;
    v43 = 3;
    if ( a3 != 3 )
      v43 = (a3 - 1) & 3;
    v44 = a1[7];
    v36 = v43;
    if ( v44 )
      v37 = *(_DWORD *)(v44 - 4);
    else
      v37 = 0;
    v38 = (_QWORD *)a1[5];
    if ( v38 )
    {
      v39 = *((unsigned int *)v38 - 1);
      if ( (_DWORD)v39 == *((_DWORD *)v38 - 2) )
      {
        v45 = (unsigned int)(3 * v39 + 1) >> 1;
        v46 = 16 * v45 + 8;
        if ( 16 * (int)v39 + 8 < (unsigned int)v46 && (unsigned int)v39 < v45 )
        {
LABEL_67:
          v47 = (unsigned int *)sub_186B300(v38 - 1, v46);
          v38 = v47 + 2;
          a1[5] = v47 + 2;
          *v47 = v45;
          v40 = (__int64)&v47[4 * v47[1] + 2];
          goto LABEL_49;
        }
LABEL_84:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C282D0(v66, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v66);
        sub_233E40((__int64)v66);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      goto LABEL_48;
    }
LABEL_79:
    v51 = (_QWORD *)sub_186B270(0x28u);
    v38 = v51 + 1;
    *v51 = 2;
    a1[5] = v51 + 1;
    v40 = (__int64)(v51 + 1);
    goto LABEL_49;
  }
  v34 = 3;
  if ( a3 != 3 )
    v34 = (a3 - 1) & 3;
  v35 = a1[7];
  v36 = v34;
  if ( v35 )
    v37 = *(_DWORD *)(v35 - 4);
  else
    v37 = 0;
  v38 = (_QWORD *)a1[5];
  if ( !v38 )
    goto LABEL_79;
  v39 = *((unsigned int *)v38 - 1);
  if ( (_DWORD)v39 == *((_DWORD *)v38 - 2) )
  {
    v45 = (unsigned int)(3 * v39 + 1) >> 1;
    v46 = 16 * v45 + 8;
    if ( 16 * (int)v39 + 8 < (unsigned int)v46 && (unsigned int)v39 < v45 )
      goto LABEL_67;
    goto LABEL_84;
  }
LABEL_48:
  v40 = (__int64)&v38[2 * v39];
LABEL_49:
  *(_QWORD *)v40 = a2;
  *(_DWORD *)(v40 + 12) = v37;
  *(_DWORD *)(v40 + 8) = v18 | (16 * v36);
  ++*((_DWORD *)v38 - 1);
  return 0;
}

