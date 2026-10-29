__int64 __fastcall sub_6ACF70(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rax
  __int64 *v3; // r15
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  unsigned int v9; // ebp
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  _DWORD *v14; // rax
  __int64 result; // rax
  __int64 v16; // r14
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r12
  int v26; // ecx
  size_t v27; // r14
  __int64 *v28; // r13
  __int64 v29; // rax
  __int64 *v30; // rsi
  __int64 *i; // rax
  __int64 v32; // rdx
  unsigned int v33; // r10d
  unsigned int v34; // ecx
  int v35; // ecx
  __int64 v36; // rax
  __int64 *v37; // rdi
  __int64 *v38; // rax
  __int64 *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 *j; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rax
  unsigned int v45; // ecx
  _QWORD *v46; // r9
  _QWORD *v47; // rax
  __int64 *v48; // r8
  __int64 *k; // rcx
  __int64 v50; // rax
  _QWORD *v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v56; // [rsp+10h] [rbp-A8h]
  unsigned int v57; // [rsp+10h] [rbp-A8h]
  __int64 v58; // [rsp+18h] [rbp-A0h]
  int v59; // [rsp+20h] [rbp-98h]
  _QWORD *v60; // [rsp+20h] [rbp-98h]
  unsigned int v61; // [rsp+28h] [rbp-90h]
  int v62; // [rsp+2Ch] [rbp-8Ch]
  __int64 *v63; // [rsp+30h] [rbp-88h]
  __int64 v64; // [rsp+48h] [rbp-70h] BYREF
  __int64 v65; // [rsp+50h] [rbp-68h] BYREF
  __int64 v66; // [rsp+58h] [rbp-60h] BYREF
  int v67[4]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v68; // [rsp+70h] [rbp-48h] BYREF
  __int64 v69[8]; // [rsp+78h] [rbp-40h] BYREF

  sub_16669D0(v67, *a1);
  v2 = (__int64 *)sub_186B270(0x40u);
  v69[0] = 0;
  v3 = v2;
  *(_OWORD *)v2 = 0;
  *((_OWORD *)v2 + 1) = 0;
  *((_OWORD *)v2 + 2) = 0;
  *((_OWORD *)v2 + 3) = 0;
  v4 = (_QWORD *)a2[1];
  v58 = *a1;
  v68 = *a1;
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = *a2;
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_8;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_8:
    v4 = (_QWORD *)a2[1];
    if ( v4 )
LABEL_9:
      *((_DWORD *)v4 - 1) = 0;
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v59 = 0;
  v62 = 0;
  v12 = a1[2];
  v61 = 8;
  while ( v12 )
  {
    if ( *(_DWORD *)(v12 - 4) == v9 )
      goto LABEL_20;
LABEL_12:
    v13 = *(_QWORD *)(v12 + 8LL * v9);
    if ( *(_WORD *)(v13 + 4) )
      goto LABEL_17;
    v14 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
    if ( !v14 )
      goto LABEL_16;
    if ( *v14 )
    {
      if ( *v14 != 5 )
        goto LABEL_16;
    }
    else
    {
      if ( v14[1] != 2 || *(_DWORD *)(v13 + 24) != 2 )
        goto LABEL_16;
      v16 = *(_QWORD *)(v13 + 32);
      v17 = *(_DWORD **)(sub_15D1F10(v16) + 24);
      if ( v17 && *v17 == 5 && v17[1] == 1
        || (v18 = *(_DWORD **)(sub_15D1F10(v16) + 24)) != nullptr && *v18 == 5 && !v18[1] )
      {
        v20 = sub_15E1B70(v67[0]);
        v21 = v20;
        if ( v20 )
        {
          ++*(_DWORD *)(v20 + 8);
          sub_6A99C0(v11, v58);
          ++*(_DWORD *)(v21 + 8);
          v64 = v21;
        }
        else
        {
          sub_6A99C0(v11, v58);
          v64 = 0;
        }
        sub_6ACBA0(a2 + 1, &v64);
        v11 = v21;
        v12 = a1[2];
        goto LABEL_17;
      }
      if ( *(_WORD *)(v13 + 4) || (v14 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL)) == nullptr || *v14 != 5 )
      {
LABEL_16:
        v12 = a1[2];
        goto LABEL_17;
      }
    }
    v19 = v14[1];
    if ( v19 == 2 )
    {
      if ( *(_DWORD *)(v13 + 24) != 2 )
        goto LABEL_16;
    }
    else if ( v19 != 3 || *(_DWORD *)(v13 + 24) != 2 )
    {
      goto LABEL_16;
    }
    v22 = sub_15E1B70(v67[0]);
    v23 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    if ( v11 )
    {
      v8 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v8 )
        sub_15D7BC0(v58, v11);
    }
    v24 = sub_15E1B70(v67[0]);
    v25 = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    if ( v10 )
    {
      v8 = (*(_DWORD *)(v10 + 8))-- == 1;
      if ( v8 )
        sub_15D7BC0(v58, v10);
    }
    v26 = *(_DWORD *)(v25 + 12);
    v27 = 8LL * v61;
    v28 = &v3[v27 / 8];
    v29 = 8LL * ((v61 - 1) & v26);
    v30 = &v3[(unsigned __int64)v29 / 8];
    if ( v29 != v27 )
    {
      for ( i = &v3[(unsigned __int64)v29 / 8]; v28 != i; ++i )
      {
        v32 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v32 + 12) == v26 && v25 == v32 )
          {
LABEL_81:
            v65 = v23;
            if ( v23 )
              ++*(_DWORD *)(v23 + 8);
            sub_6ACBA0(a2 + 1, &v65);
            v10 = v25;
            v11 = v23;
            v12 = a1[2];
            goto LABEL_17;
          }
        }
        else if ( !v32 )
        {
          goto LABEL_59;
        }
      }
    }
    if ( v30 != v3 )
    {
      for ( j = v3; v30 != j; ++j )
      {
        v43 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v43 + 12) == v26 && v25 == v43 )
            goto LABEL_81;
        }
        else if ( !v43 )
        {
          break;
        }
      }
    }
LABEL_59:
    v66 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    sub_6ACBA0(v69, &v66);
    v33 = v61 - 1;
    v34 = 2 * v61;
    if ( 3 * v61 < 4 * (v62 + v59) )
    {
      v27 = 8LL * v34;
      v61 *= 2;
      v56 = v34;
      v44 = (_QWORD *)sub_186B270(v27);
      v45 = v61;
      v46 = v44;
      if ( v61 )
      {
        v47 = memset(v44, 0, 8 * v56);
        v45 = v61;
        v46 = v47;
      }
      v33 = v45 - 1;
      v48 = &v46[v27 / 8];
      for ( k = v3; v28 != k; *v52 = v53 )
      {
        while ( (unsigned __int64)*k <= 1 )
        {
          if ( v28 == ++k )
            goto LABEL_106;
        }
        v50 = 8LL * (*(_DWORD *)(*k + 12) & v33);
        v51 = &v46[(unsigned __int64)v50 / 8];
        if ( v27 == v50 )
        {
LABEL_109:
          if ( v46 == v51 )
          {
LABEL_114:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v52 = v46;
          while ( *v52 )
          {
            if ( v51 == ++v52 )
              goto LABEL_114;
          }
        }
        else
        {
          v52 = &v46[(unsigned __int64)v50 / 8];
          while ( *v52 )
          {
            if ( v48 == ++v52 )
              goto LABEL_109;
          }
        }
        v53 = *k++;
      }
LABEL_106:
      if ( v3 )
      {
        v63 = &v46[v27 / 8];
        v60 = v46;
        v57 = v33;
        sub_186B220(v3);
        v33 = v57;
        v46 = v60;
        v48 = v63;
      }
      v59 = 0;
      v28 = v48;
      v3 = v46;
    }
    v35 = *(_DWORD *)(v23 + 12);
    v36 = 8LL * (v35 & v33);
    v37 = &v3[(unsigned __int64)v36 / 8];
    if ( v27 == v36 )
    {
      v39 = nullptr;
LABEL_70:
      if ( v37 != v3 )
      {
        v38 = v3;
        do
        {
          while ( 1 )
          {
            v41 = *v38;
            if ( (unsigned __int64)*v38 <= 1 )
              break;
            if ( *(_DWORD *)(v41 + 12) == v35 && v23 == v41 )
              goto LABEL_115;
            if ( v37 == ++v38 )
              goto LABEL_78;
          }
          if ( !v41 )
            goto LABEL_92;
          v39 = v38++;
        }
        while ( v37 != v38 );
      }
LABEL_78:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v38 = &v3[(unsigned __int64)v36 / 8];
    v39 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v40 = *v38;
        if ( (unsigned __int64)*v38 <= 1 )
          break;
        if ( *(_DWORD *)(v40 + 12) == v35 && v23 == v40 )
        {
LABEL_115:
          *v38 = v23;
          v10 = v25;
          v11 = v23;
          v12 = a1[2];
          goto LABEL_17;
        }
        if ( v28 == ++v38 )
          goto LABEL_70;
      }
      if ( !v40 )
        break;
      v39 = v38++;
      if ( v28 == v38 )
        goto LABEL_70;
    }
LABEL_92:
    if ( v39 )
      --v59;
    else
      v39 = v38;
    *v39 = v23;
    v10 = v25;
    v11 = v23;
    ++v62;
    v12 = a1[2];
LABEL_17:
    ++v9;
  }
  if ( v9 )
    goto LABEL_12;
LABEL_20:
  sub_6A99C0(v10, v58);
  sub_6A99C0(v11, v58);
  result = sub_2334C0(&v68);
  if ( v3 )
    return sub_186B220(v3);
  return result;
}

