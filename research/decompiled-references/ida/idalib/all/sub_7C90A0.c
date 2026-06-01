__int64 __fastcall sub_7C90A0(__int64 a1)
{
  unsigned int v1; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v4; // [rsp+8h] [rbp-30h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = 0;
  v1 = reg_str_get(&ptr, "Default", "VaultCredentials");
  if ( (_BYTE)v1 )
    v1 = sub_7C8940(a1, &ptr, 0);
  if ( ptr )
  {
    *(_QWORD *)&v4 = 0;
    qfree(ptr);
  }
  return v1;
}
