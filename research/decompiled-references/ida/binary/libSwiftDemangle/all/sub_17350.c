unsigned __int64 __fastcall sub_17350(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 result; // rax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int16 v9; // si
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 72);
  if ( v1 >= *(_QWORD *)(a1 + 64) )
    return 0;
  *(_QWORD *)(a1 + 72) = v1 + 1;
  switch ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + v1) )
  {
    case 'A':
      v10 = sub_10000(a1);
      if ( !v10 )
        goto LABEL_3;
      v11 = *(_DWORD *)(a1 + 96);
      if ( !v11 )
        goto LABEL_3;
      v12 = (unsigned int)(v11 - 1);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v12);
      if ( *(_WORD *)(v13 + 16) != 221 )
        goto LABEL_3;
      *(_DWORD *)(a1 + 96) = v12;
      if ( !v13 )
        goto LABEL_3;
      return sub_CE00((_QWORD *)a1, 282, v13, v10);
    case 'E':
      v8 = sub_132E0(a1);
      if ( !v8 )
        goto LABEL_3;
      v9 = 280;
      goto LABEL_11;
    case 'M':
      v8 = sub_12FF0(a1);
      if ( !v8 )
        goto LABEL_3;
      v9 = 279;
      goto LABEL_11;
    case 'X':
      v8 = sub_132E0(a1);
      if ( !v8 )
        goto LABEL_3;
      v9 = 281;
LABEL_11:
      result = sub_CD20((_QWORD *)a1, v9, v8);
      break;
    case 'Y':
      v3 = *(_DWORD *)(a1 + 96);
      if ( !v3 )
        goto LABEL_3;
      v4 = (unsigned int)(v3 - 1);
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v4);
      *(_DWORD *)(a1 + 96) = v4;
      if ( !v5 )
        goto LABEL_3;
      v6 = sub_132E0(a1);
      if ( !v6 )
        goto LABEL_3;
      v7 = sub_12C70((_QWORD *)a1, 1);
      *(_WORD *)(v7 + 16) = 281;
      *(_BYTE *)(v7 + 18) = 0;
      v14 = v7;
      sub_C080(v7, v6, (_QWORD *)a1);
      sub_C080(v14, v5, (_QWORD *)a1);
      result = v14;
      break;
    default:
LABEL_3:
      result = 0;
      break;
  }
  return result;
}

