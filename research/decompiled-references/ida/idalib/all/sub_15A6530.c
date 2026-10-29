_QWORD *__fastcall sub_15A6530(int *a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rbp
  _QWORD *result; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // r14
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rdi
  int v30; // edx
  _DWORD *v31; // rax
  __int64 v32; // rdi
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // r14
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rbp
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdi

  v7 = *a1;
  v8 = (unsigned int)a2;
  if ( *a1 != 5 )
  {
    switch ( v7 )
    {
      case 4:
        v11 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL);
        if ( (unsigned int)a2 < (*(_DWORD *)(v11 + 20) & 0x1FFFFFFFu) )
          return *(_QWORD **)(v11 + 8LL * (unsigned int)a2 + 24);
        return nullptr;
      case 0:
        v9 = *((_QWORD *)a1 + 1);
        goto LABEL_6;
      case 1:
        v9 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 48LL);
LABEL_6:
        if ( v9 && (unsigned int)a2 < (unsigned int)sub_B76070(v9, (__int64)a2, a3, a4) )
          return *(_QWORD **)(*(_QWORD *)(v9 + 120) + 8LL * (unsigned int)a2);
        return nullptr;
      case 3:
        v34 = *((_QWORD *)a1 + 1);
        if ( *(_BYTE *)(v34 + 16) != 25 && (unsigned int)a2 < *(unsigned __int16 *)(v34 + 22) )
          return *(_QWORD **)(*((_QWORD *)a1 + 2) + 8LL * (unsigned int)a2 + 16);
        break;
    }
    return nullptr;
  }
  v13 = *((_QWORD *)a1 + 1);
  if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 59 > 2 )
    goto LABEL_29;
  v14 = *(_QWORD *)(v13 + 104);
  v15 = *(_QWORD *)(v14 + 96);
  a3 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v15 & 1) == 0 )
  {
    a2 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v15 & 2) == 0 )
      {
        v16 = *(_QWORD *)(v13 + 128);
        a4 = *(unsigned int *)(v16 + 16);
        if ( (unsigned int)v8 < (unsigned int)a4 )
        {
LABEL_19:
          if ( (v15 & 2) == 0 )
          {
LABEL_20:
            if ( (*(_BYTE *)(v16 + 24) & 1) != 0 )
              v17 = sub_B96980(v16);
            else
              v17 = *(_QWORD *)(v16 + 24);
            v18 = **(_QWORD **)(v17 + 24 * v8 + 16);
            v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
            v20 = *(_QWORD *)(v19 + 8) & 7LL;
            v21 = v20 | (*(__int64 *)(v19 + 8) >> 3) & 1;
            if ( v21 )
              v19 = sub_F64F00(v18, (__int64)a2, v20, v21, a5);
            return sub_F631C0(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v20, v21, a5, a6);
          }
          v42 = a2[2295];
          v43 = v14 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v42 )
          {
            v44 = a2[294];
            a2[304] += 24LL;
            v45 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( a2[295] >= v45 + 24 && v44 )
            {
              a2[294] = v45 + 24;
              v46 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v47 = (__int64)(a2 + 294);
              a2 = &qword_18;
              v46 = sub_986170(v47, 24, 24, 3, a5, a6);
              v45 = v46 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v46 = v42;
            v43 = v45 | 4;
            *(_DWORD *)(v46 + 8) = 0;
            *(_QWORD *)(v46 + 16) = v14;
          }
          a3 = v43 & 0xFFFFFFFFFFFFFFFELL;
          v15 = a3 | 1;
          *(_QWORD *)(v14 + 96) = a3 | 1;
LABEL_47:
          if ( a3 )
          {
            if ( (a3 & 4) != 0 )
            {
              v31 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v31 )
              {
                v32 = *(_QWORD *)v31;
                v33 = *(_DWORD *)(*(_QWORD *)v31 + 12LL);
                if ( v31[2] != v33 )
                {
                  v31[2] = v33;
                  a2 = (_QWORD *)v14;
                  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v32 + 152LL))(v32, v14);
                }
              }
            }
          }
          v16 = *(_QWORD *)(v13 + 128);
          goto LABEL_20;
        }
        goto LABEL_26;
      }
      v23 = a2[2295];
      v24 = v14 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v23 )
      {
        v25 = a2[294];
        a2[304] += 24LL;
        v26 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( a2[295] >= v26 + 24 && v25 )
        {
          a2[294] = v26 + 24;
          v27 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v27 = sub_986170((__int64)(a2 + 294), 24, 24, 3, a5, a6);
          v26 = v27 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v27 = v23;
        v24 = v26 | 4;
        *(_DWORD *)(v27 + 8) = 0;
        *(_QWORD *)(v27 + 16) = v14;
      }
      a3 = v24 & 0xFFFFFFFFFFFFFFFELL;
      v15 = a3 | 1;
      *(_QWORD *)(v14 + 96) = a3 | 1;
    }
  }
  if ( a3 )
  {
    if ( (a3 & 4) != 0 )
    {
      v28 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v28 )
      {
        v29 = *(_QWORD *)v28;
        v30 = *(_DWORD *)(*(_QWORD *)v28 + 12LL);
        if ( v28[2] != v30 )
        {
          v28[2] = v30;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v29 + 152LL))(v29, v14);
        }
      }
    }
  }
  v14 = *(_QWORD *)(v13 + 104);
  v16 = *(_QWORD *)(v13 + 128);
  v15 = *(_QWORD *)(v14 + 96);
  a4 = *(unsigned int *)(v16 + 16);
  a2 = (_QWORD *)(v15 & 1);
  a3 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( (unsigned int)v8 < (unsigned int)a4 )
  {
    if ( (v15 & 1) != 0 )
      goto LABEL_47;
    a2 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_47;
    goto LABEL_19;
  }
  if ( (v15 & 1) != 0 )
    goto LABEL_64;
LABEL_26:
  a2 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
LABEL_64:
    if ( a3 )
    {
      a3 &= 4u;
      if ( (_DWORD)a3 )
      {
        v40 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v40 )
        {
          v41 = *(_QWORD *)v40;
          a3 = *(unsigned int *)(*(_QWORD *)v40 + 12LL);
          if ( v40[2] != (_DWORD)a3 )
          {
            v40[2] = a3;
            a2 = (_QWORD *)v14;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v41 + 152LL))(v41, v14);
          }
        }
      }
    }
    a4 = *(unsigned int *)(*(_QWORD *)(v13 + 128) + 16LL);
    goto LABEL_28;
  }
  if ( (v15 & 2) != 0 )
  {
    v35 = a2[2295];
    v36 = v14 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v35 )
    {
      v37 = a2[294];
      a2[304] += 24LL;
      v38 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a2[295] >= v38 + 24 && v37 )
      {
        a2[294] = v38 + 24;
        v39 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v48 = (__int64)(a2 + 294);
        a2 = &qword_18;
        v39 = sub_986170(v48, 24, 24, 3, a5, a6);
        v38 = v39 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v39 = v35;
      v36 = v38 | 4;
      *(_DWORD *)(v39 + 8) = 0;
      *(_QWORD *)(v39 + 16) = v14;
    }
    a3 = v36 & 0xFFFFFFFFFFFFFFFELL;
    v15 = a3 | 1;
    *(_QWORD *)(v14 + 96) = a3 | 1;
    goto LABEL_64;
  }
LABEL_28:
  v13 = *((_QWORD *)a1 + 1);
  LODWORD(v8) = v8 - a4;
LABEL_29:
  result = (_QWORD *)sub_B7E900(v13, (__int64)a2, a3, a4, a5, a6);
  if ( !result )
    return nullptr;
  v22 = v8 - 1;
  if ( (_DWORD)v8 )
  {
    while ( 1 )
    {
      v12 = result[1] & 0xFFFFFFFFFFFFFFF8LL;
      result = (_QWORD *)v12;
      if ( !v12 )
        break;
      if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 49 <= 2 && --v22 == -1 )
        return result;
    }
    return nullptr;
  }
  return result;
}
