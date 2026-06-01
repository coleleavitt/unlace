unsigned __int64 __fastcall sub_6B4E70(__int64 *a1)
{
  unsigned int i; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  _DWORD *v4; // rsi
  signed int v5; // r15d
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+8h] [rbp-50h]
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  for ( i = sub_6BA930(*a1, 0); ; i = sub_6BA930(*a1, v2) )
  {
    v2 = i;
    if ( !i )
      break;
    if ( !(unsigned __int8)sub_6B4700(a1, i) && *((_BYTE *)a1 + 40) )
    {
      v3 = v8;
      v4 = ptr;
      if ( *((_QWORD *)&v8 + 1) < (unsigned __int64)(v8 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v8 + 1, 4);
        v4 = ptr;
        v3 = v8;
      }
      v4[v3] = v2;
      *(_QWORD *)&v8 = v8 + 1;
    }
  }
  if ( (char *)ptr + 4 * (_QWORD)v8 != ptr )
  {
    v5 = *(_DWORD *)ptr;
    sub_64DFD0(*a1, 0, *(_DWORD *)ptr, nullptr);
    sub_651490((__int64 *)*a1, 0, v5);
    sub_368890();
  }
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    qfree(ptr);
  }
  return v9 - __readfsqword(0x28u);
}
