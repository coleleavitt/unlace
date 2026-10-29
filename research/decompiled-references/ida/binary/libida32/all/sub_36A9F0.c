__int64 __fastcall sub_36A9F0(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r13d
  unsigned int v3; // ebp
  __int64 fchunk; // rax
  __int64 v5; // rbx
  int updated; // eax
  _QWORD v8[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1[18];
  v3 = a1[10];
  v8[3] = __readfsqword(0x28u);
  fchunk = get_fchunk(a1[2]);
  v5 = fchunk;
  if ( v3 == 20 )
  {
    v8[0] = 0;
    func_parent_iterator_set(v8, fchunk);
    if ( v8[0] )
      lock_func_range(v8[0], 0);
  }
  if ( v5 && (unsigned __int8)sub_36A7C0((__int64)&unk_2388400, v5, v3, v2) )
    updated = (unsigned __int8)update_func(v5);
  else
    updated = 0;
  *(_DWORD *)(a2 + 8) = updated;
  return 0;
}

