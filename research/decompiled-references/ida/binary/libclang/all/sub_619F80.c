__int64 __fastcall sub_619F80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // r13d
  int v11; // ecx
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  bool v14; // al
  unsigned int v15; // r9d
  unsigned int v16; // r13d
  int v17; // r15d
  __int64 v18; // rcx
  unsigned int v19; // r15d
  int v20; // r8d
  _DWORD *v21; // rdx
  _DWORD *v22; // rax
  bool v23; // al
  int v24; // eax
  int v26; // eax
  unsigned __int64 v27; // r10
  __int64 v28; // rax
  _DWORD *v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  _DWORD *v36; // rax
  unsigned __int64 v37; // r15
  __int64 v38; // rax
  _QWORD *v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // r11
  __int64 v44; // rax
  __int64 *v45; // rdi
  __int64 v46; // rsi
  _DWORD *v47; // rax
  _DWORD *v48; // rdx
  __int64 *v49; // rdi
  __int64 v50; // rdx
  _DWORD *v51; // rax
  _DWORD *v52; // rdx
  __int64 *v53; // rdi
  __int64 v54; // rsi
  _DWORD *v55; // rax
  _DWORD *v56; // rdx
  __int64 *v57; // rdi
  __int64 v58; // rsi
  _DWORD *v59; // rax
  _DWORD *v60; // rdx
  unsigned int v61; // [rsp+0h] [rbp-78h]
  unsigned int v62; // [rsp+0h] [rbp-78h]
  int v63; // [rsp+0h] [rbp-78h]
  unsigned int v64; // [rsp+0h] [rbp-78h]
  char v65; // [rsp+0h] [rbp-78h]
  char v66; // [rsp+0h] [rbp-78h]
  _QWORD *v67; // [rsp+0h] [rbp-78h]
  unsigned int v68; // [rsp+8h] [rbp-70h]
  _QWORD *v69; // [rsp+8h] [rbp-70h]
  _QWORD *v70; // [rsp+8h] [rbp-70h]
  _QWORD *v71; // [rsp+8h] [rbp-70h]
  int v72; // [rsp+14h] [rbp-64h]
  int v73; // [rsp+14h] [rbp-64h]
  unsigned int v74; // [rsp+14h] [rbp-64h]
  unsigned int v75; // [rsp+18h] [rbp-60h]
  int v76; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v77; // [rsp+20h] [rbp-58h] BYREF
  __int64 v78; // [rsp+28h] [rbp-50h]
  int v79; // [rsp+30h] [rbp-48h]

  if ( *(_BYTE *)(a3 + 81) )
    goto LABEL_23;
  v6 = *(_QWORD *)(a3 + 8);
  v7 = a1;
  v8 = *(_QWORD *)(v6 + 32);
  if ( (int)a1 < 0 )
    v7 = sub_CADBE0(*(_QWORD *)(v6 + 32), (unsigned int)a1);
  v9 = *(int *)(v8 + 408);
  v10 = v7 & 0x7FFFFFFF;
  v11 = v9 + 1;
  if ( (unsigned int)(v9 + 1) <= 1 )
  {
    v12 = *(_DWORD **)(v8 + 184);
    if ( v10 < (*v12 & 0x7FFFFFFFu) )
      goto LABEL_26;
    goto LABEL_7;
  }
  if ( (int)v9 >= 0 )
  {
    v12 = *(_DWORD **)(v8 + 184);
    if ( v10 < (v12[6 * v9] & 0x7FFFFFFFu) )
      goto LABEL_26;
LABEL_7:
    if ( *(_DWORD *)(v8 + 192) != v11 )
    {
      v13 = &v12[6 * v11];
LABEL_9:
      v14 = v10 < (*v13 & 0x7FFFFFFFu);
      goto LABEL_10;
    }
    goto LABEL_27;
  }
  v34 = (unsigned int)(-2 - v9);
  v35 = *(_QWORD *)(*(_QWORD *)(v8 + 256) + 8LL * ((unsigned int)(-2 - v9) >> 6));
  if ( _bittest64(&v35, v34) )
  {
    v41 = (_QWORD *)(*(_QWORD *)(v8 + 208) + 8 * ((unsigned __int64)(int)v34 >> 5));
    v42 = *v41;
    if ( !*v41 )
    {
      v45 = (__int64 *)(*(_QWORD *)(v8 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v46 = *v45;
      v45[10] += 768;
      v47 = (_DWORD *)((v46 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v45[1] >= (unsigned __int64)(v47 + 192) && v46 )
      {
        *v45 = (__int64)(v47 + 192);
      }
      else
      {
        v69 = v41;
        v47 = (_DWORD *)sub_5F8390((__int64)v45, 768, 3);
        v11 = v9 + 1;
        v41 = v69;
        LOBYTE(v34) = -2 - v9;
      }
      *v41 = v47;
      v48 = v47 + 192;
      do
      {
        *v47 = 0;
        v47 += 6;
        *((_OWORD *)v47 - 1) = 0;
      }
      while ( v47 != v48 );
      v42 = *v41;
    }
    v36 = (_DWORD *)(v42 + 24 * (v34 & 0x1F));
  }
  else
  {
    v36 = (_DWORD *)sub_CA9380(v8, (unsigned int)v34, 0);
    v11 = v9 + 1;
  }
  if ( v10 < (*v36 & 0x7FFFFFFFu) )
    goto LABEL_26;
  if ( (_DWORD)v9 == -2 )
    goto LABEL_11;
  if ( *(_DWORD *)(v8 + 192) != v11 )
  {
    v37 = (unsigned int)(-2 - v11);
    v38 = *(_QWORD *)(*(_QWORD *)(v8 + 256) + 8LL * ((unsigned int)(-2 - v11) >> 6));
    if ( _bittest64(&v38, v37) )
    {
      v39 = (_QWORD *)(*(_QWORD *)(v8 + 208) + 8 * ((unsigned __int64)(int)v37 >> 5));
      v40 = *v39;
      if ( !*v39 )
      {
        v53 = (__int64 *)(*(_QWORD *)(v8 + 224) & 0xFFFFFFFFFFFFFFF8LL);
        v54 = *v53;
        v53[10] += 768;
        v55 = (_DWORD *)((v54 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v53[1] >= (unsigned __int64)(v55 + 192) && v54 )
        {
          *v53 = (__int64)(v55 + 192);
        }
        else
        {
          v67 = v39;
          v55 = (_DWORD *)sub_5F8390((__int64)v53, 768, 3);
          v39 = v67;
        }
        *v39 = v55;
        v56 = v55 + 192;
        do
        {
          *v55 = 0;
          v55 += 6;
          *((_OWORD *)v55 - 1) = 0;
        }
        while ( v55 != v56 );
        v40 = *v39;
      }
      v13 = (_DWORD *)(v40 + 24 * (v37 & 0x1F));
    }
    else
    {
      v13 = (_DWORD *)sub_CA9380(v8, (unsigned int)v37, 0);
    }
    goto LABEL_9;
  }
LABEL_27:
  v14 = v10 < *(_DWORD *)(v8 + 248);
LABEL_10:
  if ( v14 )
  {
LABEL_11:
    v15 = *(_DWORD *)(v8 + 408);
    goto LABEL_12;
  }
LABEL_26:
  v15 = sub_CA9700(v8, v10);
LABEL_12:
  v16 = v15;
  v17 = HIDWORD(a1);
  if ( a1 < 0 )
  {
    v62 = v15;
    v26 = sub_CADBE0(v8, HIDWORD(a1));
    v15 = v62;
    v17 = v26;
  }
  v18 = *(int *)(v8 + 408);
  v19 = v17 & 0x7FFFFFFF;
  v20 = v18 + 1;
  if ( (unsigned int)(v18 + 1) <= 1 )
  {
    v21 = *(_DWORD **)(v8 + 184);
    if ( v19 < (*v21 & 0x7FFFFFFFu) )
      goto LABEL_29;
    goto LABEL_17;
  }
  if ( (int)v18 >= 0 )
  {
    v21 = *(_DWORD **)(v8 + 184);
    if ( v19 < (v21[6 * v18] & 0x7FFFFFFFu) )
      goto LABEL_29;
LABEL_17:
    if ( v20 != *(_DWORD *)(v8 + 192) )
    {
      v22 = &v21[6 * v20];
LABEL_19:
      v23 = v19 < (*v22 & 0x7FFFFFFFu);
      goto LABEL_20;
    }
    goto LABEL_30;
  }
  v27 = (unsigned int)(-2 - v18);
  v28 = *(_QWORD *)(*(_QWORD *)(v8 + 256) + 8LL * ((unsigned int)(-2 - v18) >> 6));
  if ( _bittest64(&v28, v27) )
  {
    v43 = (_QWORD *)(*(_QWORD *)(v8 + 208) + 8 * ((unsigned __int64)(int)v27 >> 5));
    v44 = *v43;
    if ( !*v43 )
    {
      v49 = (__int64 *)(*(_QWORD *)(v8 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v50 = *v49;
      v49[10] += 768;
      v51 = (_DWORD *)((v50 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v49[1] >= (unsigned __int64)(v51 + 192) && v50 )
      {
        *v49 = (__int64)(v51 + 192);
      }
      else
      {
        v76 = v18 + 1;
        v75 = v15;
        v73 = v18;
        v70 = v43;
        v65 = -2 - v18;
        v51 = (_DWORD *)sub_5F8390((__int64)v49, 768, 3);
        v20 = v76;
        v15 = v75;
        LODWORD(v18) = v73;
        v43 = v70;
        LOBYTE(v27) = v65;
      }
      *v43 = v51;
      v52 = v51 + 192;
      do
      {
        *v51 = 0;
        v51 += 6;
        *((_OWORD *)v51 - 1) = 0;
      }
      while ( v52 != v51 );
      v44 = *v43;
    }
    v29 = (_DWORD *)(v44 + 24 * (v27 & 0x1F));
  }
  else
  {
    v72 = v18 + 1;
    v68 = v15;
    v63 = *(_DWORD *)(v8 + 408);
    v29 = (_DWORD *)sub_CA9380(v8, (unsigned int)v27, 0);
    LODWORD(v18) = v63;
    v15 = v68;
    v20 = v72;
  }
  if ( v19 < (*v29 & 0x7FFFFFFFu) )
    goto LABEL_29;
  if ( (_DWORD)v18 == -2 )
    goto LABEL_21;
  if ( *(_DWORD *)(v8 + 192) != v20 )
  {
    v30 = (unsigned int)(-2 - v20);
    v31 = *(_QWORD *)(*(_QWORD *)(v8 + 256) + 8LL * ((unsigned int)(-2 - v20) >> 6));
    if ( _bittest64(&v31, v30) )
    {
      v32 = (_QWORD *)(*(_QWORD *)(v8 + 208) + 8 * ((unsigned __int64)(int)v30 >> 5));
      v33 = *v32;
      if ( !*v32 )
      {
        v57 = (__int64 *)(*(_QWORD *)(v8 + 224) & 0xFFFFFFFFFFFFFFF8LL);
        v58 = *v57;
        v57[10] += 768;
        v59 = (_DWORD *)((v58 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v57[1] >= (unsigned __int64)(v59 + 192) && v58 )
        {
          *v57 = (__int64)(v59 + 192);
        }
        else
        {
          v74 = v15;
          v71 = v32;
          v66 = v30;
          v59 = (_DWORD *)sub_5F8390((__int64)v57, 768, 3);
          v15 = v74;
          v32 = v71;
          LOBYTE(v30) = v66;
        }
        *v32 = v59;
        v60 = v59 + 192;
        do
        {
          *v59 = 0;
          v59 += 6;
          *((_OWORD *)v59 - 1) = 0;
        }
        while ( v60 != v59 );
        v33 = *v32;
      }
      v22 = (_DWORD *)(v33 + 24 * (v30 & 0x1F));
    }
    else
    {
      v64 = v15;
      v22 = (_DWORD *)sub_CA9380(v8, (unsigned int)v30, 0);
      v15 = v64;
    }
    goto LABEL_19;
  }
LABEL_30:
  v23 = v19 < *(_DWORD *)(v8 + 248);
LABEL_20:
  if ( v23 )
  {
LABEL_21:
    v24 = *(_DWORD *)(v8 + 408);
    goto LABEL_22;
  }
LABEL_29:
  v61 = v15;
  v24 = sub_CA9700(v8, v19);
  v15 = v61;
LABEL_22:
  if ( v24 != v15 )
LABEL_23:
    v16 = 0;
  sub_11ED8D0(&v77, a2, a1);
  return sub_619CC0((_QWORD *)a3, v77, v78, v79, a2, v16);
}

