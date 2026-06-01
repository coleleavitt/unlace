__int64 __fastcall sub_6CBE80(__int64 *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  ptr = nullptr;
  v7 = 0;
  if ( sub_5302B0(a1, &ptr, a3) <= 0 )
  {
    if ( ptr )
    {
      *(_QWORD *)&v7 = 0;
      qfree(ptr);
    }
    return 0;
  }
  v3 = sub_530470(a1, nullptr, ptr);
  if ( ptr )
  {
    *(_QWORD *)&v7 = 0;
    qfree(ptr);
  }
  if ( !v3 )
    return 0;
  v4 = v3[2];
  if ( (*((_BYTE *)v3 + 28) & 2) == 0 )
    v4 -= v3[1];
  *a2 = v4;
  return 1;
}
