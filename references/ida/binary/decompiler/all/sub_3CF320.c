unsigned __int64 __fastcall sub_3CF320(__int64 **a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  size_t v4; // rbp
  __int64 v5; // r13
  unsigned __int64 v6; // r14
  __int64 *v7; // rax
  __int64 *v8; // rbp
  __int64 *v9; // r14
  char v10; // al
  __int64 v11; // r13
  __int64 v12; // rax
  char v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rax
  size_t v16; // r15
  size_t v17; // r9
  unsigned __int64 v18; // r11
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // r15
  size_t v23; // r9
  unsigned __int64 v24; // r11
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r15d
  __int64 v29; // rsi
  __int64 v30; // rax
  size_t v31; // r15
  size_t v32; // r9
  unsigned __int64 v33; // r11
  __int64 v34; // rsi
  __int64 v35; // rax
  const char *v36; // r15
  size_t v37; // rax
  __int64 v38; // r8
  size_t v39; // r10
  unsigned __int64 v40; // r11
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  unsigned __int64 *v46; // [rsp+0h] [rbp-F0h]
  char *v47; // [rsp+8h] [rbp-E8h]
  unsigned __int64 v48; // [rsp+10h] [rbp-E0h]
  size_t v49; // [rsp+18h] [rbp-D8h]
  __int64 v50; // [rsp+20h] [rbp-D0h]
  __int64 v51; // [rsp+28h] [rbp-C8h]
  int v52; // [rsp+34h] [rbp-BCh]
  __int64 v53; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+50h] [rbp-A0h]
  __int64 v55[4]; // [rsp+68h] [rbp-88h] BYREF
  __int64 v56[3]; // [rsp+88h] [rbp-68h] BYREF
  _BYTE src[5]; // [rsp+A6h] [rbp-4Ah] BYREF
  char v58; // [rsp+ABh] [rbp-45h] BYREF
  unsigned __int64 v59; // [rsp+B0h] [rbp-40h] BYREF

  v51 = a2;
  v52 = a3;
  v59 = __readfsqword(0x28u);
  v54 = 0;
  v47 = &v58;
  v53 = 0;
  v3 = pack_dd() - (_QWORD)src;
  v4 = v3;
  if ( v3 )
  {
    v5 = v54;
    v6 = v54 + v3;
    if ( __CFADD__((_QWORD)v54, v3) )
    {
      if ( (unsigned __int64)v54 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v54 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v54 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v5 + v53), src, v4);
        goto LABEL_7;
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v44 = v53;
    v45 = v54;
    if ( *((_QWORD *)&v54 + 1) < v6 )
    {
      v53 = qvector_reserve();
      v44 = v53;
      v45 = v54;
    }
    memset((void *)(v44 + v45), 0, v6 - v45);
    *(_QWORD *)&v54 = v6;
    goto LABEL_6;
  }
LABEL_7:
  v7 = a1[1];
  v8 = *a1;
  v46 = &v59;
  v9 = &v8[(_QWORD)v7];
  v10 = 0;
  if ( v9 == v8 )
  {
LABEL_56:
    if ( v53 )
      goto LABEL_57;
    return v59 - __readfsqword(0x28u);
  }
  do
  {
    v11 = *v8;
    if ( *(_QWORD *)(*v8 + 8) > 1u )
    {
      v12 = v54;
      v13 = *(_BYTE *)(v11 + 48);
      v14 = v53;
      if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
      {
        v53 = qvector_reserve();
        v14 = v53;
        v12 = v54;
      }
      *(_BYTE *)(v14 + v12) = v13;
      *(_QWORD *)&v54 = v54 + 1;
      v15 = pack_dq() - (_QWORD)src;
      v16 = v15;
      if ( !v15 )
      {
LABEL_23:
        v21 = pack_dq() - (_QWORD)src;
        v22 = v21;
        if ( !v21 )
          goto LABEL_29;
        v23 = v54;
        v24 = v54 + v21;
        if ( __CFADD__((_QWORD)v54, v21) )
        {
          if ( (unsigned __int64)v54 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v54 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v54 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_28;
          }
          v24 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v25 = v53;
        v26 = v54;
        if ( *((_QWORD *)&v54 + 1) < v24 )
        {
          v49 = v54;
          v48 = v24;
          v53 = qvector_reserve();
          v25 = v53;
          v23 = v49;
          v26 = v54;
          v24 = v48;
        }
        v49 = v23;
        v48 = v24;
        memset((void *)(v25 + v26), 0, v24 - v26);
        v23 = v49;
        *(_QWORD *)&v54 = v48;
LABEL_28:
        memcpy((void *)(v23 + v53), src, v22);
LABEL_29:
        v27 = v54;
        v28 = *(_DWORD *)(v11 + 40);
        v29 = v53;
        if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
        {
          v53 = qvector_reserve();
          v29 = v53;
          v27 = v54;
        }
        *(_BYTE *)(v29 + v27) = v28;
        *(_QWORD *)&v54 = v54 + 1;
        v30 = pack_dd() - (_QWORD)src;
        v31 = v30;
        if ( !v30 )
        {
LABEL_37:
          v36 = s1;
          if ( *(_QWORD *)(v11 + 8) )
            v36 = *(const char **)v11;
          if ( v36 )
          {
            v37 = strlen(v36);
            v38 = v54;
            v39 = v37 + 1;
            v40 = v37 + 1 + v54;
            if ( !__CFADD__(v37 + 1, (_QWORD)v54) )
              goto LABEL_41;
            if ( (unsigned __int64)v54 <= 0x7FFFFFFFFFFFFFFELL )
            {
              v41 = v53;
              v42 = v54;
              v40 = 0x7FFFFFFFFFFFFFFFLL;
              if ( *((_QWORD *)&v54 + 1) >= 0x7FFFFFFFFFFFFFFFuLL )
                goto LABEL_42;
              goto LABEL_60;
            }
            if ( (_QWORD)v54 == 0x7FFFFFFFFFFFFFFFLL )
            {
LABEL_12:
              memcpy((void *)(v38 + v53), v36, v39);
              v10 = 1;
              goto LABEL_13;
            }
          }
          else
          {
            v38 = v54;
            v39 = 1;
            v36 = (const char *)&unk_419691;
            v40 = v54 + 1;
            if ( (_QWORD)v54 != -1 )
            {
LABEL_41:
              v41 = v53;
              v42 = v38;
              if ( *((_QWORD *)&v54 + 1) >= v40 )
              {
LABEL_42:
                v50 = v38;
                v49 = v39;
                v48 = v40;
                memset((void *)(v41 + v42), 0, v40 - v42);
                v39 = v49;
                v38 = v50;
                *(_QWORD *)&v54 = v48;
                goto LABEL_12;
              }
LABEL_60:
              v50 = v38;
              v49 = v39;
              v48 = v40;
              v53 = qvector_reserve();
              v41 = v53;
              v38 = v50;
              v42 = v54;
              v39 = v49;
              v40 = v48;
              goto LABEL_42;
            }
            v38 = -1;
            v36 = (const char *)&unk_419691;
          }
          *(_QWORD *)&v54 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_12;
        }
        v32 = v54;
        v33 = v54 + v30;
        if ( __CFADD__((_QWORD)v54, v30) )
        {
          if ( (unsigned __int64)v54 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v54 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v54 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_36;
          }
          v33 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v34 = v53;
        v35 = v54;
        if ( *((_QWORD *)&v54 + 1) < v33 )
        {
          v49 = v54;
          v48 = v33;
          v53 = qvector_reserve();
          v34 = v53;
          v32 = v49;
          v35 = v54;
          v33 = v48;
        }
        v49 = v32;
        v48 = v33;
        memset((void *)(v34 + v35), 0, v33 - v35);
        v32 = v49;
        *(_QWORD *)&v54 = v48;
LABEL_36:
        memcpy((void *)(v32 + v53), src, v31);
        goto LABEL_37;
      }
      v17 = v54;
      v18 = v54 + v15;
      if ( __CFADD__((_QWORD)v54, v15) )
      {
        if ( (unsigned __int64)v54 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v54 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v54 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_22;
        }
        v18 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v19 = v53;
      v20 = v54;
      if ( *((_QWORD *)&v54 + 1) < v18 )
      {
        v49 = v54;
        v48 = v18;
        v53 = qvector_reserve();
        v19 = v53;
        v17 = v49;
        v20 = v54;
        v18 = v48;
      }
      v49 = v17;
      v48 = v18;
      memset((void *)(v19 + v20), 0, v18 - v20);
      v17 = v49;
      *(_QWORD *)&v54 = v48;
LABEL_22:
      memcpy((void *)(v17 + v53), src, v16);
      goto LABEL_23;
    }
LABEL_13:
    ++v8;
  }
  while ( v9 != v8 );
  if ( !v10 )
    goto LABEL_56;
  sub_80DE0((__int64)v55, "$ mbui.comments");
  sub_F3E30(v55);
  netnode_check();
  sub_3C71E0(v56, &v53);
  netnode_supset();
  if ( v56[0] )
  {
    v56[1] = 0;
    qfree();
  }
  if ( v55[0] )
  {
    v55[1] = 0;
    qfree();
  }
  if ( v53 )
  {
LABEL_57:
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  return v59 - __readfsqword(0x28u);
}
