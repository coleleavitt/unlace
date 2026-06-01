__int64 __fastcall sub_5B120(__int64 *a1, __int64 a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // ebx
  void *ptr; // [rsp+0h] [rbp-1048h] BYREF
  int v9[4]; // [rsp+8h] [rbp-1040h]
  _BYTE dest[4104]; // [rsp+20h] [rbp-1028h] BYREF
  unsigned __int64 v11; // [rsp+1028h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_94D70(dest) && !(unsigned __int8)sub_95600(dest) )
    sub_648A0(dest, 4096);
  ptr = nullptr;
  *(_OWORD *)v9 = 0;
  sub_569F0((__int64 *)&ptr, 4096, v2, v3, v4, v5);
  v6 = sub_5B080(a1, a2, (__int64 *)&ptr, 1u);
  if ( ptr )
  {
    *(_QWORD *)v9 = 0;
    j__free(ptr);
  }
  return v6;
}

