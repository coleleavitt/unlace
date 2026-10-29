_BYTE *__fastcall sub_10423E0(__int64 a1, _BYTE *a2, __int64 a3, __int64 *a4)
{
  size_t v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _BYTE *result; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD v62[2]; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD v63[4]; // [rsp+20h] [rbp-C8h] BYREF
  __int16 v64; // [rsp+40h] [rbp-A8h]
  _QWORD v65[4]; // [rsp+50h] [rbp-98h] BYREF
  __int16 v66; // [rsp+70h] [rbp-78h]
  unsigned __int64 v67; // [rsp+80h] [rbp-68h] BYREF
  __int64 v68; // [rsp+88h] [rbp-60h]
  __int64 v69; // [rsp+90h] [rbp-58h]
  __int64 v70; // [rsp+98h] [rbp-50h]
  __int64 v71; // [rsp+A0h] [rbp-48h]

  v6 = j__strlen("unix");
  sub_103D8F0(a4, (__int64)"unix", v6, (__int64)a2, v7, v8);
  LOWORD(v71) = 257;
  v66 = 259;
  v63[0] = "_IBMR2";
  v64 = 259;
  v65[0] = "1";
  sub_1039E30(a4, (__int64)v63, (__int64)v65, v9, v10, v11, v67, v68, v69, v70, 1u);
  v66 = 259;
  LOWORD(v71) = 257;
  v63[0] = "_POWER";
  v64 = 259;
  v65[0] = "1";
  sub_1039E30(a4, (__int64)v63, (__int64)v65, 259, v12, v13, v67, v68, v69, v70, 1u);
  LOWORD(v71) = 257;
  v66 = 259;
  v64 = 259;
  v63[0] = "__THW_BIG_ENDIAN__";
  v65[0] = "1";
  sub_1039E30(a4, (__int64)v63, (__int64)v65, v14, 259, 259, v67, v68, v69, v70, 1u);
  v63[0] = "_AIX";
  LOWORD(v71) = 257;
  v66 = 259;
  v64 = 259;
  v65[0] = "1";
  sub_1039E30(a4, (__int64)v63, (__int64)v65, v15, v16, v17, v67, v68, v69, v70, 1u);
  LOWORD(v71) = 257;
  v66 = 259;
  v63[0] = "__TOS_AIX__";
  v64 = 259;
  v65[0] = "1";
  sub_1039E30(a4, (__int64)v63, (__int64)v65, v18, v19, v20, v67, v68, v69, v70, 1u);
  LOWORD(v71) = 257;
  v66 = 259;
  v64 = 259;
  v65[0] = "1";
  v63[0] = "__HOS_AIX__";
  sub_1039E30(a4, (__int64)v63, (__int64)v65, v21, v22, v23, v67, v68, v69, v70, 1u);
  if ( (*a2 & 2) != 0 )
  {
    v65[0] = "1";
    LOWORD(v71) = 257;
    v66 = 259;
    v63[0] = "__STDC_NO_ATOMICS__";
    v64 = 259;
    sub_1039E30(a4, (__int64)v63, (__int64)v65, v24, v25, v26, v67, v68, v69, v70, 1u);
    LOWORD(v71) = 257;
    v66 = 259;
    v63[0] = "__STDC_NO_THREADS__";
    v64 = 259;
    v65[0] = "1";
    sub_1039E30(a4, (__int64)v63, (__int64)v65, v59, v60, v61, v67, v68, v69, v70, 1u);
    if ( (a2[44] & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (a2[44] & 2) == 0 )
  {
    goto LABEL_3;
  }
  v65[0] = "1";
  LOWORD(v71) = 257;
  v66 = 259;
  v63[0] = "__EXTABI__";
  v64 = 259;
  sub_1039E30(a4, (__int64)v63, (__int64)v65, v24, 259, 259, v67, v68, v69, v70, 1u);
LABEL_3:
  v27 = sub_22B7B00(a3);
  v68 = 0;
  v62[1] = v28;
  v67 = 0x8000000200000003LL;
  v62[0] = v27;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)v62, (unsigned int *)&v67) )
  {
    LOWORD(v71) = 257;
    v64 = 259;
    v65[0] = "1";
    v66 = 259;
    v63[0] = "_AIX32";
    sub_1039E30(a4, (__int64)v63, (__int64)v65, 259, v29, v30, 3, v68, v69, v70, 1u);
  }
  v68 = 0;
  v67 = 0x8000000100000004LL;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)v62, (unsigned int *)&v67) )
  {
    v65[0] = "1";
    LOWORD(v71) = 257;
    v66 = 259;
    v63[0] = "_AIX41";
    v64 = 259;
    sub_1039E30(a4, (__int64)v63, (__int64)v65, v31, v32, v33, 4, v68, v69, v70, 1u);
  }
  v68 = 0;
  v67 = 0x8000000300000004LL;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)v62, (unsigned int *)&v67) )
  {
    v65[0] = "1";
    v66 = 259;
    v63[0] = "_AIX43";
    LOWORD(v71) = 257;
    v64 = 259;
    sub_1039E30(a4, (__int64)v63, (__int64)v65, v34, v35, v36, 4, v68, v69, v70, 1u);
  }
  v68 = 0;
  v67 = 0x8000000000000005LL;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)v62, (unsigned int *)&v67) )
  {
    v65[0] = "1";
    LOWORD(v71) = 257;
    v66 = 259;
    v63[0] = "_AIX50";
    v64 = 259;
    sub_1039E30(a4, (__int64)v63, (__int64)v65, v37, 257, 259, 5, v68, v69, v70, 1u);
  }
  v68 = 0;
  v67 = 0x8000000100000005LL;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)v62, (unsigned int *)&v67) )
  {
    v65[0] = "1";
    v66 = 259;
    v64 = 259;
    LOWORD(v71) = 257;
    v63[0] = "_AIX51";
    sub_1039E30(a4, (__int64)v63, (__int64)v65, 257, v38, v39, 5, v68, v69, v70, 1u);
  }
  v68 = 0;
  v67 = 0x8000000200000005LL;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)v62, (unsigned int *)&v67) )
  {
    v65[0] = "1";
    LOWORD(v71) = 257;
    v66 = 259;
    v63[0] = "_AIX52";
    v64 = 259;
    sub_1039E30(a4, (__int64)v63, (__int64)v65, v40, v41, v42, 5, v68, v69, v70, 1u);
  }
  v68 = 0;
  v67 = 0x8000000300000005LL;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)v62, (unsigned int *)&v67) )
  {
    v65[0] = "1";
    LOWORD(v71) = 257;
    v66 = 259;
    v63[0] = "_AIX53";
    v64 = 259;
    sub_1039E30(a4, (__int64)v63, (__int64)v65, v43, v44, v45, 5, v68, v69, v70, 1u);
  }
  v68 = 0;
  v67 = 0x8000000100000006LL;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)v62, (unsigned int *)&v67) )
  {
    v65[0] = "1";
    LOWORD(v71) = 257;
    v66 = 259;
    v63[0] = "_AIX61";
    v64 = 259;
    sub_1039E30(a4, (__int64)v63, (__int64)v65, v46, v47, 257, 6, v68, v69, v70, 1u);
  }
  v68 = 0;
  v67 = 0x8000000100000007LL;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)v62, (unsigned int *)&v67) )
  {
    v65[0] = "1";
    v66 = 259;
    LOWORD(v71) = 257;
    v63[0] = "_AIX71";
    v64 = 259;
    sub_1039E30(a4, (__int64)v63, (__int64)v65, v48, 259, v49, 7, v68, v69, v70, 1u);
  }
  v68 = 0;
  v67 = 0x8000000200000007LL;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)v62, (unsigned int *)&v67) )
  {
    LOWORD(v71) = 257;
    v66 = 259;
    v65[0] = "1";
    v63[0] = "_AIX72";
    v64 = 259;
    sub_1039E30(a4, (__int64)v63, (__int64)v65, 259, v50, v51, 7, v68, v69, v70, 1u);
  }
  v68 = 0;
  v67 = 0x8000000300000007LL;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)v62, (unsigned int *)&v67) )
  {
    v65[0] = "1";
    LOWORD(v71) = 257;
    v66 = 259;
    v63[0] = "_AIX73";
    v64 = 259;
    sub_1039E30(a4, (__int64)v63, (__int64)v65, v52, v53, v54, 7, v68, v69, v70, 1u);
  }
  v65[0] = "1";
  v63[0] = "_LONG_LONG";
  LOWORD(v71) = 257;
  v66 = 259;
  v64 = 259;
  sub_1039E30(a4, (__int64)v63, (__int64)v65, v52, v53, v54, v67, v68, v69, v70, 1u);
  if ( (a2[20] & 0x20) != 0 )
  {
    v65[0] = "1";
    LOWORD(v71) = 257;
    v66 = 259;
    v63[0] = "_THREAD_SAFE";
    v64 = 259;
    sub_1039E30(a4, (__int64)v63, (__int64)v65, v55, v56, 257, v67, v68, v69, v70, 1u);
    if ( *(_BYTE *)(a1 + 8) != 64 )
      goto LABEL_27;
  }
  else if ( *(_BYTE *)(a1 + 8) != 64 )
  {
    goto LABEL_27;
  }
  v65[0] = "1";
  LOWORD(v71) = 257;
  v66 = 259;
  v63[0] = "__64BIT__";
  v64 = 259;
  sub_1039E30(a4, (__int64)v63, (__int64)v65, v55, 259, v57, v67, v68, v69, v70, 1u);
LABEL_27:
  result = (_BYTE *)(*(_DWORD *)a2 & 0x10000800);
  if ( (_DWORD)result == 268437504 )
  {
    v66 = 259;
    LOWORD(v71) = 257;
    v65[0] = "1";
    v63[0] = "_WCHAR_T";
    v64 = 259;
    return sub_1039E30(a4, (__int64)v63, (__int64)v65, 259, v56, v57, v67, v68, v69, v70, 1u);
  }
  return result;
}
