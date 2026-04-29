__int64 __fastcall sub_1BF090(int *a1, int *a2)
{
  int v2; // edx
  int v3; // eax
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 result; // rax
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // edi
  int v11; // edx
  bool v12; // cc
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  bool v16; // cc
  signed int v17; // ecx
  signed int v18; // eax
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // dx

  v2 = *a2;
  v3 = *a1;
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  if ( v3 > v2 )
    return 1;
  v4 = *((_QWORD **)a1 + 1);
  v5 = *((_QWORD **)a2 + 1);
  if ( v4 == v5 )
    return 0;
  switch ( v3 )
  {
    case 0:
      return 0;
    case 1:
      v16 = (__int64)v5 < (__int64)v4;
      goto LABEL_20;
    case 2:
      v14 = v4[1];
      v15 = v5[1];
      if ( (int)v14 != v15 )
      {
        if ( v15 < (int)v14 )
          goto LABEL_21;
        goto LABEL_12;
      }
      if ( (int)v14 <= 0 )
        return 0;
      v19 = 0;
      v20 = 8 * (3LL * (unsigned int)(v14 - 1) + 3);
      while ( 1 )
      {
        v21 = v19 + *v4;
        v22 = v19 + *v5;
        v23 = *(_WORD *)(v21 + 16);
        v24 = *(_WORD *)(v22 + 16);
        if ( v23 != v24 )
          break;
        v23 = *(_WORD *)(v21 + 18);
        v24 = *(_WORD *)(v22 + 18);
        if ( v23 != v24 )
          break;
        result = sub_1BF090(v21, v22);
        if ( (_DWORD)result )
          return result;
        v19 += 24;
        if ( v19 == v20 )
          return 0;
      }
      if ( v24 >= v23 )
        goto LABEL_12;
      goto LABEL_21;
    case 3:
    case 4:
      v7 = v3 == 4;
      v8 = a1[2];
      v9 = a2[2];
      v10 = (unsigned __int16)v8;
      if ( !v7 )
        v10 = v8;
      v7 = v2 == 4;
      v11 = (unsigned __int16)v9;
      if ( !v7 )
        v11 = a2[2];
      v12 = v10 <= v11;
      if ( v10 != v11 )
        goto LABEL_11;
      v17 = HIWORD(v8);
      v18 = HIWORD(v9);
      v16 = v18 < v17;
      if ( v18 == v17 )
      {
        result = 0;
      }
      else
      {
LABEL_20:
        if ( v16 )
LABEL_21:
          result = 1;
        else
LABEL_12:
          result = 0xFFFFFFFFLL;
      }
      break;
    case 5:
      v13 = *((_DWORD *)v5 + 2);
      v12 = *((_DWORD *)v4 + 2) <= v13;
      if ( *((_DWORD *)v4 + 2) == v13 )
      {
        v12 = *v4 <= *v5;
        if ( *v4 == *v5 )
          return 0;
      }
LABEL_11:
      if ( v12 )
        goto LABEL_12;
      goto LABEL_21;
    case 6:
      if ( v5 >= v4 )
        goto LABEL_12;
      goto LABEL_21;
    default:
      if ( !under_debugger )
        sub_37EEE0(51110);
      BUG();
  }
  return result;
}
