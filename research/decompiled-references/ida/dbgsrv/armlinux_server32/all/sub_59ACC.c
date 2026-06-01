/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59ACC
// Address: 0x00059ACC

//----- (00059ACC) --------------------------------------------------------
int __fastcall sub_59ACC(int a1, int a2)
{
  int v4; // r7
  _DWORD *v5; // r0
  int v6; // r4
  _DWORD *v7; // r6
  int v8; // r5
  int v9; // r11
  int (__fastcall *v10)(_DWORD *); // r2
  char *v11; // r0
  int v12; // r9
  int i; // r10
  char *v14; // r7
  void *v15; // r0
  void *v16; // r0
  int v17; // r0
  int v18; // r3
  int *v19; // r0
  int v20; // r4
  int *v21; // r0

  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 248) + 44) + 8))(*(_DWORD *)(*(_DWORD *)(a1 + 248) + 44));
  v4 = *(_DWORD *)(a1 + 248);
  v5 = *(_DWORD **)(v4 + 44);
  v6 = v5[4];
  if ( (_DWORD *)v6 == v5 + 2 )
  {
LABEL_24:
    v9 = 0;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v7 = *(_DWORD **)(v6 + 16);
    if ( (_DWORD *)a1 == v7 )
      goto LABEL_3;
    v8 = v7[61];
    v9 = *(unsigned __int8 *)(v8 + 452);
    if ( !*(_BYTE *)(v8 + 452) || *(_DWORD *)(v8 + 336) != a2 )
      goto LABEL_3;
    v10 = *(int (__fastcall **)(_DWORD *))(*(_DWORD *)v8 + 256);
    if ( v10 == sub_150E4 )
      break;
    if ( ((int (__fastcall *)(_DWORD, int))v10)(v7[61], a2) )
      goto LABEL_17;
    v4 = *(_DWORD *)(a1 + 248);
LABEL_3:
    v6 = sub_81440(v6);
    v5 = *(_DWORD **)(v4 + 44);
    if ( (_DWORD *)v6 == v5 + 2 )
      goto LABEL_24;
  }
  v11 = *(char **)(v8 + 236);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v8 + 240);
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v14 = &v11[40 * i];
        v15 = *((void **)v14 + 5);
        if ( v15 )
        {
          *((_DWORD *)v14 + 6) = 0;
          sub_77F70(v15);
        }
        v16 = *((void **)v14 + 2);
        if ( v16 )
        {
          *((_DWORD *)v14 + 3) = 0;
          sub_77F70(v16);
        }
        v11 = *(char **)(v8 + 236);
      }
    }
    *(_DWORD *)(v8 + 240) = 0;
    sub_77F70(v11);
    *(_DWORD *)(v8 + 236) = 0;
    *(_DWORD *)(v8 + 244) = 0;
  }
LABEL_17:
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 244) + 56))(*(_DWORD *)(a1 + 244));
  v17 = *(_DWORD *)(a1 + 244);
  if ( v17 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 20))(v17);
  v18 = *(unsigned __int8 *)(a1 + 96);
  *(_DWORD *)(a1 + 244) = v8;
  if ( v18 )
    sub_171B0((int)"reusing previously broken debugging session\n");
  sub_65808((int)v7);
  v19 = (int *)v6;
  v20 = *(_DWORD *)(*(_DWORD *)(a1 + 248) + 44);
  v21 = sub_81644(v19, (_DWORD *)(v20 + 8));
  sub_809EC(v21);
  --*(_DWORD *)(v20 + 24);
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *))(*v7 + 4))(v7);
  *(_BYTE *)(v8 + 452) = 0;
  v5 = *(_DWORD **)(*(_DWORD *)(a1 + 248) + 44);
LABEL_25:
  (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
  return v9;
}
