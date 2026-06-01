__int64 __fastcall sub_633480(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  int tinfo_property; // r12d
  int v7; // eax
  __int64 *v8; // rbp
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rsi
  const char *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v4 = *a3;
  v24 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v4, 7);
  if ( !tinfo_property )
  {
    v16 = *a3;
    ptr = nullptr;
    v23 = 0;
    if ( (v16 & 0x100) != 0 && (get_tinfo_pdata(&ptr, v16, 0), (_QWORD)v23) )
      v17 = (const char *)ptr;
    else
      v17 = haystack;
    tinfo_property = get_type_ordinal(**(_QWORD **)(a1 + 24), v17);
    if ( ptr )
    {
      *(_QWORD *)&v23 = 0;
      qfree(ptr);
    }
    if ( !tinfo_property )
    {
      v18 = *a3;
      v19 = *a3 & 0xFLL;
      if ( (_BYTE)v19 != 13 )
      {
        if ( (unsigned __int8)v19 <= 9u )
        {
LABEL_20:
          **(_DWORD **)(a1 + 32) |= 1u;
          return 0;
        }
LABEL_22:
        if ( (get_tinfo_property(v18, 2) & 0xF) != 0xC )
        {
          if ( (**(_BYTE **)(a1 + 32) & 1) != 0 && (get_tinfo_property(*a3, 2) & 0xF) == 0xA )
            **(_DWORD **)(a1 + 32) &= ~1u;
          return 0;
        }
        goto LABEL_20;
      }
      goto LABEL_11;
    }
  }
  if ( *(_DWORD *)(a1 + 40) == tinfo_property )
  {
    v18 = *a3;
    if ( (*(_BYTE *)a3 & 0xFu) <= 9 )
      goto LABEL_20;
    goto LABEL_22;
  }
  v7 = sub_633350(*(_QWORD *)(a1 + 24), tinfo_property, a3, *(_DWORD **)(a1 + 32));
  if ( v7 == 1 )
  {
    sub_6332D0(*(_QWORD *)(a1 + 24), *(__int64 **)(a1 + 16), tinfo_property, *(_DWORD *)(a1 + 44));
    goto LABEL_11;
  }
  if ( v7 != 2 )
  {
LABEL_11:
    **(_DWORD **)(a1 + 32) = 1;
    return 0;
  }
  v8 = *(__int64 **)(a1 + 16);
  v9 = *(_DWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 48) = 0;
  v10 = v8[1];
  v11 = *v8;
  if ( v8[2] < (unsigned __int64)(v10 + 1) )
  {
    v21 = qvector_reserve(v8, v11, v10 + 1, 4);
    *v8 = v21;
    v11 = v21;
    v10 = v8[1];
  }
  *(_DWORD *)(v11 + 4 * v10) = v9;
  ++v8[1];
  v12 = *(__int64 **)(a1 + 16);
  v13 = v12[1];
  v14 = *v12;
  if ( v12[2] < (unsigned __int64)(v13 + 1) )
  {
    v20 = qvector_reserve(*(_QWORD *)(a1 + 16), v14, v13 + 1, 4);
    *v12 = v20;
    v14 = v20;
    v13 = v12[1];
  }
  *(_DWORD *)(v14 + 4 * v13) = tinfo_property;
  ++v12[1];
  **(_DWORD **)(a1 + 32) |= 2u;
  return 1;
}

