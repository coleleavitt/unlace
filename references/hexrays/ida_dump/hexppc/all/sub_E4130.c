__int64 __fastcall sub_E4130(__int64 a1, __int64 a2, int a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // r9
  _QWORD *v13; // r9
  unsigned __int64 v14; // rbx
  const void *v15; // rbp
  void *v16; // rax
  int tinfo_size; // [rsp+0h] [rbp-58h]
  _QWORD *v18; // [rsp+0h] [rbp-58h]
  _QWORD *v19; // [rsp+0h] [rbp-58h]
  _QWORD *v20; // [rsp+0h] [rbp-58h]

  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a5 + 64), 0);
  v8 = *(int *)(a1 + 348);
  v9 = *(_DWORD *)(a1 + 348);
  if ( v8 >= a4[1] )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v10 = 80 * v8;
    if ( !(unsigned int)compare_arglocs(80 * v8 + *a4 + 56, a5) )
      break;
    v8 = ++v9;
    if ( (unsigned __int64)v9 >= a4[1] )
      return 0xFFFFFFFFLL;
  }
  v11 = v10 + *a4;
  if ( *(_DWORD *)(v11 + 4) > tinfo_size )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(v11 + 4) != tinfo_size )
  {
    if ( (unsigned __int8)sub_E3DC0((__int64 *)a1, a2, tinfo_size, a4, v9, a6) )
    {
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(*a4 + v10 + 16);
      copy_argloc(a2 + 56, a5);
      copy_tinfo_t(a2 + 24, a5 + 64);
      *(_DWORD *)(a2 + 4) = tinfo_size;
      return 1;
    }
    return 0xFFFFFFFFLL;
  }
  v18 = (_QWORD *)(v10 + *a4);
  sub_121740(a2);
  *(_QWORD *)(a2 + 16) = v18[2];
  copy_tinfo_t(a2 + 24, v18 + 3);
  v13 = v18;
  if ( (_QWORD *)(a2 + 32) != v18 + 4 )
  {
    v14 = v18[5];
    if ( v14 < 2 )
    {
      *(_QWORD *)(a2 + 40) = 0;
    }
    else
    {
      v15 = (const void *)v18[4];
      v16 = *(void **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 48) < v14 )
      {
        v16 = (void *)qvector_reserve(a2 + 32, *(_QWORD *)(a2 + 32), v18[5], 1);
        v13 = v18;
        *(_QWORD *)(a2 + 32) = v16;
      }
      *(_QWORD *)(a2 + 40) = v14;
      v19 = v13;
      memmove(v16, v15, v14 - 1);
      v13 = v19;
      *(_BYTE *)(*(_QWORD *)(a2 + 32) + v14 - 1) = 0;
    }
  }
  v20 = v13;
  copy_argloc(a2 + 56, v13 + 7);
  *(_DWORD *)(a2 + 72) = *((_DWORD *)v20 + 18);
  return v9 != a3;
}
