/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23870
// Address: 0x00023870

//----- (00023870) --------------------------------------------------------
bool __cdecl sub_23870(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  char v4; // dl
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  _DWORD *v7; // ecx
  int *v8; // esi
  int v9; // esi
  bool v10; // zf
  int v11; // ecx
  _DWORD *v12; // edi
  _DWORD *v13; // ecx
  _DWORD *v14; // eax
  int v15; // edi
  int v16; // eax
  _DWORD *v18; // [esp+4h] [ebp-18h]
  int v19; // [esp+8h] [ebp-14h]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 188);
  v4 = 1;
  if ( !v3 )
  {
    if ( *(_DWORD *)(a1 + 76) )
    {
      v4 = 0;
    }
    else
    {
      v5 = *(_DWORD **)(a1 + 568);
      if ( (_DWORD *)(a1 + 572) == v5 )
      {
LABEL_15:
        v2 = a1;
        v4 = 1;
      }
      else
      {
        while ( !*((_BYTE *)v5 + 45) || v5[7] || v5[6] )
        {
          v6 = (_DWORD *)v5[1];
          if ( v6 )
          {
            do
            {
              v7 = v6;
              v6 = (_DWORD *)*v6;
            }
            while ( v6 );
          }
          else
          {
            v7 = (_DWORD *)v5[2];
            if ( (_DWORD *)*v7 != v5 )
            {
              v8 = v5 + 2;
              do
              {
                v9 = *v8;
                v7 = *(_DWORD **)(v9 + 8);
                v10 = *v7 == v9;
                v8 = (int *)(v9 + 8);
              }
              while ( !v10 );
            }
          }
          v5 = v7;
          if ( (_DWORD *)(a1 + 572) == v7 )
            goto LABEL_15;
        }
        v4 = 0;
        v2 = a1;
      }
    }
  }
  v11 = a2;
  *(_BYTE *)(v2 + 676) = v4;
  if ( *(_DWORD *)(v2 + 664) && !(*(_DWORD *)(v2 + 672) | v3) )
  {
    v19 = v2 + 656;
    v12 = *(_DWORD **)(v2 + 656);
    v18 = (_DWORD *)(v2 + 660);
    if ( (_DWORD *)(v2 + 660) != v12 )
    {
      do
      {
        sub_2F340((_DWORD *)(a1 + 224), v12 + 4);
        v13 = (_DWORD *)v12[1];
        if ( v13 )
        {
          do
          {
            v14 = v13;
            v13 = (_DWORD *)*v13;
          }
          while ( v13 );
        }
        else
        {
          v14 = (_DWORD *)v12[2];
          if ( (_DWORD *)*v14 != v12 )
          {
            v15 = (int)(v12 + 2);
            do
            {
              v14 = *(_DWORD **)(*(_DWORD *)v15 + 8);
              v10 = *v14 == *(_DWORD *)v15;
              v15 = *(_DWORD *)v15 + 8;
            }
            while ( !v10 );
          }
        }
        v12 = v14;
      }
      while ( v18 != v14 );
    }
    v2 = a1;
    sub_2B6C0(v19, *(void ***)(a1 + 660));
    *(_DWORD *)(a1 + 664) = 0;
    *(_DWORD *)(a1 + 656) = v18;
    *(_DWORD *)(a1 + 660) = 0;
    v11 = a2;
  }
  if ( v11 )
    v16 = sub_23D70(v2, v11, 0);
  else
    v16 = sub_23D70(v2, 0, 1) != 0;
  return v16 != 0;
}
