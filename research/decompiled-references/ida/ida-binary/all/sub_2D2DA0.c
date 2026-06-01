unsigned __int64 __fastcall sub_2D2DA0(__int64 *a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // rdi
  __int64 fchunk; // rbp
  __int64 func; // rax
  unsigned __int64 v8; // r12
  unsigned __int8 v9; // bp
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+10h] [rbp-58h] BYREF
  int v13; // [rsp+18h] [rbp-50h]
  __int128 v14; // [rsp+20h] [rbp-48h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v2 = a1[1] == 0;
  v15 = __readfsqword(0x28u);
  if ( !v2 )
  {
    fchunk = get_fchunk(a1[3]);
    func = get_func(a1[3]);
    if ( fchunk )
    {
      if ( func )
      {
        a2 = func;
        v8 = 0;
        v14 = 0;
        v12 = 0;
        func_tail_iterator_set(&v12, func, -1);
        sub_1C6390();
        v13 = -1;
        if ( v12 )
        {
          while ( v8 < a1[1] )
          {
            v9 = *(_BYTE *)(*a1 + v8);
            v10 = (_QWORD *)v12;
            if ( v13 >= 0 && v13 < *(_DWORD *)(v12 + 128) )
              v10 = (_QWORD *)(*(_QWORD *)(v12 + 136) + 16LL * v13);
            v11 = get_fchunk(*v10);
            if ( v11 && v9 != ((*(_BYTE *)(v11 + 16) & 0x40) == 0) )
            {
              a2 = v9;
              set_visible_func(v11, v9);
            }
            if ( !v12 || v13 + 1 >= *(_DWORD *)(v12 + 128) )
              break;
            ++v13;
            ++v8;
          }
        }
        sub_1C63A0();
        if ( v12 )
        {
          a2 = 0;
          lock_func_range(v12, 0);
        }
      }
    }
  }
  v4 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v4, (const char *)a2);
  }
  return v15 - __readfsqword(0x28u);
}
