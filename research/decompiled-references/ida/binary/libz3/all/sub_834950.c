_QWORD *__fastcall sub_834950(__int64 *a1, unsigned int *a2, _QWORD *a3)
{
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rbx
  int *v9; // rbx
  int v10; // r13d
  int v11; // r14d
  __int64 v12; // rax
  _DWORD *v13; // rbp
  _DWORD *v14; // r12
  unsigned int v15; // edx
  _DWORD *v16; // r9
  __int64 v17; // rdx
  _DWORD *v18; // r13
  _DWORD *v19; // rbx
  unsigned int v20; // ebp
  unsigned int v21; // ebx
  _DWORD *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  _DWORD *v25; // rax
  char v26; // al
  _DWORD *v28; // rax
  __int64 v29; // rdi
  _DWORD *v30; // rax
  __int64 v31; // rax
  bool v32; // dl
  char v33; // dl
  __int64 v34; // rax
  char v35; // dl
  char v36; // r9
  __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // r12
  size_t v40; // rbp
  _DWORD *v41; // rbx
  _DWORD *v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned int v47; // eax
  unsigned int v49; // [rsp+10h] [rbp-98h]
  unsigned int v50; // [rsp+10h] [rbp-98h]
  unsigned int v51; // [rsp+10h] [rbp-98h]
  size_t v52; // [rsp+10h] [rbp-98h]
  _DWORD *v53; // [rsp+18h] [rbp-90h]
  _DWORD *v54; // [rsp+18h] [rbp-90h]
  bool v55; // [rsp+18h] [rbp-90h]
  bool v56; // [rsp+18h] [rbp-90h]
  int v57; // [rsp+18h] [rbp-90h]
  _DWORD *v59; // [rsp+28h] [rbp-80h]
  _QWORD v60[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v61[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v62[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v63[9]; // [rsp+60h] [rbp-48h] BYREF

  v4 = *((_DWORD *)a1 + 6);
  if ( 3 * v4 < (unsigned int)(4 * (*((_DWORD *)a1 + 7) + *((_DWORD *)a1 + 8))) )
  {
    v57 = 2 * v4;
    v52 = 8LL * (unsigned int)(2 * v4);
    v37 = sub_186B270(v52);
    v38 = v57;
    v39 = v37;
    v40 = v37 + v52;
    if ( v57 )
    {
      if ( (v52 & 8) == 0 || (*(_DWORD *)(v37 + 4) = 0x80000000, v37 += 8, v37 != v40) )
      {
        do
        {
          *(_DWORD *)(v37 + 4) = 0x80000000;
          v37 += 16;
          *(_DWORD *)(v37 - 4) = 0x80000000;
        }
        while ( v37 != v40 );
      }
    }
    v41 = (_DWORD *)a1[2];
    v42 = &v41[2 * *((unsigned int *)a1 + 6)];
    if ( v41 != v42 )
    {
      do
      {
        while ( v41[1] + 0x80000000 <= 1 )
        {
          v41 += 2;
          if ( v42 == v41 )
            goto LABEL_60;
        }
        v43 = 8LL * (*v41 & (unsigned int)(v57 - 1));
        v44 = v39 + v43;
        if ( v52 == v43 )
        {
LABEL_64:
          if ( v39 == v44 )
          {
LABEL_72:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v45 = v39;
          while ( *(_DWORD *)(v45 + 4) != 0x80000000 )
          {
            v45 += 8;
            if ( v44 == v45 )
              goto LABEL_72;
          }
        }
        else
        {
          v45 = v39 + v43;
          while ( *(_DWORD *)(v45 + 4) != 0x80000000 )
          {
            v45 += 8;
            if ( v40 == v45 )
              goto LABEL_64;
          }
        }
        v46 = *(_QWORD *)v41;
        v41 += 2;
        *(_QWORD *)v45 = v46;
      }
      while ( v42 != v41 );
LABEL_60:
      v42 = (_DWORD *)a1[2];
    }
    if ( v42 )
    {
      sub_186B220(v42);
      v38 = v57;
    }
    a1[2] = v39;
    *((_DWORD *)a1 + 6) = v38;
    *((_DWORD *)a1 + 8) = 0;
  }
  v5 = *a1;
  v6 = *a2;
  if ( *(_QWORD *)(*a1 + 472) && *(_BYTE *)(v5 + 480) && (v51 = *a2, v6 = *a2, v33 = sub_1021D60(), v5 = *a1, v33) )
  {
    v11 = (unsigned __int8)sub_828D80(**(_QWORD **)(*(_QWORD *)(v5 + 88) + 8LL * v51));
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 496);
    v8 = (unsigned int)sub_FF9FB0(v7, v6);
    v60[0] = 0;
    v9 = (int *)(*(_QWORD *)(sub_FF9B20(v7) + 48) + (v8 << 6));
    v60[1] = 0;
    v61[0] = 1;
    v61[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v60, v9);
    v62[0] = 0;
    v62[1] = 0;
    v63[0] = 1;
    v63[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v62, v9 + 8);
    LODWORD(v9) = sub_182DB30(v60);
    LODWORD(v9) = 3 * sub_182DB30(v61) + (_DWORD)v9;
    v10 = sub_182DB30(v62);
    v11 = (v10
         + 3 * sub_182DB30(v63)
         + (((unsigned __int64)(unsigned int)v9 + 2654435769u) >> 2)
         + (((_DWORD)v9 - 1640531527) << 6)
         - 1640531527)
        ^ ((_DWORD)v9 - 1640531527);
    sub_25A130((char *)v62);
    sub_25A130((char *)v60);
  }
  v12 = *((unsigned int *)a1 + 6);
  v13 = (_DWORD *)a1[2];
  v14 = nullptr;
  v15 = v12 - 1;
  v12 *= 8;
  v16 = (_DWORD *)((char *)v13 + v12);
  v17 = 8LL * (v11 & v15);
  v18 = &v13[(unsigned __int64)v17 / 4];
  v19 = &v13[(unsigned __int64)v17 / 4];
  if ( v17 != v12 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = v19[1];
        if ( v20 + 0x80000000 > 1 )
          break;
        if ( v20 == 0x80000000 )
        {
          if ( !v14 )
          {
            v14 = v19;
            goto LABEL_71;
          }
LABEL_70:
          --*((_DWORD *)a1 + 8);
          goto LABEL_71;
        }
        v14 = v19;
        v19 += 2;
        if ( v16 == v19 )
        {
LABEL_12:
          v13 = (_DWORD *)a1[2];
          if ( v18 != v13 )
            goto LABEL_17;
LABEL_13:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
      }
      if ( *v19 != v11 )
        goto LABEL_8;
      v53 = v16;
      v49 = *a2;
      v22 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1[1] + 88) + 8LL * v20)) + 24);
      v23 = **(_QWORD **)(*(_QWORD *)(a1[1] + 88) + 8LL * v49);
      if ( v22 && *v22 == 5 )
      {
        v59 = v53;
        v55 = v22[1] == 1;
        v31 = sub_15D1F10(v23);
        v32 = v55;
        v16 = v59;
        v25 = *(_DWORD **)(v31 + 24);
        if ( !v25 || *v25 != 5 )
        {
          if ( !v55 )
            goto LABEL_24;
          goto LABEL_8;
        }
      }
      else
      {
        v24 = sub_15D1F10(v23);
        v16 = v53;
        v25 = *(_DWORD **)(v24 + 24);
        if ( !v25 || *v25 != 5 )
        {
LABEL_24:
          v54 = v16;
          v26 = sub_834370(a1[1], v20, v49);
          v16 = v54;
          if ( v26 )
          {
            *a3 = v19;
            return a3;
          }
          goto LABEL_8;
        }
        v32 = 0;
      }
      if ( (v25[1] == 1) == v32 )
        goto LABEL_24;
LABEL_8:
      v19 += 2;
      if ( v16 == v19 )
        goto LABEL_12;
    }
  }
  while ( 1 )
  {
    if ( v18 == v13 )
      goto LABEL_13;
LABEL_17:
    v21 = v13[1];
    if ( v21 + 0x80000000 <= 1 )
      break;
    if ( *v13 != v11 )
      goto LABEL_15;
    v50 = *a2;
    v28 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1[1] + 88) + 8LL * v21)) + 24);
    v29 = **(_QWORD **)(*(_QWORD *)(a1[1] + 88) + 8LL * v50);
    if ( v28 && *v28 == 5 )
    {
      v56 = v28[1] == 1;
      v34 = sub_15D1F10(v29);
      v35 = 0;
      v36 = v56;
      v30 = *(_DWORD **)(v34 + 24);
      if ( !v30 || *v30 != 5 )
      {
LABEL_43:
        if ( v35 != v36 )
          goto LABEL_15;
        goto LABEL_30;
      }
LABEL_46:
      v35 = v30[1] == 1;
      goto LABEL_43;
    }
    v30 = *(_DWORD **)(sub_15D1F10(v29) + 24);
    if ( v30 && *v30 == 5 )
    {
      v36 = 0;
      goto LABEL_46;
    }
LABEL_30:
    if ( (unsigned __int8)sub_834370(a1[1], v21, v50) )
    {
      *a3 = v13;
      return a3;
    }
LABEL_15:
    v13 += 2;
  }
  if ( v21 != 0x80000000 )
  {
    v14 = v13;
    goto LABEL_15;
  }
  if ( v14 )
    goto LABEL_70;
  v14 = v13;
LABEL_71:
  v47 = *a2;
  *v14 = v11;
  v14[1] = v47;
  ++*((_DWORD *)a1 + 7);
  *a3 = v14;
  return a3;
}

