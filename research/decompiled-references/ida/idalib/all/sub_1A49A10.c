__int64 __fastcall sub_1A49A10(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v8; // r14
  __int64 *v11; // r15
  int v12; // r12d
  unsigned int v13; // ebp
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  bool v17; // zf
  int v18; // eax
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 **v33; // rax
  __int64 **v34; // rcx
  unsigned __int64 v35; // r12
  int v36; // eax
  __int64 v37; // rdx
  __int64 *v38; // rdi
  int v39; // eax
  int v40; // edx
  int v42; // eax
  int v43; // edx
  __int64 v44; // rdi
  __int64 (*v45)(); // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rsi
  _QWORD *v51; // rdx
  _QWORD *v52; // rdi
  __int64 *v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rdi
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  char v65; // [rsp+0h] [rbp-78h]
  int v66; // [rsp+Ch] [rbp-6Ch]
  char v67; // [rsp+10h] [rbp-68h]
  __int64 v68; // [rsp+10h] [rbp-68h]
  __int64 v69; // [rsp+28h] [rbp-50h] BYREF
  __int64 v70; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v71; // [rsp+38h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 120);
  v67 = a4;
  if ( !v8 )
    return 0;
  v11 = a3;
  v12 = *(_DWORD *)(a2 + 152);
  v13 = ((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) >> 3) ^ 1) & 1;
  LOBYTE(v13) = a5 | v13;
  if ( !(_BYTE)v13 )
  {
    if ( (unsigned __int8)sub_1A48AA0(a1, a2, a3, a7, a8, a4, a5, a6) )
      return 1;
    goto LABEL_59;
  }
  if ( v12 == 9 )
  {
    while ( 1 )
    {
      v27 = *((_DWORD *)v11 + 2);
      if ( (v27 & 8) != 0 )
      {
        if ( (v27 & 0x80u) != 0 )
          break;
        v26 = v11[45];
        if ( !v26 || !sub_B8E490(v26) )
          break;
      }
      v11 = (__int64 *)*v11;
    }
  }
  v14 = *(_DWORD *)(a2 + 156);
  v15 = v14;
  BYTE1(v15) = BYTE1(v14) | 8;
  v66 = v14 & 0x800;
  v16 = v14;
  BYTE1(v16) = BYTE1(v14) & 0xF7;
  v17 = (v14 & 0x420) == 0;
  v18 = v15;
  if ( v17 )
    v18 = v16;
  *(_DWORD *)(a2 + 156) = v18;
  v19 = sub_15C1650(a1 + 2608, v8);
  v69 = v19;
  if ( !v19 )
  {
LABEL_56:
    v42 = *(_DWORD *)(a2 + 156);
    v43 = v42;
    BYTE1(v42) |= 8u;
    BYTE1(v43) &= ~8u;
    if ( !v66 )
      v42 = v43;
    *(_DWORD *)(a2 + 156) = v42;
LABEL_59:
    if ( v67 && (unsigned __int8)sub_1A4ED10(a1, a2) )
      return 1;
    v44 = *(_QWORD *)(a1 + 552);
    if ( v44 )
    {
      v45 = *(__int64 (**)())(*(_QWORD *)v44 + 296LL);
      if ( v45 != sub_12E4E60 )
        return ((unsigned int (__fastcall *)(__int64, __int64, __int64 *))v45)(v44, a2, v11);
    }
    return 0;
  }
  v23 = &v69;
  v65 = 0;
  while ( 1 )
  {
    v24 = v19;
    if ( (v19 & 1) != 0 )
      v24 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFELL);
    v25 = (__int64)sub_1A47770(a2, v24, (__int64)v23, v20, v21, v22);
    if ( v25 )
      break;
LABEL_55:
    if ( (v69 & 1) == 0 )
      goto LABEL_56;
LABEL_15:
    sub_15C20B0(&v69);
    v19 = v69;
    if ( !v69 )
      goto LABEL_56;
  }
  if ( v12 == 9 )
  {
    v28 = v69;
    v29 = v69 & 1;
    if ( !v65 )
    {
      v30 = v69;
      if ( (v69 & 1) != 0 )
        v30 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFELL);
      if ( sub_A5F460((__int64)(v11 + 10), v30) )
        goto LABEL_27;
      v28 = v69;
      v29 = v69 & 1;
    }
    if ( v29 )
      v28 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFELL);
    if ( (unsigned __int8)sub_B843B0((_BYTE *)v28) )
      goto LABEL_27;
    *(_BYTE *)(a2 + 166) = 1;
    v65 = v13;
    goto LABEL_55;
  }
  if ( v12 != 12 )
    goto LABEL_27;
  if ( (v69 & 1) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFELL) + 28LL) & 0x7F) == 0x2D )
      goto LABEL_27;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(v69 + 28) & 0x7F) != 0x2D )
    goto LABEL_56;
LABEL_27:
  v71 = v25 | (*(_BYTE *)(v25 + 29) >> 5) & 3;
  v31 = v71;
  sub_1743080(a2 + 8, v71);
  v32 = v69;
  *(_DWORD *)a2 = 2;
  if ( !v32 )
    goto LABEL_46;
  if ( !v11 )
  {
LABEL_39:
    v37 = v32;
    if ( (v32 & 1) != 0 )
      v37 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFELL);
    v38 = (__int64 *)(*(_QWORD *)(v37 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    v11 = nullptr;
    if ( (*(_QWORD *)(v37 + 16) & 4) != 0 )
      v35 = sub_B8EAA0(*v38);
    else
      v35 = sub_B8EAA0((__int64)v38);
    goto LABEL_43;
  }
  while ( 2 )
  {
    if ( !*((_BYTE *)v11 + 100) )
    {
      v31 = v25;
      if ( sub_2236570(v11 + 10, v25) )
        goto LABEL_34;
LABEL_64:
      v11 = (__int64 *)*v11;
      if ( !v11 )
        goto LABEL_38;
      continue;
    }
    break;
  }
  v33 = (__int64 **)v11[10];
  v34 = &v33[*((unsigned int *)v11 + 23)];
  if ( v33 == v34 )
    goto LABEL_64;
  while ( (__int64 *)v25 != *v33 )
  {
    if ( v34 == ++v33 )
      goto LABEL_64;
  }
LABEL_34:
  v35 = 0;
  if ( *((char *)v11 + 8) >= 0 )
  {
    v35 = v11[45];
    if ( v35 )
    {
      v36 = *(_BYTE *)(v35 + 8) & 0x7F;
      if ( (*(_BYTE *)(v35 + 8) & 0x7F) == 0 || (v35 = 0, v36 == 24) )
      {
LABEL_38:
        v32 = v69;
        goto LABEL_39;
      }
    }
  }
LABEL_43:
  v70 = v69;
  if ( (v69 & 1) != 0 )
  {
    sub_15C20B0(&v70);
    v48 = v70;
    if ( v70 )
    {
      v49 = v70 & 1;
      if ( v11 )
        goto LABEL_71;
LABEL_85:
      if ( v49 )
        v48 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFELL);
      v54 = *(_QWORD *)(v48 + 16);
      v55 = (_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v54 & 4) != 0 )
        v55 = (_QWORD *)*v55;
      v56 = sub_B8EAA0((__int64)v55);
      if ( v35 )
      {
        v68 = sub_B91570(v56, v31, v57, v58, v59, v60);
        if ( v68 == sub_B91570(v35, v31, v61, v62, v63, v64) )
        {
LABEL_93:
          v48 = v70;
          v49 = v70 & 1;
          while ( 1 )
          {
            v31 = v48;
            if ( v49 )
              v31 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFELL);
            v53 = sub_1A47770(a2, v31, (__int64)v51, v49, v46, v47);
            if ( v53 )
            {
              v71 = (unsigned __int64)v53 | (*((_BYTE *)v53 + 29) >> 5) & 3;
              v31 = v71;
              sub_1743080(a2 + 8, v71);
              *(_DWORD *)a2 = 2;
            }
            if ( (v70 & 1) == 0 )
              goto LABEL_44;
            sub_15C20B0(&v70);
            v48 = v70;
            if ( !v70 )
              break;
            v49 = v70 & 1;
            if ( !v11 )
              goto LABEL_85;
LABEL_71:
            v50 = v48;
            if ( v49 )
              v50 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFELL);
            if ( !*((_BYTE *)v11 + 100) )
            {
              if ( !sub_2236570(v11 + 10, v50) )
                break;
              goto LABEL_93;
            }
            v51 = (_QWORD *)v11[10];
            v52 = &v51[*((unsigned int *)v11 + 23)];
            if ( v51 == v52 )
              break;
            while ( v50 != *v51 )
            {
              if ( v52 == ++v51 )
                goto LABEL_45;
            }
          }
        }
      }
    }
  }
  else
  {
LABEL_44:
    v70 = 0;
  }
LABEL_45:
  sub_1A43500(a2);
LABEL_46:
  v39 = *(_DWORD *)(a2 + 156);
  v40 = v39;
  BYTE1(v39) |= 8u;
  BYTE1(v40) &= ~8u;
  if ( !v66 )
    v39 = v40;
  *(_DWORD *)(a2 + 156) = v39;
  return v13;
}
