__int64 __fastcall sub_55F280(__int64 a1, __int64 a2)
{
  char v3; // r14
  const void *v4; // r13
  const void *v5; // r11
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx

  if ( *(_DWORD *)(a2 + 24) != 34 )
    return 1;
  v3 = 0;
  v4 = *(const void **)a2;
  sub_55E5B0(a2);
  v5 = *(const void **)a2;
  *(_DWORD *)(a1 + 184) = 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(a2 + 24);
    if ( v3 )
    {
      if ( v8 == 114 )
      {
        sub_55ECB0(a1 + 176, 1);
        v11 = *(unsigned int *)(a1 + 184);
        v12 = *(_QWORD *)(a1 + 176);
        *(_DWORD *)(a1 + 184) = v11 + 1;
        *(_BYTE *)(v12 + v11) = 13;
        goto LABEL_9;
      }
      if ( v8 > 114 )
      {
        if ( v8 == 116 )
        {
          sub_55ECB0(a1 + 176, 1);
          v9 = *(unsigned int *)(a1 + 184);
          v10 = *(_QWORD *)(a1 + 176);
          *(_DWORD *)(a1 + 184) = v9 + 1;
          *(_BYTE *)(v10 + v9) = 9;
          goto LABEL_9;
        }
      }
      else
      {
        if ( v8 == 48 )
        {
          sub_55ECB0(a1 + 176, 1);
          v13 = *(unsigned int *)(a1 + 184);
          v14 = *(_QWORD *)(a1 + 176);
          *(_DWORD *)(a1 + 184) = v13 + 1;
          *(_BYTE *)(v14 + v13) = 0;
          goto LABEL_9;
        }
        if ( v8 == 110 )
        {
          sub_55ECB0(a1 + 176, 1);
          v6 = *(unsigned int *)(a1 + 184);
          v7 = *(_QWORD *)(a1 + 176);
          *(_DWORD *)(a1 + 184) = v6 + 1;
          *(_BYTE *)(v7 + v6) = 10;
LABEL_9:
          v3 = 0;
          goto LABEL_10;
        }
      }
      sub_55F130((char **)(a1 + 176), 1, *(_DWORD *)(a1 + 184), 0, *(unsigned __int8 *)(a2 + 28), *(const void **)a2);
      goto LABEL_9;
    }
    if ( v8 == 92 )
    {
      v3 = 1;
      sub_55F130((char **)(a1 + 176), 1, *(_DWORD *)(a1 + 184), 0, *(_DWORD *)a2 - (_DWORD)v5, v5);
      goto LABEL_10;
    }
    if ( v8 == 34 )
      break;
    if ( v8 == 10 )
    {
LABEL_15:
      *(_QWORD *)a2 = v4;
      *(_BYTE *)(a2 + 28) = 0;
      sub_55E5B0(a2);
      return 1;
    }
LABEL_10:
    if ( !(unsigned __int8)sub_55E5B0(a2) )
      goto LABEL_15;
  }
  sub_55F130((char **)(a1 + 176), 1, *(_DWORD *)(a1 + 184), 0, *(_DWORD *)a2 - (_DWORD)v5, v5);
  sub_55E5B0(a2);
  return 0;
}
