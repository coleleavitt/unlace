/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_686C0
// Address: 0x000686C0

//----- (000686C0) --------------------------------------------------------
int __fastcall sub_686C0(int a1, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  int v7; // edi
  bool v8; // zf
  _DWORD *v9; // edi
  _DWORD *v10; // esi
  _DWORD *v11; // edi
  _DWORD *v12; // ecx
  _DWORD *v13; // eax
  int v14; // esi
  _DWORD *v17; // [esp+18h] [ebp-34h]
  int v18; // [esp+1Ch] [ebp-30h]
  _DWORD *v19; // [esp+20h] [ebp-2Ch]
  _DWORD v20[9]; // [esp+28h] [ebp-24h] BYREF

  v20[4] = __readgsdword(0x14u);
  if ( *(_BYTE *)a1 == 5 )
  {
    v18 = a2;
    v2 = operator new(0x14u);
    v3 = *(_DWORD **)(a1 + 4);
    v2[1] = 0;
    v2[2] = 0;
    *v2 = v2 + 1;
    v4 = (_DWORD *)*v3;
    v17 = v3;
    v19 = v3 + 1;
    if ( v3 + 1 != (_DWORD *)*v3 )
    {
      do
      {
        v20[2] = v2 + 1;
        sub_681E0(v20, (int)v2, v2 + 1, (int)(v4 + 4), (int)(v4 + 4));
        v5 = (_DWORD *)v4[1];
        if ( v5 )
        {
          do
          {
            v6 = v5;
            v5 = (_DWORD *)*v5;
          }
          while ( v5 );
        }
        else
        {
          v6 = (_DWORD *)v4[2];
          if ( (_DWORD *)*v6 != v4 )
          {
            v7 = (int)(v4 + 2);
            do
            {
              v6 = *(_DWORD **)(*(_DWORD *)v7 + 8);
              v8 = *v6 == *(_DWORD *)v7;
              v7 = *(_DWORD *)v7 + 8;
            }
            while ( !v8 );
          }
        }
        v4 = v6;
      }
      while ( v19 != v6 );
    }
    v2[3] = 1;
    v2[4] = v17[4];
    free_idcv((char *)a1);
    *(_BYTE *)a1 = 5;
    *(_DWORD *)(a1 + 4) = v2;
    a2 = v18;
  }
  v9 = *(_DWORD **)(a2 + 4);
  v10 = (_DWORD *)*v9;
  v11 = v9 + 1;
  if ( v11 != v10 )
  {
    do
    {
      sub_68F50(*(_DWORD **)(a1 + 4), (int)(v10 + 4));
      v12 = (_DWORD *)v10[1];
      if ( v12 )
      {
        do
        {
          v13 = v12;
          v12 = (_DWORD *)*v12;
        }
        while ( v12 );
      }
      else
      {
        v13 = (_DWORD *)v10[2];
        if ( (_DWORD *)*v13 != v10 )
        {
          v14 = (int)(v10 + 2);
          do
          {
            v13 = *(_DWORD **)(*(_DWORD *)v14 + 8);
            v8 = *v13 == *(_DWORD *)v14;
            v14 = *(_DWORD *)v14 + 8;
          }
          while ( !v8 );
        }
      }
      v10 = v13;
    }
    while ( v11 != v13 );
  }
  return 0;
}
