__int64 __fastcall sub_71C40(__int64 a1)
{
  unsigned int v1; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v4; // [rsp+8h] [rbp-30h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = 0;
  v1 = sub_9EE50(&ptr, "Default", "VaultCredentials");
  if ( (_BYTE)v1 )
    v1 = sub_714E0(a1, &ptr, 0);
  if ( ptr )
  {
    *(_QWORD *)&v4 = 0;
    j__free(ptr);
  }
  return v1;
}

