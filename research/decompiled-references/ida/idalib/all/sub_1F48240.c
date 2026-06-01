__int64 __fastcall sub_1F48240(__int64 a1, __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 *v4; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r14d
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 *v25; // rdx
  _QWORD *v26; // r12
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // r12
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v39; // r8
  __int64 v40; // rax
  unsigned __int64 **v41; // rax
  __int64 v42; // r15
  _QWORD *v43; // rdx
  __int64 v44; // rdi
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // rax
  _QWORD *v51; // r12
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r12
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  _QWORD *v61; // rax
  bool v62; // zf
  _QWORD *v63; // [rsp+8h] [rbp-50h]
  __int64 v64; // [rsp+8h] [rbp-50h]
  bool v65; // [rsp+17h] [rbp-41h]
  int v66; // [rsp+18h] [rbp-40h]
  char v67; // [rsp+18h] [rbp-40h]
  __int64 v68; // [rsp+18h] [rbp-40h]

  v4 = a3 + 8;
  if ( !a3 )
    v4 = nullptr;
  v6 = sub_1EE13A0(*(_QWORD *)(a2[2] + 8), *(_QWORD *)(a2[2] + 16), (__int64 *)(a2[2] + 32), (_DWORD *)(a2[2] + 24));
  v11 = a2[5];
  v12 = v6;
  if ( v6 )
  {
    v13 = a2[2];
    v14 = *(unsigned int *)(v13 + 24);
    v8 = *(_QWORD *)(v13 + 32);
    v15 = (unsigned int)(v14 + 1);
    v16 = *(_QWORD *)(v8 + 8 * v14);
    *(_DWORD *)(v13 + 24) = v15;
    if ( (_DWORD)v16 )
    {
      v65 = (_DWORD)v16 == 1;
      v66 = v16 - 1;
      if ( (_DWORD)v16 == 1 )
      {
        v64 = 0;
      }
      else
      {
        v17 = 0;
        do
        {
          ++v17;
          v63 = *(_QWORD **)(v13 + 8);
          v18 = sub_1EE13A0((__int64)v63, *(_QWORD *)(v13 + 16), (__int64 *)(v13 + 32), (_DWORD *)(v13 + 24));
          v22 = sub_1EDB980(v63, v18, v19, v20, v21, (__int64)v63);
          v13 = a2[2];
          v64 = v22;
        }
        while ( v17 != v66 );
        v15 = *(unsigned int *)(v13 + 24);
        v8 = *(_QWORD *)(v13 + 32);
      }
      v7 = (unsigned int)(v15 + 1);
      v23 = *(_QWORD *)(v8 + 8 * v15);
      v11 = v12;
      *(_DWORD *)(v13 + 24) = v7;
      if ( v23 )
      {
        v67 = 1;
        v12 = a2[4] - v23;
      }
      else
      {
        v12 = 0;
        v67 = 1;
      }
    }
    else
    {
      v62 = v12 == v11;
      v11 = v12;
      v65 = v62;
      v12 = 0;
      sub_1EE1670(v13);
      v67 = 0;
      v64 = 0;
    }
  }
  else
  {
    v67 = 1;
    v65 = 1;
    v64 = 0;
  }
  v24 = sub_1EDB980((_QWORD *)*a2, v11, v7, v8, v9, v10);
  v25 = (unsigned __int64 *)(v24 + 64);
  if ( !v24 )
    v25 = nullptr;
  if ( v4 == v25 )
  {
    if ( !v4 )
      goto LABEL_17;
  }
  else
  {
    *v4 = v24 & 0xFFFFFFFFFFFFFFFCLL;
    v4[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
  }
  v4 -= 8;
LABEL_17:
  if ( v67 )
  {
    v39 = *a2;
    v40 = *(unsigned int *)(*a2 + 11032);
    if ( v40 + 1 > (unsigned __int64)*(unsigned int *)(*a2 + 11036) )
    {
      v68 = *a2;
      sub_2237220(v39 + 11024, v39 + 11040, v40 + 1, 16);
      v39 = v68;
      v40 = *(unsigned int *)(v68 + 11032);
    }
    v41 = (unsigned __int64 **)(*(_QWORD *)(v39 + 11024) + 16 * v40);
    *v41 = v4;
    v41[1] = (unsigned __int64 *)v12;
    ++*(_DWORD *)(v39 + 11032);
  }
  *(_QWORD *)(a1 + 8) = v11;
  *(_QWORD *)a1 = v64;
  *(_BYTE *)(a1 + 16) = v65;
  v26 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64 *))(*a3 + 32))(a3);
  v27 = v26[10];
  if ( v27 )
  {
    a3[10] = v27;
    if ( a2[5] != v11 )
      goto LABEL_20;
    goto LABEL_43;
  }
  v26[10] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v26 + 104LL))(v26, *(_QWORD *)(*a2 + 144));
  v42 = *a2;
  if ( !*(_BYTE *)(*a2 + 4028) )
    goto LABEL_48;
  v43 = *(_QWORD **)(v42 + 4008);
  v44 = *(unsigned int *)(v42 + 4020);
  v45 = &v43[v44];
  if ( v43 != v45 )
  {
    v46 = *(_QWORD **)(v42 + 4008);
    if ( v26 == (_QWORD *)*v43 )
      goto LABEL_36;
    do
    {
      if ( v45 == ++v46 )
        break;
    }
    while ( v26 != (_QWORD *)*v46 );
  }
  if ( (unsigned int)v44 < *(_DWORD *)(v42 + 4016) )
  {
    *(_DWORD *)(v42 + 4020) = v44 + 1;
    *v45 = v26;
    v43 = *(_QWORD **)(v42 + 4008);
    v46 = &v43[v44];
  }
  else
  {
LABEL_48:
    v46 = (_QWORD *)sub_2236760(v42 + 4008, v26);
    v43 = *(_QWORD **)(v42 + 4008);
    if ( !*(_BYTE *)(v42 + 4028) )
    {
      v47 = &v43[*(unsigned int *)(v42 + 4016)];
      goto LABEL_37;
    }
  }
LABEL_36:
  v47 = &v43[*(unsigned int *)(v42 + 4020)];
LABEL_37:
  if ( v47 != v46 && *v46 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v48 = v46 + 1;
    do
    {
      v49 = v48;
      if ( v47 == v48 )
        break;
      ++v48;
    }
    while ( *v49 >= 0xFFFFFFFFFFFFFFFELL );
  }
  a3[10] = v26[10];
  if ( a2[5] == v11 )
  {
LABEL_43:
    v50 = a2[2];
    v51 = *(_QWORD **)(v50 + 8);
    v52 = sub_1EE13A0((__int64)v51, *(_QWORD *)(v50 + 16), (__int64 *)(v50 + 32), (_DWORD *)(v50 + 24));
    v57 = sub_1EDB980(v51, v52, v53, v54, v55, v56);
    if ( v57 )
    {
      v58 = (_QWORD *)sub_BC3640(a3);
      *v58 = *v58 & 7LL | v57;
      v59 = a2[2];
      v60 = *(unsigned int *)(v59 + 24);
      *(_DWORD *)(v59 + 24) = v60 + 1;
      if ( *(_QWORD *)(*(_QWORD *)(v59 + 32) + 8 * v60) )
      {
        v61 = (_QWORD *)sub_BC3640(a3);
        *v61 |= 4uLL;
      }
    }
  }
LABEL_20:
  sub_1F458C0((__int64)a2, (__int64)a3);
  a3[7] = sub_1EE7800(a2[2]);
  v28 = a2[2];
  v29 = *(_QWORD **)(v28 + 8);
  v30 = sub_1EE13A0((__int64)v29, *(_QWORD *)(v28 + 16), (__int64 *)(v28 + 32), (_DWORD *)(v28 + 24));
  v35 = sub_1EDB980(v29, v30, v31, v32, v33, v34);
  if ( !a3[6] )
    a3[6] = v35;
  v36 = a2[2];
  v37 = *(unsigned int *)(v36 + 24);
  *(_DWORD *)(v36 + 24) = v37 + 1;
  *((_WORD *)a3 + 15) = *(_QWORD *)(*(_QWORD *)(v36 + 32) + 8 * v37) & 0x3FFF | *((_WORD *)a3 + 15) & 0xC000;
  return a1;
}
