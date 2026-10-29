__int64 __fastcall sub_31C2C0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  void *v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  __int64 v9; // rax
  void (__fastcall ***v10)(_QWORD); // rbx
  bool v11; // zf
  __int64 v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // r14
  __int64 *v15; // r13
  __int64 v16; // rdx
  unsigned int *v17; // r12
  __int64 *v18; // rbx
  std::ios_base *v19; // rax
  int v20; // eax
  __int64 *v21; // r13
  __int64 v22; // rsi
  _QWORD *v23; // rbx
  _DWORD *v24; // rsi
  __int64 v25; // rdi
  void (__fastcall ***v26)(void *); // rbx
  __int64 v27; // rdi
  _QWORD *v28; // r12
  _QWORD *v29; // r13
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rax
  _QWORD *v33; // rbx
  int v34; // eax
  char v35; // r12
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // r13
  __int64 v40; // rax
  void (__fastcall ***v41)(_QWORD); // rbx
  __int64 *v42; // rbp
  __int64 v43; // rsi
  _DWORD *v45; // rsi
  __int64 v46; // rdi
  void (__fastcall ***v47)(void *); // r13
  __int64 v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // r13
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  int v56; // eax
  __int64 v57; // rax
  void (__fastcall ***v58)(_QWORD); // r13
  __int64 v59; // rax
  __int64 v60; // [rsp+0h] [rbp-78h]
  __int64 v61; // [rsp+8h] [rbp-70h]
  __int64 v62; // [rsp+8h] [rbp-70h]
  __int64 v63; // [rsp+8h] [rbp-70h]
  _QWORD *v64; // [rsp+8h] [rbp-70h]
  _QWORD *v65; // [rsp+8h] [rbp-70h]
  __int64 v66; // [rsp+8h] [rbp-70h]
  unsigned int v67; // [rsp+10h] [rbp-68h]
  __int64 v68; // [rsp+10h] [rbp-68h]
  unsigned int v69; // [rsp+1Ch] [rbp-5Ch]
  __int64 v70; // [rsp+20h] [rbp-58h]
  __int64 v71; // [rsp+28h] [rbp-50h]
  char v72; // [rsp+28h] [rbp-50h]
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  void *v74[8]; // [rsp+38h] [rbp-40h] BYREF

  v2 = **(_QWORD **)(a1 + 32);
  if ( v2 )
  {
    v3 = v2 + 56LL * *(unsigned int *)(v2 - 4);
    if ( v2 != v3 )
    {
      if ( ((56 * (unsigned __int8)*(_DWORD *)(v2 - 4)) & 8) == 0 || (*(_DWORD *)(v2 + 48) = 0, v2 += 56, v3 != v2) )
      {
        do
        {
          *(_DWORD *)(v2 + 48) = 0;
          v2 += 112;
          *(_DWORD *)(v2 - 8) = 0;
        }
        while ( v3 != v2 );
      }
    }
  }
  ptr = nullptr;
  v4 = (_QWORD *)sub_2FF8B0(a1);
  (*(void (__fastcall **)(_QWORD *, void **))(*v4 + 32LL))(v4, &ptr);
  v5 = ptr;
  if ( !ptr )
    goto LABEL_17;
  v6 = v4[7];
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD, void **))(*(_QWORD *)v6 + 32LL))(v4[7], &ptr);
    v5 = ptr;
    if ( !ptr )
      goto LABEL_17;
  }
  v7 = **(_QWORD ***)(a1 + 32);
  if ( v7 )
  {
    v8 = &v7[7 * *((unsigned int *)v7 - 1)];
    if ( v7 != v8 )
    {
      if ( !(unsigned __int8)sub_1374270(v5, *v7) )
      {
LABEL_14:
        sub_31BDF0(a1);
        v10 = (void (__fastcall ***)(_QWORD))ptr;
        if ( ptr )
        {
          v11 = (*((_DWORD *)ptr + 4))-- == 1;
          if ( v11 )
            goto LABEL_16;
        }
        goto LABEL_17;
      }
      while ( 1 )
      {
        *((_DWORD *)v7 + 12) = 1;
        v9 = sub_2FF8B0(a1);
        sub_E5EBF0(v9, *v7);
        v7 += 7;
        if ( v8 == v7 )
          break;
        if ( !(unsigned __int8)sub_1374270(ptr, *v7) )
          goto LABEL_14;
      }
    }
  }
  v74[0] = nullptr;
  v23 = (_QWORD *)sub_2FF8B0(a1);
  (*(void (__fastcall **)(_QWORD *, void **))(*v23 + 32LL))(v23, v74);
  v24 = v74[0];
  if ( !v74[0] )
    goto LABEL_65;
  v25 = v23[7];
  if ( v25 )
  {
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v25 + 32LL))(v25, v74);
    v24 = v74[0];
    if ( !v74[0] )
      goto LABEL_65;
  }
  v26 = *(void (__fastcall ****)(void *))(a1 + 136);
  ++v24[4];
  if ( v26 )
  {
    v11 = (*((_DWORD *)v26 + 4))-- == 1;
    if ( v11 )
    {
      (**v26)(v26);
      sub_186B220(v26);
      v24 = v74[0];
    }
  }
  v27 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 136) = v24;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 128LL))(v27);
  sub_1360B80((char *)v74[0] + 128, 1);
  v28 = **(_QWORD ***)(a1 + 32);
  if ( !v28 )
    goto LABEL_62;
  v29 = &v28[7 * *((unsigned int *)v28 - 1)];
  if ( v28 == v29 )
    goto LABEL_62;
  v30 = *((_DWORD *)v28 + 12);
  v31 = **(_QWORD **)(a1 + 32);
  while ( v30 )
  {
    v31 += 56;
    v28 = (_QWORD *)v31;
    if ( v29 == (_QWORD *)v31 )
      goto LABEL_62;
    v30 = *(_DWORD *)(v31 + 48);
  }
  *((_DWORD *)v28 + 12) = 1;
  v32 = sub_2FF8B0(a1);
  sub_E5EBF0(v32, *v28);
  v33 = (_QWORD *)(v31 + 56);
  if ( v29 == v33 )
    goto LABEL_62;
  v34 = *((_DWORD *)v33 + 12);
  v35 = 0;
  while ( 2 )
  {
    if ( v34 == -1 )
      goto LABEL_52;
    while ( 1 )
    {
      if ( !(unsigned __int8)sub_1374270(v74[0], *v33) )
      {
        v36 = 0;
        goto LABEL_50;
      }
      v36 = 1;
      if ( !v35 )
        break;
LABEL_50:
      *((_DWORD *)v33 + 12) = v36;
      v33 += 7;
      if ( v29 == v33 )
        goto LABEL_62;
      v35 = 1;
      if ( *((_DWORD *)v33 + 12) == -1 )
        goto LABEL_52;
    }
    *((_DWORD *)v33 + 12) = 1;
    v59 = sub_2FF8B0(a1);
    sub_E5EBF0(v59, *v33);
LABEL_52:
    v33 += 7;
    if ( v29 != v33 )
    {
      v34 = *((_DWORD *)v33 + 12);
      continue;
    }
    break;
  }
LABEL_62:
  sub_31BDF0(a1);
  v41 = (void (__fastcall ***)(_QWORD))v74[0];
  if ( v74[0] )
  {
    v11 = (*((_DWORD *)v74[0] + 4))-- == 1;
    if ( v11 )
    {
      (**v41)(v41);
      sub_186B220(v41);
    }
  }
LABEL_65:
  v10 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v11 = (*((_DWORD *)ptr + 4))-- == 1;
    if ( v11 )
    {
LABEL_16:
      (**v10)(v10);
      sub_186B220(v10);
    }
  }
LABEL_17:
  v12 = **(_QWORD **)(a1 + 32);
  if ( !v12 )
    return 1;
  v69 = *(_DWORD *)(v12 - 4);
  if ( !v69 )
    return 1;
  v70 = 0;
  v13 = 1;
  v14 = 0;
  while ( 2 )
  {
    v15 = (__int64 *)(v14 + v12);
    v67 = *((_DWORD *)v15 + 12);
    if ( v67 )
      goto LABEL_33;
    v16 = *v15;
    v60 = *(_QWORD *)(a1 + 160);
    if ( *v15 )
      ++*(_DWORD *)(v16 + 8);
    v61 = v16;
    v17 = (unsigned int *)sub_186B270(0x18u);
    v18 = (__int64 *)(v17 + 2);
    *((_QWORD *)v17 + 1) = v61;
    *(_QWORD *)v17 = 0x100000002LL;
    v19 = (std::ios_base *)sub_2FF8B0(a1);
    v20 = sub_E60CB0(v19, v17[1], (int)v17 + 8);
    if ( !v20 )
      break;
    if ( v20 != 1 )
    {
      if ( v20 == -1 )
      {
        *((_DWORD *)v15 + 12) = -1;
        v62 = sub_2FF8B0(a1);
        v68 = *(_QWORD *)(a1 + 160);
        v37 = sub_15E1A70(v68);
        v38 = v37;
        if ( v37 )
        {
          ++*(_DWORD *)(v37 + 8);
          sub_E5EBF0(v62, v37);
          v11 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v11 )
            sub_15D7BC0(v68, v38);
        }
        else
        {
          sub_E5EBF0(v62, 0);
        }
        if ( v13 < v69 )
        {
          v39 = v14 + 56;
          do
          {
            v63 = v39 + **(_QWORD **)(a1 + 32);
            if ( *(_DWORD *)(v63 + 48) != 1 )
              break;
            v40 = sub_2FF8B0(a1);
            sub_E5EBF0(v40, *(_QWORD *)v63);
            v39 += 56;
          }
          while ( 56 * (v70 + v69 - 2 - (unsigned int)v70) + 112 != v39 );
        }
        sub_31BDF0(a1);
      }
      goto LABEL_26;
    }
    v74[0] = nullptr;
    v64 = (_QWORD *)sub_2FF8B0(a1);
    (*(void (__fastcall **)(_QWORD *, void **))(*v64 + 32LL))(v64, v74);
    v45 = v74[0];
    if ( v74[0] )
    {
      v46 = v64[7];
      if ( !v46
        || ((*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v46 + 32LL))(v46, v74), (v45 = v74[0]) != nullptr) )
      {
        v47 = *(void (__fastcall ****)(void *))(a1 + 136);
        ++v45[4];
        if ( v47 )
        {
          v11 = (*((_DWORD *)v47 + 4))-- == 1;
          if ( v11 )
          {
            (**v47)(v47);
            sub_186B220(v47);
            v45 = v74[0];
          }
        }
        v48 = *(_QWORD *)(a1 + 168);
        *(_QWORD *)(a1 + 136) = v45;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 128LL))(v48);
        sub_1360B80((char *)v74[0] + 128, 1);
        v49 = **(_QWORD **)(a1 + 32);
        if ( v49 )
        {
          v50 = v49 + 56LL * *(unsigned int *)(v49 - 4);
          if ( v49 != v50 )
          {
            v51 = *(_DWORD *)(v49 + 48);
            v52 = **(_QWORD **)(a1 + 32);
            while ( v51 )
            {
              v52 += 56;
              v49 = v52;
              if ( v50 == v52 )
                goto LABEL_101;
              v51 = *(_DWORD *)(v52 + 48);
            }
            *(_DWORD *)(v49 + 48) = 1;
            v71 = v52;
            v65 = (_QWORD *)v49;
            v53 = sub_2FF8B0(a1);
            sub_E5EBF0(v53, *v65);
            v54 = v71 + 56;
            if ( v50 == v71 + 56 )
              goto LABEL_101;
            v72 = 0;
            v55 = *(_DWORD *)(v54 + 48);
LABEL_88:
            if ( v55 == -1 )
            {
LABEL_93:
              v54 += 56;
              if ( v54 == v50 )
                goto LABEL_101;
              goto LABEL_94;
            }
            while ( 1 )
            {
              v66 = v54;
              if ( (unsigned __int8)sub_1374270(v74[0], *(_QWORD *)v54) )
              {
                v56 = 1;
                if ( !v72 )
                {
                  *(_DWORD *)(v66 + 48) = 1;
                  v57 = sub_2FF8B0(a1);
                  sub_E5EBF0(v57, *(_QWORD *)v66);
                  v54 = v66 + 56;
                  if ( v66 + 56 == v50 )
                    break;
LABEL_94:
                  v55 = *(_DWORD *)(v54 + 48);
                  goto LABEL_88;
                }
              }
              else
              {
                v56 = 0;
              }
              *(_DWORD *)(v66 + 48) = v56;
              v54 = v66 + 56;
              if ( v50 == v66 + 56 )
                break;
              v72 = 1;
              if ( *(_DWORD *)(v66 + 104) == -1 )
                goto LABEL_93;
            }
          }
        }
LABEL_101:
        sub_31BDF0(a1);
        v58 = (void (__fastcall ***)(_QWORD))v74[0];
        if ( v74[0] )
        {
          v11 = (*((_DWORD *)v74[0] + 4))-- == 1;
          if ( v11 )
          {
            (**v58)(v58);
            sub_186B220(v58);
          }
LABEL_26:
          v21 = &v18[v17[1]];
          while ( v18 < v21 )
          {
            while ( 1 )
            {
              v22 = *v18;
              if ( *v18 )
              {
                v11 = (*(_DWORD *)(v22 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v18 >= v21 )
                goto LABEL_32;
            }
            ++v18;
            sub_15D7BC0(v60, v22);
          }
LABEL_32:
          sub_186B220(v17);
LABEL_33:
          ++v70;
          v14 += 56;
          if ( v13 >= v69 )
            return 1;
          ++v13;
          v12 = **(_QWORD **)(a1 + 32);
          continue;
        }
      }
    }
    break;
  }
  v42 = &v18[v17[1]];
  while ( v18 < v42 )
  {
    while ( 1 )
    {
      v43 = *v18;
      if ( *v18 )
      {
        v11 = (*(_DWORD *)(v43 + 8))-- == 1;
        if ( v11 )
          break;
      }
      if ( ++v18 >= v42 )
        goto LABEL_74;
    }
    ++v18;
    sub_15D7BC0(v60, v43);
  }
LABEL_74:
  sub_186B220(v17);
  return v67;
}

