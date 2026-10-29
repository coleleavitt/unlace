/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DEF0
// Address: 0x0007DEF0

//----- (0007DEF0) --------------------------------------------------------
int __cdecl sub_7DEF0(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // edx
  _DWORD *v5; // esi
  int v6; // ecx
  char v7; // al
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int v10; // edi
  bool v11; // zf
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // edx
  _DWORD *v17; // ecx
  int *v18; // edx
  int v19; // edx
  int v20; // ecx
  int v21; // [esp+8h] [ebp-14h]
  int v22; // [esp+8h] [ebp-14h]

  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 248) + 44) + 8))(*(_DWORD *)(*(_DWORD *)(a1 + 248) + 44));
  v2 = *(_DWORD **)(*(_DWORD *)(a1 + 248) + 44);
  v3 = (_DWORD *)v2[1];
  if ( v2 + 2 == v3 )
  {
LABEL_14:
    v22 = 0;
  }
  else
  {
    v4 = (_DWORD *)a1;
    while ( 1 )
    {
      v5 = (_DWORD *)v3[4];
      if ( v5 != v4 )
      {
        v6 = v5[61];
        if ( *(_BYTE *)(v6 + 388) )
        {
          if ( *(_DWORD *)(v6 + 272) == a2 )
          {
            v21 = v5[61];
            v7 = (*(int (__cdecl **)(int, int))(*(_DWORD *)v6 + 256))(v6, a2);
            v4 = (_DWORD *)a1;
            if ( v7 )
              break;
          }
        }
      }
      v8 = (_DWORD *)v3[1];
      if ( v8 )
      {
        do
        {
          v9 = v8;
          v8 = (_DWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        v9 = (_DWORD *)v3[2];
        if ( (_DWORD *)*v9 != v3 )
        {
          v10 = (int)(v3 + 2);
          do
          {
            v9 = *(_DWORD **)(*(_DWORD *)v10 + 8);
            v11 = *v9 == *(_DWORD *)v10;
            v10 = *(_DWORD *)v10 + 8;
          }
          while ( !v11 );
        }
      }
      v2 = *(_DWORD **)(v4[62] + 44);
      v4 = (_DWORD *)a1;
      v3 = v9;
      if ( v2 + 2 == v9 )
        goto LABEL_14;
    }
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 244) + 56))(*(_DWORD *)(a1 + 244));
    v13 = a1;
    v14 = *(_DWORD *)(a1 + 244);
    if ( v14 )
    {
      (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v14 + 20))(*(_DWORD *)(a1 + 244));
      v13 = a1;
    }
    *(_DWORD *)(v13 + 244) = v21;
    if ( *(_BYTE *)(v13 + 96) )
      sub_1C900();
    sub_92EA0((int)v5);
    v15 = *(_DWORD *)(*(_DWORD *)(a1 + 248) + 44);
    v16 = (_DWORD *)v3[1];
    if ( v16 )
    {
      do
      {
        v17 = v16;
        v16 = (_DWORD *)*v16;
      }
      while ( v16 );
    }
    else
    {
      v17 = (_DWORD *)v3[2];
      if ( (_DWORD *)*v17 != v3 )
      {
        v18 = v3 + 2;
        do
        {
          v19 = *v18;
          v17 = *(_DWORD **)(v19 + 8);
          v11 = *v17 == v19;
          v18 = (int *)(v19 + 8);
        }
        while ( !v11 );
      }
    }
    if ( *(_DWORD **)(v15 + 4) == v3 )
      *(_DWORD *)(v15 + 4) = v17;
    --*(_DWORD *)(v15 + 12);
    sub_2F420(*(int ***)(v15 + 8), (int **)v3);
    operator delete(v3);
    if ( v5 )
      (*(void (__cdecl **)(_DWORD *))(*v5 + 4))(v5);
    *(_BYTE *)(v21 + 388) = 0;
    v2 = *(_DWORD **)(*(_DWORD *)(a1 + 248) + 44);
    LOBYTE(v20) = 1;
    v22 = v20;
  }
  (*(void (__cdecl **)(_DWORD *))(*v2 + 12))(v2);
  return v22;
}
// 7E0C3: variable 'v20' is possibly undefined
