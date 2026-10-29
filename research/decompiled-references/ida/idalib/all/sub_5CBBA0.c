__int64 __fastcall sub_5CBBA0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 fchunk; // rax
  int v5; // eax
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = 0;
  v8 = __readfsqword(0x28u);
  fchunk = get_fchunk(a1);
  v6 = 0;
  func_parent_iterator_set(&v6, fchunk);
  v7 = 0;
  if ( v6 )
  {
    if ( *(char *)(v6 + 17) < 0 )
    {
      v5 = *(_DWORD *)(v6 + 32);
      if ( v5 > 0 )
      {
        if ( **(_QWORD **)(v6 + 40) == *a2 )
        {
          v2 = 1;
          if ( v5 != 1 )
          {
            v7 = 1;
            v2 = 0;
          }
        }
        else
        {
          v2 = 0;
        }
      }
    }
    lock_func_range(v6, 0);
  }
  return v2;
}
