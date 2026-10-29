__int64 __fastcall sub_5CA0B0(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  _QWORD *v5; // rbx
  int fchunk_qty; // ebp
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax

  v4 = 0;
  v5 = *(_QWORD **)(a1 + 1616);
  sub_5C9D00(a1, a2, a3, a4);
  v5[4] = 0;
  fchunk_qty = get_fchunk_qty();
  if ( fchunk_qty > 0 )
  {
    do
    {
      v8 = getn_fchunk(v4);
      if ( v8 && *(char *)(v8 + 17) >= 0 )
      {
        v9 = *(_QWORD *)v8;
        v10 = v5[4];
        v11 = v5[3];
        if ( v5[5] < (unsigned __int64)(v10 + 1) )
        {
          v12 = qvector_reserve(v5 + 3, v11, v10 + 1, 16);
          v5[3] = v12;
          v11 = v12;
          v10 = v5[4];
        }
        v7 = 16 * v10 + v11;
        *(_QWORD *)v7 = -1;
        *(_DWORD *)(v7 + 8) = 0;
        ++v5[4];
        *(_QWORD *)v7 = v9;
      }
      ++v4;
    }
    while ( fchunk_qty != v4 );
  }
  sub_52D000(a1, 1u);
  return mark_builtin_widgets(0x4000000008000008LL, 0, 1);
}
