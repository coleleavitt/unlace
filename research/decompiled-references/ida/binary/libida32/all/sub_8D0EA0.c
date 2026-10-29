__int64 __fastcall sub_8D0EA0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *ptr; // [rsp+0h] [rbp-1048h] BYREF
  int v5[4]; // [rsp+8h] [rbp-1040h]
  _BYTE dest[4104]; // [rsp+20h] [rbp-1028h] BYREF
  unsigned __int64 v7; // [rsp+1028h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( (unsigned __int8)qdirname(dest) && !(unsigned __int8)qisdir(dest) )
    sub_8DA430(dest, 4096);
  ptr = nullptr;
  *(_OWORD *)v5 = 0;
  sub_8CC810((__int64 *)&ptr);
  v2 = sub_8D0E00(a1, a2, (__int64 *)&ptr, 1u);
  if ( ptr )
  {
    *(_QWORD *)v5 = 0;
    qfree(ptr);
  }
  return v2;
}

