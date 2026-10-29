/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FD90
// Address: 0x000000000003FD90

//----- (000000000003FD90) ----------------------------------------------------
bool __fastcall sub_3FD90(__int64 a1, int a2)
{
  __int64 v4; // rax
  char v5; // cl
  _QWORD *v6; // rsi
  _QWORD *v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbp
  __int64 *v10; // rsi
  __int64 v11; // rsi
  bool v12; // zf
  _QWORD *v13; // rbx
  _QWORD *v14; // r13
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  int v18; // eax

  v4 = *(_QWORD *)(a1 + 360);
  v5 = 1;
  if ( !v4 )
  {
    if ( !*(_QWORD *)(a1 + 160) )
    {
      v6 = *(_QWORD **)(a1 + 1032);
      v7 = (_QWORD *)(a1 + 1040);
      if ( v6 == (_QWORD *)(a1 + 1040) )
        goto LABEL_15;
      while ( !*((_BYTE *)v6 + 65) || *((_DWORD *)v6 + 12) || *((_DWORD *)v6 + 11) )
      {
        v8 = (_QWORD *)v6[1];
        if ( v8 )
        {
          do
          {
            v9 = v8;
            v8 = (_QWORD *)*v8;
          }
          while ( v8 );
        }
        else
        {
          v9 = (_QWORD *)v6[2];
          if ( (_QWORD *)*v9 != v6 )
          {
            v10 = v6 + 2;
            do
            {
              v11 = *v10;
              v9 = *(_QWORD **)(v11 + 16);
              v12 = *v9 == v11;
              v10 = (__int64 *)(v11 + 16);
            }
            while ( !v12 );
          }
        }
        v6 = v9;
        if ( v9 == v7 )
          goto LABEL_15;
      }
    }
    v5 = 0;
  }
LABEL_15:
  *(_BYTE *)(a1 + 1228) = v5;
  if ( *(_QWORD *)(a1 + 1208) && !*(_DWORD *)(a1 + 1224) && !v4 )
  {
    v13 = *(_QWORD **)(a1 + 1192);
    v14 = (_QWORD *)(a1 + 1200);
    if ( v13 != (_QWORD *)(a1 + 1200) )
    {
      do
      {
        sub_4C370((__int64 ***)(a1 + 432), v13 + 4);
        v15 = (_QWORD *)v13[1];
        if ( v15 )
        {
          do
          {
            v16 = v15;
            v15 = (_QWORD *)*v15;
          }
          while ( v15 );
        }
        else
        {
          v16 = (_QWORD *)v13[2];
          if ( (_QWORD *)*v16 != v13 )
          {
            v17 = (__int64)(v13 + 2);
            do
            {
              v16 = *(_QWORD **)(*(_QWORD *)v17 + 16LL);
              v12 = *v16 == *(_QWORD *)v17;
              v17 = *(_QWORD *)v17 + 16LL;
            }
            while ( !v12 );
          }
        }
        v13 = v16;
      }
      while ( v16 != v14 );
    }
    sub_488B0(a1 + 1192, *(_QWORD **)(a1 + 1200));
    *(_QWORD *)(a1 + 1192) = v14;
    *(_OWORD *)(a1 + 1200) = 0;
  }
  if ( a2 )
    v18 = sub_402C0(a1, a2, 0);
  else
    v18 = sub_402C0(a1, 0, 1) != 0;
  return v18 != 0;
}
