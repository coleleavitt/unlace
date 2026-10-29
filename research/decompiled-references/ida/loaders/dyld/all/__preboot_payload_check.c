__int64 __fastcall _preboot_payload_check(__int64 a1, __int64 a2)
{
  return (a2 + *(_QWORD *)(a1 + 32)) & ~(*(__int64 *)(a1 + 32) >> 63);
}
