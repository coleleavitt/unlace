/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472FD5
// Address: 0x00472FD5

//----- (00472FD5) --------------------------------------------------------
int __cdecl sub_472FD5(int a1, __int64 lDistanceToMove)
{
  unsigned int v2; // edi
  _BYTE *v3; // esi
  int v4; // eax
  DWORD v5; // eax
  int v6; // eax
  unsigned int v7; // kr08_4
  int v8; // edi
  int v9; // eax
  int v10; // edx
  void *v11; // eax
  int *v12; // esi
  LONG v14; // [esp+Ch] [ebp-28h] BYREF
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+14h] [ebp-20h]
  int v17; // [esp+18h] [ebp-1Ch]
  __int64 v18; // [esp+1Ch] [ebp-18h]
  int v19; // [esp+24h] [ebp-10h]
  int v20; // [esp+2Ch] [ebp-8h]
  int v21; // [esp+30h] [ebp-4h]

  sub_472F88(&v14, a1, lDistanceToMove);
  if ( (v15 & v14) == 0xFFFFFFFF || (v17 & v16) == 0xFFFFFFFF )
    goto LABEL_25;
  v21 = HIDWORD(v18);
  v2 = v18;
  if ( v18 < 0 )
  {
LABEL_22:
    v9 = sub_474CB1(a1, v18, a1, lDistanceToMove, SHIDWORD(lDistanceToMove), 0);
    if ( (v10 & v9) == 0xFFFFFFFF )
    {
LABEL_25:
      v8 = *sub_46B984();
      goto LABEL_26;
    }
    v11 = (void *)sub_4736C4(a1, v2, a1);
    if ( !SetEndOfFile(v11) )
    {
      *sub_46B984() = 13;
      v12 = sub_46B971();
      *v12 = GetLastError();
      goto LABEL_25;
    }
LABEL_17:
    v8 = 0;
    goto LABEL_26;
  }
  if ( v18 <= 0 )
  {
    if ( v18 >= 0 )
      goto LABEL_17;
    goto LABEL_22;
  }
  v3 = sub_4791B9(0x1000u, 1u);
  if ( !v3 )
  {
    *sub_46B984() = 12;
    goto LABEL_20;
  }
  v20 = sub_477CBD(a1, 0x8000);
  v4 = HIDWORD(v18);
  while ( 1 )
  {
    if ( v4 >= 0 && (v4 > 0 || v2 >= 0x1000) )
    {
LABEL_11:
      v5 = 4096;
      goto LABEL_13;
    }
    v5 = v2;
LABEL_13:
    v6 = sub_474934(a1, a1, v3, v5);
    if ( v6 == -1 )
      break;
    v7 = v2 - v6;
    v4 = (__PAIR64__(v21, v2) - v6) >> 32;
    v2 = v7;
    v21 = v4;
    if ( v4 > 0 )
      goto LABEL_11;
    if ( __SPAIR64__(v4, v7) <= 0 )
    {
      sub_477CBD(a1, v20);
      sub_479216(v3);
      goto LABEL_17;
    }
  }
  if ( *sub_46B971() == 5 )
    *sub_46B984() = 13;
LABEL_20:
  v8 = *sub_46B984();
  sub_479216(v3);
LABEL_26:
  sub_474CB1(a1, v8, v19, v14, v15, 0);
  return v8;
}
// 4730D8: conditional instruction was optimized away because %var_14.4==0
// 4730EE: variable 'v10' is possibly undefined
