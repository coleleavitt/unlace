__int64 __fastcall sub_5AD7C0(__int64 a1, char *a2, int a3)
{
  int v3; // ebx
  int v4; // eax

  if ( a3 <= 36 )
    __assert_fail(
      "buf_len > 36",
      "src/common/linux/guid_creator.cc",
      0xB2u,
      "bool GUIDToString(const GUID*, char*, int)");
  v3 = sub_5AD892(a1 + 12);
  v4 = sub_5AD892(a1 + 8);
  if ( snprintf(
         a2,
         a3,
         "%08x-%04x-%04x-%08x-%08x",
         *(_DWORD *)a1,
         *(unsigned __int16 *)(a1 + 4),
         *(unsigned __int16 *)(a1 + 6),
         v4,
         v3) != 36 )
    return 0;
  a2[36] = 0;
  return 1;
}
