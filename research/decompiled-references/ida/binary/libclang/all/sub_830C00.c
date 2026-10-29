__int64 __fastcall sub_830C00(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  _DWORD *v6; // rax
  _QWORD *v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // r13
  _DWORD *v26; // rax
  __int64 v27; // rdi
  int v28; // edx
  __int64 v29; // rdi
  int v30; // edx
  _DWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  _DWORD *v37; // rax
  __int64 v38; // rbx
  unsigned __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rdi
  int v43; // edx
  __int64 v44; // rdi
  int v45; // edx
  _QWORD *v46; // rax
  __int64 v47; // r13

  v3 = *(_QWORD *)(a1 + 104);
  v4 = *(_QWORD *)(v3 + 96);
  v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v4 & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_5;
  }
  else
  {
    if ( v5 <= 3 || (v4 & 2) == 0 )
      goto LABEL_5;
    v8 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    v9 = v8[2275];
    if ( !v9 )
    {
      *(_QWORD *)(v3 + 96) = v3 & 0xFFFFFFFFFFFFFFFALL | 1;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 2) != 0 )
        return 0;
      goto LABEL_14;
    }
    v10 = v8[274];
    v8[284] += 24LL;
    v5 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v5 + 24;
    if ( v8[275] >= v5 + 24 && v10 )
    {
      v8[274] = a2;
    }
    else
    {
      a2 = 24;
      v5 = sub_820510((__int64)(v8 + 274), 24, 3);
    }
    *(_QWORD *)v5 = v9;
    *(_DWORD *)(v5 + 8) = 0;
    v4 = v5 | 5;
    *(_QWORD *)(v5 + 16) = v3;
    *(_QWORD *)(v3 + 96) = v5 | 5;
    LOBYTE(v5) = v5 & 0xFA | 4;
  }
  if ( (v5 & 4) != 0 )
  {
    v6 = (_DWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v6 )
    {
      v29 = *(_QWORD *)v6;
      v30 = *(_DWORD *)(*(_QWORD *)v6 + 12LL);
      if ( v6[2] != v30 )
      {
        v6[2] = v30;
        a2 = v3;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, v3);
      }
    }
  }
LABEL_5:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 2) != 0 )
    return 0;
LABEL_14:
  v11 = sub_7868A0(a1);
  if ( !v11 )
    goto LABEL_22;
LABEL_15:
  if ( (*(_BYTE *)(v11 + 68) & 1) != 0 && (v12 = *(_QWORD *)(v11 + 40), v12 <= 7) && !(_DWORD)v12
    || !(unsigned __int8)sub_831200(*(_QWORD *)(v11 + 48)) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 8);
      v11 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v13 <= 7 )
        break;
      if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 47 <= 2 )
        goto LABEL_15;
    }
LABEL_22:
    v14 = *(_QWORD *)(a1 + 104);
    v15 = *(_QWORD *)(v14 + 96);
    v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v15 & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_31;
    }
    else
    {
      if ( v16 <= 3 || (v15 & 2) == 0 )
        goto LABEL_31;
      v17 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
      v18 = v17[2275];
      if ( !v18 )
      {
        *(_QWORD *)(v14 + 96) = v14 & 0xFFFFFFFFFFFFFFFALL | 1;
        goto LABEL_31;
      }
      a2 = v17[274];
      v17[284] += 24LL;
      v16 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v17[275] >= v16 + 24 && a2 )
      {
        v17[274] = v16 + 24;
      }
      else
      {
        a2 = 24;
        v16 = sub_820510((__int64)(v17 + 274), 24, 3);
      }
      *(_QWORD *)v16 = v18;
      *(_DWORD *)(v16 + 8) = 0;
      v15 = v16 | 5;
      *(_QWORD *)(v16 + 16) = v14;
      *(_QWORD *)(v14 + 96) = v16 | 5;
      LOBYTE(v16) = v16 & 0xFA | 4;
    }
    if ( (v16 & 4) != 0 )
    {
      v26 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v26 )
      {
        v27 = *(_QWORD *)v26;
        v28 = *(_DWORD *)(*(_QWORD *)v26 + 12LL);
        if ( v26[2] != v28 )
        {
          v26[2] = v28;
          a2 = v14;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 144LL))(v27, v14);
        }
      }
    }
LABEL_31:
    v19 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v19 + 24) & 1) != 0 )
      v20 = sub_7A2E20(v19);
    else
      v20 = *(_QWORD *)(v19 + 24);
    v21 = *(_QWORD *)(a1 + 104);
    v22 = *(_QWORD *)(v21 + 96);
    v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v22 & 1) != 0 )
    {
      if ( v23 )
        goto LABEL_53;
    }
    else
    {
      if ( v23 > 3 )
      {
        if ( (v22 & 2) == 0 )
        {
          v33 = *(_QWORD *)(a1 + 128);
          v34 = v20 + 24LL * *(unsigned int *)(v33 + 16);
          goto LABEL_61;
        }
        v24 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
        v25 = v24[2275];
        if ( !v25 )
        {
          *(_QWORD *)(v21 + 96) = v21 & 0xFFFFFFFFFFFFFFFALL | 1;
          v21 = *(_QWORD *)(a1 + 104);
          goto LABEL_56;
        }
        a2 = v24[274];
        v24[284] += 24LL;
        v23 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v24[275] >= v23 + 24 && a2 )
        {
          v24[274] = v23 + 24;
        }
        else
        {
          a2 = 24;
          v23 = sub_820510((__int64)(v24 + 274), 24, 3);
        }
        *(_QWORD *)v23 = v25;
        *(_DWORD *)(v23 + 8) = 0;
        v22 = v23 | 5;
        *(_QWORD *)(v23 + 16) = v21;
        *(_QWORD *)(v21 + 96) = v23 | 5;
        LOBYTE(v23) = v23 & 0xFA | 4;
LABEL_53:
        if ( (v23 & 4) != 0 )
        {
          v31 = (_DWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v31 )
          {
            v42 = *(_QWORD *)v31;
            v43 = *(_DWORD *)(*(_QWORD *)v31 + 12LL);
            if ( v31[2] != v43 )
            {
              v31[2] = v43;
              a2 = v21;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 144LL))(v42, v21);
            }
          }
        }
        v21 = *(_QWORD *)(a1 + 104);
LABEL_56:
        v32 = *(_QWORD *)(a1 + 128);
        v33 = v32;
        v34 = v20 + 24LL * *(unsigned int *)(v32 + 16);
        v35 = *(_QWORD *)(v21 + 96);
        v36 = v35 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v35 & 1) != 0 )
        {
          if ( !v36 )
            goto LABEL_72;
        }
        else
        {
          if ( v36 <= 3 )
            goto LABEL_72;
          if ( (v35 & 2) == 0 )
            goto LABEL_61;
          v46 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
          v47 = v46[2275];
          if ( !v47 )
          {
            *(_QWORD *)(v21 + 96) = v21 & 0xFFFFFFFFFFFFFFFALL | 1;
            v32 = *(_QWORD *)(a1 + 128);
            goto LABEL_72;
          }
          a2 = v46[274];
          v46[284] += 24LL;
          v36 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v46[275] >= v36 + 24 && a2 )
          {
            v46[274] = v36 + 24;
          }
          else
          {
            a2 = 24;
            v36 = sub_820510((__int64)(v46 + 274), 24, 3);
          }
          *(_QWORD *)v36 = v47;
          *(_DWORD *)(v36 + 8) = 0;
          v35 = v36 | 5;
          *(_QWORD *)(v36 + 16) = v21;
          *(_QWORD *)(v21 + 96) = v36 | 5;
          LOBYTE(v36) = v36 & 0xFA | 4;
        }
        if ( (v36 & 4) != 0 )
        {
          v37 = (_DWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v37 )
          {
            v44 = *(_QWORD *)v37;
            v45 = *(_DWORD *)(*(_QWORD *)v37 + 12LL);
            if ( v37[2] != v45 )
            {
              v37[2] = v45;
              a2 = v21;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 144LL))(v44, v21);
            }
          }
          v33 = *(_QWORD *)(a1 + 128);
LABEL_61:
          if ( (*(_BYTE *)(v33 + 24) & 1) != 0 )
            v38 = sub_7A2E20(v33);
          else
            v38 = *(_QWORD *)(v33 + 24);
          while ( v38 != v34 )
          {
            v40 = *(_QWORD *)(**(_QWORD **)(v38 + 16) & 0xFFFFFFFFFFFFFFF0LL);
            v41 = *(_QWORD *)(v40 + 8);
            if ( (v41 & 7) != 0 || (v41 & 8) != 0 )
              v39 = sub_B0CF30(**(_QWORD **)(v38 + 16), a2) & 0xFFFFFFFFFFFFFFF0LL;
            else
              v39 = v40 & 0xFFFFFFFFFFFFFFF0LL;
            if ( (unsigned __int8)sub_831200(v39) )
              return 1;
            v38 += 24;
          }
          return 0;
        }
        v32 = *(_QWORD *)(a1 + 128);
LABEL_72:
        v33 = v32;
        goto LABEL_61;
      }
      if ( v23 )
        goto LABEL_56;
    }
    v32 = *(_QWORD *)(a1 + 128);
    v34 = v20 + 24LL * *(unsigned int *)(v32 + 16);
    goto LABEL_72;
  }
  return 1;
}

