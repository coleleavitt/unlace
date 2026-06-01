__int64 __fastcall sub_E75EC0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // edx
  __int64 v16; // rsi
  int v17; // r15d
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r14d
  unsigned __int64 v34; // r15
  __int64 *v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // rax
  int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // [rsp+0h] [rbp-68h]
  __int64 v63; // [rsp+8h] [rbp-60h]
  __int64 v64; // [rsp+8h] [rbp-60h]
  __int64 v65; // [rsp+10h] [rbp-58h]
  int v66[2]; // [rsp+18h] [rbp-50h]
  __int64 v67; // [rsp+20h] [rbp-48h] BYREF
  __int64 v68; // [rsp+28h] [rbp-40h] BYREF
  int v69; // [rsp+30h] [rbp-38h]
  int v70; // [rsp+38h] [rbp-30h]
  int v71; // [rsp+40h] [rbp-28h]
  void *v72; // [rsp+48h] [rbp-20h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v39 = 515;
LABEL_31:
    sub_1872CE0("");
    sub_1873130(107, v39);
  }
  if ( v3 == 3 )
  {
    v39 = 520;
    goto LABEL_31;
  }
  if ( v3 )
  {
    v44 = *(_QWORD *)(a1 + 88);
    v45 = *(_QWORD *)(a1 + 8);
    v46 = 0x7FFFFFFF8LL;
    if ( v44 )
      v46 = 8LL * (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
    v47 = *(_QWORD *)(v44 + v46);
    v64 = v47;
    if ( v47 )
      ++*(_DWORD *)(v47 + 8);
    sub_3A8160((__int64 *)(a1 + 80));
    v48 = 0x7FFFFFFF8LL;
    v49 = *(_QWORD *)(a1 + 88);
    if ( v49 )
      v48 = 8LL * (unsigned int)(*(_DWORD *)(v49 - 4) - 1);
    v50 = *(_QWORD *)(v49 + v48);
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    sub_3A8160((__int64 *)(a1 + 80));
    v51 = sub_15E2470(*(_QWORD *)(a1 + 8), v50, v64);
    v52 = *(_QWORD *)(a1 + 504);
    v53 = *(_QWORD *)(a1 + 496);
    v54 = v51;
    if ( v51 )
    {
      ++*(_DWORD *)(v51 + 8);
      sub_E65BA0(v53, v52);
      *(_QWORD *)(a1 + 496) = v54;
      ++*(_DWORD *)(v54 + 8);
      v68 = v54;
    }
    else
    {
      sub_E65BA0(v53, v52);
      *(_QWORD *)(a1 + 496) = 0;
      v68 = 0;
    }
    sub_E66670((_QWORD *)(a1 + 88), &v68);
    sub_E65BA0(v50, v45);
    sub_E65BA0(v64, v45);
    v55 = *(_QWORD *)(a1 + 56);
    v56 = 0x7FFFFFFF8LL;
    if ( v55 )
      v56 = 8LL * (unsigned int)(*(_DWORD *)(v55 - 4) - 1);
    v57 = *(_QWORD *)(v55 + v56);
    if ( v57 )
      ++*(_DWORD *)(v57 + 8);
    sub_E65BC0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    *(_QWORD *)(a1 + 480) = v57;
    sub_39BF70((__int64 *)(a1 + 48));
    sub_39BF70((__int64 *)(a1 + 48));
    v58 = *(_QWORD *)(a1 + 480);
    v68 = v58;
    if ( v58 )
      ++*(_DWORD *)(v58 + 8);
    sub_E67160((unsigned int **)(a1 + 56), &v68);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    result = *(_QWORD *)(a1 + 40);
    v59 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v59 - 1;
    if ( v59 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v59 - 2) + 8) |= 2u;
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
      result = sub_E75390(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
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
    HIDWORD(v65) = v15 - v16;
    v17 = v13 + 8 * v16;
    v63 = *(_QWORD *)(a1 + 8);
    sub_1584610(a1, v16);
    v20 = *(_QWORD *)(a1 + 88);
    if ( v20 )
      v21 = *(_DWORD *)(v20 - 4);
    else
      v21 = 0;
    v22 = v21 - *(_DWORD *)(a3 + 12);
    if ( v22 )
    {
      v60 = sub_15DC610(
              *(_QWORD *)(a1 + 8),
              v14,
              SHIDWORD(v65),
              v17,
              v18,
              v19,
              v62,
              v63,
              v65,
              v22,
              v67,
              v68,
              v69,
              v70,
              v71,
              v72);
      v25 = v60;
      if ( v60 )
        ++*(_DWORD *)(v60 + 8);
      v61 = sub_15E2980(*(_QWORD *)(a1 + 8));
      if ( v61 )
        ++*(_DWORD *)(v61 + 8);
      *(_QWORD *)v66 = v61;
      sub_E65BA0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
      v26 = *(_QWORD *)v66;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_E65BA0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
      v25 = a2;
      v26 = 0;
    }
    *(_QWORD *)(a1 + 496) = v26;
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v27 = sub_15DC610(
              *(_QWORD *)(a1 + 8),
              v14,
              SHIDWORD(v65),
              v17,
              v23,
              v24,
              v62,
              v63,
              v65,
              v66[0],
              v67,
              v68,
              v69,
              v70,
              v71,
              v72);
      v28 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      sub_E65BC0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v28;
      v29 = sub_15DE370(*(_QWORD *)(a1 + 8));
      v30 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      sub_E65BA0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
      *(_QWORD *)(a1 + 496) = v30;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_E65BC0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = a2;
    }
    sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
    v31 = *(_QWORD *)(a1 + 480);
    v67 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    sub_E67160((unsigned int **)(a1 + 56), &v67);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    v32 = *(_QWORD *)(a1 + 88);
    if ( v32 )
    {
      v33 = *(_DWORD *)(a3 + 12);
      v34 = v32 + 8LL * *(unsigned int *)(v32 - 4);
      v35 = (__int64 *)(v32 + 8LL * v33);
      if ( (unsigned __int64)v35 >= v34 )
        goto LABEL_33;
      do
      {
        v36 = *v35;
        if ( *v35 )
        {
          v37 = *(_QWORD *)(a1 + 80);
          if ( (*(_DWORD *)(v36 + 8))-- == 1 )
            sub_15D7BC0(v37, v36);
        }
        ++v35;
      }
      while ( (unsigned __int64)v35 < v34 );
      v32 = *(_QWORD *)(a1 + 88);
      if ( v32 )
LABEL_33:
        *(_DWORD *)(v32 - 4) = v33;
    }
    v40 = *(_QWORD *)(a1 + 496);
    v68 = v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    sub_E66670((_QWORD *)(a1 + 88), &v68);
    sub_E65BA0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
    v41 = *(_QWORD *)(a1 + 40);
    v42 = *(_QWORD *)(a1 + 480);
    *(_QWORD *)(a1 + 496) = 0;
    v43 = *(_DWORD *)(v41 - 4);
    *(_DWORD *)(v41 - 4) = v43 - 1;
    if ( a2 != v42 && v43 != 1 )
    {
      *(_BYTE *)(v41 + 16LL * (unsigned int)(v43 - 2) + 8) |= 2u;
      v42 = *(_QWORD *)(a1 + 480);
    }
    sub_E65BC0(v42, *(_QWORD *)(a1 + 488));
    *(_QWORD *)(a1 + 480) = 0;
    return sub_E65BA0(v25, v63);
  }
  return result;
}

