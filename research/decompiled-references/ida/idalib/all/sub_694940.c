__int64 __fastcall sub_694940(__int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v5; // r8
  __int64 v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rdx
  __int128 v15; // [rsp+0h] [rbp-C8h] BYREF
  void *v16; // [rsp+10h] [rbp-B8h]
  __int128 v17; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+28h] [rbp-A0h]
  __int128 v19; // [rsp+30h] [rbp-98h]
  _OWORD v20[3]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v21; // [rsp+70h] [rbp-58h]
  int v22; // [rsp+78h] [rbp-50h]
  __int64 v23; // [rsp+80h] [rbp-48h]
  char v24; // [rsp+88h] [rbp-40h]
  unsigned __int64 v25; // [rsp+98h] [rbp-30h]

  v5 = *a1;
  v25 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v5 + 1816);
  v8 = (_QWORD *)(v7 + 16);
  v9 = *(_QWORD **)(v7 + 24);
  if ( v9 )
  {
    v10 = v8;
    do
    {
      while ( 1 )
      {
        v11 = v9[2];
        v12 = v9[3];
        if ( v9[4] < a3 )
          break;
        v10 = v9;
        v9 = (_QWORD *)v9[2];
        if ( !v11 )
          goto LABEL_6;
      }
      v9 = (_QWORD *)v9[3];
    }
    while ( v12 );
LABEL_6:
    if ( v10 != v8 && a3 >= v10[4] )
    {
      if ( a2 )
        copy_tinfo_t(a2);
      return 1;
    }
  }
  v15 = 0;
  sub_630CA0(v5, 26, &v15, 0x10u, v5);
  if ( a3 < (unsigned __int64)v15 || a3 >= *((_QWORD *)&v15 + 1) || (unsigned __int8)sub_6BB290(a1) )
    return 0;
  v15 = 0;
  v16 = nullptr;
  ptr = nullptr;
  v21 = 1;
  v22 = -1;
  v23 = 0;
  v24 = 0;
  v17 = 0;
  v19 = 0;
  v20[0] = 0;
  if ( sub_6BE1C0(a1, 0, &v15, a3) != -1
    && (unsigned __int64)v17 > 1
    && (get_tinfo_property(*(_QWORD *)&v20[0], 2) & 0xF) != 0xE )
  {
    v14 = *(_QWORD *)&v20[0];
    *(_QWORD *)&v20[0] = *a2;
    *a2 = v14;
    goto LABEL_24;
  }
  if ( (unsigned __int8)sub_6BDC20(a1, a2, a3) )
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
