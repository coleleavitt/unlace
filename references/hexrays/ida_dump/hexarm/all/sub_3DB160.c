unsigned __int64 __fastcall sub_3DB160(__int64 **a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  size_t v4; // rbx
  __int64 v5; // r13
  unsigned __int64 v6; // r15
  __int64 *v7; // rbx
  __int64 v8; // rbp
  char v9; // al
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int8 v12; // r15
  unsigned __int8 *v13; // rsi
  const char *v14; // r15
  size_t v15; // rax
  __int64 v16; // r8
  size_t v17; // r10
  unsigned __int64 v18; // r11
  unsigned __int8 *v19; // rsi
  __int64 v20; // rax
  unsigned __int8 *v22; // rsi
  __int64 v23; // rax
  const char *v24; // rdx
  const char *v25; // rsi
  unsigned __int64 v27; // [rsp+8h] [rbp-D8h]
  unsigned __int64 v28; // [rsp+8h] [rbp-D8h]
  size_t v29; // [rsp+10h] [rbp-D0h]
  size_t v30; // [rsp+10h] [rbp-D0h]
  __int64 v31; // [rsp+18h] [rbp-C8h]
  __int64 v32; // [rsp+18h] [rbp-C8h]
  __int64 v34; // [rsp+30h] [rbp-B0h] BYREF
  unsigned __int8 *v35; // [rsp+38h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+40h] [rbp-A0h]
  char *v37; // [rsp+58h] [rbp-88h] BYREF
  __int128 v38; // [rsp+60h] [rbp-80h]
  __int64 v39; // [rsp+78h] [rbp-68h] BYREF
  __int64 v40; // [rsp+80h] [rbp-60h]
  _BYTE src[5]; // [rsp+9Bh] [rbp-45h] BYREF
  unsigned __int64 v42[8]; // [rsp+A0h] [rbp-40h] BYREF

  v42[0] = __readfsqword(0x28u);
  v36 = 0;
  v35 = nullptr;
  v3 = pack_dd(src, v42, 2) - (_QWORD)src;
  v4 = v3;
  if ( v3 )
  {
    v5 = v36;
    v6 = v36 + v3;
    if ( __CFADD__((_QWORD)v36, v3) )
    {
      if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy(&v35[v5], src, v4);
        goto LABEL_7;
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v22 = v35;
    v23 = v36;
    if ( *((_QWORD *)&v36 + 1) < v6 )
    {
      v35 = (unsigned __int8 *)qvector_reserve(&v35, v35, v6, 1);
      v22 = v35;
      v23 = v36;
    }
    memset(&v22[v23], 0, v6 - v23);
    *(_QWORD *)&v36 = v6;
    goto LABEL_6;
  }
LABEL_7:
  v7 = *a1;
  v8 = (__int64)&(*a1)[(_QWORD)a1[1]];
  v9 = 0;
  if ( (__int64 *)v8 == *a1 )
  {
LABEL_27:
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35);
    }
    return v42[0] - __readfsqword(0x28u);
  }
  do
  {
    v10 = *v7;
    if ( *(_QWORD *)(*v7 + 8) > 1u )
    {
      v11 = v36;
      v12 = *(_BYTE *)(v10 + 48);
      v13 = v35;
      if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
      {
        v35 = (unsigned __int8 *)qvector_reserve(&v35, v35, v36 + 1, 1);
        v13 = v35;
        v11 = v36;
      }
      v13[v11] = v12;
      *(_QWORD *)&v36 = v36 + 1;
      sub_802B0(v10 + 24, (__int64 *)&v35, a2);
      v14 = s1;
      if ( *(_QWORD *)(v10 + 8) )
        v14 = *(const char **)v10;
      if ( v14 )
      {
        v15 = strlen(v14);
        v16 = v36;
        v17 = v15 + 1;
        v18 = v15 + 1 + v36;
        if ( !__CFADD__(v15 + 1, (_QWORD)v36) )
          goto LABEL_21;
        if ( (unsigned __int64)v36 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v19 = v35;
          v20 = v36;
          v18 = 0x7FFFFFFFFFFFFFFFLL;
          if ( *((_QWORD *)&v36 + 1) >= 0x7FFFFFFFFFFFFFFFuLL )
            goto LABEL_22;
          goto LABEL_31;
        }
        if ( (_QWORD)v36 == 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_12:
          memcpy(&v35[v16], v14, v17);
          v9 = 1;
          goto LABEL_13;
        }
      }
      else
      {
        v16 = v36;
        v17 = 1;
        v14 = (const char *)&unk_412793;
        v18 = v36 + 1;
        if ( (_QWORD)v36 != -1 )
        {
LABEL_21:
          v19 = v35;
          v20 = v16;
          if ( *((_QWORD *)&v36 + 1) >= v18 )
          {
LABEL_22:
            v31 = v16;
            v29 = v17;
            v27 = v18;
            memset(&v19[v20], 0, v18 - v20);
            v17 = v29;
            v16 = v31;
            *(_QWORD *)&v36 = v27;
            goto LABEL_12;
          }
LABEL_31:
          v32 = v16;
          v30 = v17;
          v28 = v18;
          v35 = (unsigned __int8 *)qvector_reserve(&v35, v19, v18, 1);
          v19 = v35;
          v16 = v32;
          v20 = v36;
          v17 = v30;
          v18 = v28;
          goto LABEL_22;
        }
        v16 = -1;
        v14 = (const char *)&unk_412793;
      }
      *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_12;
    }
LABEL_13:
    ++v7;
  }
  while ( (__int64 *)v8 != v7 );
  if ( !v9 )
    goto LABEL_27;
  v38 = 0;
  v37 = nullptr;
  v37 = (char *)qvector_reserve(&v37, 0, 16, 1);
  *(_QWORD *)&v38 = 16;
  strcpy(v37, "$ mbui.comments");
  switch ( a3 )
  {
    case 0:
      v24 = "MMAT_ZERO";
      break;
    case 1:
      v24 = "MMAT_GENERATED";
      break;
    case 2:
      v24 = "MMAT_PREOPTIMIZED";
      break;
    case 3:
      v24 = "MMAT_LOCOPT";
      break;
    case 4:
      v24 = "MMAT_CALLS";
      break;
    case 5:
      v24 = "MMAT_GLBOPT1";
      break;
    case 6:
      v24 = "MMAT_GLBOPT2";
      break;
    case 7:
      v24 = "MMAT_GLBOPT3";
      break;
    case 8:
      v24 = "MMAT_LVARS";
      break;
    case 9:
      v24 = "MMAT_FINAL";
      break;
    default:
      v24 = "???";
      break;
  }
  sub_FA510((__int64 *)&v37, (__int64)".%s", v24);
  v25 = s1;
  if ( (_QWORD)v38 )
    v25 = v37;
  netnode_check(&v34, v25, 0, 1);
  sub_3D1CB0(&v39, &v35, 1);
  netnode_supset(v34, a2, v39, (v40 == 0) + v40 - 1, 339);
  if ( v39 )
  {
    v40 = 0;
    qfree(v39);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  return v42[0] - __readfsqword(0x28u);
}
