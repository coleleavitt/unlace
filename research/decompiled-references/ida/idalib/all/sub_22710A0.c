__int64 __fastcall sub_22710A0(__int64 a1, char a2)
{
  __int64 v3; // r10
  int v4; // r11d
  unsigned __int64 v5; // r8
  int v6; // ebp
  char *v7; // r9
  char *v8; // rcx
  char *v9; // rax
  char *v10; // rcx
  char v11; // al
  char *v12; // rax
  char *v13; // rcx
  int v14; // eax
  char v15; // al
  int v16; // eax
  _BYTE *v17; // rdi
  char *v19; // rax
  _QWORD v20[3]; // [rsp+0h] [rbp-58h] BYREF
  void *v21; // [rsp+18h] [rbp-40h]
  __int64 v22; // [rsp+20h] [rbp-38h]
  _BYTE v23[48]; // [rsp+28h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 60);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = v4;
  v7 = (char *)(v3 + 1);
  if ( a2 )
  {
    v8 = *(char **)(a1 + 40);
    while ( 1 )
    {
      *(_QWORD *)(a1 + 40) = v8 + 1;
      if ( v8 + 1 == (char *)v5 )
        goto LABEL_36;
      if ( v8[1] != 34 )
      {
        v9 = v8 + 2;
        while ( 1 )
        {
          v8 = v9;
          *(_QWORD *)(a1 + 40) = v9;
          if ( (char *)v5 == v9 )
            goto LABEL_35;
          if ( *v9++ == 34 )
            goto LABEL_10;
        }
      }
      ++v8;
LABEL_10:
      if ( *(v8 - 1) != 92 || !sub_226E000((unsigned __int64)v7, (__int64)v8) )
      {
        if ( v8 == (char *)v5 )
          goto LABEL_35;
        goto LABEL_45;
      }
    }
  }
  *(_QWORD *)(a1 + 40) = v7;
  *(_DWORD *)(a1 + 60) = v4 + 1;
  if ( (char *)v5 == v7 )
  {
LABEL_36:
    v8 = (char *)v5;
    goto LABEL_35;
  }
  do
  {
    v10 = v7 + 1;
    v11 = *v7;
    if ( (unsigned __int64)(v7 + 1) >= v5 )
      goto LABEL_20;
LABEL_16:
    if ( v11 != 39 )
    {
      while ( 1 )
      {
        v12 = sub_226DF60(a1, v7);
        v13 = *(char **)(a1 + 40);
        v5 = *(_QWORD *)(a1 + 48);
        v7 = v12;
        if ( v13 == v12 )
          break;
        v14 = *(_DWORD *)(a1 + 60) + 1;
        if ( (char *)v5 == v7 )
        {
          v10 = v13 + 1;
LABEL_28:
          *(_QWORD *)(a1 + 40) = v10;
          *(_DWORD *)(a1 + 60) = v14;
          v20[1] = v3;
          v20[2] = &v10[-v3];
          v21 = v23;
          v22 = 0;
          v23[0] = 0;
          LODWORD(v20[0]) = 18;
          sub_2270C60(
            (__int64 *)(a1 + 80),
            (unsigned __int64 *)(a1 + 176),
            (int *)v20,
            (__int64)&v10[-v3],
            v5,
            (__int64)v7);
          sub_226E810(a1, *(_QWORD *)(a1 + 176), v6, 0);
          v17 = v21;
          *(_WORD *)(a1 + 73) = 256;
          if ( v17 != v23 )
            operator delete(v17);
          return 1;
        }
        v10 = v7 + 1;
        *(_QWORD *)(a1 + 40) = v7;
        *(_DWORD *)(a1 + 60) = v14;
        v11 = *v7;
        if ( (unsigned __int64)(v7 + 1) < v5 )
          goto LABEL_16;
LABEL_20:
        if ( v11 == 39 )
          goto LABEL_26;
      }
      if ( v12 == (char *)v5 )
        break;
      v15 = *v12;
      if ( v15 == 13 )
      {
        v19 = v7 + 1;
        if ( (char *)v5 == v7 + 1 )
        {
LABEL_41:
          *(_QWORD *)(a1 + 40) = v19;
          v7 = v19;
          *(_DWORD *)(a1 + 60) = 0;
          ++*(_DWORD *)(a1 + 64);
          continue;
        }
        if ( v7[1] == 10 )
          v19 = v7 + 2;
      }
      else
      {
        if ( v15 != 10 )
        {
          v10 = v7 + 1;
LABEL_26:
          v16 = *(_DWORD *)(a1 + 60);
LABEL_27:
          v14 = v16 + 1;
          goto LABEL_28;
        }
        v19 = v7 + 1;
      }
      if ( v7 == v19 )
      {
        v4 = *(_DWORD *)(a1 + 60);
        v8 = v7;
LABEL_45:
        v10 = v8 + 1;
        v14 = v4 + 1;
        goto LABEL_28;
      }
      goto LABEL_41;
    }
    v16 = *(_DWORD *)(a1 + 60);
    if ( v7[1] != 39 )
      goto LABEL_27;
    v7 += 2;
    *(_QWORD *)(a1 + 40) = v7;
    *(_DWORD *)(a1 + 60) = v16 + 2;
  }
  while ( v7 != (char *)v5 );
  v8 = v7;
LABEL_35:
  LOWORD(v22) = 259;
  v20[0] = "Expected quote at end of scalar";
  sub_226E270(a1, (__int64)v20, v8);
  return 0;
}
