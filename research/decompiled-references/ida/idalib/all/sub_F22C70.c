__int64 __fastcall sub_F22C70(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // esi
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  int *v10; // r9
  unsigned int v11; // ecx
  unsigned __int16 v12; // dx
  __int64 v13; // r8
  __int64 v14; // [rsp+0h] [rbp-10h] BYREF

  v2 = *a2;
LABEL_2:
  v3 = (v2 >> 1) & 3;
  v4 = v3;
  if ( ((v2 >> 1) & 3) == 0 )
  {
LABEL_3:
    v5 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_9;
    goto LABEL_4;
  }
  while ( 1 )
  {
    if ( v3 == 3 )
      goto LABEL_11;
    if ( v3 == 2 )
    {
      if ( !v2 )
        goto LABEL_11;
LABEL_15:
      v8 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v8 )
        goto LABEL_11;
      goto LABEL_16;
    }
    v5 = v2 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_9:
    if ( (*(_BYTE *)v5 & 7) == 2 )
      break;
    if ( !v2 )
      goto LABEL_11;
    if ( v3 )
    {
      if ( v3 == 2 )
        goto LABEL_15;
      if ( v3 != 1 )
        goto LABEL_11;
      v8 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v8 || (*(_BYTE *)v8 & 7) != 3 )
        goto LABEL_11;
LABEL_16:
      v2 = *(_QWORD *)(v8 + 16);
      goto LABEL_2;
    }
    v5 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_22;
LABEL_4:
    if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 53 > 1 )
    {
      if ( v2 )
LABEL_22:
        v6 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      else
LABEL_11:
        v6 = 0;
      *(_QWORD *)a1 = v6;
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      return a1;
    }
    v2 = *(_QWORD *)(v5 + 64);
    v3 = (v2 >> 1) & 3;
    v4 = v3;
    if ( ((v2 >> 1) & 3) == 0 )
      goto LABEL_3;
  }
  if ( v4 != 1 || !v2 || !v5 )
    BUG();
  v14 = *(_QWORD *)(v5 + 16);
  v9 = sub_F22BD0(&v14, 1);
  v11 = *v10;
  v12 = *((_WORD *)v10 + 1);
  *(_QWORD *)v13 = v9;
  *(_QWORD *)(v13 + 16) = v10 + 6;
  *(_DWORD *)(v13 + 8) = (v11 >> 3) & 0x3FFF;
  *(_QWORD *)(v13 + 24) = v12 >> 1;
  return v13;
}
