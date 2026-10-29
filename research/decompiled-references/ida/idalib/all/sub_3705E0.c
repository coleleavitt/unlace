__int64 __fastcall sub_3705E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // r13
  __int64 v4; // rdi
  __int64 fchunk; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = -1;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 8);
  v9[3] = __readfsqword(0x28u);
  fchunk = get_fchunk(v4);
  if ( fchunk )
  {
    v6 = fchunk;
    if ( *(char *)(fchunk + 17) < 0 )
    {
      v9[0] = 0;
      func_parent_iterator_set(v9, fchunk);
      if ( v3 < *(int *)(v6 + 32) )
      {
        v7 = *(_QWORD *)(v6 + 40);
        if ( v7 )
          v2 = *(_QWORD *)(v7 + 8 * v3);
      }
      if ( v9[0] )
        lock_func_range(v9[0], 0);
    }
  }
  *(_QWORD *)(a2 + 8) = v2;
  return 0;
}
