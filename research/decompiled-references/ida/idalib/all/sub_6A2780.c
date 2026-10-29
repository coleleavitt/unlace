unsigned __int64 __fastcall sub_6A2780(unsigned __int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  char v15; // dl
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // rdx
  bool v18; // cf
  char v19; // dl
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21; // rdx
  char v22; // bp
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  bool v25; // dl
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  bool v28; // dl
  char v29; // r14
  __int64 v30; // rbp
  void *v31; // r15
  __int64 v32; // rbp
  void **v33; // r12
  __int64 v34; // rbx
  void *v35; // rdi
  bool v36; // cf
  void **v37; // rbx
  __int64 v38; // r12
  __int64 v39; // rbp
  void *v40; // rdi
  unsigned __int64 *v41; // rdx
  unsigned __int64 *v42; // rcx
  unsigned __int64 *v43; // rdx
  bool v44; // cf
  unsigned __int64 *v45; // rdx
  unsigned __int64 *v46; // rcx
  unsigned __int64 *v47; // rdx
  unsigned __int64 *v48; // rbx
  unsigned __int64 *v49; // rbx
  void **v51; // rbx
  __int64 v52; // r15
  __int64 v53; // r14
  void *v54; // rdi
  void *ptr; // [rsp+8h] [rbp-160h]
  void **v56; // [rsp+10h] [rbp-158h]
  void *v57; // [rsp+10h] [rbp-158h]
  __int64 v58; // [rsp+18h] [rbp-150h]
  char v60; // [rsp+20h] [rbp-148h]
  void **v61; // [rsp+28h] [rbp-140h]
  void *v62; // [rsp+28h] [rbp-140h]
  void **v63; // [rsp+30h] [rbp-138h]
  __int64 v64; // [rsp+38h] [rbp-130h]
  __int64 v65; // [rsp+48h] [rbp-120h] BYREF
  void *v66; // [rsp+50h] [rbp-118h] BYREF
  __int128 v67; // [rsp+58h] [rbp-110h]
  void **v68; // [rsp+68h] [rbp-100h]
  __int64 v69; // [rsp+70h] [rbp-F8h]
  void *v70; // [rsp+90h] [rbp-D8h]
  char v71; // [rsp+B1h] [rbp-B7h]
  void *v72; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v73; // [rsp+C8h] [rbp-A0h]
  void **v74; // [rsp+D8h] [rbp-90h]
  __int64 v75; // [rsp+E0h] [rbp-88h]
  void *v76; // [rsp+100h] [rbp-68h]
  char v77; // [rsp+121h] [rbp-47h]
  unsigned __int64 v78; // [rsp+128h] [rbp-40h]

  v58 = a2;
  v4 = a2 - (_QWORD)a1;
  v78 = __readfsqword(0x28u);
  if ( v4 <= 1664 )
    return v78 - __readfsqword(0x28u);
  v7 = v4;
  if ( !a3 )
    goto LABEL_54;
  do
  {
    v8 = v58;
    v9 = (unsigned __int64)(a1 + 13);
    --a3;
    sub_6A0820(
      (__int64)a1,
      (unsigned __int64)(a1 + 13),
      (unsigned __int64)&(&(&a1[4 * ((0x4EC4EC4EC4EC4EC5LL * (v7 >> 3)) >> 1)])[4
                                                                              * ((0x4EC4EC4EC4EC4EC5LL * (v7 >> 3))
                                                                               & 0xFFFFFFFFFFFFFFFELL)])[(0x4EC4EC4EC4EC4EC5LL * (v7 >> 3)) >> 1],
      (unsigned __int64 **)(v58 - 104),
      a4);
    while ( 2 )
    {
      v10 = *a1;
      v11 = **a1;
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      while ( 2 )
      {
        v16 = *(unsigned __int64 **)v9;
        v13 = **(_QWORD **)v9;
        if ( v13 == -1 )
        {
          if ( v11 == -1 )
            goto LABEL_7;
          goto LABEL_21;
        }
        while ( (*(_DWORD *)(a4 + 12) & 8) != 0 )
        {
          if ( v11 == -1 )
            goto LABEL_17;
          v13 &= ~1uLL;
          v14 = **a1 & 0xFFFFFFFFFFFFFFFELL;
          if ( v12 == v13 )
            goto LABEL_7;
LABEL_14:
          if ( v13 < v14 )
          {
            v16 = *(unsigned __int64 **)(v9 + 104);
            v9 += 104LL;
            v13 = *v16;
            if ( *v16 != -1 )
              continue;
          }
          goto LABEL_21;
        }
        if ( v11 != -1 )
        {
          v14 = **a1;
          if ( v11 == v13 )
            goto LABEL_7;
          goto LABEL_14;
        }
        do
        {
LABEL_17:
          v16 = *(unsigned __int64 **)(v9 + 104);
          v9 += 104LL;
          if ( *v16 == -1 )
            break;
          v16 = *(unsigned __int64 **)(v9 + 104);
          v9 += 104LL;
        }
        while ( *v16 != -1 );
LABEL_7:
        v15 = *(_BYTE *)(v9 + 97);
        if ( (v15 == 1) == (*((_BYTE *)a1 + 97) == 1) )
        {
          v23 = v16[1];
          v24 = v10[1];
          if ( v23 != v24 )
          {
            v25 = v24 < v23;
            goto LABEL_46;
          }
          if ( v15 == 1 )
          {
            v41 = *(unsigned __int64 **)(v9 + 32);
            v42 = a1[4];
            if ( v41 != v42 )
            {
              if ( !v41 )
              {
LABEL_9:
                v9 += 104LL;
                continue;
              }
              if ( !v42 )
                goto LABEL_21;
            }
            v43 = *(unsigned __int64 **)(v9 + 72);
            v44 = v43 < a1[9];
            if ( v43 == a1[9] )
            {
              if ( v43 )
              {
                v25 = **(_QWORD **)(v9 + 64) < *a1[8];
LABEL_46:
                if ( !v25 )
                  goto LABEL_21;
                goto LABEL_9;
              }
              v44 = *(_QWORD *)(v9 + 88) < (unsigned __int64)a1[11];
            }
          }
          else if ( v15 != 2
                 || (v48 = a1[4],
                     v44 = *(_QWORD *)(v9 + 32) < (unsigned __int64)v48,
                     *(unsigned __int64 **)(v9 + 32) == v48) )
          {
            v25 = v9 < (unsigned __int64)a1;
            goto LABEL_46;
          }
          v25 = v44;
          goto LABEL_46;
        }
        break;
      }
      if ( v15 == 1 )
        goto LABEL_9;
LABEL_21:
      v8 -= 104LL;
      if ( v11 == -1 )
        v12 = -1;
LABEL_30:
      v20 = *(unsigned __int64 **)v8;
      v21 = **(_QWORD **)v8;
      if ( v11 != -1 )
      {
        while ( (*(_DWORD *)(a4 + 12) & 8) != 0 )
        {
          if ( v21 != -1 )
            goto LABEL_26;
          v20 = *(unsigned __int64 **)(v8 - 104);
          v8 -= 104LL;
          v21 = *v20;
        }
        while ( v21 == -1 )
        {
          v20 = *(unsigned __int64 **)(v8 - 104);
          v8 -= 104LL;
          v21 = *v20;
        }
        v18 = v11 < v21;
        if ( v11 == v21 )
          goto LABEL_27;
LABEL_42:
        if ( !v18 )
          goto LABEL_33;
        goto LABEL_29;
      }
      if ( v21 != -1 )
      {
        if ( (*(_BYTE *)(a4 + 12) & 8) == 0 )
          goto LABEL_33;
LABEL_26:
        v17 = v21 & 0xFFFFFFFFFFFFFFFELL;
        v18 = v12 < v17;
        if ( v12 != v17 )
          goto LABEL_42;
      }
LABEL_27:
      v19 = *((_BYTE *)a1 + 97);
      if ( (v19 == 1) != (*(_BYTE *)(v8 + 97) == 1) )
      {
        if ( v19 != 1 )
          goto LABEL_33;
        goto LABEL_29;
      }
      v26 = v10[1];
      v27 = v20[1];
      if ( v26 != v27 )
      {
        v28 = v27 < v26;
        goto LABEL_50;
      }
      if ( v19 != 1 )
      {
        if ( v19 != 2 || (v49 = *(unsigned __int64 **)(v8 + 32), v36 = a1[4] < v49, a1[4] == v49) )
          v36 = (unsigned __int64)a1 < v8;
LABEL_80:
        v28 = v36;
        goto LABEL_50;
      }
      v45 = a1[4];
      v46 = *(unsigned __int64 **)(v8 + 32);
      if ( v45 != v46 )
      {
        if ( v45 )
        {
          if ( !v46 )
          {
LABEL_33:
            if ( v9 >= v8 )
              goto LABEL_52;
LABEL_34:
            v72 = nullptr;
            v77 = 0;
            v74 = nullptr;
            v73 = 0;
            sub_698F60((__int64)&v72, v9);
            v22 = v77;
            ptr = v72;
            v56 = v74;
            sub_698F60(v9, v8);
            sub_698F60(v8, (__int64)&v72);
            if ( v22 == 2 )
            {
              v37 = v56;
              if ( v56 )
              {
                if ( v75 )
                {
                  v62 = (void *)a4;
                  v38 = 0;
                  v39 = v75;
                  do
                  {
                    v40 = *v37;
                    if ( *v37 )
                    {
                      v37[1] = nullptr;
                      qfree(v40);
                    }
                    ++v38;
                    v37 += 7;
                  }
                  while ( v39 != v38 );
                  a4 = (__int64)v62;
                }
LABEL_103:
                qfree(v56);
              }
            }
            else if ( v22 == 1 )
            {
              if ( v76 )
                qfree(v76);
              if ( v56 )
                goto LABEL_103;
            }
            if ( ptr )
              qfree(ptr);
            v9 += 104LL;
            continue;
          }
          break;
        }
LABEL_29:
        v8 -= 104LL;
        goto LABEL_30;
      }
      break;
    }
    v47 = a1[9];
    v36 = (unsigned __int64)v47 < *(_QWORD *)(v8 + 72);
    if ( v47 != *(unsigned __int64 **)(v8 + 72) )
      goto LABEL_80;
    if ( !v47 )
    {
      v36 = (unsigned __int64)a1[11] < *(_QWORD *)(v8 + 88);
      goto LABEL_80;
    }
    v28 = *a1[8] < **(_QWORD **)(v8 + 64);
LABEL_50:
    if ( v28 )
      goto LABEL_29;
    if ( v9 < v8 )
      goto LABEL_34;
LABEL_52:
    sub_6A2780(v9, v58, a3, a4);
    v7 = v9 - (_QWORD)a1;
    if ( (__int64)(v9 - (_QWORD)a1) <= 1664 )
      return v78 - __readfsqword(0x28u);
    v58 = v9;
  }
  while ( a3 );
LABEL_54:
  v65 = a4;
  sub_6A2330((__int64)a1, v58, &v65);
  if ( v58 - (__int64)a1 > 104 )
  {
    while ( 1 )
    {
      v58 -= 104;
      v71 = 0;
      v67 = 0;
      v66 = nullptr;
      v68 = nullptr;
      sub_698F60((__int64)&v66, v58);
      v29 = v71;
      v57 = v66;
      v61 = v68;
      sub_698F60(v58, (__int64)a1);
      v72 = nullptr;
      v77 = 0;
      v74 = nullptr;
      v73 = 0;
      sub_698F60((__int64)&v72, (__int64)&v66);
      v30 = v58 - (_QWORD)a1;
      v31 = v72;
      v63 = v74;
      v60 = v77;
      sub_6A1DF0((__int64)a1, 0, 0x4EC4EC4EC4EC4EC5LL * ((v58 - (__int64)a1) >> 3), (__int64)&v72, a4);
      if ( v60 == 2 )
        break;
      if ( v60 == 1 )
      {
        if ( v76 )
          qfree(v76);
        if ( v63 )
          goto LABEL_120;
      }
LABEL_57:
      if ( v31 )
        qfree(v31);
      if ( v29 != 2 )
      {
        if ( v29 != 1 )
          goto LABEL_61;
        if ( v70 )
          qfree(v70);
        if ( !v61 )
          goto LABEL_61;
        goto LABEL_124;
      }
      v51 = v61;
      if ( v61 )
      {
        v52 = v69;
        v53 = 0;
        if ( v69 )
        {
          do
          {
            v54 = *v51;
            if ( *v51 )
            {
              v51[1] = nullptr;
              qfree(v54);
            }
            ++v53;
            v51 += 7;
          }
          while ( v52 != v53 );
        }
LABEL_124:
        qfree(v61);
      }
LABEL_61:
      if ( v57 )
        qfree(v57);
      if ( v30 <= 104 )
        return v78 - __readfsqword(0x28u);
    }
    if ( !v63 )
      goto LABEL_57;
    if ( v75 )
    {
      v32 = 0;
      v64 = a4;
      v33 = v63;
      v34 = v75;
      do
      {
        v35 = *v33;
        if ( *v33 )
        {
          v33[1] = nullptr;
          qfree(v35);
        }
        ++v32;
        v33 += 7;
      }
      while ( v34 != v32 );
      v30 = v58 - (_QWORD)a1;
      a4 = v64;
    }
LABEL_120:
    qfree(v63);
    goto LABEL_57;
  }
  return v78 - __readfsqword(0x28u);
}
