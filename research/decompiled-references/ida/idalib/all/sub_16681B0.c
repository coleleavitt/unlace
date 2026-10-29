unsigned __int64 *__fastcall sub_16681B0(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v13; // r12
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdi
  int v20; // edx
  unsigned __int64 v21; // [rsp+8h] [rbp-20h]

  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 96);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (((unsigned __int8)v8 | (unsigned __int8)(v8 >> 1)) & 1) != 0 )
  {
    if ( *((_BYTE *)a1 + 16) )
    {
      *a1 = 0;
      return a1;
    }
    *((_BYTE *)a1 + 16) = 1;
    v8 = *(_QWORD *)(v7 + 96);
    v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v8 & 1) != 0 )
    {
      v18 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = v18;
      if ( !v9 )
        goto LABEL_4;
LABEL_14:
      if ( (v9 & 4) != 0 )
      {
        v11 = 0;
        if ( v18 )
        {
          v19 = *(_QWORD **)v18;
          v20 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
          if ( *(_DWORD *)(v18 + 8) != v20 )
          {
            *(_DWORD *)(v18 + 8) = v20;
            v21 = v18;
            (*(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD, _QWORD))(*v19 + 152LL))(v19, v7, *v19, 0);
            v18 = v21;
          }
          v11 = *(_QWORD *)(v18 + 16);
        }
      }
      goto LABEL_4;
    }
  }
  v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v8 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    v11 = v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v8 & 2) == 0 )
      goto LABEL_4;
    v13 = v10[2295];
    v14 = v7 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v13 )
    {
      v15 = v10[294];
      v10[304] += 24LL;
      v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v10[295] >= v16 + 24 && v15 )
      {
        v10[294] = v16 + 24;
        v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v17 = sub_986170((__int64)(v10 + 294), 24, 24, 3, a5, a6);
        v16 = v17 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v17 = v13;
      v14 = v16 | 4;
      *(_DWORD *)(v17 + 8) = 0;
      *(_QWORD *)(v17 + 16) = v7;
    }
    v9 = v14 & 0xFFFFFFFFFFFFFFFELL;
    v8 = v9 | 1;
    *(_QWORD *)(v7 + 96) = v9 | 1;
  }
  v18 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  v11 = v18;
  if ( v9 )
    goto LABEL_14;
LABEL_4:
  if ( a1[1] == v11 )
    v11 = 0;
  *a1 = v11;
  return a1;
}
