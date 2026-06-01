__int64 __fastcall sub_41BA90(__int64 **a1, __int64 a2, unsigned int *a3, __int64 *a4)
{
  unsigned int v4; // r15d
  __int64 v6; // r13
  __int64 *v7; // r10
  unsigned int v8; // ebp
  __int64 v9; // r14
  unsigned int v10; // eax
  int v11; // r9d
  __int64 *v12; // r13
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 *v17; // rax
  unsigned int v18; // edx
  int v19; // edi
  int v20; // r8d
  __int64 *v21; // rax
  unsigned int v22; // edx
  int v23; // edi
  int v24; // ecx
  unsigned int v25; // eax
  int v27; // eax
  int v28; // r8d
  int v29; // r9d
  __int64 *v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // r12
  __int64 *v34; // rax
  unsigned int v35; // edx
  int v36; // edi
  int v37; // ecx
  __int64 v38; // r9
  int *v39; // r8
  __int64 v40; // rbp
  __int64 *v41; // rax
  unsigned int v42; // ecx
  unsigned int v43; // edx
  int v44; // edi
  unsigned __int64 v45; // rdx
  __int64 v46; // r15
  char *v47; // rsi
  unsigned int v48; // eax
  int v49; // r8d
  int v50; // r9d
  __int64 *v51; // r12
  unsigned int v52; // r13d
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // r14
  __int64 *v56; // rax
  unsigned int v57; // edx
  int v58; // edi
  int v59; // r8d
  int v60; // r9d
  __int64 *v61; // rax
  unsigned int v62; // edx
  int v63; // edi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  char v68; // [rsp+0h] [rbp-108h]
  __int64 *v69; // [rsp+0h] [rbp-108h]
  char v70; // [rsp+0h] [rbp-108h]
  char v71; // [rsp+0h] [rbp-108h]
  unsigned int v72; // [rsp+8h] [rbp-100h]
  unsigned __int64 v73; // [rsp+8h] [rbp-100h]
  unsigned int v74; // [rsp+20h] [rbp-E8h]
  unsigned int v75; // [rsp+24h] [rbp-E4h]
  __int64 v76; // [rsp+28h] [rbp-E0h]
  char v77; // [rsp+3Fh] [rbp-C9h] BYREF
  int v78; // [rsp+40h] [rbp-C8h] BYREF
  int v79[32]; // [rsp+44h] [rbp-C4h] BYREF
  int v80; // [rsp+C4h] [rbp-44h] BYREF
  unsigned __int64 v81; // [rsp+C8h] [rbp-40h]

  v4 = 0;
  v6 = *a4;
  v7 = *(__int64 **)(a2 + 1480);
  v81 = __readfsqword(0x28u);
  v8 = *a3;
  if ( (v6 & 0x600) != 0x400 || (v6 & 0xF0000000) != 0x60000000 )
  {
    v69 = v7;
    v9 = v6;
    while ( (unsigned __int8)is_enum(v9, v4) )
    {
      v10 = sub_400BA0(v69, &v77, v8, v4, nullptr);
      v12 = *a1;
      v13 = v10;
      v14 = (*a1)[1];
      v15 = **a1;
      if ( (*a1)[2] < (unsigned __int64)(v14 + 1) )
      {
        v72 = v10;
        v64 = qvector_reserve(*a1, v15, v14 + 1, 24);
        v14 = v12[1];
        v13 = v72;
        *v12 = v64;
        v15 = v64;
      }
      v16 = v15 + 24 * v14;
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = 0;
      ++v12[1];
      v17 = a1[1];
      v18 = *((_DWORD *)v17 + 2);
      v19 = (_DWORD)v17 + 16;
      if ( v13 >= v18 && v13 < *((_DWORD *)v17 + 3) )
      {
        *((_BYTE *)v17 + 16) = 43;
        v19 = (_DWORD)v17 + 17;
        v13 -= v18;
      }
      qsnprintf(v19, 63, (int)"%a", v13, v13, v11, (char)v69);
      v21 = a1[1];
      v22 = *((_DWORD *)v21 + 2);
      if ( v8 < v22 || v8 >= *((_DWORD *)v21 + 3) )
      {
        v23 = (_DWORD)v21 + 16;
        v24 = v8;
      }
      else
      {
        *((_BYTE *)v21 + 16) = 43;
        v23 = (_DWORD)v21 + 17;
        v24 = v8 - v22;
      }
      qsnprintf(v23, 63, (int)"%a", v24, v20, (_DWORD)v21 + 16, v70);
      sub_3573A0((char **)v16);
LABEL_12:
      v25 = v4 + 1;
      v4 = 1;
      if ( v25 == 2 )
        return 0;
    }
    if ( !(unsigned __int8)is_stroff(v9, v4) )
      goto LABEL_12;
    v27 = sub_3C3B30(v69, v79, &v80, v8, v4);
    v30 = *a1;
    v78 = v27;
    v31 = v30[1];
    v32 = *v30;
    if ( v30[2] < (unsigned __int64)(v31 + 1) )
    {
      v66 = qvector_reserve(v30, v32, v31 + 1, 24);
      v31 = v30[1];
      *v30 = v66;
      v32 = v66;
    }
    v33 = v32 + 24 * v31;
    *(_QWORD *)v33 = 0;
    *(_OWORD *)(v33 + 8) = 0;
    ++v30[1];
    v34 = a1[1];
    v35 = *((_DWORD *)v34 + 2);
    if ( v8 >= v35 && v8 < *((_DWORD *)v34 + 3) )
    {
      *((_BYTE *)v34 + 16) = 43;
      v36 = (_DWORD)v34 + 17;
      v37 = v8 - v35;
    }
    else
    {
      v36 = (_DWORD)v34 + 16;
      v37 = v8;
    }
    qsnprintf(v36, 63, (int)"%a", v37, v28, v29, (char)v69);
    sub_3573A0((char **)v33);
    v39 = &v78;
    if ( v78 <= 0 )
      goto LABEL_12;
    v74 = v8;
    v40 = 0;
    v75 = v4;
    while ( 1 )
    {
      if ( !v40 )
        goto LABEL_22;
      v38 = *(_QWORD *)(v33 + 8);
      if ( v38 )
      {
        v45 = v38 + 1;
        v46 = *(_QWORD *)(v33 + 8);
        v47 = *(char **)v33;
        --v38;
        if ( *(_QWORD *)(v33 + 16) < v45 )
          goto LABEL_43;
      }
      else
      {
        v47 = *(char **)v33;
        v46 = 1;
        v45 = 2;
        if ( *(_QWORD *)(v33 + 16) < 2u )
        {
LABEL_43:
          v76 = v38;
          v73 = v45;
          v65 = qvector_reserve(v33, v47, v45, 1);
          v38 = v76;
          v45 = v73;
          *(_QWORD *)v33 = v65;
          v47 = (char *)v65;
        }
      }
      *(_QWORD *)(v33 + 8) = v45;
      v47[v38] = 44;
      *(_BYTE *)(*(_QWORD *)v33 + v46) = 0;
LABEL_22:
      v41 = a1[1];
      v42 = v79[v40];
      v43 = *((_DWORD *)v41 + 2);
      v44 = (_DWORD)v41 + 16;
      if ( v42 >= v43 && v42 < *((_DWORD *)v41 + 3) )
      {
        *((_BYTE *)v41 + 16) = 43;
        v44 = (_DWORD)v41 + 17;
        v42 -= v43;
      }
      ++v40;
      qsnprintf(v44, 63, (int)"%a", v42, (int)v39, v38, (char)v69);
      sub_357520((__int64 *)v33);
      if ( v78 <= (int)v40 )
      {
        v8 = v74;
        v4 = v75;
        goto LABEL_12;
      }
    }
  }
  v48 = sub_3C3F20(v7, v8);
  v51 = *a1;
  v52 = v48;
  v53 = (*a1)[1];
  v54 = **a1;
  if ( (*a1)[2] < (unsigned __int64)(v53 + 1) )
  {
    v67 = qvector_reserve(*a1, v54, v53 + 1, 24);
    v53 = v51[1];
    *v51 = v67;
    v54 = v67;
  }
  v55 = v54 + 24 * v53;
  *(_QWORD *)v55 = 0;
  *(_OWORD *)(v55 + 8) = 0;
  ++v51[1];
  v56 = a1[1];
  v57 = *((_DWORD *)v56 + 2);
  v58 = (_DWORD)v56 + 16;
  if ( v52 >= v57 && v52 < *((_DWORD *)v56 + 3) )
  {
    *((_BYTE *)v56 + 16) = 43;
    v58 = (_DWORD)v56 + 17;
    v52 -= v57;
  }
  qsnprintf(v58, 63, (int)"%a", v52, v49, v50, v68);
  v61 = a1[1];
  v62 = *((_DWORD *)v61 + 2);
  v63 = (_DWORD)v61 + 16;
  if ( v8 >= v62 && v8 < *((_DWORD *)v61 + 3) )
  {
    *((_BYTE *)v61 + 16) = 43;
    v63 = (_DWORD)v61 + 17;
    v8 -= v62;
  }
  qsnprintf(v63, 63, (int)"%a", v8, v59, v60, v71);
  sub_3573A0((char **)v55);
  return 0;
}

