unsigned __int64 __fastcall sub_2258F0(__int64 a1, int a2, int a3, __int64 a4, unsigned __int64 a5, unsigned int a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int i; // r14d
  unsigned int v17; // eax
  int v18; // ebx
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbp
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v26; // r15
  __int64 v27; // rbx
  bool v28; // bl
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 *v33; // rbp
  unsigned __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // r14
  unsigned __int64 v38; // r14
  __int64 v39; // rax
  unsigned int v40; // ebx
  int v41; // eax
  __int64 v42; // r14
  unsigned int v43; // ebx
  unsigned int v44; // eax
  int v45; // edx
  int v46; // r15d
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // rsi
  unsigned int v50; // eax
  char v51; // r14
  __int64 v52; // rdi
  __int64 v53; // r12
  _QWORD *v54; // rbp
  __int64 v55; // rdi
  __int64 v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // ebp
  unsigned __int64 v60; // rax
  unsigned __int64 tinfo_property; // rax
  __int64 v62; // [rsp+0h] [rbp-E0h]
  int v63; // [rsp+10h] [rbp-D0h]
  __int64 v65; // [rsp+18h] [rbp-C8h]
  int v66; // [rsp+18h] [rbp-C8h]
  __int64 v67; // [rsp+20h] [rbp-C0h]
  __int64 v69; // [rsp+30h] [rbp-B0h]
  unsigned __int64 v70; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+50h] [rbp-90h] BYREF
  __int64 v73[2]; // [rsp+58h] [rbp-88h] BYREF
  __int64 v74; // [rsp+68h] [rbp-78h] BYREF
  __int128 v75; // [rsp+70h] [rbp-70h]
  __int128 v76; // [rsp+80h] [rbp-60h]
  __int64 v77; // [rsp+90h] [rbp-50h]
  int v78; // [rsp+98h] [rbp-48h]
  unsigned __int64 v79; // [rsp+A0h] [rbp-40h]

  v71 = a4;
  v70 = a5;
  v79 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 16);
  v75 = 0;
  v74 = 0;
  v77 = 0;
  v78 = 1;
  v76 = 0;
  v9 = *(_QWORD *)(v8 + 432);
  v67 = v9 + 104LL * a2;
  v10 = v9 + 104LL * a3;
  if ( (get_tinfo_property(*(_QWORD *)(v10 + 80), 2) & 0x3F) == 0xD
    && (unsigned __int8)get_tinfo_details(*(_QWORD *)(v10 + 80), 13, &v74) )
  {
    v11 = v70;
    v28 = 0;
    if ( !v70 )
      v28 = a6 >= (unsigned __int64)v76;
    v29 = sub_1F1220(v10, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1496LL), v70, a6);
    v30 = sub_32DB30(0, v10 + 80, v29, 0);
    v31 = a6;
    v63 = v30;
    v12 = a6;
    if ( v30 == -1 )
    {
      if ( a6 != (_QWORD)v76 )
      {
        if ( v70 >= get_tinfo_property(*(_QWORD *)(v10 + 80), 15) )
          goto LABEL_12;
        v12 = a6;
        v13 = *(_QWORD *)(a1 + 16);
        goto LABEL_6;
      }
      if ( v70 >= get_tinfo_property(*(_QWORD *)(v10 + 80), 15) )
        goto LABEL_12;
      goto LABEL_24;
    }
    v32 = v30;
    v33 = (__int64 *)(v74 + 144LL * v30);
    if ( !v33 )
    {
      if ( (_QWORD)v76 != a6 )
        goto LABEL_5;
      goto LABEL_24;
    }
    v34 = 8LL * a6;
    v35 = 8 * v70;
    if ( *v33 == 8 * v70 )
    {
      v57 = v33[1];
      if ( v34 < v57 )
      {
        if ( (v57 & 7) != 0 || 8LL * *(int *)(v67 + 88) < v57 )
        {
          if ( v28 )
          {
            if ( (_QWORD)v76 != a6 )
              goto LABEL_68;
            goto LABEL_24;
          }
          goto LABEL_66;
        }
        v69 = v32;
        tinfo_property = get_tinfo_property(v33[8], 15);
        v35 = 8 * v70;
        v34 = 8LL * a6;
        v32 = v69;
        if ( a6 >= tinfo_property )
        {
          v34 = v33[1];
          a6 = (v34 + 7) >> 3;
        }
      }
    }
    if ( v28 )
    {
      v31 = a6;
      if ( a6 == (_QWORD)v76 )
        goto LABEL_24;
      if ( v33[1] != v34 )
        goto LABEL_68;
      goto LABEL_84;
    }
    if ( v33[1] < v34 || (v31 = a6, v35 != *v33) )
    {
      v36 = v71;
      v73[0] = v70;
      v72 = v71;
      if ( a6 )
      {
        while ( *(int *)(v67 + 88) - v36 > 0 )
        {
          v65 = v32;
          v37 = *v33;
          if ( (get_tinfo_property(v33[8], 2) & 0xF) == 0xE )
          {
            v58 = v65;
            v59 = v63 + 1;
            v60 = v63 + 1;
            if ( v60 < (unsigned __int64)v75 )
            {
              while ( 1 )
              {
                if ( (get_tinfo_property(*(_QWORD *)(v74 + 144 * v60 + 64), 2) & 0xF) != 0xE )
                {
                  v63 = v59 - 1;
                  v58 = v59 - 1;
                  goto LABEL_75;
                }
                v60 = v59 + 1;
                if ( v60 >= (unsigned __int64)v75 )
                  break;
                ++v59;
              }
              v58 = v59;
              v63 = v59;
            }
LABEL_75:
            v33 = (__int64 *)(v74 + 144 * v58);
          }
          v38 = (unsigned __int64)(*v33 + 7 - v37 + v33[1]) >> 3;
          v39 = *(int *)(v67 + 88) - v36;
          v40 = a6;
          if ( v39 <= a6 )
            v40 = v39;
          v41 = v38;
          if ( v40 <= (unsigned int)v38 )
            v41 = v40;
          v66 = v41;
          if ( (get_tinfo_property(v33[8], 2) & 0xF) == 0xE
            || v40 < (unsigned int)v38
            || (get_tinfo_property(v33[8], 2) & 0xF) == 0xB
            || !(unsigned __int8)sub_2255D0(*(_QWORD *)(a1 + 16), &v72, v73, a2, a3, v66) )
          {
            v42 = *(_QWORD *)(a1 + 16);
            v43 = v66;
            if ( v66 )
            {
              do
              {
                v44 = round_down_power2(v43);
                v45 = 16;
                if ( v44 <= 0x10 )
                  v45 = v44;
                v46 = v45;
                sub_2255D0(v42, &v72, v73, a2, a3, v45);
                v43 -= v46;
              }
              while ( v43 );
            }
          }
          ++v63;
          v19 = v74;
          v32 = v63;
          v47 = (unsigned __int64)(*v33 + v33[1] + 7) >> 3;
          if ( v63 != (_QWORD)v75 )
          {
            v33 = (__int64 *)(v74 + 144LL * v63);
            v48 = (unsigned __int64)*v33 >> 3;
            v49 = (int)v48 - (int)v47;
            v73[0] += v49;
            v36 = v49 + v72;
            v72 += v49;
            v50 = v47 + a6 - v66 - v48;
            a6 = v50;
            if ( v63 != -1 )
            {
              if ( v50 )
                continue;
            }
          }
          goto LABEL_13;
        }
      }
      goto LABEL_12;
    }
LABEL_66:
    if ( v31 == (_QWORD)v76 )
      goto LABEL_24;
    if ( v34 != v33[1] )
    {
LABEL_68:
      v12 = v31;
      v13 = *(_QWORD *)(a1 + 16);
      goto LABEL_6;
    }
LABEL_84:
    v62 = v31;
    if ( !sub_11C4C0(a6) && (get_tinfo_property(v33[8], 2) & 0x2F) != 0xD )
    {
      v31 = v62;
      goto LABEL_68;
    }
LABEL_24:
    v26 = *(_QWORD *)(a1 + 16);
    v27 = get_tinfo_property(*(_QWORD *)(v10 + 80), 281);
    if ( v27 )
    {
      v11 = v70;
      v12 = a6;
      v13 = *(_QWORD *)(a1 + 16);
    }
    else
    {
      sub_1C7180(v73, v26, v10, *(_DWORD *)(v10 + 88));
      v51 = sub_32A8C0(0, 0, 48, v73, 0);
      cleanup_argloc(v73);
      v13 = *(_QWORD *)(a1 + 16);
      if ( !v51 )
      {
        sub_2255D0(*(_QWORD *)(a1 + 16), &v71, (__int64 *)&v70, a2, a3, a6);
        v52 = v74;
        if ( v74 )
        {
          v53 = v75;
          if ( (_QWORD)v75 )
          {
            do
            {
              v54 = (_QWORD *)(v52 + 144 * v27);
              clear_tinfo_t(v54 + 8);
              v55 = v54[5];
              if ( v55 )
              {
                v54[6] = 0;
                qfree(v55);
              }
              v56 = v54[2];
              if ( v56 )
              {
                v54[3] = 0;
                qfree(v56);
              }
              ++v27;
              v52 = v74;
            }
            while ( v53 != v27 );
          }
          *(_QWORD *)&v75 = 0;
          qfree(v52);
        }
        return v79 - __readfsqword(0x28u);
      }
      v11 = v70;
      v12 = a6;
    }
    goto LABEL_6;
  }
  if ( sub_11C4C0(a6) )
    goto LABEL_24;
  v11 = v70;
  v12 = a6;
LABEL_5:
  v13 = *(_QWORD *)(a1 + 16);
LABEL_6:
  v73[0] = v11;
  v14 = *(int *)(v67 + 88);
  v72 = v71;
  v15 = v14 - v71;
  if ( v15 > v12 )
    LODWORD(v15) = v12;
  for ( i = v15; i; i -= v18 )
  {
    v17 = round_down_power2(i);
    v18 = 16;
    if ( v17 <= 0x10 )
      v18 = v17;
    sub_2255D0(v13, &v72, v73, a2, a3, v18);
  }
LABEL_12:
  v19 = v74;
LABEL_13:
  if ( v19 )
  {
    v20 = v75;
    if ( (_QWORD)v75 )
    {
      v21 = 0;
      do
      {
        v22 = (_QWORD *)(v19 + 144 * v21);
        clear_tinfo_t(v22 + 8);
        v23 = v22[5];
        if ( v23 )
        {
          v22[6] = 0;
          qfree(v23);
        }
        v24 = v22[2];
        if ( v24 )
        {
          v22[3] = 0;
          qfree(v24);
        }
        ++v21;
        v19 = v74;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v75 = 0;
    qfree(v19);
  }
  return v79 - __readfsqword(0x28u);
}
