bool __fastcall sub_159CF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // edx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rax
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // [rsp+0h] [rbp-20h]

  if ( !a1 )
    return 0;
  v6 = *(_QWORD *)(a1 + 112);
  v7 = *(_QWORD *)(v6 + 104);
  v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v7 & 1) == 0 )
  {
    v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v7 & 2) == 0 )
        goto LABEL_5;
      v13 = v9[2295];
      v14 = v6 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v13 )
      {
        v15 = v9[294];
        v9[304] += 24LL;
        v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        a4 = v16 + 24;
        if ( v9[295] >= v16 + 24 && v15 )
        {
          v9[294] = a4;
          v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          a2 = 24;
          v17 = sub_986170((__int64)(v9 + 294), 24, 24, 3, a5, a6);
          v16 = v17 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v17 = v13;
        v14 = v16 | 4;
        *(_DWORD *)(v17 + 8) = 0;
        *(_QWORD *)(v17 + 16) = v6;
      }
      v8 = v14 & 0xFFFFFFFFFFFFFFFELL;
      v7 = v8 | 1;
      *(_QWORD *)(v6 + 104) = v8 | 1;
    }
  }
  v18 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  v10 = v18;
  if ( v8 && (v8 & 4) != 0 )
  {
    if ( !v18 )
      return 0;
    v19 = *(_QWORD *)v18;
    v20 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
    if ( *(_DWORD *)(v18 + 8) != v20 )
    {
      *(_DWORD *)(v18 + 8) = v20;
      a2 = v6;
      v33 = v18;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, v6);
      v18 = v33;
    }
    v10 = *(_QWORD *)(v18 + 16);
  }
LABEL_5:
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40) & 7LL;
    if ( (_DWORD)v11 == 6 )
    {
      v21 = *(_DWORD *)(*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v21 == 15 || (unsigned int)(v21 - 18) <= 7)
        && sub_1598C00(v10, a2, v11, a4)
        && (unsigned int)sub_B76070(v10, a2, v22, v23) == 1 )
      {
        v28 = *(__int64 **)(v10 + 120);
        if ( (*(_BYTE *)(*v28 + 29) & 1) != 0 )
        {
          v29 = sub_B8C3D0(*v28, a2, v24, v25, v26, v27);
          v30 = *v29;
          v31 = *v29 + 8LL * *((unsigned int *)v29 + 2);
          if ( v30 < v31 )
          {
            v32 = v30;
            while ( 1 )
            {
              v30 = v32;
              if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 67 )
                break;
              v32 += 8LL;
              if ( v31 == v32 )
                return 0;
            }
            return v30 != v31;
          }
          if ( v30 != v31 )
          {
            while ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 67 )
            {
              v31 += 8LL;
              if ( v30 == v31 )
                return 0;
            }
            return v30 != v31;
          }
        }
      }
    }
  }
  return 0;
}
