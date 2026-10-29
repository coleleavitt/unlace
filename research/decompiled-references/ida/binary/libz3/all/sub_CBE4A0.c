__int64 __fastcall sub_CBE4A0(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r12
  int v14; // ebp
  __int64 v15; // rax
  unsigned int v16; // ebp
  __int64 *v17; // r13
  int v18; // r8d
  int v19; // r9d
  int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // rdi
  bool v36; // zf
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // r12d
  unsigned __int64 v42; // r13
  __int64 *v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rax
  int v47; // ecx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rbp
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rax
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rax
  int v60; // ecx
  __int64 v61; // rsi
  __int64 v62; // rdi
  char v63; // al
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r13
  __int64 v67; // rax
  int v68; // [rsp+0h] [rbp-78h]
  __int64 *v69; // [rsp+8h] [rbp-70h]
  int v70[2]; // [rsp+18h] [rbp-60h]
  __int64 v71; // [rsp+20h] [rbp-58h] BYREF
  __int64 v72; // [rsp+28h] [rbp-50h] BYREF
  __int64 v73; // [rsp+30h] [rbp-48h] BYREF
  __int64 v74; // [rsp+38h] [rbp-40h]
  int v75; // [rsp+40h] [rbp-38h]
  void *v76; // [rsp+48h] [rbp-30h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v6 )
  {
    case 2:
      v27 = *(_QWORD *)(a1 + 8);
      v28 = *(_DWORD *)(a2 + 24);
      v73 = 0;
      v74 = v27;
      v29 = *(_QWORD *)(a1 + 160);
      if ( v29 )
        *(_DWORD *)(v29 - 4) -= v28;
      v30 = *(_QWORD *)(a1 + 528);
      if ( v30 )
        *(_DWORD *)(v30 - 4) -= v28;
      *(_DWORD *)(a1 + 128) -= v28;
      sub_15844D0(a1);
      v31 = 0x7FFFFFFF8LL;
      v32 = *(_QWORD *)(a1 + 56);
      if ( v32 )
        v31 = 8LL * (unsigned int)(*(_DWORD *)(v32 - 4) - 1);
      v33 = *(_QWORD *)(v32 + v31);
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      v34 = *(_QWORD *)(a1 + 480);
      if ( v34 )
      {
        v35 = *(_QWORD *)(a1 + 488);
        v36 = (*(_DWORD *)(v34 + 8))-- == 1;
        if ( v36 )
          sub_15D7BC0(v35, v34);
      }
      v36 = *(_WORD *)(v33 + 4) == 0;
      *(_QWORD *)(a1 + 480) = v33;
      if ( !v36 || (*(_BYTE *)(v33 + 30) & 1) == 0 )
      {
        sub_1585DF0(a1 + 328, v33, v28, &v73);
        v38 = v73;
        v73 = *(_QWORD *)(a1 + 480);
        v37 = v73;
        *(_QWORD *)(a1 + 480) = v38;
        if ( v37 )
        {
          v39 = v74;
          v36 = (*(_DWORD *)(v37 + 8))-- == 1;
          if ( v36 )
            sub_15D7BC0(v39, v37);
        }
        v73 = 0;
      }
      v40 = *(_QWORD *)(a1 + 56);
      if ( v40 )
      {
        v41 = *(_DWORD *)(a3 + 12);
        v42 = v40 + 8LL * *(unsigned int *)(v40 - 4);
        v43 = (__int64 *)(v40 + 8LL * v41);
        if ( (unsigned __int64)v43 >= v42 )
          goto LABEL_50;
        do
        {
          while ( 1 )
          {
            v44 = *v43;
            if ( *v43 )
            {
              v45 = *(_QWORD *)(a1 + 48);
              v36 = (*(_DWORD *)(v44 + 8))-- == 1;
              if ( v36 )
                break;
            }
            if ( (unsigned __int64)++v43 >= v42 )
              goto LABEL_49;
          }
          sub_15D7BC0(v45, v44);
          ++v43;
        }
        while ( (unsigned __int64)v43 < v42 );
LABEL_49:
        v40 = *(_QWORD *)(a1 + 56);
        if ( v40 )
LABEL_50:
          *(_DWORD *)(v40 - 4) = v41;
      }
      v46 = *(_QWORD *)(a1 + 480);
      v72 = v46;
      if ( v46 )
        ++*(_DWORD *)(v46 + 8);
      sub_CB55F0((_QWORD *)(a1 + 56), &v72);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      result = *(_QWORD *)(a1 + 40);
      v47 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result - 4) = v47 - 1;
      if ( v47 != 1 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v47 - 2) + 8) |= 2u;
      v48 = v73;
      if ( v73 )
      {
        v49 = v74;
        v36 = (*(_DWORD *)(v73 + 8))-- == 1;
        if ( v36 )
          return sub_15D7BC0(v49, v48);
      }
      break;
    case 3:
      sub_1872CE0("");
      sub_1873130(107, 520);
    case 0:
      v7 = *(_DWORD *)(a2 + 24);
      while ( *(_DWORD *)(a3 + 8) >> 6 < v7 )
      {
        result = sub_CBE2B0((_QWORD *)a1, a2, a3);
        if ( !(_BYTE)result )
        {
          v9 = *(_DWORD *)(a3 + 8) >> 6;
          v10 = *(_QWORD *)(a2 + 8 * v9 + 32);
          v11 = (((_DWORD)v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
          *(_DWORD *)(a3 + 8) = v11;
          result = sub_CBDCA0(a1, v10, ((unsigned __int8)v11 >> 4) & 3);
          if ( (_BYTE)result )
            continue;
        }
        return result;
      }
      v12 = *(_QWORD *)(a1 + 56);
      v13 = *(_QWORD *)(a2 + 16);
      if ( v12 )
        v14 = *(_DWORD *)(v12 - 4);
      else
        v14 = 0;
      v15 = *(unsigned int *)(a3 + 12);
      *(_QWORD *)v70 = *(_QWORD *)(a1 + 8);
      v16 = v14 - v15;
      v69 = (__int64 *)(v12 + 8 * v15);
      v17 = *(__int64 **)(a1 + 144);
      sub_CB1640(*(_QWORD *)(a1 + 512), *(_QWORD *)(a1 + 520));
      *(_QWORD *)(a1 + 512) = 0;
      v20 = sub_CB6370(v17, v13, v16, v69, (__int64 *)(a1 + 480));
      if ( v20 == 5 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
        {
          v21 = sub_15DC610(
                  *(_QWORD *)(a1 + 8),
                  v13,
                  v16,
                  (int)v69,
                  v18,
                  v19,
                  v68,
                  (int)v69,
                  (int)a1 + 480,
                  v70[0],
                  v71,
                  v72,
                  v73,
                  v74,
                  v75,
                  v76);
          v22 = v21;
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          sub_CB1660(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        }
        else
        {
          ++*(_DWORD *)(a2 + 8);
          sub_CB1660(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
          v22 = a2;
        }
        *(_QWORD *)(a1 + 480) = v22;
        sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
        v23 = *(_QWORD *)(a1 + 480);
        v73 = v23;
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        sub_CB55F0((_QWORD *)(a1 + 56), &v73);
        v24 = *(_QWORD *)(a1 + 480);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        {
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
          v24 = *(_QWORD *)(a1 + 480);
        }
        v25 = *(_QWORD *)(a1 + 40);
        v26 = *(_DWORD *)(v25 - 4);
        *(_DWORD *)(v25 - 4) = v26 - 1;
        if ( v26 != 1 && a2 != v24 )
        {
          *(_BYTE *)(v25 + 16LL * (unsigned int)(v26 - 2) + 8) |= 2u;
          v24 = *(_QWORD *)(a1 + 480);
        }
        result = sub_CB1660(v24, *(_QWORD *)(a1 + 488));
        goto LABEL_23;
      }
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v57 = *(_QWORD *)(a1 + 480);
      v71 = v57;
      if ( v57 )
        ++*(_DWORD *)(v57 + 8);
      sub_CB55F0((_QWORD *)(a1 + 56), &v71);
      v58 = *(_QWORD *)(a1 + 480);
      if ( v20 == 4 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
LABEL_79:
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      }
      else
      {
        *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
        v63 = sub_CBDCA0(a1, v58, 2);
        v62 = *(_QWORD *)(a1 + 480);
        v61 = *(_QWORD *)(a1 + 488);
        if ( !v63 )
        {
LABEL_83:
          result = sub_CB1660(v62, v61);
LABEL_23:
          *(_QWORD *)(a1 + 480) = 0;
          return result;
        }
        v64 = 0x7FFFFFFF8LL;
        v65 = *(_QWORD *)(a1 + 56);
        if ( v65 )
          v64 = 8LL * (unsigned int)(*(_DWORD *)(v65 - 4) - 1);
        v66 = *(_QWORD *)(v65 + v64);
        if ( v66 )
          ++*(_DWORD *)(v66 + 8);
        sub_CB1660(v62, v61);
        *(_QWORD *)(a1 + 480) = v66;
        sub_39BF70((__int64 *)(a1 + 48));
        sub_39BF70((__int64 *)(a1 + 48));
        v67 = *(_QWORD *)(a1 + 480);
        v72 = v67;
        if ( v67 )
          ++*(_DWORD *)(v67 + 8);
        sub_CB55F0((_QWORD *)(a1 + 56), &v72);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          goto LABEL_79;
      }
      v59 = *(_QWORD *)(a1 + 40);
      v60 = *(_DWORD *)(v59 - 4);
      *(_DWORD *)(v59 - 4) = v60 - 1;
      if ( v60 != 1 )
        *(_BYTE *)(v59 + 16LL * (unsigned int)(v60 - 2) + 8) |= 2u;
      v61 = *(_QWORD *)(a1 + 488);
      v62 = *(_QWORD *)(a1 + 480);
      goto LABEL_83;
    default:
      v50 = 0x7FFFFFFF8LL;
      v51 = *(_QWORD *)(a1 + 56);
      if ( v51 )
        v50 = 8LL * (unsigned int)(*(_DWORD *)(v51 - 4) - 1);
      v52 = *(_QWORD *)(v51 + v50);
      if ( v52 )
        ++*(_DWORD *)(v52 + 8);
      v53 = *(_QWORD *)(a1 + 480);
      if ( v53 )
      {
        v54 = *(_QWORD *)(a1 + 488);
        v36 = (*(_DWORD *)(v53 + 8))-- == 1;
        if ( v36 )
          sub_15D7BC0(v54, v53);
      }
      *(_QWORD *)(a1 + 480) = v52;
      sub_39BF70((__int64 *)(a1 + 48));
      sub_39BF70((__int64 *)(a1 + 48));
      v55 = *(_QWORD *)(a1 + 480);
      v73 = v55;
      if ( v55 )
        ++*(_DWORD *)(v55 + 8);
      sub_CB55F0((_QWORD *)(a1 + 56), &v73);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      result = *(_QWORD *)(a1 + 40);
      v56 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result - 4) = v56 - 1;
      if ( v56 != 1 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v56 - 2) + 8) |= 2u;
      break;
  }
  return result;
}

