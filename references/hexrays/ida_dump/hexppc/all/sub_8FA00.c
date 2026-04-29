__int64 __fastcall sub_8FA00(__int64 a1, int **a2, __int64 a3, _BYTE *a4, char a5)
{
  int *v9; // r15
  int *v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rsi
  int *v16; // rax
  int v17; // eax
  int v18; // edx
  _DWORD *v19; // rsi
  _DWORD *v21; // rsi
  _QWORD v22[9]; // [rsp+0h] [rbp-48h] BYREF

  v9 = *a2;
  v22[1] = __readfsqword(0x28u);
  v22[0] = 0;
  if ( *v9 != 5 && !a5 )
    goto LABEL_3;
  v16 = (int *)sub_125A00(a1, v9 + 8, a2, 0);
  v12 = (__int64)v16;
  if ( v16 )
  {
    v17 = *v16;
    v18 = *v9;
    switch ( v17 )
    {
      case 9:
        if ( v18 == 5 )
          goto LABEL_8;
        goto LABEL_3;
      case 12:
        if ( v18 != 5 )
          goto LABEL_3;
        v12 = sub_118EA0(v12, v22, 9);
        if ( v12 )
          goto LABEL_8;
        break;
      case 5:
        if ( v18 == 5 )
          return 0;
        v19 = v9 + 12;
        v12 = sub_118EA0(v12, 0, 9);
        if ( v12 )
        {
LABEL_17:
          v22[0] = v19;
          v14 = v12 + 32;
          *a4 = 0;
          if ( *(_BYTE *)(v12 + 32) == 4 && **(_DWORD **)(v12 + 40) == 6 )
          {
            *a4 = 1;
            v14 = *(_QWORD *)(v12 + 40) + 32LL;
          }
          goto LABEL_10;
        }
        break;
    }
  }
  if ( *v9 == 5 )
    return 0;
LABEL_3:
  *a2 = v9;
  v11 = (int *)sub_125A00(a1, v9 + 12, a2, 0);
  v12 = (__int64)v11;
  if ( !v11 )
    return 0;
  v13 = *v11;
  if ( v13 == 9 )
  {
    if ( !a5 )
      goto LABEL_8;
    if ( *((_BYTE *)v9 + 32) == 4 )
    {
      v21 = *((_DWORD **)v9 + 5);
      if ( *v21 == 5 )
      {
        v19 = v21 + 8;
        goto LABEL_17;
      }
    }
    return 0;
  }
  if ( v13 != 12 )
    return 0;
  if ( a5 )
    return 0;
  v12 = sub_118EA0(v12, v22, 9);
  if ( !v12 )
    return 0;
LABEL_8:
  *a4 = 0;
  v14 = v12 + 32;
  v15 = v22[0];
  if ( *(_BYTE *)(v12 + 32) == 4 && **(_DWORD **)(v12 + 40) == 6 )
  {
    *a4 = 1;
    v14 = *(_QWORD *)(v12 + 40) + 32LL;
  }
  if ( v15 )
LABEL_10:
    sub_121740(a3);
  return v14;
}
