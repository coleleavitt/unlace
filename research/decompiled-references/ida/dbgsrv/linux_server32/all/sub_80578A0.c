/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80578A0
// Address: 0x080578A0

//----- (080578A0) --------------------------------------------------------
int __usercall sub_80578A0@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<edx>, _DWORD *a3@<ecx>)
{
  _DWORD *v4; // eax
  int v5; // ebp
  _DWORD *v6; // edi
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  int v12; // ebp
  int v13; // esi
  _DWORD *v15; // ecx
  int v16; // [esp-10h] [ebp-38h]
  int v17; // [esp-Ch] [ebp-34h]
  int v18; // [esp-8h] [ebp-30h]
  int v20; // [esp+0h] [ebp-28h]

  sub_80A4BE0();
  v4 = a1;
  v5 = a1[25];
  v6 = a1 + 165;
  v7 = (_DWORD *)v4[166];
  if ( v7 )
  {
    v8 = (int)v6;
    do
    {
      while ( 1 )
      {
        v9 = v7[2];
        v10 = v7[3];
        if ( v5 > v7[4] )
          break;
        v8 = (int)v7;
        v7 = (_DWORD *)v7[2];
        if ( !v9 )
          goto LABEL_6;
      }
      v7 = (_DWORD *)v7[3];
    }
    while ( v10 );
LABEL_6:
    if ( v6 != (_DWORD *)v8 )
    {
      v11 = *(_DWORD *)(v8 + 16);
      if ( v5 >= v11 && *(_BYTE *)(v8 + 45) && *(int *)(v8 + 28) <= 0 && *(int *)(v8 + 24) <= 0 )
        goto LABEL_27;
    }
  }
  v12 = 0;
  v13 = a1[167];
  do
  {
LABEL_9:
    if ( v6 != (_DWORD *)v13 )
    {
      v8 = v13;
      while ( 1 )
      {
        if ( *(int *)(v8 + 28) <= 0 && *(int *)(v8 + 24) <= 0 && *(_BYTE *)(v8 + 45) )
        {
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_22;
            if ( (unsigned __int8)*(_DWORD *)(v8 + 48) == 127 && (*(_DWORD *)(v8 + 48) & 0xFF00) == 0x500 )
            {
LABEL_18:
              ++v12;
              goto LABEL_9;
            }
          }
          else if ( *(_BYTE *)(v8 + 36) )
          {
            goto LABEL_18;
          }
        }
        v8 = std::_Rb_tree_increment(v8);
        if ( (_DWORD *)v8 == v6 )
          goto LABEL_21;
      }
    }
    v8 = (int)v6;
LABEL_21:
    ++v12;
  }
  while ( v12 != 3 );
LABEL_22:
  if ( v6 == (_DWORD *)v8 )
  {
    sub_80A4BF0();
    return 0;
  }
  v11 = *(_DWORD *)(v8 + 16);
LABEL_27:
  *a2 = v11;
  *a3 = *(_DWORD *)(v8 + 48);
  v15 = a1;
  *(_BYTE *)(v8 + 45) = 0;
  v20 = a1[191];
  v15[191] = v20 - 1;
  if ( v20 - 1 < 0 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(30186, v16, v17, v18);
    BUG();
  }
  sub_80A4BF0();
  return 1;
}
// 8057A23: variable 'v16' is possibly undefined
// 8057A23: variable 'v17' is possibly undefined
// 8057A23: variable 'v18' is possibly undefined
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 811F8A1: using guessed type char byte_811F8A1;
