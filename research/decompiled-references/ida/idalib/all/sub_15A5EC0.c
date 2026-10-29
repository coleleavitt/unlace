__int64 __fastcall sub_15A5EC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned int v7; // ebp
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  _DWORD *v19; // rax
  __int64 v20; // rdi
  int v21; // edx
  _QWORD *v22; // rcx
  __int64 v23; // r13
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax

  if ( *(_DWORD *)a1 != 4 )
  {
    if ( *(_DWORD *)a1 != 5 )
    {
      v6 = sub_15A33A0(a1, a2, a3, a4);
      v7 = 0;
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 16) == 26 )
          return *(unsigned __int16 *)(v6 + 22);
      }
      return v7;
    }
    v9 = sub_B7E900(*(_QWORD *)(a1 + 8), a2, a3, a4, a5, a6);
    if ( v9 )
    {
      v12 = 0;
      v13 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v13 )
      {
        while ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 49 <= 2 )
        {
LABEL_31:
          ++v12;
          v13 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v13 )
            goto LABEL_14;
        }
        while ( 1 )
        {
          v14 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v13 = v14;
          if ( !v14 )
            break;
          if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_31;
        }
      }
LABEL_14:
      v7 = v12 + 1;
    }
    else
    {
      v7 = 0;
    }
    v15 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 59 > 2 )
      return v7;
    v16 = *(_QWORD *)(v15 + 104);
    v17 = *(_QWORD *)(v16 + 96);
    v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v17 & 1) == 0 )
    {
      v22 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v17 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v17 & 2) == 0 )
        {
LABEL_22:
          v7 += *(_DWORD *)(*(_QWORD *)(v15 + 128) + 16LL);
          return v7;
        }
        v23 = v22[2295];
        v24 = v16 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v23 )
        {
          v25 = v22[294];
          v22[304] += 24LL;
          v26 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22[295] >= v26 + 24 && v25 )
          {
            v22[294] = v26 + 24;
            v27 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v27 = sub_986170((__int64)(v22 + 294), 24, 24, 3, v10, v11);
            v26 = v27 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v27 = v23;
          v24 = v26 | 4;
          *(_DWORD *)(v27 + 8) = 0;
          *(_QWORD *)(v27 + 16) = v16;
        }
        v18 = v24 & 0xFFFFFFFFFFFFFFFELL;
        v17 = v18 | 1;
        *(_QWORD *)(v16 + 96) = v18 | 1;
      }
    }
    if ( v18 )
    {
      if ( (v18 & 4) != 0 )
      {
        v19 = (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v19 )
        {
          v20 = *(_QWORD *)v19;
          v21 = *(_DWORD *)(*(_QWORD *)v19 + 12LL);
          if ( v19[2] != v21 )
          {
            v19[2] = v21;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 152LL))(v20, v16);
          }
        }
      }
    }
    goto LABEL_22;
  }
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 20LL) & 0x1FFFFFFF;
}
