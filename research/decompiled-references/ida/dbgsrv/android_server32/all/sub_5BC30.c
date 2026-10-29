/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BC30
// Address: 0x0005BC30

//----- (0005BC30) --------------------------------------------------------
int __fastcall sub_5BC30(int a1, int a2)
{
  _DWORD *v3; // r0
  int *v4; // r4
  int v5; // r3
  _DWORD *v6; // r5
  int v7; // r7
  int v8; // r0
  int *v9; // r0
  _DWORD *v10; // r0
  bool v11; // zf
  int v12; // r1
  int v13; // r4
  int v15; // r0
  _DWORD *v16; // r1
  int *v17; // r2
  int v18; // r0
  int **v19; // r1
  _DWORD *v20; // r2
  int v21; // r3
  int v22; // [sp+Ch] [bp-8h]

  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 248) + 44) + 8))(*(_DWORD *)(*(_DWORD *)(a1 + 248) + 44));
  v3 = *(_DWORD **)(*(_DWORD *)(a1 + 248) + 44);
  v4 = (int *)v3[1];
  v5 = a1 + 248;
  if ( v3 + 2 == v4 )
  {
LABEL_13:
    v13 = 0;
  }
  else
  {
    v22 = a1 + 248;
    while ( 1 )
    {
      v6 = (_DWORD *)v4[4];
      if ( v6 != (_DWORD *)a1 )
      {
        v7 = v6[61];
        if ( *(_BYTE *)(v7 + 388) )
        {
          if ( *(_DWORD *)(v7 + 272) == a2 )
          {
            v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 256))(v7, a2);
            v5 = a1 + 248;
            if ( v8 )
              break;
          }
        }
      }
      v9 = (int *)v4[1];
      if ( v9 )
      {
        do
        {
          v4 = v9;
          v9 = (int *)*v9;
        }
        while ( v9 );
      }
      else
      {
        v10 = v4 + 2;
        v11 = *(_DWORD *)v4[2] == (_DWORD)v4;
        v4 = (int *)v4[2];
        if ( !v11 )
        {
          do
          {
            v12 = *v10;
            v10 = (_DWORD *)(*v10 + 8);
            v4 = *(int **)(v12 + 8);
          }
          while ( *v4 != v12 );
        }
      }
      v3 = *(_DWORD **)(*(_DWORD *)v5 + 44);
      if ( v3 + 2 == v4 )
        goto LABEL_13;
    }
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 244) + 56))(*(_DWORD *)(a1 + 244));
    v15 = *(_DWORD *)(a1 + 244);
    v16 = (_DWORD *)(a1 + 244);
    if ( v15 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 20))(v15);
      v16 = (_DWORD *)(a1 + 244);
    }
    *v16 = v7;
    if ( *(_BYTE *)(a1 + 96) )
      sub_1BBA0((int)"reusing previously broken debugging session\n");
    sub_6B71C((int)v6);
    v17 = (int *)v4[1];
    v18 = *(_DWORD *)(*(_DWORD *)v22 + 44);
    if ( v17 )
    {
      do
      {
        v19 = (int **)v17;
        v17 = (int *)*v17;
      }
      while ( v17 );
    }
    else
    {
      v20 = v4 + 2;
      v19 = (int **)v4[2];
      if ( *v19 != v4 )
      {
        do
        {
          v21 = *v20;
          v20 = (_DWORD *)(*v20 + 8);
          v19 = *(int ***)(v21 + 8);
        }
        while ( *v19 != (int *)v21 );
      }
    }
    if ( *(int **)(v18 + 4) == v4 )
      *(_DWORD *)(v18 + 4) = v19;
    --*(_DWORD *)(v18 + 12);
    sub_27512(*(int **)(v18 + 8), v4);
    operator delete(v4);
    if ( v6 )
      (*(void (__fastcall **)(_DWORD *))(*v6 + 4))(v6);
    *(_BYTE *)(v7 + 388) = 0;
    v3 = *(_DWORD **)(*(_DWORD *)v22 + 44);
    v13 = 1;
  }
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  return v13;
}
