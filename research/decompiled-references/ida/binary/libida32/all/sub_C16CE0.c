__int64 __fastcall sub_C16CE0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 *v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  int *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  _BYTE *v19; // r12
  unsigned int *v20; // rsi
  unsigned int *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // r12d
  char v26; // dl
  unsigned __int8 **v27; // rax
  int *v28; // rbp
  int *v29; // rbx
  unsigned int v30; // r13d
  unsigned __int64 v31; // rbp
  _QWORD *v32; // rax
  _QWORD *v33; // r12
  _QWORD *v34; // rdx
  __int64 v35; // rbp
  int *v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rbp
  __int64 v40; // [rsp+0h] [rbp-278h]
  __int64 v41; // [rsp+0h] [rbp-278h]
  __int64 v42; // [rsp+8h] [rbp-270h]
  char v43; // [rsp+10h] [rbp-268h]
  unsigned __int8 v44; // [rsp+17h] [rbp-261h]
  void *v45; // [rsp+40h] [rbp-238h] BYREF
  unsigned int v46; // [rsp+48h] [rbp-230h]
  char v47; // [rsp+4Ch] [rbp-22Ch]
  unsigned int v48; // [rsp+50h] [rbp-228h] BYREF
  char v49; // [rsp+54h] [rbp-224h]
  __int64 v50; // [rsp+58h] [rbp-220h]
  unsigned int v51; // [rsp+60h] [rbp-218h]
  unsigned int v52; // [rsp+90h] [rbp-1E8h] BYREF
  char v53; // [rsp+94h] [rbp-1E4h]
  __int64 v54; // [rsp+98h] [rbp-1E0h]
  unsigned int v55; // [rsp+D0h] [rbp-1A8h] BYREF
  char v56; // [rsp+D4h] [rbp-1A4h]
  unsigned int v57; // [rsp+110h] [rbp-168h] BYREF
  char v58; // [rsp+114h] [rbp-164h]
  void *v59; // [rsp+118h] [rbp-160h]
  unsigned int v60; // [rsp+120h] [rbp-158h]
  char v61; // [rsp+124h] [rbp-154h]
  _BYTE *v62; // [rsp+150h] [rbp-128h] BYREF
  __int64 v63; // [rsp+158h] [rbp-120h]
  _BYTE v64[280]; // [rsp+160h] [rbp-118h] BYREF

  v4 = *a1;
  v48 = 0;
  v5 = *(unsigned __int64 **)(a2 + 24);
  v49 &= ~1u;
  v44 = sub_C167C0(v4, *v5, &v48);
  if ( !v44 )
    goto LABEL_2;
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *a1;
  v52 = 0;
  v53 &= ~1u;
  v9 = *(_QWORD *)(v7 + 8);
  v44 = sub_C167C0(v8, v9, &v52);
  if ( v44 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v14 = (unsigned int)*(unsigned __int8 *)(v13 + 16) - 57;
    if ( (unsigned int)v14 > 1 )
      v13 = sub_F3F310(v13, v9, v14, v10);
    v15 = *(unsigned int *)(v13 + 20);
    v16 = (int *)v64;
    v62 = v64;
    v63 = 0x400000000LL;
    if ( v15 > 4 )
    {
      sub_C021C0((__int64)&v62, v15);
      goto LABEL_10;
    }
    if ( (_DWORD)v15 )
    {
LABEL_10:
      v17 = 0;
      v42 = (unsigned int)(v15 - 1);
      while ( 1 )
      {
        v23 = *a1;
        v24 = *(_QWORD *)(a2 + 24);
        v55 = 0;
        v56 &= ~1u;
        v25 = v51;
        sub_BD3DC0((__int64)&v57, *(_QWORD *)(v24 + 8LL * (unsigned int)(v17 + 2)), v24, v10, v11, v12, v23, v42, v43);
        v46 = v60;
        if ( v60 > 0x40 )
          sub_21E17D0(&v45);
        else
          v45 = v59;
        v26 = v61;
        v47 = v61;
        if ( v57 > 1 )
        {
          sub_A2BBA0((int *)&v57);
          v26 = v47;
        }
        v18 = (__int64)v45;
        if ( v26 )
        {
          if ( v46 <= 0x40 )
            goto LABEL_14;
        }
        else if ( v46 <= 0x40 )
        {
          if ( !v46 )
          {
            v18 = 0;
            goto LABEL_15;
          }
          v18 = (__int64)((_QWORD)v45 << (64 - (unsigned __int8)v46)) >> (64 - (unsigned __int8)v46);
LABEL_14:
          if ( v18 == -1 )
            goto LABEL_31;
          goto LABEL_15;
        }
        v18 = *(_QWORD *)v45;
        if ( *(_QWORD *)v45 == -1 )
        {
LABEL_31:
          v27 = (unsigned __int8 **)sub_E0FED0(v40, a2, 4981, 0);
          if ( v27 )
            sub_AC60B0(v27, v17, 3u);
          if ( v46 > 0x40 && v45 )
            operator delete[](v45);
          if ( v55 > 1 )
            sub_A2BBA0((int *)&v55);
          v44 = 0;
          goto LABEL_39;
        }
LABEL_15:
        if ( v25 > v18 )
          sub_A30FE0((__int64)&v55, (int *)(v50 + 56 * v18));
        else
          sub_A30FE0((__int64)&v55, (int *)(v54 + 56LL * ((unsigned int)v18 - v25)));
        if ( v46 > 0x40 && v45 )
          operator delete[](v45);
        v19 = v62;
        v20 = &v55;
        v21 = (unsigned int *)&v62[56 * (unsigned int)v63];
        if ( (unsigned __int64)(unsigned int)v63 + 1 > HIDWORD(v63) )
        {
          v38 = (unsigned int)v63 + 1LL;
          if ( v62 > (_BYTE *)&v55 || v21 <= &v55 )
          {
            sub_C021C0((__int64)&v62, v38);
            v20 = &v55;
            v21 = (unsigned int *)&v62[56 * (unsigned int)v63];
          }
          else
          {
            sub_C021C0((__int64)&v62, v38);
            v20 = (unsigned int *)&v62[(char *)&v55 - v19];
            v21 = (unsigned int *)&v62[56 * (unsigned int)v63];
          }
        }
        sub_A2BB60((__int64)v21, (__int64)v20);
        LODWORD(v63) = v63 + 1;
        if ( v55 > 1 )
        {
          sub_A2BBA0((int *)&v55);
          v22 = v17 + 1;
          if ( v42 == v17 )
          {
LABEL_49:
            v16 = (int *)v62;
            v59 = nullptr;
            v58 &= ~1u;
            v30 = v63;
            v41 = (unsigned int)v63;
            v60 = 0;
            v31 = 56LL * (unsigned int)v63 + 8;
            v57 = 8;
            v32 = (_QWORD *)operator new[](v31);
            v33 = v32 + 1;
            *v32 = v41;
            if ( v41 )
            {
              v34 = v32 + 1;
              do
              {
                *(_DWORD *)v34 = 0;
                *((_BYTE *)v34 + 4) &= ~1u;
                v34 += 7;
              }
              while ( (_QWORD *)((char *)v32 + v31) != v34 );
            }
            goto LABEL_52;
          }
        }
        else
        {
          v22 = v17 + 1;
          if ( v42 == v17 )
            goto LABEL_49;
        }
        v17 = v22;
      }
    }
    v39 = (unsigned int)v63;
    v58 &= ~1u;
    v59 = nullptr;
    v30 = v63;
    v60 = 0;
    v57 = 8;
    v32 = (_QWORD *)operator new[](56LL * (unsigned int)v63 + 8);
    *v32 = v39;
    v33 = v32 + 1;
LABEL_52:
    v59 = v33;
    v60 = v30;
    if ( v30 )
    {
      v35 = (__int64)&v32[7 * v30 + 1];
      do
      {
        v36 = v16;
        v37 = (__int64)v33;
        v33 += 7;
        v16 += 14;
        sub_A30FE0(v37, v36);
      }
      while ( v33 != (_QWORD *)v35 );
    }
    sub_A30FE0(a1[1], (int *)&v57);
    if ( v57 > 1 )
      sub_A2BBA0((int *)&v57);
LABEL_39:
    v28 = (int *)v62;
    v29 = (int *)&v62[56 * (unsigned int)v63];
    if ( v62 != (_BYTE *)v29 )
    {
      do
      {
        while ( 1 )
        {
          v29 -= 14;
          if ( (unsigned int)*v29 > 1 )
            break;
          if ( v28 == v29 )
            goto LABEL_42;
        }
        sub_A2BBA0(v29);
      }
      while ( v28 != v29 );
LABEL_42:
      v29 = (int *)v62;
    }
    if ( v29 != (int *)v64 )
      free(v29);
  }
  if ( v52 > 1 )
    sub_A2BBA0((int *)&v52);
LABEL_2:
  if ( v48 > 1 )
    sub_A2BBA0((int *)&v48);
  return v44;
}

