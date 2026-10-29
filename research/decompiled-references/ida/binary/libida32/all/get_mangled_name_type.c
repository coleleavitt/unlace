__int64 __fastcall get_mangled_name_type(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  void *v3; // rdi
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( !a1 )
    return 2;
  ptr = nullptr;
  v6 = 0;
  v1 = demangle_name(&ptr, a1, 245612135, 1);
  v2 = 2;
  if ( v1 > 0 )
  {
    if ( (v1 & 0xF) == 0 )
    {
      v3 = ptr;
      v2 = (v1 & 0x1040000) == 0;
      if ( !ptr )
        return v2;
      goto LABEL_6;
    }
    v2 = 2 * ((v1 & 0xF) == 15);
  }
  v3 = ptr;
  if ( ptr )
  {
LABEL_6:
    *(_QWORD *)&v6 = 0;
    qfree(v3);
  }
  return v2;
}

