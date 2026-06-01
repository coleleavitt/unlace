__int64 __fastcall sub_C5C300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char v6; // al
  unsigned int v10; // r12d
  __int64 v11; // rsi
  int v12; // eax
  __int64 result; // rax
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rsi
  __int64 *v19; // r15
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 *v26; // r13
  int v27; // r8d
  int v28; // r9d
  int v29; // r13d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rsi
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdi
  int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // r13
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r13
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // r13
  _DWORD *v83; // rax
  int v84; // [rsp+0h] [rbp-98h]
  __int64 v85; // [rsp+0h] [rbp-98h]
  int v86; // [rsp+0h] [rbp-98h]
  __int64 v87; // [rsp+0h] [rbp-98h]
  __int64 *v88; // [rsp+0h] [rbp-98h]
  int v89[2]; // [rsp+0h] [rbp-98h]
  int v90; // [rsp+8h] [rbp-90h]
  unsigned int v91; // [rsp+8h] [rbp-90h]
  int v92; // [rsp+8h] [rbp-90h]
  _QWORD *v93; // [rsp+8h] [rbp-90h]
  int v94; // [rsp+10h] [rbp-88h]
  __int64 v95; // [rsp+10h] [rbp-88h]
  __int64 v96; // [rsp+18h] [rbp-80h]
  int v97[2]; // [rsp+18h] [rbp-80h]
  int v98[2]; // [rsp+18h] [rbp-80h]
  _QWORD *v99; // [rsp+18h] [rbp-80h]
  __int64 v100; // [rsp+20h] [rbp-78h]
  __int64 v101; // [rsp+20h] [rbp-78h]
  char v102; // [rsp+28h] [rbp-70h]
  __int64 v103; // [rsp+28h] [rbp-70h]
  __int64 v104; // [rsp+30h] [rbp-68h] BYREF
  __int64 v105; // [rsp+38h] [rbp-60h] BYREF
  __int64 v106; // [rsp+40h] [rbp-58h] BYREF
  void *v107; // [rsp+48h] [rbp-50h] BYREF
  __int64 v108; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v109[8]; // [rsp+58h] [rbp-40h] BYREF

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v6 )
  {
    case 2:
      v43 = 515;
LABEL_28:
      sub_1872CE0("");
      sub_1873130(107, v43);
    case 3:
      v43 = 520;
      goto LABEL_28;
    case 0:
      v10 = *(_DWORD *)(a2 + 24);
      while ( 1 )
      {
        v14 = *(_DWORD *)(a3 + 8);
        v15 = v14 >> 6;
        if ( v14 >> 6 >= v10 )
          break;
        v11 = *(_QWORD *)(a2 + 8LL * v15 + 32);
        v12 = ((v15 + 1) << 6) | v14 & 0x3F;
        *(_DWORD *)(a3 + 8) = v12;
        result = sub_C5EC00(a1, v11, ((unsigned __int8)v12 >> 4) & 3, v15, a5, a6, v84, v90, v94, v96, v100);
        if ( !(_BYTE)result )
          return result;
      }
      v85 = *(_QWORD *)(a2 + 16);
      v16 = *(_QWORD *)(a1 + 56);
      if ( v16 )
        v17 = *(_DWORD *)(v16 - 4);
      else
        v17 = 0;
      v18 = *(unsigned int *)(a3 + 12);
      v91 = v17 - v18;
      v19 = (__int64 *)(v16 + 8LL * (unsigned int)v18);
      v95 = *(_QWORD *)(a1 + 8);
      sub_1584610(a1, v18);
      v22 = *(_QWORD *)(a1 + 88);
      if ( v22 )
        v23 = *(_DWORD *)(v22 - 4);
      else
        v23 = 0;
      if ( v23 == *(_DWORD *)(a3 + 12) )
      {
        ++*(_DWORD *)(a2 + 8);
        sub_C4E200(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
        v24 = a2;
        v25 = 0;
      }
      else
      {
        v64 = sub_15DC610(
                *(_QWORD *)(a1 + 8),
                v85,
                v91,
                (int)v19,
                v20,
                v21,
                v85,
                v91,
                v95,
                v96,
                v100,
                v102,
                v104,
                v105,
                v106,
                v107);
        v24 = v64;
        if ( v64 )
          ++*(_DWORD *)(v64 + 8);
        v65 = sub_15E2980(*(_QWORD *)(a1 + 8));
        v25 = v65;
        if ( v65 )
          ++*(_DWORD *)(v65 + 8);
        sub_C4E200(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
      }
      *(_QWORD *)(a1 + 496) = v25;
      v26 = *(__int64 **)(a1 + 144);
      sub_C4E200(*(_QWORD *)(a1 + 512), *(_QWORD *)(a1 + 520));
      *(_QWORD *)(a1 + 512) = 0;
      v29 = sub_C58570(v26, v85, v91, v19, (struct _Unwind_Exception *)(a1 + 480));
      if ( v29 == 5 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
        {
          v66 = sub_15DC610(
                  *(_QWORD *)(a1 + 8),
                  v85,
                  v91,
                  (int)v19,
                  v27,
                  v28,
                  v85,
                  v91,
                  v95,
                  (int)a1 + 480,
                  v100,
                  v102,
                  v104,
                  v105,
                  v106,
                  v107);
          v67 = v66;
          if ( v66 )
            ++*(_DWORD *)(v66 + 8);
          sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
          *(_QWORD *)(a1 + 480) = v67;
          v68 = sub_15DE370(*(_QWORD *)(a1 + 8));
          v69 = v68;
          if ( v68 )
            ++*(_DWORD *)(v68 + 8);
          sub_C4E200(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
          *(_QWORD *)(a1 + 496) = v69;
        }
        else
        {
          ++*(_DWORD *)(a2 + 8);
          sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
          *(_QWORD *)(a1 + 480) = a2;
        }
        sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
        v59 = *(_QWORD *)(a1 + 480);
        v108 = v59;
        if ( v59 )
          ++*(_DWORD *)(v59 + 8);
        sub_C516F0((_QWORD *)(a1 + 56), &v108);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
        sub_3A9A20((__int64 *)(a1 + 80), *(_DWORD *)(a3 + 12));
        v60 = *(_QWORD *)(a1 + 496);
        v109[0] = v60;
        if ( v60 )
          ++*(_DWORD *)(v60 + 8);
        sub_C50B00((_QWORD *)(a1 + 88), v109);
        sub_C4E200(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
        v61 = *(_QWORD *)(a1 + 40);
        v62 = *(_QWORD *)(a1 + 480);
        *(_QWORD *)(a1 + 496) = 0;
        v63 = *(_DWORD *)(v61 - 4);
        *(_DWORD *)(v61 - 4) = v63 - 1;
        if ( a2 != v62 && v63 != 1 )
        {
          *(_BYTE *)(v61 + 16LL * (unsigned int)(v63 - 2) + 8) |= 2u;
          v62 = *(_QWORD *)(a1 + 480);
        }
        sub_C4E2C0(v62, *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = 0;
        return sub_C4E200(v24, v95);
      }
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v30 = *(_QWORD *)(a1 + 480);
      v104 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      v92 = a1 + 56;
      sub_C516F0((_QWORD *)(a1 + 56), &v104);
      v86 = a1 + 80;
      sub_3A9A20((__int64 *)(a1 + 80), *(_DWORD *)(a3 + 12));
      v31 = *(_QWORD *)(a1 + 512);
      if ( !v31 )
      {
        v70 = sub_15DE370(*(_QWORD *)(a1 + 8));
        if ( v70 )
          ++*(_DWORD *)(v70 + 8);
        *(_QWORD *)v98 = v70;
        sub_C4E200(*(_QWORD *)(a1 + 512), *(_QWORD *)(a1 + 520));
        v31 = *(_QWORD *)v98;
        *(_QWORD *)(a1 + 512) = *(_QWORD *)v98;
      }
      v32 = sub_15E2470(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 496), v31);
      v33 = *(_QWORD *)(a1 + 504);
      v34 = *(_QWORD *)(a1 + 496);
      if ( v32 )
      {
        ++*(_DWORD *)(v32 + 8);
        *(_QWORD *)v97 = v32;
        sub_C4E200(v34, v33);
        *(_QWORD *)(a1 + 496) = *(_QWORD *)v97;
        ++*(_DWORD *)(*(_QWORD *)v97 + 8LL);
        v105 = *(_QWORD *)v97;
      }
      else
      {
        sub_C4E200(v34, v33);
        *(_QWORD *)(a1 + 496) = 0;
        v105 = 0;
      }
      sub_C50B00((_QWORD *)(a1 + 88), &v105);
      sub_C4E200(*(_QWORD *)(a1 + 512), *(_QWORD *)(a1 + 520));
      *(_QWORD *)(a1 + 512) = 0;
      v38 = *(_QWORD *)(a1 + 480);
      if ( v29 == 4 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
          goto LABEL_22;
      }
      else
      {
        *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
        if ( !(unsigned __int8)sub_C5EC00(a1, v38, 2, v35, v36, v37, v86, v92, v95, a1 + 88, v100) )
        {
LABEL_24:
          sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
          v41 = *(_QWORD *)(a1 + 504);
          v42 = *(_QWORD *)(a1 + 496);
          *(_QWORD *)(a1 + 480) = 0;
          sub_C4E200(v42, v41);
          *(_QWORD *)(a1 + 496) = 0;
          return sub_C4E200(v24, v95);
        }
        v71 = *(_QWORD *)(a1 + 88);
        v101 = *(_QWORD *)(a1 + 8);
        v72 = 0x7FFFFFFF8LL;
        if ( v71 )
          v72 = 8LL * (unsigned int)(*(_DWORD *)(v71 - 4) - 1);
        v73 = *(_QWORD *)(v71 + v72);
        v103 = v73;
        if ( v73 )
          ++*(_DWORD *)(v73 + 8);
        sub_3A8160(v88);
        v74 = 0x7FFFFFFF8LL;
        v75 = *(_QWORD *)(a1 + 88);
        if ( v75 )
          v74 = 8LL * (unsigned int)(*(_DWORD *)(v75 - 4) - 1);
        v76 = *(_QWORD *)(v75 + v74);
        if ( v76 )
          ++*(_DWORD *)(v76 + 8);
        sub_3A8160(v88);
        v77 = sub_15E2470(*(_QWORD *)(a1 + 8), v76, v103);
        v78 = *(_QWORD *)(a1 + 504);
        v79 = *(_QWORD *)(a1 + 496);
        if ( v77 )
        {
          ++*(_DWORD *)(v77 + 8);
          *(_QWORD *)v89 = v77;
          sub_C4E200(v79, v78);
          *(_QWORD *)(a1 + 496) = *(_QWORD *)v89;
          ++*(_DWORD *)(*(_QWORD *)v89 + 8LL);
          v106 = *(_QWORD *)v89;
        }
        else
        {
          sub_C4E200(v79, v78);
          *(_QWORD *)(a1 + 496) = 0;
          v106 = 0;
        }
        sub_C50B00(v99, &v106);
        sub_C4E200(v76, v101);
        sub_C4E200(v103, v101);
        v80 = *(_QWORD *)(a1 + 56);
        v81 = 0x7FFFFFFF8LL;
        if ( v80 )
          v81 = 8LL * (unsigned int)(*(_DWORD *)(v80 - 4) - 1);
        v82 = *(_QWORD *)(v80 + v81);
        if ( v82 )
          ++*(_DWORD *)(v82 + 8);
        sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = v82;
        sub_39BF70((__int64 *)(a1 + 48));
        sub_39BF70((__int64 *)(a1 + 48));
        v83 = *(_DWORD **)(a1 + 480);
        v107 = v83;
        if ( v83 )
          ++v83[2];
        sub_C516F0(v93, &v107);
        if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
        {
LABEL_22:
          v39 = *(_QWORD *)(a1 + 40);
          v40 = *(_DWORD *)(v39 - 4);
          *(_DWORD *)(v39 - 4) = v40 - 1;
          if ( v40 != 1 )
            *(_BYTE *)(v39 + 16LL * (unsigned int)(v40 - 2) + 8) |= 2u;
          goto LABEL_24;
        }
      }
      sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
      goto LABEL_22;
  }
  v44 = *(_QWORD *)(a1 + 88);
  v87 = *(_QWORD *)(a1 + 8);
  v45 = 0x7FFFFFFF8LL;
  if ( v44 )
    v45 = 8LL * (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
  v46 = *(_QWORD *)(v44 + v45);
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  sub_3A8160((__int64 *)(a1 + 80));
  v47 = 0x7FFFFFFF8LL;
  v48 = *(_QWORD *)(a1 + 88);
  if ( v48 )
    v47 = 8LL * (unsigned int)(*(_DWORD *)(v48 - 4) - 1);
  v49 = *(_QWORD *)(v48 + v47);
  if ( v49 )
    ++*(_DWORD *)(v49 + 8);
  sub_3A8160((__int64 *)(a1 + 80));
  v50 = sub_15E2470(*(_QWORD *)(a1 + 8), v49, v46);
  v51 = *(_QWORD *)(a1 + 496);
  v52 = *(_QWORD *)(a1 + 504);
  v53 = v50;
  if ( v50 )
  {
    ++*(_DWORD *)(v50 + 8);
    sub_C4E200(v51, v52);
    *(_QWORD *)(a1 + 496) = v53;
    ++*(_DWORD *)(v53 + 8);
    v109[0] = v53;
  }
  else
  {
    sub_C4E200(v51, v52);
    *(_QWORD *)(a1 + 496) = 0;
    v109[0] = 0;
  }
  sub_C50B00((_QWORD *)(a1 + 88), v109);
  sub_C4E200(v49, v87);
  sub_C4E200(v46, v87);
  v54 = *(_QWORD *)(a1 + 56);
  v55 = 0x7FFFFFFF8LL;
  if ( v54 )
    v55 = 8LL * (unsigned int)(*(_DWORD *)(v54 - 4) - 1);
  v56 = *(_QWORD *)(v54 + v55);
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  *(_QWORD *)(a1 + 480) = v56;
  sub_39BF70((__int64 *)(a1 + 48));
  sub_39BF70((__int64 *)(a1 + 48));
  v57 = *(_QWORD *)(a1 + 480);
  v109[0] = v57;
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  sub_C516F0((_QWORD *)(a1 + 56), v109);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
  result = *(_QWORD *)(a1 + 40);
  v58 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v58 - 1;
  if ( v58 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v58 - 2) + 8) |= 2u;
  return result;
}

