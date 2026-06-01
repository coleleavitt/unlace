__int64 __fastcall sub_1F952D0(__int64 *a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdi
  int v6; // ebx
  unsigned __int64 v7; // r13
  unsigned int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned __int64 v19; // rsi

  v4 = a2 & 7;
  v5 = a1[2];
  if ( v4 == 7 )
  {
    v6 = 3;
    v7 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL) <= 3u )
      v6 = *(_DWORD *)v7;
    v8 = v6 + 8;
    result = sub_9B9C90(v5, v8);
    if ( v8 != 10 )
    {
      if ( v8 == 11 )
      {
        return sub_1F906B0((__int64)a1, a2, v10, v11, v12, v13);
      }
      else if ( v8 == 9 )
      {
        if ( *(_DWORD *)v7 == 1 )
          v19 = *(_QWORD *)(v7 + 16);
        else
          v19 = 0;
        v18 = a1[2];
LABEL_20:
        v17 = v18;
        v16 = sub_1F80CA0(a1[1], v19, v10, v11, v12, v13);
        return sub_9B9C90(v17, v16);
      }
      else
      {
        if ( *(_DWORD *)v7 )
          v14 = 0;
        else
          v14 = *(_QWORD *)(v7 + 16);
        return sub_1F952B0((__int64)a1, v14);
      }
    }
  }
  else
  {
    sub_9B9C90(v5, a2 & 7);
    switch ( a2 & 7 )
    {
      case 1LL:
      case 2LL:
        return sub_1F906B0((__int64)a1, a2, v10, v11, v12, v13);
      case 3LL:
      case 4LL:
      case 5LL:
        v15 = 0;
        if ( (unsigned int)(v4 - 3) <= 2 )
          v15 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        result = sub_1F85840(a1[1], *a1, v15, (_QWORD *)a1[2], v12, v13);
        break;
      case 6LL:
        v16 = 0;
        if ( v4 == 6 )
          v16 = *(unsigned int *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
        v17 = a1[2];
        return sub_9B9C90(v17, v16);
      default:
        v18 = a1[2];
        v19 = a2 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_20;
    }
  }
  return result;
}
