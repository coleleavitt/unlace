__int64 __fastcall sub_3BF3F0(__int64 *a1, _BYTE *a2, __int64 a3)
{
  signed int v4; // r12d
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ecx
  char v9; // al
  __int64 v10; // rdx
  char v11; // cl
  int v12; // r12d
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // rax
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rax
  char v21; // dl
  __int64 v22; // rax

  if ( !a3 )
    goto LABEL_15;
  v4 = *(_DWORD *)(a3 + 16);
  v6 = *(_QWORD *)(a3 + 8);
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
      v9 = sub_510230(a1, v6 - 1);
      v10 = a1[2];
      if ( v9 == 2 )
        v8 = *(_DWORD *)(v10 + 16);
      else
        v8 = *(_DWORD *)(v10 + 20);
    }
    v11 = v8 - v4;
    if ( *(_BYTE *)(a3 + 20) )
      goto LABEL_8;
LABEL_17:
    v12 = v4 - 8;
    goto LABEL_9;
  }
  v17 = 0x100000000LL;
  if ( *(_DWORD *)(a1[3] + 24) == 8 )
    v17 = -1;
  if ( v6 >= v17
    || (v18 = sub_3BEFF0(a1, (__int64 *)a3, v6), v19 = *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 8) = v19 + 1, !v18) )
  {
    *(_DWORD *)(a3 + 16) = 0;
LABEL_15:
    LOBYTE(v15) = -1;
    v14 = 0;
    goto LABEL_10;
  }
  v20 = a1[2];
  v4 = *(_DWORD *)(v20 + 20);
  if ( *(_DWORD *)(v20 + 16) != v4 )
  {
    v21 = sub_510230(a1, v19);
    v22 = a1[2];
    if ( v21 == 2 )
      v4 = *(_DWORD *)(v22 + 16);
    else
      v4 = *(_DWORD *)(v22 + 20);
  }
  if ( !*(_BYTE *)(a3 + 20) )
  {
    v11 = 0;
    goto LABEL_17;
  }
  v4 = (v4 + 7) & 0xFFFFFFF8;
LABEL_8:
  v11 = v4 - 8;
  v12 = v4 - 8;
LABEL_9:
  v13 = *(_QWORD *)a3;
  *(_DWORD *)(a3 + 16) = v12;
  v14 = 1;
  v15 = v13 >> v11;
LABEL_10:
  *a2 = v15;
  return v14;
}
