__int64 __fastcall sub_7C1BB0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 *v4; // rsi
  char *v5; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !a2 )
    sub_7C1760("Expected packet", (__int64 *)(a1 + 16));
  v2 = sub_7C2880(a1, *((unsigned __int8 *)a2 + 4));
  if ( !v2 )
  {
    ptr = nullptr;
    v7 = 0;
    sub_35A790((char **)&ptr);
    v4 = (__int64 *)(a1 + 16);
    v5 = (char *)haystack;
    if ( (_QWORD)v7 )
      v5 = (char *)ptr;
    sub_7C1760(v5, v4);
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v2 + 16))(
             (__int64)a2 + 5,
             *a2,
             *(unsigned int *)(a1 + 108));
  if ( !result )
    sub_7C1760("Couldn't deserialize packet", (__int64 *)(a1 + 16));
  *(_BYTE *)(result + 8) = *((_BYTE *)a2 + 4);
  return result;
}
