__int64 __fastcall sub_3DF990(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r13
  int v15; // edx
  __int64 v16; // rsi
  _QWORD *v17; // r15
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // r13
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rax
  int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // rax
  int v65; // [rsp+0h] [rbp-78h]
  __int64 v66; // [rsp+8h] [rbp-70h]
  __int64 v67; // [rsp+8h] [rbp-70h]
  __int64 v68; // [rsp+10h] [rbp-68h]
  int v69[2]; // [rsp+18h] [rbp-60h]
  __int64 v70; // [rsp+20h] [rbp-58h] BYREF
  __int64 v71; // [rsp+28h] [rbp-50h] BYREF
  __int64 v72; // [rsp+30h] [rbp-48h] BYREF
  __int64 v73; // [rsp+38h] [rbp-40h] BYREF
  int v74; // [rsp+40h] [rbp-38h]
  void *v75; // [rsp+48h] [rbp-30h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v37 = 515;
LABEL_27:
    sub_1872CE0("");
    sub_1873130(107, v37);
  }
  if ( v3 == 3 )
  {
    v37 = 520;
    goto LABEL_27;
  }
  if ( v3 )
  {
    v38 = *(_QWORD *)(a1 + 88);
    v67 = *(_QWORD *)(a1 + 8);
    v39 = 0x7FFFFFFF8LL;
    if ( v38 )
      v39 = 8LL * (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
    v40 = *(_QWORD *)(v38 + v39);
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    sub_3A8160((__int64 *)(a1 + 80));
    v41 = 0x7FFFFFFF8LL;
    v42 = *(_QWORD *)(a1 + 88);
    if ( v42 )
      v41 = 8LL * (unsigned int)(*(_DWORD *)(v42 - 4) - 1);
    v43 = *(_QWORD *)(v42 + v41);
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    sub_3A8160((__int64 *)(a1 + 80));
    v44 = sub_15E2470(*(_QWORD *)(a1 + 8), v43, v40);
    v45 = *(_QWORD *)(a1 + 496);
    v46 = *(_QWORD *)(a1 + 504);
    v47 = v44;
    if ( v44 )
    {
      ++*(_DWORD *)(v44 + 8);
      sub_3D2CB0(v45, v46);
      *(_QWORD *)(a1 + 496) = v47;
      ++*(_DWORD *)(v47 + 8);
      v73 = v47;
    }
    else
    {
      sub_3D2CB0(v45, v46);
      *(_QWORD *)(a1 + 496) = 0;
      v73 = 0;
    }
    sub_3D5D00((_QWORD *)(a1 + 88), &v73);
    sub_3D2CB0(v43, v67);
    sub_3D2CB0(v40, v67);
    v48 = *(_QWORD *)(a1 + 56);
    v49 = 0x7FFFFFFF8LL;
    if ( v48 )
      v49 = 8LL * (unsigned int)(*(_DWORD *)(v48 - 4) - 1);
    v50 = *(_QWORD *)(v48 + v49);
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    sub_3D2CD0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    *(_QWORD *)(a1 + 480) = v50;
    sub_39BF70((__int64 *)(a1 + 48));
    sub_39BF70((__int64 *)(a1 + 48));
    v51 = *(_QWORD *)(a1 + 480);
    v73 = v51;
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    sub_3D5DC0((_QWORD *)(a1 + 56), &v73);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    result = *(_QWORD *)(a1 + 40);
    v52 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v52 - 1;
    if ( v52 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v52 - 2) + 8) |= 2u;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 24);
    while ( 1 )
    {
      v11 = *(_DWORD *)(a3 + 8);
      v12 = v11 >> 6;
      if ( v11 >> 6 >= v7 )
        break;
      v8 = *(_QWORD *)(a2 + 8LL * v12 + 32);
      v9 = ((v12 + 1) << 6) | v11 & 0x3F;
      *(_DWORD *)(a3 + 8) = v9;
      result = sub_3DF660(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
      if ( !(_BYTE)result )
        return result;
    }
    v13 = *(_QWORD *)(a1 + 56);
    v14 = *(_QWORD *)(a2 + 16);
    if ( v13 )
      v15 = *(_DWORD *)(v13 - 4);
    else
      v15 = 0;
    v16 = *(unsigned int *)(a3 + 12);
    HIDWORD(v68) = v15 - v16;
    v17 = (_QWORD *)(v13 + 8LL * (unsigned int)v16);
    v66 = *(_QWORD *)(a1 + 8);
    sub_1584610(a1, v16);
    v20 = *(_QWORD *)(a1 + 88);
    if ( v20 )
      v21 = *(_DWORD *)(v20 - 4);
    else
      v21 = 0;
    v22 = v21 - *(_DWORD *)(a3 + 12);
    if ( v22 )
    {
      v58 = sub_15DC610(
              *(_QWORD *)(a1 + 8),
              v14,
              SHIDWORD(v68),
              (int)v17,
              v18,
              v19,
              v65,
              v66,
              v68,
              v22,
              v70,
              v71,
              v72,
              v73,
              v74,
              v75);
      v23 = v58;
      if ( v58 )
        ++*(_DWORD *)(v58 + 8);
      v59 = sub_15E2980(*(_QWORD *)(a1 + 8));
      if ( v59 )
        ++*(_DWORD *)(v59 + 8);
      *(_QWORD *)v69 = v59;
      sub_3D2CB0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
      v24 = *(_QWORD *)v69;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_3D2CB0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
      v23 = a2;
      v24 = 0;
    }
    *(_QWORD *)(a1 + 496) = v24;
    if ( (unsigned int)sub_3D4780(*(__int64 **)(a1 + 144), v14, v17, (__int64 *)(a1 + 480)) == 5 )
    {
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v60 = sub_15DC610(
                *(_QWORD *)(a1 + 8),
                v14,
                SHIDWORD(v68),
                (int)v17,
                v25,
                v26,
                v65,
                v66,
                v68,
                v69[0],
                v70,
                v71,
                v72,
                v73,
                v74,
                v75);
        v61 = v60;
        if ( v60 )
          ++*(_DWORD *)(v60 + 8);
        sub_3D2CD0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = v61;
        v62 = sub_15DE370(*(_QWORD *)(a1 + 8));
        v63 = v62;
        if ( v62 )
          ++*(_DWORD *)(v62 + 8);
        sub_3D2CB0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
        *(_QWORD *)(a1 + 496) = v63;
      }
      else
      {
        ++*(_DWORD *)(a2 + 8);
        sub_3D2CD0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = a2;
      }
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v53 = *(_QWORD *)(a1 + 480);
      v72 = v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      sub_3D5DC0((_QWORD *)(a1 + 56), &v72);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
      sub_3A9A20((__int64 *)(a1 + 80), *(_DWORD *)(a3 + 12));
      v54 = *(_QWORD *)(a1 + 496);
      v73 = v54;
      if ( v54 )
        ++*(_DWORD *)(v54 + 8);
      sub_3D5D00((_QWORD *)(a1 + 88), &v73);
      sub_3D2CB0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
      v55 = *(_QWORD *)(a1 + 40);
      v56 = *(_QWORD *)(a1 + 480);
      *(_QWORD *)(a1 + 496) = 0;
      v57 = *(_DWORD *)(v55 - 4);
      *(_DWORD *)(v55 - 4) = v57 - 1;
      if ( a2 != v56 && v57 != 1 )
      {
        *(_BYTE *)(v55 + 16LL * (unsigned int)(v57 - 2) + 8) |= 2u;
        v56 = *(_QWORD *)(a1 + 480);
      }
      sub_3D2CD0(v56, *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = 0;
    }
    else
    {
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v27 = *(_QWORD *)(a1 + 480);
      v70 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      sub_3D5DC0((_QWORD *)(a1 + 56), &v70);
      sub_3A9A20((__int64 *)(a1 + 80), *(_DWORD *)(a3 + 12));
      v28 = *(_QWORD *)(a1 + 512);
      if ( !v28 )
      {
        v64 = sub_15DE370(*(_QWORD *)(a1 + 8));
        v28 = v64;
        if ( v64 )
          ++*(_DWORD *)(v64 + 8);
        sub_3D2CB0(*(_QWORD *)(a1 + 512), *(_QWORD *)(a1 + 520));
        *(_QWORD *)(a1 + 512) = v28;
      }
      v29 = sub_15E2470(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 496), v28);
      v30 = *(_QWORD *)(a1 + 504);
      v31 = *(_QWORD *)(a1 + 496);
      v32 = v29;
      if ( v29 )
      {
        ++*(_DWORD *)(v29 + 8);
        sub_3D2CB0(v31, v30);
        *(_QWORD *)(a1 + 496) = v32;
        ++*(_DWORD *)(v32 + 8);
        v71 = v32;
      }
      else
      {
        sub_3D2CB0(v31, v30);
        *(_QWORD *)(a1 + 496) = 0;
        v71 = 0;
      }
      sub_3D5D00((_QWORD *)(a1 + 88), &v71);
      sub_3D2CB0(*(_QWORD *)(a1 + 512), *(_QWORD *)(a1 + 520));
      *(_QWORD *)(a1 + 512) = 0;
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
      v33 = *(_QWORD *)(a1 + 40);
      v34 = *(_DWORD *)(v33 - 4);
      *(_DWORD *)(v33 - 4) = v34 - 1;
      if ( v34 != 1 )
        *(_BYTE *)(v33 + 16LL * (unsigned int)(v34 - 2) + 8) |= 2u;
      sub_3D2CD0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      v35 = *(_QWORD *)(a1 + 504);
      v36 = *(_QWORD *)(a1 + 496);
      *(_QWORD *)(a1 + 480) = 0;
      sub_3D2CB0(v36, v35);
      *(_QWORD *)(a1 + 496) = 0;
    }
    return sub_3D2CB0(v23, v66);
  }
  return result;
}

