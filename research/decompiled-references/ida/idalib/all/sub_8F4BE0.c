__int64 __fastcall sub_8F4BE0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *ptr; // [rsp+0h] [rbp-1048h] BYREF
  int v5[4]; // [rsp+8h] [rbp-1040h]
  _BYTE dest[4104]; // [rsp+20h] [rbp-1028h] BYREF
  unsigned __int64 v7; // [rsp+1028h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( (unsigned __int8)qdirname(dest) && !(unsigned __int8)qisdir(dest) )
    sub_8FE170(dest, 4096);
  ptr = nullptr;
  *(_OWORD *)v5 = 0;
  sub_8F0550((__int64 *)&ptr);
  v2 = sub_8F4B40(a1, a2, (__int64 *)&ptr, 1u);
  if ( ptr )
  {
    *(_QWORD *)v5 = 0;
    qfree(ptr);
  }
  return v2;
}
