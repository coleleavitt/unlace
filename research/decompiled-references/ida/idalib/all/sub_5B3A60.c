unsigned __int64 __fastcall sub_5B3A60(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // r14
  _QWORD *v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rsi
  unsigned __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v17; // [rsp+0h] [rbp-68h]
  unsigned __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 *v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v2 = switch_dbctx(*(int *)(a1 + 8));
  v3 = sub_7BE710(*(_QWORD *)(v2 + 1672) + 2456LL, **(_QWORD **)(v2 + 1672), -1, 65);
  v17 = v3;
  if ( v3 )
  {
    v4 = 0;
    v5 = (_QWORD *)(a1 + 48);
    do
    {
      v6 = sub_7BE710(*(_QWORD *)(v2 + 1672) + 2456LL, **(_QWORD **)(v2 + 1672), ++v4, 73);
      v7 = *(_QWORD **)(v2 + 1672);
      v8 = v6;
      v9 = sub_7BE710(v7 + 307, *v7, v6, 65);
      v10 = sub_3BDE50(v7, v9 - 1);
      v11 = *(_QWORD **)(a1 + 56);
      v18 = v8;
      v12 = (_QWORD *)(a1 + 48);
      v13 = v10;
      if ( !v11 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v14 = v11[2];
          v15 = v11[3];
          if ( v11[4] < v8 )
            break;
          v12 = v11;
          v11 = (_QWORD *)v11[2];
          if ( !v14 )
            goto LABEL_8;
        }
        v11 = (_QWORD *)v11[3];
      }
      while ( v15 );
LABEL_8:
      if ( v12 == v5 || v8 < v12[4] )
      {
LABEL_10:
        v19 = &v18;
        v12 = sub_5B3810((_QWORD *)(a1 + 40), v12, &v19);
      }
      v12[5] = v13;
    }
    while ( v17 != v4 );
  }
  return v20 - __readfsqword(0x28u);
}
