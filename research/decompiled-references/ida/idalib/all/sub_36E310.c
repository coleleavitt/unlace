__int64 __fastcall sub_36E310(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 fchunk; // rax
  __int64 v5; // rbx
  __int64 updated; // rax
  _QWORD v8[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1[9];
  v3 = a1[5];
  v8[3] = __readfsqword(0x28u);
  fchunk = get_fchunk(a1[1]);
  v5 = fchunk;
  if ( (_DWORD)v3 == 32 )
  {
    v8[0] = 0;
    func_parent_iterator_set(v8, fchunk);
    if ( v8[0] )
      lock_func_range(v8[0], 0);
  }
  if ( v5 && (unsigned __int8)sub_36E0E0((__int64)&unk_23AC440, v5, (unsigned int)v3, v2) )
    updated = (unsigned __int8)update_func(v5);
  else
    updated = 0;
  *(_QWORD *)(a2 + 8) = updated;
  return 0;
}
