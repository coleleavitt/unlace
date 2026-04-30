__int64 __fastcall sub_42B110(__int64 a1, const char *a2, __int64 a3)
{
  const char *v4; // r13
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rdi

  v4 = a2;
  reset_dirtree(**(_QWORD **)(a1 + 208));
  v6 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 336) = 0;
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_42A540(*(_QWORD **)(v6 + 24), a2);
    v8 = *(_QWORD *)(v6 + 32);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[5] = 0;
      qfree(v8, a2);
    }
    a2 = (_BYTE *)off_50;
    operator delete(v7, 0x50u);
  }
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = a1 + 360;
  *(_QWORD *)(a1 + 384) = a1 + 360;
  *(_QWORD *)(a1 + 392) = 0;
  return sub_51FE60(a1, v4, a3);
}
