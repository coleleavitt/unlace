__int64 __fastcall sub_1F492D0(__int64 *a1, __int64 a2)
{
  unsigned __int64 *v2; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r15d
  _QWORD *v17; // r13
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 *v26; // rdx
  __int64 (__fastcall *v27)(__int64); // rdx
  __int64 v28; // rax
  unsigned __int64 *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  bool v34; // zf
  unsigned __int64 v35; // r14
  __int64 v36; // rsi
  int v37; // eax
  unsigned __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 (__fastcall *v47)(__int64); // rax
  __int64 v48; // rax
  __int64 result; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rax
  unsigned __int64 **v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 (__fastcall *v57)(__int64); // rax
  __int64 v58; // r12
  __int64 (__fastcall *v59)(__int64); // rax
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 *v62; // rdx
  __int64 v63; // rdi
  __int64 *v64; // rcx
  __int64 *v65; // rax
  __int64 v66; // rbx
  __int64 *v67; // rcx
  __int64 *v68; // rax
  __int64 *v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  _QWORD *v73; // [rsp+0h] [rbp-88h]
  int v74; // [rsp+8h] [rbp-80h]
  char v75; // [rsp+8h] [rbp-80h]
  __int64 v76; // [rsp+8h] [rbp-80h]
  __int64 v77; // [rsp+8h] [rbp-80h]
  bool v78; // [rsp+17h] [rbp-71h]
  unsigned __int64 *v79; // [rsp+18h] [rbp-70h]
  _BYTE v80[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v81; // [rsp+30h] [rbp-58h]

  v2 = (unsigned __int64 *)(a2 + 88);
  if ( !a2 )
    v2 = nullptr;
  v5 = sub_1EE13A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16), (__int64 *)(a1[2] + 32), (_DWORD *)(a1[2] + 24));
  v10 = a1[5];
  v11 = v5;
  if ( v5 )
  {
    v12 = a1[2];
    v13 = *(unsigned int *)(v12 + 24);
    v7 = *(_QWORD *)(v12 + 32);
    v14 = (unsigned int)(v13 + 1);
    v15 = *(_QWORD *)(v7 + 8 * v13);
    *(_DWORD *)(v12 + 24) = v14;
    if ( (_DWORD)v15 )
    {
      v78 = (_DWORD)v15 == 1;
      v74 = v15 - 1;
      if ( (_DWORD)v15 == 1 )
      {
        v73 = nullptr;
      }
      else
      {
        v16 = 0;
        do
        {
          v17 = *(_QWORD **)(v12 + 8);
          ++v16;
          v18 = sub_1EE13A0((__int64)v17, *(_QWORD *)(v12 + 16), (__int64 *)(v12 + 32), (_DWORD *)(v12 + 24));
          v23 = sub_1EDB980(v17, v18, v19, v20, v21, v22);
          v12 = a1[2];
          v73 = (_QWORD *)v23;
        }
        while ( v74 != v16 );
        v14 = *(unsigned int *)(v12 + 24);
        v7 = *(_QWORD *)(v12 + 32);
      }
      v6 = (unsigned int)(v14 + 1);
      v24 = *(_QWORD *)(v7 + 8 * v14);
      v10 = v11;
      *(_DWORD *)(v12 + 24) = v6;
      if ( v24 )
      {
        v75 = 1;
        v11 = a1[4] - v24;
      }
      else
      {
        v11 = 0;
        v75 = 1;
      }
    }
    else
    {
      v34 = v11 == v10;
      v10 = v11;
      v78 = v34;
      v11 = 0;
      sub_1EE1670(v12);
      v75 = 0;
      v73 = nullptr;
    }
  }
  else
  {
    v75 = 1;
    v78 = 1;
    v73 = nullptr;
  }
  v25 = sub_1EDB980((_QWORD *)*a1, v10, v6, v7, v8, v9);
  v26 = (unsigned __int64 *)(v25 + 88);
  if ( !v25 )
    v26 = nullptr;
  if ( v2 == v26 )
  {
    if ( !v2 )
    {
      v29 = nullptr;
      goto LABEL_19;
    }
  }
  else
  {
    *v2 = v25 & 0xFFFFFFFFFFFFFFFCLL;
    v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL);
    if ( v27 == sub_A55E60 )
      v28 = *(_QWORD *)(v25 + 96);
    else
      v28 = v27(v25);
    v2[1] = v28;
  }
  v29 = v2 - 11;
LABEL_19:
  if ( v75 )
  {
    v51 = *a1;
    v52 = *(unsigned int *)(*a1 + 11032);
    if ( v52 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 11036) )
    {
      v79 = v29;
      v77 = *a1;
      sub_2237220(v51 + 11024, v51 + 11040, v52 + 1, 16);
      v51 = v77;
      v29 = v79;
      v52 = *(unsigned int *)(v77 + 11032);
    }
    v53 = (unsigned __int64 **)(*(_QWORD *)(v51 + 11024) + 16 * v52);
    *v53 = v29;
    v53[1] = (unsigned __int64 *)v11;
    ++*(_DWORD *)(v51 + 11032);
  }
  sub_1F458C0((__int64)a1, a2);
  v30 = a1[2];
  v31 = *(unsigned int *)(v30 + 24);
  v32 = *(_QWORD *)(v30 + 16);
  v33 = *(_QWORD *)(v30 + 8);
  v34 = *(_QWORD *)(v32 + 856) == 0;
  *(_DWORD *)(v30 + 24) = v31 + 1;
  v35 = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 8 * v31);
  v36 = v32;
  if ( !v34 )
  {
    v76 = v32;
    sub_1EDF870(v33, v32);
    v30 = a1[2];
    v32 = v76;
    v33 = *(_QWORD *)(v30 + 8);
    v36 = *(_QWORD *)(v30 + 16);
  }
  v37 = __ROR4__(v35, 1);
  v38 = HIDWORD(v35);
  if ( v38 )
    v32 = *(_QWORD *)(*(_QWORD *)(v32 + 3320) + 8LL * (unsigned int)(v38 - 1));
  if ( v37 )
    v37 = v37 + *(_DWORD *)(v32 + 1648) - 2;
  *(_DWORD *)(a2 + 60) = v37;
  *(_QWORD *)(a2 + 80) = sub_1EEDED0(v33, v36, (_QWORD *)(v30 + 32), (_DWORD *)(v30 + 24));
  v39 = a1[2];
  v40 = *(unsigned int *)(v39 + 24);
  v41 = *(_QWORD *)(v39 + 16);
  v42 = *(_QWORD *)(v39 + 8);
  *(_DWORD *)(v39 + 24) = v40 + 1;
  a1[7] = sub_1EFA430(v42, v41, *(_QWORD *)(*(_QWORD *)(v39 + 32) + 8 * v40));
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 21LL) & 2) != 0
    && ((*(_BYTE *)v2 | (unsigned __int8)((__int64)*v2 >> 1)) & 1) != 0 )
  {
    v50 = (__int64)(v2 - 11);
    if ( v73 )
    {
      if ( v2 != (unsigned __int64 *)&qword_58 )
        v50 = (__int64)v2;
      if ( !v78 )
        v10 = 0;
      sub_1F3DA30(a1 + 1, v50, v73, v10, v43, v44);
    }
    else
    {
      sub_1F43500((__int64)v80, (__int64)a1, (__int64)(v2 - 11));
      if ( v81 && (*((_BYTE *)v81 + 28) & 0x7F) == 0x14 )
      {
        v72 = (__int64)(v2 - 11);
        if ( v2 != (unsigned __int64 *)&qword_58 )
          v72 = (__int64)v2;
        if ( !v78 )
          v10 = 0;
        sub_1F3DA30(a1 + 1, v72, v81, v10, v70, v71);
      }
      sub_1F42E40((__int64)v80);
    }
  }
  *(_QWORD *)(a2 + 112) = sub_1F1EED0(a1);
  v45 = a1[2];
  v46 = *(unsigned int *)(v45 + 24);
  *(_DWORD *)(v45 + 24) = v46 + 1;
  if ( !*(_QWORD *)(*(_QWORD *)(v45 + 32) + 8 * v46) )
  {
    v47 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
    if ( v47 == sub_A55E60 )
      v48 = *(_QWORD *)(a2 + 96);
    else
      v48 = v47(a2);
    result = *(_QWORD *)(v48 + 120);
    *(_QWORD *)(a2 + 120) = result;
    return result;
  }
  sub_BA9AF0(a2);
  sub_1F1F070(a1, *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL);
  v57 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v57 == sub_A55E60 )
    v58 = *(_QWORD *)(a2 + 96);
  else
    v58 = v57(a2);
  if ( (*(_QWORD *)(v58 + 120) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    sub_1F3E630(a1 + 1, v58, *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL, v54, v55, v56);
    *(_QWORD *)(a2 + 120) = *(_QWORD *)(v58 + 120);
  }
  else
  {
    v59 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
    if ( v59 == sub_A55E60 )
      v60 = *(_QWORD *)(a2 + 96);
    else
      v60 = v59(a2);
    *(_QWORD *)(v60 + 120) = *(_QWORD *)(a2 + 120);
    *(_QWORD *)((*(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64) = 0;
  }
  v61 = *a1;
  if ( *(_BYTE *)(*a1 + 4028) )
  {
    v62 = *(__int64 **)(v61 + 4008);
    v63 = *(unsigned int *)(v61 + 4020);
    v64 = &v62[v63];
    if ( v62 != v64 )
    {
      v65 = *(__int64 **)(v61 + 4008);
      if ( a2 == *v62 )
      {
LABEL_73:
        v66 = *a1;
        goto LABEL_55;
      }
      while ( v64 != ++v65 )
      {
        if ( a2 == *v65 )
          goto LABEL_73;
      }
    }
    if ( (unsigned int)v63 < *(_DWORD *)(v61 + 4016) )
    {
      *(_DWORD *)(v61 + 4020) = v63 + 1;
      *v64 = a2;
      v62 = *(__int64 **)(v61 + 4008);
      v66 = *a1;
      v65 = &v62[v63];
LABEL_55:
      v67 = &v62[*(unsigned int *)(v61 + 4020)];
      goto LABEL_56;
    }
  }
  v65 = (__int64 *)sub_2236760(v61 + 4008, a2);
  v66 = *a1;
  v62 = *(__int64 **)(v61 + 4008);
  if ( *(_BYTE *)(v61 + 4028) )
    goto LABEL_55;
  v67 = &v62[*(unsigned int *)(v61 + 4016)];
LABEL_56:
  if ( v67 != v65 && (unsigned __int64)*v65 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v68 = v65 + 1;
    do
    {
      v69 = v68;
      if ( v67 == v68 )
        break;
      ++v68;
    }
    while ( (unsigned __int64)*v69 >= 0xFFFFFFFFFFFFFFFELL );
  }
  result = *(unsigned int *)(v66 + 12832);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v66 + 12836) )
  {
    sub_2237220(v66 + 12824, v66 + 12840, result + 1, 8);
    result = *(unsigned int *)(v66 + 12832);
  }
  *(_QWORD *)(*(_QWORD *)(v66 + 12824) + 8 * result) = a2;
  ++*(_DWORD *)(v66 + 12832);
  return result;
}
