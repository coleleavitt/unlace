__int64 __fastcall sub_A5B460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r13
  __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // rdi
  int v20; // eax
  _DWORD *v21; // rcx
  __int64 v22; // rdi
  int v23; // eax

  v7 = *(_QWORD *)(a3 + 104);
  if ( v7 )
  {
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v8 )
      return 0;
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(a3 + 96);
  v13 = a3;
  v14 = *(_QWORD *)(v12 + 88);
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v14 & 1) == 0 && (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    if ( (v14 & 2) == 0 )
      goto LABEL_12;
    v15 = sub_6C1EC0((_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL), *(_QWORD *)(a3 + 96), a3, v14, a5, a6)
        & 0xFFFFFFFFFFFFFFFELL;
    v14 = v15 | 1;
    *(_QWORD *)(v12 + 88) = v15 | 1;
  }
  if ( v15 )
  {
    if ( (v15 & 4) != 0 )
    {
      v21 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v21 )
      {
        v22 = *(_QWORD *)v21;
        v23 = *(_DWORD *)(*(_QWORD *)v21 + 12LL);
        if ( v21[2] != v23 )
        {
          v21[2] = v23;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 152LL))(v22, v12);
        }
      }
    }
  }
  a3 = *(_QWORD *)(v13 + 104);
  v8 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
LABEL_3:
    v9 = *(_QWORD **)(v8 + 8);
    v10 = &v9[*(unsigned int *)(v8 + 16)];
    goto LABEL_4;
  }
  if ( a3 )
    return 0;
  v12 = *(_QWORD *)(v13 + 96);
  v14 = *(_QWORD *)(v12 + 88);
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v14 & 1) == 0 )
  {
LABEL_12:
    v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v17 = v14 & 2;
      if ( !(_DWORD)v17 )
        return 0;
      v15 = sub_6C1EC0(v16, v12, a3, v17, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      v14 = v15 | 1;
      *(_QWORD *)(v12 + 88) = v15 | 1;
    }
    if ( !v15 )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( v15 )
  {
LABEL_16:
    if ( (v15 & 4) != 0 )
    {
      v18 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18 )
      {
        v19 = *(_QWORD *)v18;
        v20 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
        if ( v18[2] != v20 )
        {
          v18[2] = v20;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, v12);
        }
      }
    }
  }
LABEL_20:
  if ( (*(_QWORD *)(v13 + 104) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  v9 = *(_QWORD **)((*(_QWORD *)(v13 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  v10 = nullptr;
LABEL_4:
  if ( v9 == v10 )
    return 0;
  while ( 1 )
  {
    result = sub_A5B650(a1, a2, *v9);
    if ( (_BYTE)result )
      break;
    if ( v10 == ++v9 )
      return 0;
  }
  return result;
}

