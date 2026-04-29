unsigned __int64 __fastcall sub_29CFE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // edx
  unsigned int *v9; // r13
  int v10; // eax
  char tinfo_property; // al
  char v12; // al
  int v13; // eax
  int v14; // edx
  char v15; // al
  char v16; // al
  int v17; // eax
  char v18; // al
  int v19; // r14d
  int v20; // eax
  int v21; // eax
  __int64 v22; // r15
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  int v26; // r14d
  int v27; // eax
  char v28; // al
  int v29; // r14d
  int v30; // eax
  int v31; // eax
  int v32; // eax
  char v33; // al
  unsigned __int64 v34; // rbx
  int v35; // eax
  char v36; // al
  char v37; // al
  int v38; // eax
  int v39; // edx
  char v40; // al
  char v41; // al
  int v42; // eax
  int v43; // r13d
  int v44; // eax
  int v45; // r13d
  int v46; // eax
  char v47; // al
  int v48; // r14d
  int v49; // eax
  __int64 v50; // r15
  __int64 v51; // rax
  int v52; // eax
  int v54; // [rsp+0h] [rbp-B8h]
  __int64 v55; // [rsp+8h] [rbp-B0h]
  __int64 v56; // [rsp+8h] [rbp-B0h]
  __int64 v57; // [rsp+10h] [rbp-A8h]
  unsigned int *v58; // [rsp+10h] [rbp-A8h]
  __int64 v59; // [rsp+18h] [rbp-A0h]
  __int64 v60; // [rsp+20h] [rbp-98h]
  __int64 v61; // [rsp+20h] [rbp-98h]
  unsigned int *v62; // [rsp+28h] [rbp-90h]
  unsigned int v63[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v64; // [rsp+40h] [rbp-78h] BYREF
  __int64 v65; // [rsp+48h] [rbp-70h]
  unsigned int v66[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v67; // [rsp+60h] [rbp-58h] BYREF
  __int64 v68; // [rsp+68h] [rbp-50h]
  __int64 v69; // [rsp+70h] [rbp-48h]
  unsigned __int64 v70; // [rsp+78h] [rbp-40h]

  v59 = a2;
  v60 = a3;
  v70 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( a2 - a1 <= 512 )
    return v70 - __readfsqword(0x28u);
  v62 = v66;
  while ( 1 )
  {
    v4 = v3;
    v5 = v3 >> 6;
    v57 = v4 >> 5;
    if ( !v60 )
      break;
    v61 = v60 - 1;
    v6 = a1 + 32;
    v7 = a1 + 32 * v5;
    v8 = *(_DWORD *)(v7 + 28);
    v9 = (unsigned int *)(v59 - 32);
    v10 = *(_DWORD *)(a1 + 60);
    if ( v10 < v8 )
      goto LABEL_40;
    if ( v10 <= v8 )
    {
      tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 48), 2);
      if ( (tinfo_property & 0x3E) != 0
        && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D)
        && (get_tinfo_property(*(_QWORD *)(v7 + 16), 2) & 0x3F) == 0x2D
        || (v12 = get_tinfo_property(*(_QWORD *)(v7 + 16), 2), (v12 & 0x3E) != 0)
        && ((v12 & 0xFu) <= 8 || (v12 & 0x3F) == 0x2D)
        && (get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0x3F) == 0x2D )
      {
        v26 = score_tinfo(a1 + 48);
        v27 = score_tinfo(v7 + 16);
        if ( v26 <= v27 )
        {
          if ( v26 < v27 )
            goto LABEL_39;
          goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v13 = *(_DWORD *)(v7 + 24);
        if ( *(_DWORD *)(a1 + 56) < v13 || *(_DWORD *)(a1 + 56) <= v13 && (int)sub_299330(a1 + 32, v7) < 0 )
        {
LABEL_39:
          v8 = *(_DWORD *)(v7 + 28);
LABEL_40:
          if ( *(_DWORD *)(v59 - 4) > v8 )
            goto LABEL_36;
          if ( *(_DWORD *)(v59 - 4) >= v8 )
          {
            v28 = get_tinfo_property(*(_QWORD *)(v7 + 16), 2);
            if ( (v28 & 0x3E) != 0
              && ((v28 & 0xFu) <= 8 || (v28 & 0x3F) == 0x2D)
              && (get_tinfo_property(*(_QWORD *)(v59 - 16), 2) & 0x3F) == 0x2D
              || (v47 = get_tinfo_property(*(_QWORD *)(v59 - 16), 2), (v47 & 0x3E) != 0)
              && ((v47 & 0xFu) <= 8 || (v47 & 0x3F) == 0x2D)
              && (get_tinfo_property(*(_QWORD *)(v7 + 16), 2) & 0x3F) == 0x2D )
            {
              v29 = score_tinfo(v7 + 16);
              v30 = score_tinfo(v59 - 16);
              if ( v29 <= v30 )
              {
                if ( v29 < v30 )
                  goto LABEL_36;
                goto LABEL_47;
              }
            }
            else
            {
LABEL_47:
              v31 = *(_DWORD *)(v59 - 8);
              if ( *(_DWORD *)(v7 + 24) < v31 || *(_DWORD *)(v7 + 24) <= v31 && (int)sub_299330(v7, (__int64)v9) < 0 )
                goto LABEL_36;
            }
          }
          v32 = sub_2994E0(a1 + 32, (__int64)v9);
          v66[0] = 0;
          v58 = v66;
          if ( v32 < 0 )
          {
            sub_29A3B0((__int64)v66, (unsigned int *)a1);
            v22 = a1 + 16;
            v67 = 0;
            copy_tinfo_t(&v67, a1 + 16);
            v68 = *(_QWORD *)(a1 + 24);
            sub_29A3B0(a1, v9);
            copy_tinfo_t(a1 + 16, v59 - 16);
            *(_DWORD *)(a1 + 24) = *(_DWORD *)(v59 - 8);
            *(_DWORD *)(a1 + 28) = *(_DWORD *)(v59 - 4);
            sub_29A3B0((__int64)v9, v66);
            copy_tinfo_t(v59 - 16, &v67);
            *(_QWORD *)(v59 - 8) = v68;
          }
          else
          {
            sub_29A3B0((__int64)v66, (unsigned int *)a1);
            v22 = a1 + 16;
            v67 = 0;
            copy_tinfo_t(&v67, a1 + 16);
            v68 = *(_QWORD *)(a1 + 24);
            sub_29A3B0(a1, (unsigned int *)(a1 + 32));
            copy_tinfo_t(a1 + 16, a1 + 48);
            *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 56);
            sub_29A3B0(a1 + 32, v66);
            copy_tinfo_t(a1 + 48, &v67);
            *(_QWORD *)(a1 + 56) = v68;
          }
          clear_tinfo_t(&v67);
          sub_299870((__int64)v66);
          goto LABEL_59;
        }
      }
      v10 = *(_DWORD *)(a1 + 60);
    }
    v14 = *(_DWORD *)(v59 - 4);
    if ( v10 < v14 )
      goto LABEL_111;
    if ( v10 > v14 )
      goto LABEL_26;
    v15 = get_tinfo_property(*(_QWORD *)(a1 + 48), 2);
    if ( (v15 & 0x3E) == 0
      || (v15 & 0xFu) > 8 && (v15 & 0x3F) != 0x2D
      || (get_tinfo_property(*(_QWORD *)(v59 - 16), 2) & 0x3F) != 0x2D )
    {
      v16 = get_tinfo_property(*(_QWORD *)(v59 - 16), 2);
      if ( (v16 & 0x3E) == 0 || (v16 & 0xFu) > 8 && (v16 & 0x3F) != 0x2D )
        goto LABEL_22;
      if ( (get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0x3F) != 0x2D )
        goto LABEL_22;
    }
    v48 = score_tinfo(a1 + 48);
    v49 = score_tinfo(v59 - 16);
    if ( v48 <= v49 )
    {
      if ( v48 < v49 )
        goto LABEL_111;
LABEL_22:
      v17 = *(_DWORD *)(v59 - 8);
      if ( *(_DWORD *)(a1 + 56) < v17 || *(_DWORD *)(a1 + 56) <= v17 && (int)sub_299330(a1 + 32, (__int64)v9) < 0 )
      {
LABEL_111:
        v22 = a1 + 16;
        v66[0] = 0;
        v58 = v62;
        sub_29A3B0((__int64)v62, (unsigned int *)a1);
        v67 = 0;
        copy_tinfo_t(&v67, a1 + 16);
        v68 = *(_QWORD *)(a1 + 24);
        sub_29A3B0(a1, (unsigned int *)(a1 + 32));
        copy_tinfo_t(a1 + 16, a1 + 48);
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 56);
        sub_29A3B0(a1 + 32, v62);
        copy_tinfo_t(a1 + 48, &v67);
        *(_QWORD *)(a1 + 56) = v68;
        clear_tinfo_t(&v67);
        sub_299870((__int64)v62);
        goto LABEL_59;
      }
    }
    v14 = *(_DWORD *)(v59 - 4);
LABEL_26:
    if ( *(_DWORD *)(v7 + 28) >= v14 )
    {
      if ( *(_DWORD *)(v7 + 28) > v14 )
        goto LABEL_36;
      if ( (v18 = get_tinfo_property(*(_QWORD *)(v7 + 16), 2), (v18 & 0x3E) == 0)
        || (v18 & 0xFu) > 8 && (v18 & 0x3F) != 0x2D
        || (get_tinfo_property(*(_QWORD *)(v59 - 16), 2) & 0x3F) != 0x2D )
      {
        v33 = get_tinfo_property(*(_QWORD *)(v59 - 16), 2);
        if ( (v33 & 0x3E) == 0 || (v33 & 0xFu) > 8 && (v33 & 0x3F) != 0x2D )
          goto LABEL_134;
        if ( (get_tinfo_property(*(_QWORD *)(v7 + 16), 2) & 0x3F) != 0x2D )
          goto LABEL_134;
      }
      v19 = score_tinfo(v7 + 16);
      v20 = score_tinfo(v59 - 16);
      if ( v19 > v20 )
        goto LABEL_36;
      if ( v19 >= v20 )
      {
LABEL_134:
        v21 = *(_DWORD *)(v59 - 8);
        if ( *(_DWORD *)(v7 + 24) >= v21 && (*(_DWORD *)(v7 + 24) > v21 || (int)sub_299330(v7, (__int64)v9) >= 0) )
        {
LABEL_36:
          v22 = a1 + 16;
          v66[0] = 0;
          v58 = v66;
          sub_29A3B0((__int64)v66, (unsigned int *)a1);
          v67 = 0;
          copy_tinfo_t(&v67, a1 + 16);
          v68 = *(_QWORD *)(a1 + 24);
          sub_29A3B0(a1, (unsigned int *)v7);
          copy_tinfo_t(a1 + 16, v7 + 16);
          *(_DWORD *)(a1 + 24) = *(_DWORD *)(v7 + 24);
          *(_DWORD *)(a1 + 28) = *(_DWORD *)(v7 + 28);
          sub_29A3B0(v7, v66);
          copy_tinfo_t(v7 + 16, &v67);
          *(_QWORD *)(v7 + 24) = v68;
          clear_tinfo_t(&v67);
          sub_299870((__int64)v66);
          goto LABEL_59;
        }
      }
    }
    v22 = a1 + 16;
    v66[0] = 0;
    v58 = v66;
    sub_29A3B0((__int64)v66, (unsigned int *)a1);
    v67 = 0;
    copy_tinfo_t(&v67, a1 + 16);
    v68 = *(_QWORD *)(a1 + 24);
    sub_29A3B0(a1, v9);
    copy_tinfo_t(a1 + 16, v59 - 16);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v59 - 8);
    *(_DWORD *)(a1 + 28) = *(_DWORD *)(v59 - 4);
    sub_29A3B0((__int64)v9, v66);
    copy_tinfo_t(v59 - 16, &v67);
    *(_QWORD *)(v59 - 8) = v68;
    clear_tinfo_t(&v67);
    sub_299870((__int64)v66);
LABEL_59:
    v34 = v59;
    while ( 2 )
    {
      v35 = *(_DWORD *)(a1 + 28);
      while ( 1 )
      {
        if ( *(_DWORD *)(v6 + 28) < v35 )
          goto LABEL_70;
        if ( *(_DWORD *)(v6 + 28) > v35 )
          goto LABEL_73;
        v36 = get_tinfo_property(*(_QWORD *)(v6 + 16), 2);
        if ( (v36 & 0x3E) == 0
          || (v36 & 0xFu) > 8 && (v36 & 0x3F) != 0x2D
          || (get_tinfo_property(*(_QWORD *)(a1 + 16), 2) & 0x3F) != 0x2D )
        {
          v37 = get_tinfo_property(*(_QWORD *)(a1 + 16), 2);
          if ( (v37 & 0x3E) == 0 || (v37 & 0xFu) > 8 && (v37 & 0x3F) != 0x2D )
            goto LABEL_67;
          if ( (get_tinfo_property(*(_QWORD *)(v6 + 16), 2) & 0x3F) != 0x2D )
            goto LABEL_67;
        }
        v45 = score_tinfo(v6 + 16);
        v46 = score_tinfo(v22);
        if ( v45 > v46 )
          break;
        if ( v45 < v46 )
        {
LABEL_95:
          v35 = *(_DWORD *)(a1 + 28);
          goto LABEL_70;
        }
LABEL_67:
        v38 = *(_DWORD *)(a1 + 24);
        if ( *(_DWORD *)(v6 + 24) < v38 )
          goto LABEL_95;
        if ( *(_DWORD *)(v6 + 24) > v38 )
          goto LABEL_84;
        v39 = sub_299330(v6, a1);
        v35 = *(_DWORD *)(a1 + 28);
        if ( v39 >= 0 )
        {
          do
LABEL_73:
            v34 -= 32LL;
          while ( *(_DWORD *)(v34 + 28) > v35 );
          if ( *(_DWORD *)(v34 + 28) < v35 )
            goto LABEL_86;
          goto LABEL_75;
        }
LABEL_70:
        v6 += 32LL;
      }
      while ( 1 )
      {
LABEL_84:
        v34 -= 32LL;
        v35 = *(_DWORD *)(a1 + 28);
        if ( *(_DWORD *)(v34 + 28) > v35 )
          goto LABEL_73;
        if ( *(_DWORD *)(v34 + 28) < v35 )
          break;
LABEL_75:
        v40 = get_tinfo_property(*(_QWORD *)(a1 + 16), 2);
        if ( (v40 & 0x3E) == 0
          || (v40 & 0xFu) > 8 && (v40 & 0x3F) != 0x2D
          || (get_tinfo_property(*(_QWORD *)(v34 + 16), 2) & 0x3F) != 0x2D )
        {
          v41 = get_tinfo_property(*(_QWORD *)(v34 + 16), 2);
          if ( (v41 & 0x3E) == 0 || (v41 & 0xFu) > 8 && (v41 & 0x3F) != 0x2D )
            goto LABEL_83;
          if ( (get_tinfo_property(*(_QWORD *)(a1 + 16), 2) & 0x3F) != 0x2D )
            goto LABEL_83;
        }
        v43 = score_tinfo(v22);
        v44 = score_tinfo(v34 + 16);
        if ( v43 > v44 )
          break;
        if ( v43 >= v44 )
        {
LABEL_83:
          v42 = *(_DWORD *)(v34 + 24);
          if ( *(_DWORD *)(a1 + 24) >= v42 && (*(_DWORD *)(a1 + 24) > v42 || (int)sub_299330(a1, v34) >= 0) )
            break;
        }
      }
LABEL_86:
      if ( v6 < v34 )
      {
        v66[0] = 0;
        sub_29A3B0((__int64)v58, (unsigned int *)v6);
        v67 = 0;
        copy_tinfo_t(&v67, v6 + 16);
        v68 = *(_QWORD *)(v6 + 24);
        sub_29A3B0(v6, (unsigned int *)v34);
        v55 = v34 + 16;
        copy_tinfo_t(v6 + 16, v34 + 16);
        *(_DWORD *)(v6 + 24) = *(_DWORD *)(v34 + 24);
        *(_DWORD *)(v6 + 28) = *(_DWORD *)(v34 + 28);
        sub_29A3B0(v34, v58);
        copy_tinfo_t(v34 + 16, &v67);
        v6 += 32LL;
        *(_QWORD *)(v34 + 24) = v68;
        clear_tinfo_t(&v67);
        sub_299870((__int64)v58);
        continue;
      }
      break;
    }
    sub_29CFE0(
      v6,
      v59,
      v61,
      v23,
      v24,
      v25,
      v54,
      v55,
      (_DWORD)v58,
      v59,
      v61,
      (_DWORD)v62,
      v63[0],
      v63[2],
      v64,
      v65,
      v66[0],
      v66[2],
      v67,
      v68,
      v69);
    v3 = v6 - a1;
    if ( (__int64)(v6 - a1) <= 512 )
      return v70 - __readfsqword(0x28u);
    v59 = v6;
  }
  v56 = v5 - 1;
  v50 = a1 + 32 * (v5 - 1);
  while ( 1 )
  {
    v63[0] = 0;
    sub_29A3B0((__int64)v63, (unsigned int *)v50);
    v64 = 0;
    copy_tinfo_t(&v64, v50 + 16);
    v51 = *(_QWORD *)(v50 + 24);
    v66[0] = 0;
    v65 = v51;
    sub_29A3B0((__int64)v66, v63);
    v67 = 0;
    copy_tinfo_t(&v67, &v64);
    v68 = v65;
    sub_29B8F0(a1, v56, v57, (__int64)v66);
    v50 -= 32;
    clear_tinfo_t(&v67);
    sub_299870((__int64)v66);
    if ( !v56 )
      break;
    --v56;
    clear_tinfo_t(&v64);
    sub_299870((__int64)v63);
  }
  clear_tinfo_t(&v64);
  sub_299870((__int64)v63);
  while ( v59 - a1 > 32 )
  {
    v63[0] = 0;
    sub_29A3B0((__int64)v63, (unsigned int *)(v59 - 32));
    v59 -= 32;
    v64 = 0;
    copy_tinfo_t(&v64, v59 + 16);
    v65 = *(_QWORD *)(v59 + 24);
    sub_29A3B0(v59, (unsigned int *)a1);
    copy_tinfo_t(v59 + 16, a1 + 16);
    v52 = *(_DWORD *)(a1 + 24);
    v66[0] = 0;
    *(_DWORD *)(v59 + 24) = v52;
    *(_DWORD *)(v59 + 28) = *(_DWORD *)(a1 + 28);
    sub_29A3B0((__int64)v66, v63);
    v67 = 0;
    copy_tinfo_t(&v67, &v64);
    v68 = v65;
    sub_29B8F0(a1, 0, (v59 - a1) >> 5, (__int64)v66);
    clear_tinfo_t(&v67);
    sub_299870((__int64)v66);
    clear_tinfo_t(&v64);
    sub_299870((__int64)v63);
  }
  return v70 - __readfsqword(0x28u);
}
