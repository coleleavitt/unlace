unsigned __int64 __fastcall sub_15A60C0(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
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
  __int64 v34; // r14
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  _DWORD *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rbp
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rdi

  v7 = (unsigned int)a2;
  if ( *(_DWORD *)a1 != 5 )
  {
    if ( *(_DWORD *)a1 == 4 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
      if ( (unsigned int)a2 < (*(_DWORD *)(v8 + 20) & 0x1FFFFFFFu) )
      {
        v9 = *(_QWORD *)(v8 + 8LL * (unsigned int)a2 + 24);
        if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x2F )
          return *(_QWORD *)(v9 + 48);
      }
    }
    else
    {
      v11 = sub_15A33A0(a1, (__int64)a2, a3, a4);
      if ( v11 && *(_BYTE *)(v11 + 16) == 26 && (unsigned int)a2 < *(unsigned __int16 *)(v11 + 22) )
        return *(_QWORD *)(v11 + 8LL * (unsigned int)a2 + 48);
    }
    return 0;
  }
  v14 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 59 > 2 )
  {
LABEL_28:
    v13 = sub_B7E900(v14, (__int64)a2, a3, a4, a5, a6);
    if ( v13 )
    {
      v22 = v7 - 1;
      if ( !(_DWORD)v7 )
        return *(_QWORD *)(v13 + 48);
      while ( 1 )
      {
        v12 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v13 = v12;
        if ( !v12 )
          break;
        if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 49 <= 2 && --v22 == -1 )
          return *(_QWORD *)(v13 + 48);
      }
    }
    return 0;
  }
  v15 = *(_QWORD *)(v14 + 104);
  v16 = *(_QWORD *)(v15 + 96);
  a3 = v16 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v16 & 1) == 0 )
  {
    a2 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v16 & 2) == 0 )
      {
        v17 = *(_QWORD *)(v14 + 128);
        a4 = *(unsigned int *)(v17 + 16);
        if ( (unsigned int)v7 < (unsigned int)a4 )
          goto LABEL_18;
LABEL_25:
        a2 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v16 & 2) == 0 )
          {
LABEL_27:
            v14 = *(_QWORD *)(a1 + 8);
            LODWORD(v7) = v7 - a4;
            goto LABEL_28;
          }
          v34 = a2[2295];
          v35 = v15 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v34 )
          {
            v36 = a2[294];
            a2[304] += 24LL;
            v37 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( a2[295] >= v37 + 24 && v36 )
            {
              a2[294] = v37 + 24;
              v38 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v47 = (__int64)(a2 + 294);
              a2 = &qword_18;
              v38 = sub_986170(v47, 24, 24, 3, a5, a6);
              v37 = v38 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v38 = v34;
            v35 = v37 | 4;
            *(_DWORD *)(v38 + 8) = 0;
            *(_QWORD *)(v38 + 16) = v15;
          }
          a3 = v35 & 0xFFFFFFFFFFFFFFFELL;
          v16 = a3 | 1;
          *(_QWORD *)(v15 + 96) = a3 | 1;
        }
LABEL_58:
        if ( a3 )
        {
          a3 &= 4u;
          if ( (_DWORD)a3 )
          {
            v39 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v39 )
            {
              v40 = *(_QWORD *)v39;
              a3 = *(unsigned int *)(*(_QWORD *)v39 + 12LL);
              if ( v39[2] != (_DWORD)a3 )
              {
                v39[2] = a3;
                a2 = (_QWORD *)v15;
                (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v40 + 152LL))(v40, v15);
              }
            }
          }
        }
        a4 = *(unsigned int *)(*(_QWORD *)(v14 + 128) + 16LL);
        goto LABEL_27;
      }
      v23 = a2[2295];
      v24 = v15 & 0xFFFFFFFFFFFFFFFBLL;
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
        *(_QWORD *)(v27 + 16) = v15;
      }
      a3 = v24 & 0xFFFFFFFFFFFFFFFELL;
      v16 = a3 | 1;
      *(_QWORD *)(v15 + 96) = a3 | 1;
    }
  }
  if ( a3 )
  {
    if ( (a3 & 4) != 0 )
    {
      v28 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v28 )
      {
        v29 = *(_QWORD *)v28;
        v30 = *(_DWORD *)(*(_QWORD *)v28 + 12LL);
        if ( v28[2] != v30 )
        {
          v28[2] = v30;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v29 + 152LL))(v29, v15);
        }
      }
    }
  }
  v15 = *(_QWORD *)(v14 + 104);
  v17 = *(_QWORD *)(v14 + 128);
  v16 = *(_QWORD *)(v15 + 96);
  a4 = *(unsigned int *)(v17 + 16);
  a2 = (_QWORD *)(v16 & 1);
  a3 = v16 & 0xFFFFFFFFFFFFFFFELL;
  if ( (unsigned int)v7 >= (unsigned int)a4 )
  {
    if ( (v16 & 1) != 0 )
      goto LABEL_58;
    goto LABEL_25;
  }
  if ( (v16 & 1) != 0 || (a2 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL), (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
LABEL_46:
    if ( a3 )
    {
      if ( (a3 & 4) != 0 )
      {
        v31 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v31 )
        {
          v32 = *(_QWORD *)v31;
          v33 = *(_DWORD *)(*(_QWORD *)v31 + 12LL);
          if ( v31[2] != v33 )
          {
            v31[2] = v33;
            a2 = (_QWORD *)v15;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v32 + 152LL))(v32, v15);
          }
        }
      }
    }
    v17 = *(_QWORD *)(v14 + 128);
    goto LABEL_19;
  }
LABEL_18:
  if ( (v16 & 2) != 0 )
  {
    v41 = a2[2295];
    v42 = v15 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v41 )
    {
      v43 = a2[294];
      a2[304] += 24LL;
      v44 = (v43 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a2[295] >= v44 + 24 && v43 )
      {
        a2[294] = v44 + 24;
        v45 = (v43 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v46 = (__int64)(a2 + 294);
        a2 = &qword_18;
        v45 = sub_986170(v46, 24, 24, 3, a5, a6);
        v44 = v45 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v45 = v41;
      v42 = v44 | 4;
      *(_DWORD *)(v45 + 8) = 0;
      *(_QWORD *)(v45 + 16) = v15;
    }
    a3 = v42 & 0xFFFFFFFFFFFFFFFELL;
    v16 = a3 | 1;
    *(_QWORD *)(v15 + 96) = a3 | 1;
    goto LABEL_46;
  }
LABEL_19:
  if ( (*(_BYTE *)(v17 + 24) & 1) != 0 )
    v18 = sub_B96980(v17);
  else
    v18 = *(_QWORD *)(v17 + 24);
  v19 = **(_QWORD **)(v18 + 24 * v7 + 16);
  v20 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(_QWORD *)(v20 + 8) & 7LL;
  if ( v21 | (*(__int64 *)(v20 + 8) >> 3) & 1 )
    v20 = sub_F64F00(v19, (__int64)a2, v21, v21 | (*(__int64 *)(v20 + 8) >> 3) & 1, a5);
  return v20 & 0xFFFFFFFFFFFFFFF0LL;
}
