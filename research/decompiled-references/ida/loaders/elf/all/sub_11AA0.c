__int64 __fastcall sub_11AA0(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // r12
  __int64 v7; // rax
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 600);
  v16 = __readfsqword(0x28u);
  v7 = sub_394F0(a2, a1, *(_QWORD *)(v5 + 112));
  v8 = *(_QWORD **)(v5 + 72);
  v15 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( v8 )
  {
    v10 = (_QWORD *)(v5 + 64);
    do
    {
      while ( 1 )
      {
        v11 = v8[2];
        v12 = v8[3];
        if ( v8[4] < v9 )
          break;
        v10 = v8;
        v8 = (_QWORD *)v8[2];
        if ( !v11 )
          goto LABEL_6;
      }
      v8 = (_QWORD *)v8[3];
    }
    while ( v12 );
LABEL_6:
    if ( (_QWORD *)(v5 + 64) != v10 && v9 >= v10[4] )
      return v16 - __readfsqword(0x28u);
  }
  if ( a4 )
  {
    sub_101F0(0x57u, v9, a3 == 2);
    sub_11980((_QWORD *)(v5 + 56), &v15);
    return v16 - __readfsqword(0x28u);
  }
  if ( a3 == 2 )
  {
    v14 = 1;
  }
  else
  {
    if ( *(_BYTE *)(v5 + 120) )
      return v16 - __readfsqword(0x28u);
    v14 = 0;
  }
  return sub_101F0(0x57u, v9, v14);
}

