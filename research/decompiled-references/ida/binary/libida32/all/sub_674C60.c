__int64 __fastcall sub_674C60(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rdx
  __int128 v15; // [rsp+0h] [rbp-B8h] BYREF
  void *v16; // [rsp+10h] [rbp-A8h]
  __int128 v17; // [rsp+18h] [rbp-A0h]
  void *ptr; // [rsp+28h] [rbp-90h]
  __int128 v19; // [rsp+30h] [rbp-88h]
  _OWORD v20[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v21; // [rsp+60h] [rbp-58h]
  int v22; // [rsp+68h] [rbp-50h]
  __int64 v23; // [rsp+70h] [rbp-48h]
  char v24; // [rsp+78h] [rbp-40h]
  unsigned __int64 v25; // [rsp+88h] [rbp-30h]

  v5 = *a1;
  v25 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v5 + 1624);
  v8 = v7 + 16;
  v9 = *(_QWORD *)(v7 + 24);
  if ( v9 )
  {
    v10 = v8;
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v9 + 16);
        v12 = *(_QWORD *)(v9 + 24);
        if ( *(_DWORD *)(v9 + 32) < a3 )
          break;
        v10 = v9;
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v11 )
          goto LABEL_6;
      }
      v9 = *(_QWORD *)(v9 + 24);
    }
    while ( v12 );
LABEL_6:
    if ( v10 != v8 && a3 >= *(_DWORD *)(v10 + 32) )
    {
      if ( a2 )
        copy_tinfo_t(a2);
      return 1;
    }
  }
  *(_QWORD *)&v15 = 0;
  sub_6141A0(v5, 26, &v15, 8u, v5);
  if ( a3 < (unsigned int)v15 || a3 >= DWORD1(v15) || (unsigned __int8)sub_69A8C0(a1) )
    return 0;
  v24 = 0;
  v16 = nullptr;
  ptr = nullptr;
  v21 = 1;
  v22 = -1;
  v23 = 0;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v20[0] = 0;
  if ( sub_69D720(a1, 0, &v15, a3) != -1
    && (unsigned __int64)v17 > 1
    && (get_tinfo_property(*(_QWORD *)&v20[0], 2) & 0xF) != 0xE )
  {
    v14 = *(_QWORD *)&v20[0];
    *(_QWORD *)&v20[0] = *a2;
    *a2 = v14;
    goto LABEL_24;
  }
  if ( (unsigned __int8)sub_69D1A0(a1, a2, a3) )
  {
LABEL_24:
    clear_tinfo_t(v20);
    if ( ptr )
    {
      *(_QWORD *)&v19 = 0;
      qfree(ptr);
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
    return 1;
  }
  clear_tinfo_t(v20);
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr);
  }
  if ( !v16 )
    return 0;
  *(_QWORD *)&v17 = 0;
  qfree(v16);
  return 0;
}

