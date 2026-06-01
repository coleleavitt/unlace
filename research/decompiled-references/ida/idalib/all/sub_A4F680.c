void __fastcall sub_A4F680(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    v2 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(a2 & 0xFFFFFFFFFFFFFFF8LL)
       | a2 & 7;
  *a1 = v2;
}
