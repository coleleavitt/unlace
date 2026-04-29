__int64 __fastcall sub_6EB70(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v4; // rbp
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // al
  bool v7; // r13
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  bool v11; // cc
  bool v12; // al
  int v13; // eax
  __int64 v14; // r12
  __int64 v15; // rdi
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  _QWORD *v18; // rax
  unsigned int *v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rax
  int *v22; // rdx
  int v23; // ecx
  unsigned int v24; // eax
  char dtype_by_size; // al
  __int16 v26; // cx
  struct _Unwind_Exception *v27; // rbx
  _QWORD *v28; // [rsp+0h] [rbp-58h] BYREF
  __int128 v29; // [rsp+8h] [rbp-50h]
  char v30; // [rsp+18h] [rbp-40h]
  unsigned __int64 v31; // [rsp+28h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 48) & 0xF) != 0xE || *(_WORD *)(a1 + 40) != 14 || *(_BYTE *)(a1 + 97) != 1 )
    return 0;
  v4 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v4 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 56,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v5 = *(_BYTE *)(v4 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v6 >= v5 && v5 > 0xF9u )
      goto LABEL_18;
  }
  else if ( v6 >= v5 || v5 > 0xF9u || *(_BYTE *)(a1 + 8) && v6 == 2 )
  {
    goto LABEL_18;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 == sub_6ACC0 )
    return 0;
  v9 = v8(a1, a1 + 56);
  v10 = v7 || v9 < v5;
  v11 = v9 <= 0xF9u;
  v12 = v9 < v5 && v7;
  if ( !v11 )
    v12 = v10;
  if ( v12 )
    return 0;
LABEL_18:
  if ( *(_BYTE *)(a1 + 137) != 8 || *(_QWORD *)(a1 + 144) != 2 )
    return 0;
  v13 = *(char *)(a1 + 169);
  if ( *(_BYTE *)(a1 + 169) )
  {
    if ( (unsigned int)(v13 - 6) > 3 )
    {
      if ( (unsigned int)(v13 - 10) > 3 )
        return 0;
      v14 = 1LL << ((unsigned __int8)v13 - 10);
      **(_DWORD **)(a1 + 376) |= 0x2000u;
    }
    else
    {
      v14 = 1LL << ((unsigned __int8)v13 - 6);
    }
  }
  else
  {
    LODWORD(v14) = 4;
  }
  v15 = *(_QWORD *)(a1 + 888);
  v28 = 0;
  v30 = 0;
  v29 = 0;
  v1 = sub_83660(v15, &v28, a1 + 16, a1 + 96, 0);
  if ( !(_BYTE)v1 )
    goto LABEL_41;
  if ( (unsigned __int8)(v30 - 10) <= 1u )
  {
    v16 = v28;
    v17 = *v28;
    if ( (_QWORD)v29 != 1 )
    {
      v18 = v28 + 3;
      if ( 24LL * (_QWORD)v29 != 24 )
      {
        while ( v17 == *v18 )
        {
          v18 += 3;
          if ( &v28[3 * (_QWORD)v29] == v18 )
            goto LABEL_36;
        }
        v1 = 0;
        goto LABEL_31;
      }
    }
LABEL_36:
    v19 = *(unsigned int **)(a1 + 376);
    v20 = *v19 & 0xFFFFFE7F;
    BYTE1(v20) |= 1u;
    *v19 = v20;
    v21 = *(_QWORD *)(a1 + 376);
    *(_DWORD *)v21 |= 0x200u;
    *(_QWORD *)(v21 + 56) = v17;
    sub_82740(*(_QWORD *)(a1 + 888), a1 + 840, &v28);
    v22 = *(int **)(a1 + 376);
    v23 = *v22;
    v24 = *v22 & 0xFFFFFBFB;
    *v22 = v24;
    if ( (_DWORD)v14 == 4 )
    {
      *v22 = v24 | 4;
      goto LABEL_40;
    }
    if ( (int)v14 > 4 )
    {
      if ( (_DWORD)v14 == 8 )
      {
        *v22 = v23 | 0x404;
        goto LABEL_40;
      }
    }
    else
    {
      if ( (_DWORD)v14 == 1 )
      {
        BYTE1(v24) |= 4u;
        *v22 = v24;
        goto LABEL_40;
      }
      if ( (_DWORD)v14 == 2 )
      {
LABEL_40:
        dtype_by_size = get_dtype_by_size();
        v26 = *(_WORD *)(a1 + 142);
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v26;
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = dtype_by_size;
LABEL_41:
        v16 = v28;
        goto LABEL_31;
      }
    }
    v27 = (struct _Unwind_Exception *)sub_6B6A0();
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree((__int64)v28);
    }
    _Unwind_Resume(v27);
  }
  v16 = v28;
  v1 = 0;
LABEL_31:
  if ( v16 )
  {
    *(_QWORD *)&v29 = 0;
    qfree((__int64)v16);
  }
  return v1;
}
