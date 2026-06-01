__int64 __fastcall sub_19C57A0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v9; // rbx
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // rbp
  _QWORD *v15; // r15
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _DWORD *v20; // rax
  __int64 v21; // rdi
  int v22; // edx
  _DWORD *v23; // rax
  __int64 v24; // rdi
  int v25; // edx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // [rsp+8h] [rbp-40h]
  __int64 v39; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    v9 = sub_BAD2F0(a1, a2, 1, a4, a5, a6);
    if ( v9 )
      return v9;
  }
  v9 = sub_BAA9D0(a1, *a3, 1, 0, a5, a6);
  if ( v9 )
    return v9;
  v12 = *(_QWORD *)(a1 + 104);
  if ( v12 )
  {
    v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v13 )
      return v9;
    goto LABEL_7;
  }
  v17 = *(_QWORD *)(a1 + 96);
  v18 = *(_QWORD *)(v17 + 88);
  v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v18 & 1) == 0 )
  {
    v26 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v18 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v18 & 2) == 0 )
      {
LABEL_31:
        v27 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v18 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v18 & 2) == 0 )
            return v9;
          v28 = v27[2295];
          v29 = v17 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v28 )
          {
            v30 = v27[294];
            v27[304] += 24LL;
            v31 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v27[295] >= v31 + 24 && v30 )
            {
              v27[294] = v31 + 24;
              v32 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v38 = v28;
              v32 = sub_986170((__int64)(v27 + 294), 24, 24, 3, v28, v11);
              v28 = v38;
              v31 = v32 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v32 = v28;
            v29 = v31 | 4;
            *(_DWORD *)(v32 + 8) = 0;
            *(_QWORD *)(v32 + 16) = v17;
          }
          v19 = v29 & 0xFFFFFFFFFFFFFFFELL;
          v18 = v19 | 1;
          *(_QWORD *)(v17 + 88) = v19 | 1;
        }
        goto LABEL_22;
      }
      v33 = v26[2295];
      v34 = v17 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v33 )
      {
        v35 = v26[294];
        v26[304] += 24LL;
        v36 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v26[295] >= v36 + 24 && v35 )
        {
          v26[294] = v36 + 24;
          v37 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v39 = v33;
          v37 = sub_986170((__int64)(v26 + 294), 24, 24, 3, v33, v11);
          v33 = v39;
          v36 = v37 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v37 = v33;
        v34 = v36 | 4;
        *(_DWORD *)(v37 + 8) = 0;
        *(_QWORD *)(v37 + 16) = v17;
      }
      v19 = v34 & 0xFFFFFFFFFFFFFFFELL;
      v18 = v19 | 1;
      *(_QWORD *)(v17 + 88) = v19 | 1;
    }
  }
  if ( v19 )
  {
    if ( (v19 & 4) != 0 )
    {
      v20 = (_DWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v20 )
      {
        v21 = *(_QWORD *)v20;
        v22 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
        if ( v20[2] != v22 )
        {
          v20[2] = v22;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 152LL))(v21, v17);
        }
      }
    }
  }
  v13 = *(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v13 )
  {
LABEL_7:
    v14 = *(_QWORD **)(v13 + 8);
    v15 = &v14[*(unsigned int *)(v13 + 16)];
    goto LABEL_8;
  }
  if ( *(_QWORD *)(a1 + 104) )
    return v9;
  v17 = *(_QWORD *)(a1 + 96);
  v18 = *(_QWORD *)(v17 + 88);
  v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v18 & 1) == 0 )
    goto LABEL_31;
LABEL_22:
  if ( v19 )
  {
    if ( (v19 & 4) != 0 )
    {
      v23 = (_DWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v23 )
      {
        v24 = *(_QWORD *)v23;
        v25 = *(_DWORD *)(*(_QWORD *)v23 + 12LL);
        if ( v23[2] != v25 )
        {
          v23[2] = v25;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 152LL))(v24, v17);
        }
      }
    }
  }
  if ( (*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return v9;
  v14 = *(_QWORD **)((*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  v15 = nullptr;
LABEL_8:
  if ( v14 != v15 )
  {
    while ( 1 )
    {
      v16 = sub_19C57A0(*v14, a2, a3, a4);
      if ( v16 )
        break;
      if ( v15 == ++v14 )
        return v9;
    }
    return v16;
  }
  return v9;
}
