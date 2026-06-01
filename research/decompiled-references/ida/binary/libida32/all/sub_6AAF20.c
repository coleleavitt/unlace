__int64 __fastcall sub_6AAF20(__int64 *a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v3; // rbx
  int v4; // eax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  ptr = nullptr;
  v7 = 0;
  if ( sub_517EC0(a1, &ptr, a3) <= 0 )
  {
    if ( ptr )
    {
      *(_QWORD *)&v7 = 0;
      qfree(ptr);
    }
    return 0;
  }
  v3 = sub_518080(a1, nullptr, ptr);
  if ( ptr )
  {
    *(_QWORD *)&v7 = 0;
    qfree(ptr);
  }
  if ( !v3 )
    return 0;
  v4 = v3[2];
  if ( (v3[4] & 2) == 0 )
    v4 -= v3[1];
  *a2 = v4;
  return 1;
}

