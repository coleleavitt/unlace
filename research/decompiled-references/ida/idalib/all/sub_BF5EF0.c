__int64 __fastcall sub_BF5EF0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  _QWORD *v14; // rbp
  __int64 v15; // r15
  char v16; // r14
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  _DWORD *v21; // rdx
  _DWORD *v22; // r14
  __int64 v23; // rdi
  int v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // r14
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // [rsp+8h] [rbp-40h]

  v3 = sub_BC39F0(a2);
  v4 = *(_QWORD *)(v3 + 16) + 8LL * *(unsigned int *)(v3 + 24);
  v6 = *(_QWORD *)(sub_BC39F0(a2) + 16);
  if ( v4 == v6 )
    return 1;
  while ( 1 )
  {
    v9 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112);
    v10 = *(_QWORD *)(v9 + 104);
    v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v10 & 1) == 0 )
    {
      v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v13 = v10 & 2;
        v14 = v12;
        if ( !(_DWORD)v13 )
          goto LABEL_5;
        v11 = sub_6E2500(
                v12,
                *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112),
                v13,
                v5,
                v7,
                v8)
            & 0xFFFFFFFFFFFFFFFELL;
        v10 = v11 | 1;
        *(_QWORD *)(v9 + 104) = v11 | 1;
      }
    }
    v21 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    v22 = v21;
    v14 = v21;
    if ( v11 && (v11 & 4) != 0 )
    {
      if ( !v21 )
        goto LABEL_15;
      v23 = *(_QWORD *)v21;
      v24 = *(_DWORD *)(*(_QWORD *)v21 + 12LL);
      if ( v21[2] != v24 )
      {
        v21[2] = v24;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 152LL))(v23, v9);
      }
      v14 = *((_QWORD **)v22 + 2);
    }
LABEL_5:
    if ( v14 )
      break;
LABEL_15:
    v6 += 8;
    if ( v4 == v6 )
      return 1;
  }
  v15 = (__int64)v14;
  v16 = 0;
  while ( 1 )
  {
    v17 = sub_B77D20(v15);
    if ( (v17 <= 1 || v17 - 3 <= 1)
      && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, v15) )
    {
      return 0;
    }
    v18 = *(_QWORD *)(v15 + 104);
    if ( (v18 & 1) != 0 )
    {
      if ( v16 )
        goto LABEL_15;
      v31 = v18 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_34;
    }
    if ( (v18 & 2) != 0 )
    {
      if ( v16 )
        goto LABEL_15;
      v25 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
      v16 = 1;
      if ( v25 )
      {
        v26 = v25[2295];
        if ( v26 )
        {
          v27 = v25[294];
          v25[304] += 24LL;
          v28 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v25[295] >= v28 + 24 && v27 )
          {
            v25[294] = v28 + 24;
            v29 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v29 = sub_986170((__int64)(v25 + 294), 24, 24, 3, v7, v8);
            v28 = v29 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v29 = v26;
          v30 = v28 | 4;
          *(_DWORD *)(v29 + 8) = 0;
          *(_QWORD *)(v29 + 16) = v15;
        }
        else
        {
          v30 = v15 & 0xFFFFFFFFFFFFFFFBLL;
        }
        v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
        v18 = v31 | 1;
        *(_QWORD *)(v15 + 104) = v31 | 1;
LABEL_34:
        v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = 1;
        v5 = v19;
        if ( v31 && (v31 & 4) != 0 && v19 )
        {
          v32 = *(_QWORD *)v19;
          v33 = *(_DWORD *)(*(_QWORD *)v19 + 12LL);
          if ( *(_DWORD *)(v5 + 8) != v33 )
          {
            *(_DWORD *)(v5 + 8) = v33;
            v34 = v5;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 152LL))(v32, v15);
            v5 = v34;
          }
          v19 = *(_QWORD *)(v5 + 16);
          v16 = 1;
        }
        goto LABEL_13;
      }
    }
    else
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v19 )
        goto LABEL_13;
    }
    v19 = 0;
LABEL_13:
    if ( v14 != (_QWORD *)v19 )
    {
      v15 = v19;
      if ( v19 )
        continue;
    }
    goto LABEL_15;
  }
}
