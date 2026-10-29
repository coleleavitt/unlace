__int64 __fastcall sub_9A0B70(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // r13d
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // esi
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = *(_DWORD *)(a3 + 48);
  if ( v5 )
  {
    if ( v5 == 2 )
    {
      if ( !*(_QWORD *)(a3 + 24) )
        return 1;
    }
    else if ( v5 != 3 && !*(_QWORD *)(a3 + 32) && !*(_QWORD *)a3 )
    {
      return 1;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 24);
    if ( !v6 || *(_BYTE *)(v6 + 26) )
      return 1;
  }
  v7 = *(_QWORD *)(a1 + 80);
  v8 = 0;
  if ( (v7 & 2) != 0 )
  {
    if ( ((v7 >> 1) & 1) != 0 )
    {
      v13 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v13 )
        v8 = sub_8124E0(v13);
    }
  }
  else
  {
    v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( v9 )
    {
      v18 = sub_77BD20(v9, v22);
      v19 = sub_8124E0(v18);
      v5 = *(_DWORD *)(a3 + 48);
      v8 = v19;
    }
  }
  if ( v5 == 1 )
  {
    v10 = *(_QWORD *)(a3 + 24);
  }
  else if ( v5 )
  {
    if ( (unsigned int)(v5 - 2) <= 1 )
      BUG();
    v10 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL);
  }
  else
  {
    v14 = *(_QWORD *)(a3 + 24);
    v15 = *(unsigned int *)(a3 + 32);
    v10 = *(_QWORD *)(v14 + 32);
    if ( (_DWORD)v15 != *(_DWORD *)(v10 + 16) && (_DWORD)v15 )
    {
      v11 = *(__int64 **)(*(_QWORD *)(v14 + v15 + 32) + 24LL);
      if ( v11 )
        return sub_99EDC0(a2, v8, a3, v11);
      goto LABEL_26;
    }
  }
  v11 = *(__int64 **)(v10 + 24);
  if ( v11 )
    return sub_99EDC0(a2, v8, a3, v11);
LABEL_26:
  v16 = *(_QWORD *)(sub_8E8FB0(a3) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(unsigned __int8 *)(v16 + 16);
  if ( (unsigned __int8)(v17 - 4) > 2u && v17 != 2 )
  {
    if ( v17 == 3 )
      return sub_99E300(a2, v8, a3, v16);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
    {
      v20 = sub_B0D320(v16);
      v16 = v20;
      if ( v20 )
      {
        v21 = *(unsigned __int8 *)(v20 + 16);
        if ( v21 == 2 || v21 == 3 )
          return sub_99E300(a2, v8, a3, v16);
      }
    }
    return 1;
  }
  if ( *(_BYTE *)(v16 + 16) != 2 )
    return 1;
  return sub_99E300(a2, v8, a3, v16);
}

