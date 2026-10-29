__int64 __fastcall sub_3BA550(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  signed int v4; // ebp
  unsigned int v6; // edx
  __int64 v7; // rax
  int v8; // ecx
  char v9; // al
  __int64 v10; // rdx
  char v11; // cl
  int v12; // ebp
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rax

  if ( !a3 )
    goto LABEL_13;
  v4 = *(_DWORD *)(a3 + 12);
  v6 = *(_DWORD *)(a3 + 8);
  if ( v4 > 0 )
  {
    if ( !v6 )
    {
      if ( !under_debugger )
        interr(2847);
      BUG();
    }
    v7 = a1[2];
    v8 = *(_DWORD *)(v7 + 20);
    if ( *(_DWORD *)(v7 + 16) != v8 )
    {
      v9 = sub_4F8910(a1, v6 - 1);
      v10 = a1[2];
      if ( v9 == 2 )
        v8 = *(_DWORD *)(v10 + 16);
      else
        v8 = *(_DWORD *)(v10 + 20);
    }
    v11 = v8 - v4;
    if ( *(_BYTE *)(a3 + 16) )
      goto LABEL_8;
LABEL_15:
    v12 = v4 - 8;
    goto LABEL_9;
  }
  if ( v6 == -1
    || (v17 = sub_3BA160(a1, (__int64 *)a3, v6), v18 = *(unsigned int *)(a3 + 8), *(_DWORD *)(a3 + 8) = v18 + 1, !v17) )
  {
    *(_DWORD *)(a3 + 12) = 0;
LABEL_13:
    LOBYTE(v15) = -1;
    v14 = 0;
    goto LABEL_10;
  }
  v19 = a1[2];
  v4 = *(_DWORD *)(v19 + 20);
  if ( *(_DWORD *)(v19 + 16) != v4 )
  {
    v20 = sub_4F8910(a1, v18);
    v21 = a1[2];
    if ( v20 == 2 )
      v4 = *(_DWORD *)(v21 + 16);
    else
      v4 = *(_DWORD *)(v21 + 20);
  }
  if ( !*(_BYTE *)(a3 + 16) )
  {
    v11 = 0;
    goto LABEL_15;
  }
  v4 = (v4 + 7) & 0xFFFFFFF8;
LABEL_8:
  v11 = v4 - 8;
  v12 = v4 - 8;
LABEL_9:
  v13 = *(_QWORD *)a3;
  *(_DWORD *)(a3 + 12) = v12;
  v14 = 1;
  v15 = v13 >> v11;
LABEL_10:
  *a2 = v15;
  return v14;
}

