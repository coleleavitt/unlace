const char *__fastcall sub_101CFE0(_DWORD *a1, unsigned __int64 a2)
{
  _QWORD v3[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v5; // [rsp+18h] [rbp-10h]

  v3[0] = a1;
  v3[1] = a2;
  v5 = 0;
  if ( a2 > 3 )
  {
    if ( *a1 == -131072 )
      return "UTF-32 (BE)";
    if ( *a1 == 65279 )
      return "UTF-32 (LE)";
  }
  if ( sub_9C7D00((__int64)v3, &unk_22F9557, 2u) )
    return "UTF-16 (BE)";
  if ( sub_9C7D00((__int64)v3, &unk_22D90A8, 2u) )
    return "UTF-16 (LE)";
  if ( sub_9C7D00((__int64)v3, &unk_22F9563, 3u) )
    return "UTF-7";
  if ( sub_9C7D00((__int64)v3, &unk_22F955F, 3u) )
    return "UTF-1";
  if ( sub_9C7D00((__int64)v3, &unk_22F955A, 4u) )
    return "UTF-EBCDIC";
  if ( sub_9C7D00((__int64)v3, &unk_22F9556, 3u) )
    return "SCSU";
  if ( sub_9C7D00((__int64)v3, &unk_22F9552, 3u) )
    return "BOCU-1";
  if ( sub_9C7D00((__int64)v3, &unk_22F954D, 4u) )
    return "GB-18030";
  return nullptr;
}
