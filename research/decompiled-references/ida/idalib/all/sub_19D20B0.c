__int64 __fastcall sub_19D20B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // cl
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // r13
  char v28; // r14
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // rdi
  int v35; // eax
  unsigned __int64 v36; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rbp
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // [rsp+8h] [rbp-30h]

  v2 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      result = sub_F6AC00(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
      if ( !result )
        return result;
      v5 = *(_QWORD *)(result + 32);
      *(_QWORD *)v2 = v5;
      v6 = *(_QWORD *)(v5 + 80);
      v7 = v6;
      v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      v9 = v7 & 4;
      v10 = (_DWORD)v9 ? v8[1] : *v8;
      v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v12 + 16) == 42 )
        break;
      if ( !(_DWORD)v9 )
        goto LABEL_7;
LABEL_30:
      a1 = v8[1];
    }
    v13 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_F68450(v11, a2, v12, v9, v4) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v13 + 16) == 48 )
    {
      v20 = sub_F60F10(*v13, a2, v14, v15, v16, v17)[13];
      v23 = *(_QWORD *)(v20 + 96);
      if ( (v23 & 1) != 0 )
      {
        v18 = v23 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_11;
      }
      v19 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v23 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        break;
    }
LABEL_29:
    v8 = (__int64 *)(*(_QWORD *)(*(_QWORD *)v2 + 80LL) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(*(_QWORD *)v2 + 80LL) & 4LL) != 0 )
      goto LABEL_30;
LABEL_7:
    a1 = *v8;
  }
  v25 = v23 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v23 & 2) == 0 )
    goto LABEL_17;
  v43 = v19[2295];
  v44 = v20 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v43 )
  {
    v45 = v19[294];
    v19[304] += 24;
    v46 = (v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v46 + 24;
    if ( v19[295] >= v46 + 24 && v45 )
    {
      v19[294] = a2;
      v47 = (v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      a2 = 24;
      v47 = sub_986170((__int64)(v19 + 294), 24, 24, 3, v21, v22);
      v46 = v47 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)v47 = v43;
    v44 = v46 | 4;
    *(_DWORD *)(v47 + 8) = 0;
    *(_QWORD *)(v47 + 16) = v20;
  }
  v18 = v44 & 0xFFFFFFFFFFFFFFFELL;
  v23 = v18 | 1;
  *(_QWORD *)(v20 + 96) = v18 | 1;
LABEL_11:
  v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
  v25 = v24;
  if ( v18 )
  {
    v18 &= 4u;
    if ( (_DWORD)v18 )
    {
      if ( !v24 )
        goto LABEL_29;
      v26 = *(_QWORD *)v24;
      v18 = *(unsigned int *)(*(_QWORD *)v24 + 12LL);
      if ( *(_DWORD *)(v24 + 8) != (_DWORD)v18 )
      {
        *(_DWORD *)(v24 + 8) = v18;
        a2 = v20;
        v48 = v24;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 152LL))(v26, v20);
        v24 = v48;
      }
      v25 = *(_QWORD *)(v24 + 16);
    }
  }
LABEL_17:
  if ( !v25 )
    goto LABEL_29;
  v27 = v25;
  v28 = 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v27 + 29) & 1) == 0 )
      goto LABEL_24;
    v29 = sub_B8C3D0(v27, a2, v18, (__int64)v19, v21, v22);
    v18 = *v29;
    v30 = *v29 + 8LL * *((unsigned int *)v29 + 2);
    if ( v18 >= v30 )
      break;
    v19 = (__int64 *)v18;
    while ( 1 )
    {
      a2 = *v19;
      if ( *(_WORD *)(*v19 + 36) == 305 )
        break;
      if ( (__int64 *)v30 == ++v19 )
        goto LABEL_24;
    }
    if ( (__int64 *)v30 != v19 )
      goto LABEL_33;
LABEL_24:
    v31 = *(_QWORD *)(v27 + 96);
    if ( (v31 & 1) != 0 )
    {
      if ( v28 )
        goto LABEL_29;
      v18 = v31 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_38;
    }
    if ( (v31 & 2) != 0 )
    {
      if ( v28 )
        goto LABEL_29;
      v36 = v31 & 0xFFFFFFFFFFFFFFFCLL;
      v28 = 1;
      v37 = (_QWORD *)v36;
      if ( v36 )
      {
        v38 = *(_QWORD *)(v36 + 18360);
        if ( v38 )
        {
          v39 = *(_QWORD *)(v36 + 2352);
          v37[304] += 24LL;
          v40 = (v39 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v19 = (__int64 *)(v40 + 24);
          if ( v37[295] >= v40 + 24 && v39 )
          {
            v37[294] = v19;
            v41 = (v39 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            a2 = 24;
            v41 = sub_986170((__int64)(v37 + 294), 24, 24, 3, v21, v22);
            v40 = v41 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v41 = v38;
          v42 = v40 | 4;
          *(_DWORD *)(v41 + 8) = 0;
          *(_QWORD *)(v41 + 16) = v27;
        }
        else
        {
          v42 = v27 & 0xFFFFFFFFFFFFFFFBLL;
        }
        v18 = v42 & 0xFFFFFFFFFFFFFFFELL;
        v31 = v18 | 1;
        *(_QWORD *)(v27 + 96) = v18 | 1;
LABEL_38:
        v32 = v31 & 0xFFFFFFFFFFFFFFF8LL;
        v28 = 1;
        v33 = v32;
        if ( v18 )
        {
          v18 &= 4u;
          if ( (_DWORD)v18 )
          {
            if ( v32 )
            {
              v34 = *(_QWORD *)v32;
              v35 = *(_DWORD *)(*(_QWORD *)v32 + 12LL);
              if ( *(_DWORD *)(v33 + 8) != v35 )
              {
                *(_DWORD *)(v33 + 8) = v35;
                a2 = v27;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 152LL))(v34, v27);
              }
              v32 = *(_QWORD *)(v33 + 16);
              v28 = 1;
            }
          }
        }
        goto LABEL_27;
      }
    }
    else
    {
      v32 = v31 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v32 )
        goto LABEL_27;
    }
    v32 = 0;
LABEL_27:
    if ( v25 != v32 )
    {
      v27 = v32;
      if ( v32 )
        continue;
    }
    goto LABEL_29;
  }
  if ( v18 == v30 )
    goto LABEL_24;
  while ( 1 )
  {
    v19 = *(__int64 **)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 36LL) == 305 )
      break;
    v30 += 8LL;
    if ( v18 == v30 )
      goto LABEL_24;
  }
LABEL_33:
  for ( result = *(_QWORD *)v18; *(_WORD *)(*(_QWORD *)v18 + 36LL) != 305; result = *(_QWORD *)v18 )
    v18 += 8LL;
  return result;
}
