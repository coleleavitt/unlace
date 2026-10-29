unsigned __int64 __fastcall sub_49AD20(__int64 a1, __int64 *a2)
{
  _BYTE *v2; // rax
  _WORD *v3; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  v2 = (_BYTE *)qvector_reserve(&ptr, 0, 6, 1);
  ptr = v2;
  *(_QWORD *)&v6 = 6;
  *(_DWORD *)v2 = 1735287122;
  v2[4] = 101;
  *((_BYTE *)ptr + 5) = 0;
  sub_4790E0(a2, (unsigned __int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v6 = 0;
    qfree(ptr);
  }
  ptr = nullptr;
  v6 = 0;
  v3 = (_WORD *)qvector_reserve(&ptr, 0, 7, 1);
  ptr = v3;
  *(_QWORD *)&v6 = 7;
  v3[2] = 29285;
  *(_DWORD *)v3 = 1651336525;
  *((_BYTE *)ptr + 6) = 0;
  sub_4790E0(a2, (unsigned __int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v6 = 0;
    qfree(ptr);
  }
  return v7 - __readfsqword(0x28u);
}
