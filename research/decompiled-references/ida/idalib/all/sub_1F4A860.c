__int64 __fastcall sub_1F4A860(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  int v17; // r13d
  _QWORD *v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // r13
  __int64 v27; // rax
  unsigned __int64 *v28; // rdx
  unsigned __int64 *v29; // r11
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r12
  unsigned int v35; // ecx
  unsigned int v36; // r12d
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // r12
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  _QWORD *v46; // rdi
  __int64 v47; // rax
  unsigned __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rsi
  char v51; // al
  __int64 v52; // r13
  __int64 v53; // rax
  unsigned __int64 **v54; // rax
  bool v55; // zf
  __int64 v57; // [rsp+8h] [rbp-50h]
  bool v58; // [rsp+17h] [rbp-41h]
  int v59; // [rsp+18h] [rbp-40h]
  unsigned __int64 *v60; // [rsp+18h] [rbp-40h]

  v5 = (unsigned __int64 *)(a3 + 96);
  if ( !a3 )
    v5 = nullptr;
  v6 = sub_1EE13A0(*(_QWORD *)(a2[2] + 8), *(_QWORD *)(a2[2] + 16), (__int64 *)(a2[2] + 32), (_DWORD *)(a2[2] + 24));
  v11 = a2[5];
  v12 = v6;
  if ( v6 )
  {
    v13 = a2[2];
    v14 = *(unsigned int *)(v13 + 24);
    v8 = *(_QWORD *)(v13 + 32);
    v15 = *(_QWORD *)(v8 + 8 * v14);
    v16 = (unsigned int)(v14 + 1);
    *(_DWORD *)(v13 + 24) = v16;
    if ( (_DWORD)v15 )
    {
      v58 = (_DWORD)v15 == 1;
      v59 = v15 - 1;
      if ( (_DWORD)v15 == 1 )
      {
        v57 = 0;
      }
      else
      {
        v17 = 0;
        do
        {
          v18 = *(_QWORD **)(v13 + 8);
          ++v17;
          v19 = sub_1EE13A0((__int64)v18, *(_QWORD *)(v13 + 16), (__int64 *)(v13 + 32), (_DWORD *)(v13 + 24));
          v24 = sub_1EDB980(v18, v19, v20, v21, v22, v23);
          v13 = a2[2];
          v57 = v24;
        }
        while ( v17 != v59 );
        v16 = *(unsigned int *)(v13 + 24);
        v8 = *(_QWORD *)(v13 + 32);
      }
      v7 = (unsigned int)(v16 + 1);
      v25 = *(_QWORD *)(v8 + 8 * v16);
      v11 = v12;
      *(_DWORD *)(v13 + 24) = v7;
      if ( v25 )
      {
        v26 = 1;
        v12 = a2[4] - v25;
      }
      else
      {
        v12 = 0;
        v26 = 1;
      }
    }
    else
    {
      v55 = v12 == v11;
      v11 = v12;
      v58 = v55;
      v12 = 0;
      v26 = 0;
      sub_1EE1670(v13);
      v57 = 0;
    }
  }
  else
  {
    v58 = 1;
    v26 = 1;
    v57 = 0;
  }
  v27 = sub_1EDB980((_QWORD *)*a2, v11, v7, v8, v9, v10);
  v28 = (unsigned __int64 *)(v27 + 96);
  if ( !v27 )
    v28 = nullptr;
  if ( v5 != v28 )
  {
    *v5 = v27 & 0xFFFFFFFFFFFFFFFCLL;
    v5[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
LABEL_16:
    v29 = v5 - 12;
    goto LABEL_17;
  }
  if ( v5 )
    goto LABEL_16;
  v29 = nullptr;
LABEL_17:
  if ( v26 )
  {
    v52 = *a2;
    v53 = *(unsigned int *)(*a2 + 11032);
    if ( v53 + 1 > (unsigned __int64)*(unsigned int *)(*a2 + 11036) )
    {
      v60 = v29;
      sub_2237220(v52 + 11024, v52 + 11040, v53 + 1, 16);
      v53 = *(unsigned int *)(v52 + 11032);
      v29 = v60;
    }
    v54 = (unsigned __int64 **)(*(_QWORD *)(v52 + 11024) + 16 * v53);
    *v54 = v29;
    v54[1] = (unsigned __int64 *)v12;
    ++*(_DWORD *)(v52 + 11032);
  }
  *(_QWORD *)a1 = v57;
  *(_QWORD *)(a1 + 8) = v11;
  *(_BYTE *)(a1 + 16) = v58;
  sub_1F4A660((__int64)a2, a3);
  v30 = a2[2];
  v31 = *(unsigned int *)(v30 + 24);
  *(_DWORD *)(v30 + 24) = v31 + 1;
  *(_WORD *)(a3 + 30) = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 8 * v31) & 0x3FFF | *(_WORD *)(a3 + 30) & 0xC000;
  v32 = a2[2];
  v33 = *(unsigned int *)(v32 + 24);
  *(_DWORD *)(v32 + 24) = v33 + 1;
  v34 = *(_QWORD *)(*(_QWORD *)(v32 + 32) + 8 * v33);
  *(_BYTE *)(a3 + 73) = (32 * v34) | *(_BYTE *)(a3 + 73) & 0x1F;
  LODWORD(v32) = (unsigned int)v34 >> 6;
  v35 = ((unsigned int)v34 >> 5) & 1;
  LODWORD(v33) = (4 * (((unsigned int)v34 >> 4) & 1)) & 0xFFFFFFD7 | ((v34 & 8) != 0) | *(_BYTE *)(a3 + 74) & 0xD2;
  v36 = ((unsigned int)v34 >> 7) & 3;
  *(_BYTE *)(a3 + 74) = (32 * (v32 & 1)) | (8 * v35) | v33;
  *(_QWORD *)(a3 + 112) = sub_1EEDED0(
                            *(_QWORD *)(a2[2] + 8),
                            *(_QWORD *)(a2[2] + 16),
                            (_QWORD *)(a2[2] + 32),
                            (_DWORD *)(a2[2] + 24));
  if ( v36 != 1 )
  {
    if ( v36 )
    {
      a2[9] = sub_1EE13A0(
                *(_QWORD *)(a2[2] + 8),
                *(_QWORD *)(a2[2] + 16),
                (__int64 *)(a2[2] + 32),
                (_DWORD *)(a2[2] + 24));
      v40 = a2[2];
      v41 = *(unsigned int *)(v40 + 24);
      v42 = *(_QWORD **)(v40 + 8);
      v43 = *(_QWORD *)(v40 + 16);
      *(_DWORD *)(v40 + 24) = v41 + 1;
      v44 = sub_1EE0AD0((__int64)v42, v43, *(_QWORD *)(*(_QWORD *)(v40 + 32) + 8 * v41));
      a2[10] = sub_1EE2910(v42, v44);
    }
    if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 59 <= 2 )
      return a1;
LABEL_27:
    sub_1F43DB0(a2, v5, a1);
    return a1;
  }
  v46 = *(_QWORD **)(*a2 + 144);
  v47 = v46[294];
  v46[304] += 32LL;
  v48 = (v47 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v49 = v48 + 32;
  if ( v46[295] >= v48 + 32 && v47 )
  {
    v46[294] = v49;
    v50 = (v47 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v50 = sub_986170((__int64)(v46 + 294), 32, 32, 3, v38, v39);
    v48 = v50 & 0xFFFFFFFFFFFFFFFBLL;
  }
  *(_DWORD *)(v50 + 16) = 0;
  *(_QWORD *)(v50 + 24) = 0;
  *(_OWORD *)v50 = 0;
  sub_1F197E0(a2[2], v50, v49, v37, v38, v39);
  v51 = *(_BYTE *)(a3 + 28);
  *(_QWORD *)(a3 + 120) = v48 | 4;
  if ( (v51 & 0x7Fu) - 59 > 2 )
    goto LABEL_27;
  return a1;
}
