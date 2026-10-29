__int64 __fastcall sub_5AF3E0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  _QWORD *v5; // rbx
  int fchunk_qty; // ebp
  _QWORD *v7; // rax
  __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax

  v4 = 0;
  v5 = *(_QWORD **)(a1 + 1424);
  sub_5AF050(a1, a2, a3, a4);
  v5[3] = 0;
  fchunk_qty = get_fchunk_qty();
  if ( fchunk_qty > 0 )
  {
    do
    {
      v8 = getn_fchunk(v4);
      if ( v8 && *(char *)(v8 + 9) >= 0 )
      {
        v9 = *(_DWORD *)v8;
        v10 = v5[3];
        v11 = v5[2];
        if ( v5[4] < (unsigned __int64)(v10 + 1) )
        {
          v12 = qvector_reserve(v5 + 2, v11, v10 + 1, 8);
          v5[2] = v12;
          v11 = v12;
          v10 = v5[3];
        }
        v7 = (_QWORD *)(v11 + 8 * v10);
        *v7 = 0xFFFFFFFFLL;
        ++v5[3];
        *(_DWORD *)v7 = v9;
      }
      ++v4;
    }
    while ( fchunk_qty != v4 );
  }
  sub_514D60(a1, 1u);
  return mark_builtin_widgets(0x4000000008000008LL, 0, 1);
}

