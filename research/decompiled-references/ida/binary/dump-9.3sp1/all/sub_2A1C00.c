unsigned __int64 __fastcall sub_2A1C00(_QWORD *a1, __int64 *a2)
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
  int v17; // ebp
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 tinfo_property; // rax
  int v23; // eax
  __int64 v24; // rdi
  __int64 v26; // rdx
  unsigned int v27; // eax
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned int v32; // ecx
  __int64 v33; // [rsp+8h] [rbp-140h]
  __int64 v34; // [rsp+8h] [rbp-140h]
  int v35; // [rsp+10h] [rbp-138h]
  __int64 v36; // [rsp+10h] [rbp-138h]
  char v37; // [rsp+10h] [rbp-138h]
  unsigned int *v38; // [rsp+10h] [rbp-138h]
  int v39; // [rsp+18h] [rbp-130h]
  bool v40; // [rsp+18h] [rbp-130h]
  char v41; // [rsp+18h] [rbp-130h]
  __int64 v43; // [rsp+38h] [rbp-110h] BYREF
  __int64 v44; // [rsp+40h] [rbp-108h]
  __int64 v45; // [rsp+48h] [rbp-100h]
  __int64 v46; // [rsp+50h] [rbp-F8h]
  __int64 v47; // [rsp+58h] [rbp-F0h]
  __int64 v48; // [rsp+60h] [rbp-E8h]
  __int128 v49; // [rsp+68h] [rbp-E0h]
  __int64 v50; // [rsp+78h] [rbp-D0h]
  __int128 v51; // [rsp+80h] [rbp-C8h]
  __int128 v52; // [rsp+90h] [rbp-B8h]
  __int64 v53; // [rsp+C0h] [rbp-88h]
  int v54; // [rsp+C8h] [rbp-80h]
  __int64 v55; // [rsp+D0h] [rbp-78h]
  char v56; // [rsp+D8h] [rbp-70h]
  _QWORD v57[2]; // [rsp+E0h] [rbp-68h] BYREF
  _DWORD v58[6]; // [rsp+F0h] [rbp-58h] BYREF
  unsigned __int64 v59; // [rsp+108h] [rbp-40h]

  v59 = __readfsqword(0x28u);
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
          v38 = v13;
          v34 = v10;
          if ( (get_tinfo_property() & 0xF) == 0xB )
            goto LABEL_18;
          v10 = v34;
          v13 = v38;
          v12 = *(_DWORD *)(v34 + 24);
        }
        if ( (v12 & 0x10) == 0 || (v14 = -1, (v12 & 0x100) != 0) )
          v14 = *(_DWORD *)(v10 + 88);
        v39 = *((_DWORD *)v5 + 16);
        v35 = v14;
        v33 = v10;
        v58[0] = 0;
        sub_29F770((__int64)v58, v13);
        sub_2A1180(*(_QWORD *)(a1[1] + 8LL), a2, v33, (__int64)v58, v39, v35);
        sub_29EC30((__int64)v58);
        goto LABEL_18;
      }
      v26 = v5[6];
      v32 = *(_DWORD *)(v26 + 8);
      if ( v32 > 0x36 )
      {
        v11 = 0;
        if ( v32 != 65 )
          goto LABEL_20;
        goto LABEL_63;
      }
      if ( v32 > 0x34 )
      {
        v26 = *(_QWORD *)(v26 + 24);
        v11 = 0;
        if ( *(_DWORD *)(v26 + 8) == 65 )
        {
LABEL_63:
          v10 = *(_QWORD *)(*(_QWORD *)(v26 + 24) + 432LL) + 104LL * *(int *)(v26 + 32);
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
        v26 = v5[4];
        v27 = *(_DWORD *)(v26 + 8);
        if ( v27 <= 0x36 )
        {
          if ( v27 <= 0x34 )
            goto LABEL_48;
          v26 = *(_QWORD *)(v26 + 24);
          if ( *(_DWORD *)(v26 + 8) != 65 )
            goto LABEL_48;
          v11 = 1;
        }
        else
        {
          v11 = 1;
          if ( v27 != 65 )
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
    v28 = (_QWORD *)v5[2];
    if ( (*(_BYTE *)v28 & 2) == 0 )
    {
      do
      {
        v5 = v28;
        v28 = (_QWORD *)v28[1];
      }
      while ( (*(_BYTE *)v28 & 2) == 0 );
      goto LABEL_51;
    }
    v29 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
    v30 = *v29;
    if ( (*v29 & 2) == 0 )
    {
      while ( (_QWORD *)v29[2] == v5 )
      {
        v5 = v29;
        v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
        v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v30 & 2) != 0 )
        {
          v5 = (_QWORD *)v31;
          if ( a1[2] != v31 )
            goto LABEL_4;
          goto LABEL_52;
        }
        v29 = (_QWORD *)v31;
      }
    }
    v5 = v29;
  }
  while ( (_QWORD *)a1[2] != v29 );
LABEL_52:
  v16 = *(_QWORD *)(a1[1] + 8LL);
LABEL_27:
  sub_1CE9E0(v16);
  get_func_frame();
  v17 = 0;
  v18 = 0;
  if ( *(_QWORD *)(v3 + 440) )
  {
    while ( 2 )
    {
      v19 = *(_QWORD *)(v3 + 432) + 104 * v18;
      if ( (*(_BYTE *)(v19 + 24) & 2) == 0 && *(_DWORD *)v19 == 1 )
      {
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 >= 0 )
        {
          v21 = sub_1CFD50(*(_QWORD **)(a1[1] + 8LL), v20);
          v47 = 0;
          v48 = 0;
          v50 = 0;
          v53 = 1;
          v54 = -1;
          v55 = 0;
          v56 = 0;
          v46 = 8 * v21;
          v49 = 0;
          v51 = 0;
          v52 = 0;
          if ( (unsigned int)find_tinfo_udt_member() == -1 )
            goto LABEL_40;
          v43 = 0;
          copy_tinfo_t();
          v44 = 0;
          tinfo_property = get_tinfo_property();
          v44 = tinfo_property;
          if ( (unsigned __int8)v43 <= 0x3Fu && (unsigned __int8)tinfo_property <= 0x3Fu )
          {
            if ( !(_BYTE)tinfo_property
              || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
              || (v41 = tinfo_property,
                  v45 = 0,
                  v45 = get_tinfo_property(),
                  v37 = get_tinfo_property(),
                  clear_tinfo_t(),
                  (v37 & 0x3F) == 0x30)
              || (v41 & 0xCF) == 9 )
            {
              clear_tinfo_t();
              goto LABEL_39;
            }
          }
          clear_tinfo_t();
          if ( !(unsigned __int8)sub_32CB80(&v43, *a1, -1) )
            goto LABEL_39;
          v23 = *(_DWORD *)(v19 + 24);
          if ( (v23 & 0x10) != 0 && (v23 & 0x100) == 0 )
          {
            LODWORD(v36) = -1;
            goto LABEL_38;
          }
          v36 = *(int *)(v19 + 88);
          if ( v36 == -1 || v36 == get_tinfo_size() )
          {
LABEL_38:
            v40 = (get_tinfo_property() & 0xF) == 9;
            if ( v40 != ((get_tinfo_property() & 0xF) == 9) )
              goto LABEL_39;
            v57[0] = 1;
            v57[1] = 0;
            copy_tinfo_t();
            v58[0] = 0;
            sub_29F770((__int64)v58, (unsigned int *)v57);
            sub_2A1180(*(_QWORD *)(a1[1] + 8LL), a2, v19, (__int64)v58, 1, v36);
            sub_29EC30((__int64)v58);
            sub_29EC30((__int64)v57);
            clear_tinfo_t();
            clear_tinfo_t();
            if ( v50 )
            {
              *(_QWORD *)&v51 = 0;
              qfree(v50);
            }
            v24 = v48;
            if ( v48 )
              goto LABEL_43;
          }
          else
          {
LABEL_39:
            clear_tinfo_t();
LABEL_40:
            clear_tinfo_t();
            if ( v50 )
            {
              *(_QWORD *)&v51 = 0;
              qfree(v50);
            }
            v24 = v48;
            if ( v48 )
            {
LABEL_43:
              *(_QWORD *)&v49 = 0;
              qfree(v24);
            }
          }
        }
      }
      v18 = ++v17;
      if ( (unsigned __int64)v17 >= *(_QWORD *)(v3 + 440) )
        break;
      continue;
    }
  }
  clear_tinfo_t();
  return v59 - __readfsqword(0x28u);
}
