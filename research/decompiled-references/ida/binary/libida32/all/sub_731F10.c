__int64 __fastcall sub_731F10(__int64 a1, __int64 a2, size_t a3, int a4)
{
  unsigned __int64 v8; // rcx
  bool v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // edi
  __int64 v25; // rcx
  __int16 v26; // ax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // r14d
  int v34; // r8d
  __int64 v35; // r9
  int v36; // r15d
  __int64 v37; // rcx
  __int16 v38; // ax
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // ecx
  int v43; // eax
  __int64 v44; // r8
  int v45; // r15d
  __int64 v46; // rcx
  __int16 v47; // ax
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // eax
  int v51; // ecx
  __int64 v52; // r8
  int v53; // r10d
  __int64 v54; // rcx
  __int16 v55; // ax
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // ecx
  int v59; // r10d
  char *v60; // rdi
  char *v61; // r8
  __int64 i; // rsi
  __int64 v63; // rcx
  __int64 v64; // r10
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // esi
  int v68; // eax
  _WORD *v69; // rax
  _WORD *v70; // rsi
  unsigned __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 result; // rax
  int v76; // ecx
  __int16 v77; // ax
  int v78; // edx
  __int64 v79; // rsi
  int v80; // edi
  __int64 v81; // rcx
  __int16 v82; // ax
  __int64 v83; // rax
  __int64 v84; // rcx
  int v85; // edx
  int v86; // edi
  int v87; // r8d
  int v88; // r8d
  bool v89; // [rsp+7h] [rbp-41h]
  unsigned __int64 v90; // [rsp+8h] [rbp-40h]

  v8 = a3 + 4;
  v9 = a2 != 0;
  if ( *(int *)(a1 + 196) <= 0 )
  {
    v20 = a3 + 5;
    v11 = a1 + 212;
    v12 = a1 + 2504;
  }
  else
  {
    v10 = *(_QWORD *)a1;
    v11 = a1 + 212;
    if ( *(_DWORD *)(v10 + 88) == 2 )
    {
      v69 = (_WORD *)(a1 + 212);
      v70 = (_WORD *)(a1 + 340);
      v71 = 4093624447LL;
      do
      {
        if ( (v71 & 1) != 0 && *v69 )
        {
LABEL_57:
          *(_DWORD *)(v10 + 88) = 0;
          goto LABEL_3;
        }
        v69 += 2;
        v71 >>= 1;
      }
      while ( v70 != v69 );
      if ( (*(_QWORD *)(a1 + 248) & 0xFFFF0000FFFFLL) == 0 && !*(_WORD *)(a1 + 264) )
      {
        while ( !*v70 )
        {
          v70 += 2;
          if ( (_WORD *)(a1 + 1236) == v70 )
            goto LABEL_57;
        }
      }
      *(_DWORD *)(v10 + 88) = 1;
    }
LABEL_3:
    v90 = v8;
    v12 = a1 + 2504;
    v89 = v9;
    sub_730A00(a1, a1 + 2904);
    sub_730A00(a1, a1 + 2928);
    sub_730F70((_WORD *)a1, a1 + 212, *(_DWORD *)(a1 + 2912));
    sub_730F70((_WORD *)a1, a1 + 2504, *(_DWORD *)(a1 + 2936));
    sub_730A00(a1, a1 + 2952);
    v13 = 18;
    v14 = 15;
    v8 = v90;
    v9 = v89;
    while ( 1 )
    {
      v15 = (int)v13;
      if ( *(_WORD *)(a1 + 4 * v14 + 2750) )
        break;
      if ( --v13 == 2 )
      {
        v16 = 9;
        v15 = 2;
        goto LABEL_8;
      }
      v14 = byte_2392DE0[v13];
    }
    v16 = 3LL * (int)v13 + 3;
LABEL_8:
    v17 = v16 + *(_QWORD *)(a1 + 5912) + 14;
    v18 = v16 + *(_QWORD *)(a1 + 5912) + 24;
    *(_QWORD *)(a1 + 5912) = v17;
    v19 = v18 >> 3;
    v20 = (unsigned __int64)(*(_QWORD *)(a1 + 5920) + 10LL) >> 3;
    if ( v19 < v20 && *(_DWORD *)(a1 + 200) != 4 )
    {
      if ( v19 < v90 || !v89 )
      {
        v21 = *(_DWORD *)(a1 + 5940);
        v22 = *(unsigned __int16 *)(a1 + 5936);
        v23 = (unsigned __int16)(a4 + 4);
        if ( v21 <= 13 )
        {
          v85 = v23 << v21;
          v31 = v21 + 3;
          v30 = v85 | v22;
          *(_DWORD *)(a1 + 5940) = v31;
          *(_WORD *)(a1 + 5936) = v30;
        }
        else
        {
          v24 = v23 << v21;
          v25 = *(_QWORD *)(a1 + 40);
          v26 = v24 | v22;
          v27 = *(_QWORD *)(a1 + 16);
          *(_WORD *)(a1 + 5936) = v26;
          *(_QWORD *)(a1 + 40) = v25 + 1;
          *(_BYTE *)(v27 + v25) = v26;
          v28 = *(_QWORD *)(a1 + 40);
          LOBYTE(v27) = *(_BYTE *)(a1 + 5937);
          v29 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 40) = v28 + 1;
          *(_BYTE *)(v29 + v28) = v27;
          LODWORD(v27) = *(_DWORD *)(a1 + 5940);
          v30 = v23 >> (16 - v27);
          v31 = v27 - 13;
          *(_WORD *)(a1 + 5936) = v30;
          *(_DWORD *)(a1 + 5940) = v27 - 13;
        }
        v32 = *(_DWORD *)(a1 + 2912);
        v33 = *(_DWORD *)(a1 + 2936);
        v34 = (unsigned __int16)(v32 - 256);
        if ( v31 <= 11 )
        {
          v88 = v34 << v31;
          v42 = v31 + 5;
          v43 = v88 | v30;
          *(_DWORD *)(a1 + 5940) = v42;
          *(_WORD *)(a1 + 5936) = v43;
        }
        else
        {
          v35 = *(_QWORD *)(a1 + 16);
          v36 = v34 << v31;
          v37 = *(_QWORD *)(a1 + 40);
          v38 = v36 | v30;
          *(_WORD *)(a1 + 5936) = v38;
          *(_QWORD *)(a1 + 40) = v37 + 1;
          *(_BYTE *)(v35 + v37) = v38;
          v39 = *(_QWORD *)(a1 + 40);
          LOBYTE(v35) = *(_BYTE *)(a1 + 5937);
          v40 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 40) = v39 + 1;
          *(_BYTE *)(v40 + v39) = v35;
          LODWORD(v39) = *(_DWORD *)(a1 + 5940);
          v41 = v34 >> (16 - v39);
          v42 = v39 - 11;
          *(_WORD *)(a1 + 5936) = v41;
          v43 = v41;
          *(_DWORD *)(a1 + 5940) = v42;
        }
        if ( v42 <= 11 )
        {
          v87 = (unsigned __int16)v33 << v42;
          v51 = v42 + 5;
          v50 = v87 | v43;
          *(_DWORD *)(a1 + 5940) = v51;
          *(_WORD *)(a1 + 5936) = v50;
        }
        else
        {
          v44 = *(_QWORD *)(a1 + 16);
          v45 = (unsigned __int16)v33 << v42;
          v46 = *(_QWORD *)(a1 + 40);
          v47 = v45 | v43;
          *(_WORD *)(a1 + 5936) = v47;
          *(_QWORD *)(a1 + 40) = v46 + 1;
          *(_BYTE *)(v44 + v46) = v47;
          v48 = *(_QWORD *)(a1 + 40);
          LOBYTE(v44) = *(_BYTE *)(a1 + 5937);
          v49 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 40) = v48 + 1;
          *(_BYTE *)(v49 + v48) = v44;
          LODWORD(v44) = *(_DWORD *)(a1 + 5940);
          v50 = (int)(unsigned __int16)v33 >> (16 - v44);
          v51 = v44 - 11;
          *(_WORD *)(a1 + 5936) = v50;
          *(_DWORD *)(a1 + 5940) = v44 - 11;
        }
        if ( v51 <= 12 )
        {
          v86 = (unsigned __int16)(v15 - 3) << v51;
          v58 = v51 + 4;
          *(_DWORD *)(a1 + 5940) = v58;
          v59 = v86 | v50;
          *(_WORD *)(a1 + 5936) = v86 | v50;
        }
        else
        {
          v52 = *(_QWORD *)(a1 + 16);
          v53 = (unsigned __int16)(v15 - 3) << v51;
          v54 = *(_QWORD *)(a1 + 40);
          v55 = v53 | v50;
          *(_WORD *)(a1 + 5936) = v55;
          *(_QWORD *)(a1 + 40) = v54 + 1;
          *(_BYTE *)(v52 + v54) = v55;
          v56 = *(_QWORD *)(a1 + 40);
          LOBYTE(v52) = *(_BYTE *)(a1 + 5937);
          v57 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 40) = v56 + 1;
          *(_BYTE *)(v57 + v56) = v52;
          LODWORD(v56) = *(_DWORD *)(a1 + 5940);
          v58 = v56 - 12;
          *(_WORD *)(a1 + 5936) = (int)(unsigned __int16)(v15 - 3) >> (16 - v56);
          v59 = (int)(unsigned __int16)(v15 - 3) >> (16 - v56);
          *(_DWORD *)(a1 + 5940) = v56 - 12;
        }
        v60 = (char *)byte_2392DE0;
        v61 = (char *)&byte_2392DE0[v15];
        for ( i = 16; ; i = (unsigned __int8)*v60 )
        {
          v67 = *(unsigned __int16 *)(a1 + 4 * i + 2750);
          v68 = v59 | (v67 << v58);
          *(_WORD *)(a1 + 5936) = v59 | ((_WORD)v67 << v58);
          if ( v58 > 13 )
          {
            v63 = *(_QWORD *)(a1 + 40);
            v64 = *(_QWORD *)(a1 + 16);
            *(_QWORD *)(a1 + 40) = v63 + 1;
            *(_BYTE *)(v64 + v63) = v68;
            v65 = *(_QWORD *)(a1 + 40);
            LOBYTE(v64) = *(_BYTE *)(a1 + 5937);
            v66 = *(_QWORD *)(a1 + 16);
            *(_QWORD *)(a1 + 40) = v65 + 1;
            *(_BYTE *)(v66 + v65) = v64;
            LODWORD(v65) = *(_DWORD *)(a1 + 5940);
            *(_DWORD *)(a1 + 5940) = v65 - 13;
            *(_WORD *)(a1 + 5936) = v67 >> (16 - v65);
            if ( v61 == v60 )
              goto LABEL_25;
          }
          else
          {
            *(_DWORD *)(a1 + 5940) = v58 + 3;
            if ( v61 == v60 )
            {
LABEL_25:
              sub_731090(a1, a1 + 212, v32);
              sub_731090(a1, a1 + 2504, v33);
              sub_7316B0(a1, a1 + 212, a1 + 2504);
              goto LABEL_40;
            }
          }
          v58 = *(_DWORD *)(a1 + 5940);
          v59 = *(unsigned __int16 *)(a1 + 5936);
          ++v60;
        }
      }
LABEL_39:
      sub_731CE0(a1, a2, a3, a4);
      goto LABEL_40;
    }
  }
  if ( v20 >= v8 && v9 )
    goto LABEL_39;
  v76 = *(_DWORD *)(a1 + 5940);
  v77 = *(_WORD *)(a1 + 5936);
  v78 = (unsigned __int16)(a4 + 2);
  if ( v76 > 13 )
  {
    v79 = *(_QWORD *)(a1 + 16);
    v80 = v78 << v76;
    v81 = *(_QWORD *)(a1 + 40);
    v82 = v80 | v77;
    *(_WORD *)(a1 + 5936) = v82;
    *(_QWORD *)(a1 + 40) = v81 + 1;
    *(_BYTE *)(v79 + v81) = v82;
    v83 = *(_QWORD *)(a1 + 40);
    LOBYTE(v79) = *(_BYTE *)(a1 + 5937);
    v84 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v83 + 1;
    *(_BYTE *)(v84 + v83) = v79;
    LODWORD(v83) = *(_DWORD *)(a1 + 5940);
    *(_DWORD *)(a1 + 5940) = v83 - 13;
    *(_WORD *)(a1 + 5936) = v78 >> (16 - v83);
  }
  else
  {
    *(_DWORD *)(a1 + 5940) = v76 + 3;
    *(_WORD *)(a1 + 5936) = ((_WORD)v78 << v76) | v77;
  }
  sub_7316B0(a1, (__int64)&unk_2392960, (__int64)&unk_23928E0);
LABEL_40:
  v72 = v11;
  do
  {
    v72 += 4;
    *(_WORD *)(v72 - 4) = 0;
  }
  while ( a1 + 1356 != v72 );
  v73 = v12;
  do
  {
    v73 += 4;
    *(_WORD *)(v73 - 4) = 0;
  }
  while ( a1 + 2624 != v73 );
  v74 = a1 + 2748;
  do
  {
    v74 += 4;
    *(_WORD *)(v74 - 4) = 0;
  }
  while ( a1 + 2824 != v74 );
  *(_QWORD *)(a1 + 5920) = 0;
  result = 1;
  *(_WORD *)(a1 + 1236) = 1;
  *(_QWORD *)(a1 + 5912) = 0;
  *(_DWORD *)(a1 + 5928) = 0;
  *(_DWORD *)(a1 + 5900) = 0;
  if ( a4 )
    return sub_7308B0(a1);
  return result;
}

