__int64 __fastcall sub_46C5B0(__int64 a1, __int64 a2, int a3)
{
  unsigned int *v4; // r13
  unsigned int v5; // ebx
  _QWORD *v6; // rbp
  _QWORD *v7; // rbp
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  __int64 v11[9]; // [rsp+10h] [rbp-48h] BYREF

  v11[1] = __readfsqword(0x28u);
  v4 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8LL * a3);
  v5 = *v4;
  if ( *v4 >= v4[1] )
    return 0;
  while ( 1 )
  {
    v7 = *(_QWORD **)(switch_dbctx(*(int *)(a2 + 8)) + 1480);
    if ( (sub_3B9AA0((__int64)v7, v5, 1) & 0x100) == 0 )
      break;
    sub_3BA160(v7, v11, v5);
    v8 = v11[0];
    v9 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
    if ( (sub_3B9AA0((__int64)v9, v5, 1) & 0x100) == 0 )
      return 1;
    sub_3BA160(v9, v11, v5);
    if ( v11[0] != v8 )
      return 1;
LABEL_4:
    if ( ++v5 >= v4[1] )
      return 0;
  }
  v6 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
  if ( (sub_3B9AA0((__int64)v6, v5, 1) & 0x100) == 0 )
    goto LABEL_4;
  sub_3BA160(v6, v11, v5);
  return 1;
}

