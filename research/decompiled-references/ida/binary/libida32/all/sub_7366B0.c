__int64 __fastcall sub_7366B0(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  char *v3; // rdx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  v1 = demangle_name(&ptr, a1, 245612135, 2);
  v2 = 0;
  if ( v1 > 0 )
  {
    v3 = (char *)ptr;
    if ( !(_QWORD)v6 )
      v3 = &byte_2CA12E1;
    LOBYTE(v2) = *v3 != 96;
    LOBYTE(v1) = v1 != 270008320;
    v2 = (v1 | v2) ^ 1;
  }
  if ( ptr )
  {
    *(_QWORD *)&v6 = 0;
    qfree(ptr);
  }
  return v2;
}

