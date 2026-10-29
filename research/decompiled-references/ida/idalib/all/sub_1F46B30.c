void __fastcall sub_1F46B30(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r15d
  _QWORD *v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // r15
  __int64 v25; // rax
  __int64 *v26; // rdx
  __int64 (__fastcall *v27)(__int64); // rdx
  __int64 v28; // rax
  __int64 *v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r15
  __int64 v38; // rdi
  bool v39; // zf
  unsigned __int64 v40; // r13
  int v41; // eax
  unsigned __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r15
  __int64 v46; // rdi
  unsigned __int64 v47; // r13
  int v48; // eax
  unsigned __int64 v49; // r13
  __int64 v50; // rcx
  unsigned __int64 v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned int v54; // edx
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 **v57; // rax
  __int64 v58; // r15
  __int64 v59; // r8
  __int64 v60; // r9
  _QWORD *v61; // [rsp+8h] [rbp-80h]
  int v62; // [rsp+10h] [rbp-78h]
  __int64 *v63; // [rsp+10h] [rbp-78h]
  bool v64; // [rsp+1Fh] [rbp-69h]
  _BYTE v65[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v66; // [rsp+30h] [rbp-58h]

  v3 = (__int64 *)(a2 + 80);
  if ( !a2 )
    v3 = nullptr;
  v4 = sub_1EE13A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16), (__int64 *)(a1[2] + 32), (_DWORD *)(a1[2] + 24));
  v9 = a1[5];
  v10 = v4;
  if ( v4 )
  {
    v11 = a1[2];
    v12 = *(unsigned int *)(v11 + 24);
    v6 = *(_QWORD *)(v11 + 32);
    v13 = (unsigned int)(v12 + 1);
    v14 = *(_QWORD *)(v6 + 8 * v12);
    *(_DWORD *)(v11 + 24) = v13;
    if ( (_DWORD)v14 )
    {
      v64 = (_DWORD)v14 == 1;
      v62 = v14 - 1;
      if ( (_DWORD)v14 == 1 )
      {
        v61 = nullptr;
      }
      else
      {
        v15 = 0;
        do
        {
          v16 = *(_QWORD **)(v11 + 8);
          ++v15;
          v17 = sub_1EE13A0((__int64)v16, *(_QWORD *)(v11 + 16), (__int64 *)(v11 + 32), (_DWORD *)(v11 + 24));
          v22 = sub_1EDB980(v16, v17, v18, v19, v20, v21);
          v11 = a1[2];
          v61 = (_QWORD *)v22;
        }
        while ( v15 != v62 );
        v13 = *(unsigned int *)(v11 + 24);
        v6 = *(_QWORD *)(v11 + 32);
      }
      v5 = (unsigned int)(v13 + 1);
      v23 = *(_QWORD *)(v6 + 8 * v13);
      v9 = v10;
      *(_DWORD *)(v11 + 24) = v5;
      if ( v23 )
      {
        v24 = 1;
        v10 = a1[4] - v23;
      }
      else
      {
        v10 = 0;
        v24 = 1;
      }
    }
    else
    {
      v39 = v10 == v9;
      v9 = v10;
      v64 = v39;
      v10 = 0;
      v24 = 0;
      sub_1EE1670(v11);
      v61 = nullptr;
    }
  }
  else
  {
    v64 = 1;
    v24 = 1;
    v61 = nullptr;
  }
  v25 = sub_1EDB980((_QWORD *)*a1, v9, v5, v6, v7, v8);
  v26 = (__int64 *)(v25 + 80);
  if ( !v25 )
    v26 = nullptr;
  if ( v3 != v26 )
  {
    *v3 = v25 & 0xFFFFFFFFFFFFFFFCLL;
    v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL);
    if ( v27 == sub_A55CC0 )
      v28 = *(_QWORD *)(v25 + 88);
    else
      v28 = v27(v25);
    v3[1] = v28;
    goto LABEL_18;
  }
  if ( v3 )
  {
LABEL_18:
    v29 = v3 - 10;
    goto LABEL_19;
  }
  v29 = nullptr;
LABEL_19:
  if ( v24 )
  {
    v55 = *a1;
    v56 = *(unsigned int *)(*a1 + 11032);
    if ( v56 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 11036) )
    {
      v63 = v29;
      sub_2237220(v55 + 11024, v55 + 11040, v56 + 1, 16);
      v56 = *(unsigned int *)(v55 + 11032);
      v29 = v63;
    }
    v57 = (__int64 **)(*(_QWORD *)(v55 + 11024) + 16 * v56);
    *v57 = v29;
    v57[1] = (__int64 *)v10;
    ++*(_DWORD *)(v55 + 11032);
  }
  sub_1F458C0((__int64)a1, a2);
  v32 = a1[2];
  v33 = *(unsigned int *)(v32 + 24);
  *(_DWORD *)(v32 + 24) = v33 + 1;
  v34 = *(_QWORD *)(*(_QWORD *)(v32 + 32) + 8 * v33);
  *(_BYTE *)(a2 + 57) = (32 * (v34 & 1)) | *(_BYTE *)(a2 + 57) & 0x9F | (((v34 & 2) != 0) << 6);
  v35 = a1[2];
  v36 = *(unsigned int *)(v35 + 24);
  v37 = *(_QWORD *)(v35 + 16);
  v38 = *(_QWORD *)(v35 + 8);
  v39 = *(_QWORD *)(v37 + 856) == 0;
  *(_DWORD *)(v35 + 24) = v36 + 1;
  v40 = *(_QWORD *)(*(_QWORD *)(v35 + 32) + 8 * v36);
  if ( !v39 )
    sub_1EDF870(v38, v37);
  v41 = __ROR4__(v40, 1);
  v42 = HIDWORD(v40);
  if ( v42 )
    v37 = *(_QWORD *)(*(_QWORD *)(v37 + 3320) + 8LL * (unsigned int)(v42 - 1));
  if ( v41 )
    v41 = v41 + *(_DWORD *)(v37 + 1648) - 2;
  *(_DWORD *)(a2 + 96) = v41;
  v43 = a1[2];
  v44 = *(unsigned int *)(v43 + 24);
  v45 = *(_QWORD *)(v43 + 16);
  v46 = *(_QWORD *)(v43 + 8);
  v39 = *(_QWORD *)(v45 + 856) == 0;
  *(_DWORD *)(v43 + 24) = v44 + 1;
  v47 = *(_QWORD *)(*(_QWORD *)(v43 + 32) + 8 * v44);
  if ( !v39 )
    sub_1EDF870(v46, v45);
  v48 = __ROR4__(v47, 1);
  v49 = HIDWORD(v47);
  if ( v49 )
    v45 = *(_QWORD *)(*(_QWORD *)(v45 + 3320) + 8LL * (unsigned int)(v49 - 1));
  if ( v48 )
  {
    *(_DWORD *)(a2 + 100) = v48 + *(_DWORD *)(v45 + 1648) - 2;
    if ( a1[5] != v9 )
    {
LABEL_32:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 21LL) & 2) == 0
        || ((*(_BYTE *)v3 | (unsigned __int8)(*v3 >> 1)) & 1) == 0 )
      {
        return;
      }
      v51 = 0;
      goto LABEL_48;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 100) = 0;
    if ( a1[5] != v9 )
      goto LABEL_32;
  }
  v51 = sub_1EE13A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16), (__int64 *)(a1[2] + 32), (_DWORD *)(a1[2] + 24));
  v52 = *(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL);
  if ( (*(_BYTE *)(v52 + 21) & 2) != 0 )
  {
    v50 = *v3;
    v52 = ((unsigned __int8)*v3 | (unsigned __int8)(*v3 >> 1)) & 1;
    if ( (((unsigned __int8)*v3 | (unsigned __int8)(*v3 >> 1)) & 1) != 0 )
    {
LABEL_48:
      v58 = (__int64)(v3 - 10);
      if ( v61 )
      {
        if ( v3 != &qword_50 )
          v58 = (__int64)v3;
        if ( !v64 )
          v9 = 0;
        sub_1F3DC70(a1 + 1, v58, v61, v9, v30, v31);
      }
      else
      {
        sub_1F43500((__int64)v65, (__int64)a1, (__int64)(v3 - 10));
        if ( v66 && (*((_BYTE *)v66 + 28) & 0x7F) == 0x18 )
        {
          if ( v3 != &qword_50 )
            v58 = (__int64)v3;
          if ( !v64 )
            v9 = 0;
          sub_1F3DC70(a1 + 1, v58, v66, v9, v59, v60);
        }
        sub_1F42E40((__int64)v65);
      }
    }
  }
  if ( v51 )
  {
    v53 = sub_1EDB980((_QWORD *)*a1, v51, v52, v50, v30, v31);
    v54 = *(_DWORD *)(*(_QWORD *)(a1[2] + 16) + 4LL);
    if ( v54 > 1 && v54 != 5 )
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 104LL) = v53;
  }
}
