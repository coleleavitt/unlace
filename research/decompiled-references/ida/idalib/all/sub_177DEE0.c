__int64 __fastcall sub_177DEE0(__int64 *a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 **v11; // r15
  char v12; // bl
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v22; // rcx
  __int64 v23; // [rsp+10h] [rbp-98h]
  unsigned __int64 v24; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v26; // [rsp+28h] [rbp-80h]
  _BYTE v27[120]; // [rsp+30h] [rbp-78h] BYREF

  v7 = 1;
  v23 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 16), 0, a3, a5, a6, a7);
  if ( v23 == 1 )
    return v7;
  ptr = v27;
  v26 = 0x800000000LL;
  if ( *(_WORD *)(a2 + 12) )
  {
    v11 = (unsigned __int16 **)(a2 + 24);
    v12 = 0;
    v13 = a2 + 8LL * ((unsigned int)*(unsigned __int16 *)(a2 + 12) - 1) + 32;
    while ( 1 )
    {
      v14 = sub_177B9C0(a1, *v11, 0, a3, v8, v9, v10);
      if ( v14 == 1 )
        goto LABEL_18;
      v8 = (unsigned int)v26;
      v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
      v16 = (unsigned int)v26 + 1LL;
      if ( *v11 != (unsigned __int16 *)v15 )
        v12 = 1;
      if ( v16 <= HIDWORD(v26) )
      {
        ++v11;
        *((_QWORD *)ptr + (unsigned int)v26) = v15;
        LODWORD(v26) = v26 + 1;
        if ( (unsigned __int16 **)v13 == v11 )
          goto LABEL_10;
      }
      else
      {
        v24 = v15;
        ++v11;
        sub_2237220(&ptr, v27, v16, 8);
        v8 = (unsigned int)v26;
        *((_QWORD *)ptr + (unsigned int)v26) = v24;
        LODWORD(v26) = v26 + 1;
        if ( v11 == (unsigned __int16 **)v13 )
          goto LABEL_10;
      }
    }
  }
  v12 = 0;
LABEL_10:
  if ( (*(_BYTE *)(a2 + 14) & 1) == 0 )
  {
    v18 = 0;
LABEL_14:
    v20 = v23 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632)
      || *(_QWORD *)(a2 + 16) != v20
      || v12
      || ((*(_BYTE *)(a2 + 14) & 1) == 0
        ? (v22 = 0)
        : (v22 = *(_QWORD *)(a2 + 8LL * *(unsigned __int16 *)(a2 + 12) + 24)),
          v7 = a2,
          v22 != v18) )
    {
      v7 = sub_1A8ACF0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v20, ptr, (unsigned int)v26, v18);
    }
    goto LABEL_19;
  }
  v17 = *(unsigned __int16 *)(a2 + 12);
  v18 = *(_QWORD *)(a2 + 8 * v17 + 24);
  if ( !v18 )
    goto LABEL_14;
  v19 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 8 * v17 + 24), 0, a3, v8, v9, v18);
  if ( v19 != 1 )
  {
    v18 = v19 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_14;
  }
LABEL_18:
  v7 = 1;
LABEL_19:
  if ( ptr != v27 )
    free(ptr);
  return v7;
}
