unsigned __int64 __fastcall sub_7A5C80(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int16 v10; // ax
  _BOOL8 v12; // rax
  _BOOL8 v13; // rax
  _BOOL8 v14; // rax
  _BOOL8 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  sub_7A5BB0(a1, a2, a3, a4, a5, a6);
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 560);
    v16 = 1;
    v17 = 0;
    v10 = *(_WORD *)(v9 + 24);
    if ( v10 != 15933 )
      break;
    sub_7A5BB0(a1, (__int64)&v16, 1u, v6, v7, v8);
    if ( *(_BYTE *)a2 )
    {
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) >= v17;
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( (_BYTE)v16 )
        v12 = v6 >= v17;
      else
        v12 = v6 >= (__int64)v17;
      *(_QWORD *)(a2 + 8) = v12;
    }
LABEL_9:
    *(_BYTE *)a2 = 0;
  }
  switch ( v10 )
  {
    case 15421:
      sub_7A5BB0(a1, (__int64)&v16, 1u, v6, v7, v8);
      if ( *(_BYTE *)a2 )
      {
        *(_QWORD *)(a2 + 8) = v17 >= *(_QWORD *)(a2 + 8);
      }
      else
      {
        v6 = *(_QWORD *)(a2 + 8);
        if ( (_BYTE)v16 )
          v13 = v17 >= v6;
        else
          v13 = v6 <= (__int64)v17;
        *(_QWORD *)(a2 + 8) = v13;
      }
      goto LABEL_9;
    case 60:
      sub_7A5BB0(a1, (__int64)&v16, 1u, v6, v7, v8);
      if ( *(_BYTE *)a2 )
      {
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) < v17;
      }
      else
      {
        v6 = *(_QWORD *)(a2 + 8);
        if ( (_BYTE)v16 )
          v14 = v6 < v17;
        else
          v14 = v6 < (__int64)v17;
        *(_QWORD *)(a2 + 8) = v14;
      }
      goto LABEL_9;
    case 62:
      sub_7A5BB0(a1, (__int64)&v16, 1u, v6, v7, v8);
      if ( *(_BYTE *)a2 )
      {
        *(_QWORD *)(a2 + 8) = v17 < *(_QWORD *)(a2 + 8);
      }
      else
      {
        v6 = *(_QWORD *)(a2 + 8);
        if ( (_BYTE)v16 )
          v15 = v17 < v6;
        else
          v15 = v6 > (__int64)v17;
        *(_QWORD *)(a2 + 8) = v15;
      }
      goto LABEL_9;
  }
  return v18 - __readfsqword(0x28u);
}
