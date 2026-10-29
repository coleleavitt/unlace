unsigned __int64 __fastcall sub_46C6F0(__int64 a1, __int64 a2, int a3)
{
  unsigned int *v3; // r13
  unsigned int i; // ebx
  __int64 v6; // rax
  int v7; // esi
  _QWORD *v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v3 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8LL * a3);
  for ( i = *v3; i < v3[1]; ++i )
  {
    while ( 1 )
    {
      v8 = *(_QWORD **)(switch_dbctx(*(int *)(a2 + 8)) + 1480);
      if ( (sub_3B9AA0((__int64)v8, i, 1) & 0x100) != 0 )
        break;
      v6 = switch_dbctx(*(int *)(a1 + 8));
      v7 = i++;
      sub_3B98C0(*(_QWORD *)(v6 + 1480), v7);
      if ( i >= v3[1] )
        return v14 - __readfsqword(0x28u);
    }
    sub_3BA160(v8, &v13, i);
    v9 = v13;
    v10 = switch_dbctx(*(int *)(a1 + 8));
    v11 = i;
    sub_3C98C0(*(_QWORD *)(v10 + 1480), v11, v9);
  }
  return v14 - __readfsqword(0x28u);
}

