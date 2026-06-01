unsigned __int64 __fastcall sub_4A7C60(__int64 a1, __int64 *a2)
{
  _BYTE *v2; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  ptr = nullptr;
  v5 = 0;
  v2 = (_BYTE *)qvector_reserve(&ptr, 0, 6, 1);
  ptr = v2;
  *(_QWORD *)&v5 = 6;
  *(_DWORD *)v2 = 1667329104;
  v2[4] = 101;
  *((_BYTE *)ptr + 5) = 0;
  sub_464BE0(a2, (unsigned __int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v5 = 0;
    qfree(ptr);
  }
  ptr = nullptr;
  v5 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 12, 1);
  *(_QWORD *)&v5 = 12;
  strcpy((char *)ptr, "Description");
  sub_464BE0(a2, (unsigned __int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v5 = 0;
    qfree(ptr);
  }
  return v6 - __readfsqword(0x28u);
}

