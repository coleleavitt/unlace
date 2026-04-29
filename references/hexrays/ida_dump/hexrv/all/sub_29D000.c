unsigned __int64 __fastcall sub_29D000(_QWORD *a1, const __m128i **a2)
{
  __int64 v3; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  int v6; // eax
  _DWORD *v7; // rbp
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // r13d
  int v12; // eax
  unsigned int *v13; // rcx
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rax
  int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 tinfo_property; // rax
  int v24; // eax
  __int64 v25; // rdi
  __int64 v27; // rdx
  unsigned int v28; // eax
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned int v33; // ecx
  __int64 v34; // [rsp+8h] [rbp-140h]
  __int64 v35; // [rsp+8h] [rbp-140h]
  int v36; // [rsp+10h] [rbp-138h]
  __int64 v37; // [rsp+10h] [rbp-138h]
  char v38; // [rsp+10h] [rbp-138h]
  unsigned int *v39; // [rsp+10h] [rbp-138h]
  int v40; // [rsp+18h] [rbp-130h]
  bool v41; // [rsp+18h] [rbp-130h]
  char v42; // [rsp+18h] [rbp-130h]
  __int64 v44; // [rsp+30h] [rbp-118h] BYREF
  __int64 v45; // [rsp+38h] [rbp-110h] BYREF
  __int64 v46; // [rsp+40h] [rbp-108h] BYREF
  __int64 v47; // [rsp+48h] [rbp-100h] BYREF
  _QWORD v48[2]; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v49; // [rsp+60h] [rbp-E8h]
  __int128 v50; // [rsp+68h] [rbp-E0h]
  __int64 v51; // [rsp+78h] [rbp-D0h]
  __int128 v52; // [rsp+80h] [rbp-C8h]
  _OWORD v53[3]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-88h]
  int v55; // [rsp+C8h] [rbp-80h]
  __int64 v56; // [rsp+D0h] [rbp-78h]
  char v57; // [rsp+D8h] [rbp-70h]
  __int64 v58; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-60h] BYREF
  _DWORD v60[6]; // [rsp+F0h] [rbp-58h] BYREF
  unsigned __int64 v61; // [rsp+108h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1[1] + 8LL);
  v4 = (_QWORD *)a1[2];
  if ( !v4 || !a1[3] || (v5 = (_QWORD *)v4[1], v5 == v4) )
  {
    v16 = *(_QWORD *)(a1[1] + 8LL);
    goto LABEL_27;
  }
  do
  {
    while ( 1 )
    {
LABEL_4:
      v6 = *((_DWORD *)v5 + 14);
      v7 = v5 + 3;
      if ( (unsigned int)(v6 - 1) > 1 )
        goto LABEL_20;
      v8 = *((_DWORD *)v5 + 10);
      if ( v8 != 6 )
      {
        if ( v8 != 7 )
          goto LABEL_21;
        v9 = *(int *)(*(_QWORD *)(a1[1] + 8LL) + 480LL);
        if ( (_DWORD)v9 == -1 )
          goto LABEL_20;
        v10 = *(_QWORD *)(v3 + 432) + 104 * v9;
        if ( !v10 )
          goto LABEL_20;
        v11 = 0;
LABEL_10:
        v12 = *(_DWORD *)(v10 + 24);
        if ( (v12 & 2) != 0 )
          goto LABEL_18;
        v13 = (unsigned int *)(v5 + 5);
        if ( !v11 )
          v13 = (unsigned int *)(v5 + 3);
        if ( *v13 == 2 )
        {
          v39 = v13;
          v35 = v10;
          if ( (get_tinfo_property(*(_QWORD *)(v10 + 80), 2) & 0xF) == 0xB )
            goto LABEL_18;
          v10 = v35;
          v13 = v39;
          v12 = *(_DWORD *)(v35 + 24);
        }
        if ( (v12 & 0x10) == 0 || (v14 = -1, (v12 & 0x100) != 0) )
          v14 = *(_DWORD *)(v10 + 88);
        v40 = *((_DWORD *)v5 + 16);
        v36 = v14;
        v34 = v10;
        v60[0] = 0;
        sub_29AB70((__int64)v60, v13);
        sub_29C580(*(_QWORD *)(a1[1] + 8LL), a2, v34, (__int64)v60, v40, v36);
        sub_29A030((__int64)v60);
        goto LABEL_18;
      }
      v27 = v5[6];
      v33 = *(_DWORD *)(v27 + 8);
      if ( v33 > 0x36 )
      {
        v11 = 0;
        if ( v33 != 65 )
          goto LABEL_20;
        goto LABEL_63;
      }
      if ( v33 > 0x34 )
      {
        v27 = *(_QWORD *)(v27 + 24);
        v11 = 0;
        if ( *(_DWORD *)(v27 + 8) == 65 )
        {
LABEL_63:
          v10 = *(_QWORD *)(*(_QWORD *)(v27 + 24) + 432LL) + 104LL * *(int *)(v27 + 32);
          if ( v10 )
            goto LABEL_10;
LABEL_18:
          if ( v11 == 1 )
            goto LABEL_48;
          v6 = *((_DWORD *)v5 + 14);
        }
      }
LABEL_20:
      if ( (unsigned int)(v6 - 1) > 1 )
        goto LABEL_48;
LABEL_21:
      if ( *v7 == 6 )
      {
        v27 = v5[4];
        v28 = *(_DWORD *)(v27 + 8);
        if ( v28 <= 0x36 )
        {
          if ( v28 <= 0x34 )
            goto LABEL_48;
          v27 = *(_QWORD *)(v27 + 24);
          if ( *(_DWORD *)(v27 + 8) != 65 )
            goto LABEL_48;
          v11 = 1;
        }
        else
        {
          v11 = 1;
          if ( v28 != 65 )
            goto LABEL_48;
        }
        goto LABEL_63;
      }
      if ( *v7 == 7 )
      {
        v15 = *(int *)(*(_QWORD *)(a1[1] + 8LL) + 480LL);
        if ( (_DWORD)v15 != -1 )
        {
          v10 = *(_QWORD *)(v3 + 432) + 104 * v15;
          if ( v10 )
          {
            v11 = 1;
            goto LABEL_10;
          }
        }
      }
LABEL_48:
      if ( (*v5 & 2) == 0 )
        break;
LABEL_51:
      if ( (_QWORD *)a1[2] == v5 )
        goto LABEL_52;
    }
    v29 = (_QWORD *)v5[2];
    if ( (*(_BYTE *)v29 & 2) == 0 )
    {
      do
      {
        v5 = v29;
        v29 = (_QWORD *)v29[1];
      }
      while ( (*(_BYTE *)v29 & 2) == 0 );
      goto LABEL_51;
    }
    v30 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
    v31 = *v30;
    if ( (*v30 & 2) == 0 )
    {
      while ( (_QWORD *)v30[2] == v5 )
      {
        v5 = v30;
        v32 = v31 & 0xFFFFFFFFFFFFFFFCLL;
        v31 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v31 & 2) != 0 )
        {
          v5 = (_QWORD *)v32;
          if ( a1[2] != v32 )
            goto LABEL_4;
          goto LABEL_52;
        }
        v30 = (_QWORD *)v32;
      }
    }
    v5 = v30;
  }
  while ( (_QWORD *)a1[2] != v30 );
LABEL_52:
  v16 = *(_QWORD *)(a1[1] + 8LL);
LABEL_27:
  v44 = 0;
  v17 = sub_1CA360(v16);
  get_func_frame(&v44, v17);
  v18 = 0;
  v19 = 0;
  if ( *(_QWORD *)(v3 + 440) )
  {
    while ( 2 )
    {
      v20 = *(_QWORD *)(v3 + 432) + 104 * v19;
      if ( (*(_BYTE *)(v20 + 24) & 2) == 0 && *(_DWORD *)v20 == 1 )
      {
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 >= 0 )
        {
          v22 = sub_1CB6D0(*(_QWORD **)(a1[1] + 8LL), v21);
          v48[1] = 0;
          v49 = 0;
          v51 = 0;
          v54 = 1;
          v55 = -1;
          v56 = 0;
          v57 = 0;
          v48[0] = 8 * v22;
          v50 = 0;
          v52 = 0;
          v53[0] = 0;
          if ( (unsigned int)find_tinfo_udt_member(v48, v44, 0) == -1 )
            goto LABEL_40;
          v45 = 0;
          copy_tinfo_t(&v45, v53);
          v46 = 0;
          tinfo_property = get_tinfo_property(v45, 289);
          v46 = tinfo_property;
          if ( (unsigned __int8)v45 <= 0x3Fu && (unsigned __int8)tinfo_property <= 0x3Fu )
          {
            if ( !(_BYTE)tinfo_property
              || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
              || (v42 = tinfo_property,
                  v47 = 0,
                  v47 = get_tinfo_property(tinfo_property, 9),
                  v38 = get_tinfo_property(v47, 2),
                  clear_tinfo_t(&v47),
                  (v38 & 0x3F) == 0x30)
              || (v42 & 0xCF) == 9 )
            {
              clear_tinfo_t(&v46);
              goto LABEL_39;
            }
          }
          clear_tinfo_t(&v46);
          if ( !(unsigned __int8)sub_3278C0(&v45, *a1, -1) )
            goto LABEL_39;
          v24 = *(_DWORD *)(v20 + 24);
          if ( (v24 & 0x10) != 0 && (v24 & 0x100) == 0 )
          {
            LODWORD(v37) = -1;
            goto LABEL_38;
          }
          v37 = *(int *)(v20 + 88);
          if ( v37 == -1 || v37 == get_tinfo_size(0, v45, 0) )
          {
LABEL_38:
            v41 = (get_tinfo_property(v45, 2) & 0xF) == 9;
            if ( v41 != ((get_tinfo_property(*(_QWORD *)(v20 + 80), 2) & 0xF) == 9) )
              goto LABEL_39;
            v58 = 1;
            v59 = 0;
            copy_tinfo_t(&v59, &v45);
            v60[0] = 0;
            sub_29AB70((__int64)v60, (unsigned int *)&v58);
            sub_29C580(*(_QWORD *)(a1[1] + 8LL), a2, v20, (__int64)v60, 1, v37);
            sub_29A030((__int64)v60);
            sub_29A030((__int64)&v58);
            clear_tinfo_t(&v45);
            clear_tinfo_t(v53);
            if ( v51 )
            {
              *(_QWORD *)&v52 = 0;
              qfree(v51);
            }
            v25 = v49;
            if ( v49 )
              goto LABEL_43;
          }
          else
          {
LABEL_39:
            clear_tinfo_t(&v45);
LABEL_40:
            clear_tinfo_t(v53);
            if ( v51 )
            {
              *(_QWORD *)&v52 = 0;
              qfree(v51);
            }
            v25 = v49;
            if ( v49 )
            {
LABEL_43:
              *(_QWORD *)&v50 = 0;
              qfree(v25);
            }
          }
        }
      }
      v19 = ++v18;
      if ( (unsigned __int64)v18 >= *(_QWORD *)(v3 + 440) )
        break;
      continue;
    }
  }
  clear_tinfo_t(&v44);
  return v61 - __readfsqword(0x28u);
}
