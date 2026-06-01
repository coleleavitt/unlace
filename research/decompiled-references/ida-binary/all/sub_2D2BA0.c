unsigned __int64 __fastcall sub_2D2BA0(__int64 a1, __int64 a2)
{
  __int64 fchunk; // rax
  __int64 v3; // r12
  __int64 func; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  bool v8; // bp
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-58h] BYREF
  int v14; // [rsp+10h] [rbp-50h]
  __int128 v15; // [rsp+18h] [rbp-48h]
  unsigned __int64 v16; // [rsp+30h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  fchunk = get_fchunk(a2);
  v3 = fchunk;
  if ( fchunk )
  {
    if ( (*(_BYTE *)(fchunk + 16) & 0x40) != 0 )
    {
      func = get_func(*(_QWORD *)(a1 + 24));
      if ( func )
      {
        v13 = 0;
        v15 = 0;
        func_tail_iterator_set(&v13, func, -1);
        v6 = v13;
        v14 = -1;
        if ( v13 )
        {
          while ( 1 )
          {
            v7 = get_fchunk(*(_QWORD *)v6);
            v8 = 0;
            if ( v7 )
              v8 = (*(_BYTE *)(v7 + 16) & 0x40) == 0;
            v9 = *(_QWORD *)(a1 + 8);
            v10 = *(_QWORD *)a1;
            if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v9 + 1) )
            {
              v12 = qvector_reserve(a1, v10, v9 + 1, 1);
              *(_QWORD *)a1 = v12;
              v10 = v12;
              v9 = *(_QWORD *)(a1 + 8);
            }
            *(_BYTE *)(v10 + v9) = v8;
            v6 = v13;
            ++*(_QWORD *)(a1 + 8);
            if ( !v6 )
              break;
            v11 = v14 + 1;
            if ( *(_DWORD *)(v6 + 128) <= v14 + 1 )
              break;
            ++v14;
            if ( v11 >= 0 )
              v6 = *(_QWORD *)(v6 + 136) + 16LL * v11;
          }
        }
        sub_1C6390();
        set_visible_func(v3, 1);
        sub_1C63A0();
        if ( v13 )
          lock_func_range(v13, 0);
      }
    }
  }
  return v16 - __readfsqword(0x28u);
}
