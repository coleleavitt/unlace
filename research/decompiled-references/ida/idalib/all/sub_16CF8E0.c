__int64 __fastcall sub_16CF8E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned int v7; // r13d
  int v8; // r12d
  unsigned __int64 *v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // r14
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // rdi
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned int v27; // r14d
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v45; // eax
  __int64 *v46; // rsi
  unsigned int v47; // ecx
  __int64 v48; // rax
  unsigned __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // eax
  __int64 v54; // rsi
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned __int64 v59; // rax
  bool v60; // r12
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // r9
  int v64; // [rsp+8h] [rbp-E0h] BYREF
  int v65; // [rsp+Ch] [rbp-DCh] BYREF
  __int64 v66; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v68[25]; // [rsp+20h] [rbp-C8h] BYREF

  v7 = a4;
  v8 = a3;
  v10 = (unsigned __int64 *)a2;
  v11 = *(_QWORD *)a2;
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v12 + 16) == 13 && ((*(_WORD *)(v12 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    a2 = *(_QWORD *)a2;
    v48 = sub_1907C70(a1, a2);
    if ( v48 == 1 )
      return 1;
    v11 = v48 & 0xFFFFFFFFFFFFFFFELL;
    *v10 = v48 & 0xFFFFFFFFFFFFFFFELL;
  }
  if ( v8 == 6 )
  {
    v15 = 1;
    if ( !sub_F61920(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6) )
      goto LABEL_16;
LABEL_22:
    v29 = sub_A70970(*(_QWORD **)(a1 + 248));
    goto LABEL_23;
  }
  v13 = *(_QWORD *)(v11 + 8);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 42 )
  {
    v68[0] = *(_QWORD *)(v11 + 8);
    v29 = sub_6D5440(v68);
  }
  else
  {
    if ( *(_BYTE *)(v14 + 16) != 13
      || (v14 = *(unsigned __int16 *)(v14 + 18), LOWORD(v14) = ((unsigned __int16)v14 >> 3) & 0x1FF, (_WORD)v14 != 488) )
    {
      if ( v8 == 4 )
      {
        v15 = 1;
      }
      else
      {
        v15 = 0;
        if ( v8 != 3 )
        {
          v16 = sub_C00A40(v11, a2, v14, a4, a5);
          v15 = 0;
          sub_168B9F0((__int64)v68, (__int64 *)(a1 + 8), v16, 0x1311u, 0);
          if ( v8 == 5 )
          {
            v17 = 2;
            goto LABEL_11;
          }
LABEL_10:
          v17 = 0;
LABEL_11:
          v64 = v17;
          v18 = sub_16CF160((__int64)v68, (unsigned int *)&v64);
          if ( v8 == 3 || (v19 = 0, v15) )
            v19 = (v8 != 6) + 1;
          goto LABEL_18;
        }
      }
      if ( !sub_F61920(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), a2, v14, a4, a5, a6) )
      {
LABEL_16:
        v23 = sub_C00A40(*v10, a2, v20, v21, v22);
        sub_168B9F0((__int64)v68, (__int64 *)(a1 + 8), v23, 0x1311u, 0);
        if ( v8 == 4 )
        {
          v64 = 1;
          v24 = sub_16CF160((__int64)v68, (unsigned int *)&v64);
          v19 = 2;
          v18 = v24;
LABEL_18:
          v65 = v19;
          v25 = sub_16CF160(v18, (unsigned int *)&v65);
          v66 = *(_QWORD *)(*v10 + 8);
          v26 = sub_162B6D0(v25, &v66);
          v67 = sub_EEC8C0(*v10, (__int64)&v66, a7);
          sub_1587DB0(v26, &v67);
          sub_15F7200(v68);
          return 1;
        }
        if ( v8 == 6 )
        {
          v17 = 3;
          goto LABEL_11;
        }
        goto LABEL_10;
      }
      goto LABEL_22;
    }
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19056LL);
  }
LABEL_23:
  v27 = sub_16B5ED0(a1, v10, v29);
  if ( (_BYTE)v27 )
    return 1;
  if ( (_BYTE)v7 )
  {
    v34 = *v10;
    if ( v8 != 1 )
    {
      v39 = sub_BFB9F0(*v10);
      if ( ((*(_WORD *)v39 + 423) & 0x1FFu) > 4 )
        goto LABEL_27;
      if ( (unsigned int)sub_BFBE70(v39) != 1062
        || (v61 = 8 * (((*(_BYTE *)(v39 + 2) & 8) != 0) + 1LL),
            v34 = *(_QWORD *)(v39 + v61 + 40),
            v41 = *(_QWORD *)(v39 + v61 + 32),
            *(_OWORD *)(v39 + v61 + 32) == 0) )
      {
        v34 = *v10;
LABEL_27:
        v40 = *(_QWORD *)(a1 + 248);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
          goto LABEL_28;
        v41 = v34;
        v59 = sub_16B6930(v40, v34, v35, v36, v37, v38);
        if ( v59 )
        {
          v60 = (*(_BYTE *)(v59 + 28) & 0x7Fu) - 40 > 6;
          goto LABEL_49;
        }
LABEL_29:
        v45 = sub_C00A40(*v10, v41, v42, v43, v44);
        v46 = (__int64 *)(a1 + 8);
        v47 = 4869;
LABEL_30:
        v27 = v7;
        sub_168B9F0((__int64)v68, v46, v45, v47, 0);
        sub_15F7200(v68);
        return v27;
      }
      if ( !v41 )
      {
        if ( !v34 )
          return v27;
        v40 = *(_QWORD *)(a1 + 248);
LABEL_28:
        v41 = v40;
        if ( (unsigned __int8)sub_C3D680(v34, v40, 0, v36, v37, v38) )
          return v27;
        goto LABEL_29;
      }
      v62 = sub_16B6930(*(_QWORD *)(a1 + 248), v41, v35, v36, v37, v38);
      if ( v62 )
      {
        v60 = (*(_BYTE *)(v62 + 28) & 0x7Fu) - 40 > 6;
        if ( !v34 )
          goto LABEL_49;
      }
      else
      {
        if ( !v34 )
          goto LABEL_29;
        v60 = v7;
      }
      v41 = *(_QWORD *)(a1 + 248);
      if ( !(unsigned __int8)sub_C3D680(v34, v41, 0, v43, v44, v63) )
        goto LABEL_29;
LABEL_49:
      if ( !v60 )
        return v27;
      goto LABEL_29;
    }
    v54 = *v10;
    v55 = sub_16B6930(*(_QWORD *)(a1 + 248), *v10, v30, v31, v32, v33);
    if ( !v55 || (*(_BYTE *)(v55 + 28) & 0x7Fu) - 34 <= 5 && v56 )
    {
      v45 = sub_C00A40(*v10, v54, v56, v57, v58);
      v46 = (__int64 *)(a1 + 8);
      v47 = 4870;
      goto LABEL_30;
    }
  }
  else if ( (unsigned int)(v8 - 1) <= 1 )
  {
    v49 = *(_QWORD *)(a1 + 248);
    if ( (unsigned int)sub_BFE6E0(*v10, v49, 1, a7) )
    {
      v53 = sub_C00A40(*v10, v49, v50, v51, v52);
      sub_168B9F0((__int64)v68, (__int64 *)(a1 + 8), v53, (v8 == 1) + 7309, 0);
      v67 = sub_EEC8C0(*v10, a1 + 8, a7);
      sub_1587DB0((__int64)v68, &v67);
      sub_15F7200(v68);
    }
  }
  return v27;
}
