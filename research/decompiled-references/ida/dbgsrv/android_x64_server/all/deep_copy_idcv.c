/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deep_copy_idcv
// Address: 0x0000000000075170

//----- (0000000000075170) ----------------------------------------------------
__int64 __fastcall deep_copy_idcv(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  char *v4; // r15
  __int64 v5; // r12
  _QWORD *v6; // rbp
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rbp
  bool v10; // zf

  if ( *(_BYTE *)a2 != 5 )
    return copy_idcv((char *)a1, (char *)a2, a3, a4);
  v4 = (char *)operator new(0x20u);
  v5 = *(_QWORD *)(a2 + 8);
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = v4 + 8;
  v6 = *(_QWORD **)v5;
  if ( *(_QWORD *)v5 != v5 + 8 )
  {
    do
    {
      sub_80350((_QWORD **)v4, (_QWORD *)v4 + 1, (__int64)(v6 + 4), (__int64)(v6 + 4), 0.0, a4);
      v7 = (_QWORD *)v6[1];
      if ( v7 )
      {
        do
        {
          v8 = v7;
          v7 = (_QWORD *)*v7;
        }
        while ( v7 );
      }
      else
      {
        v8 = (_QWORD *)v6[2];
        if ( (_QWORD *)*v8 != v6 )
        {
          v9 = (__int64)(v6 + 2);
          do
          {
            v8 = *(_QWORD **)(*(_QWORD *)v9 + 16LL);
            v10 = *v8 == *(_QWORD *)v9;
            v9 = *(_QWORD *)v9 + 16LL;
          }
          while ( !v10 );
        }
      }
      v6 = v8;
    }
    while ( v8 != (_QWORD *)(v5 + 8) );
  }
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 7) = *(_DWORD *)(v5 + 28);
  free_idcv((char *)a1, 0.0, a4);
  *(_BYTE *)a1 = 5;
  *(_QWORD *)(a1 + 8) = v4;
  return 0;
}
