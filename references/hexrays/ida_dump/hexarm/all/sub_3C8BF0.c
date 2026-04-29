__int64 __fastcall sub_3C8BF0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL * a2);
  if ( *(_QWORD *)(a1 + 176) == v2 )
    return 65280;
  if ( *(int *)(v2 + 8) > 69 )
    return 0xFFFFFFFFLL;
  v4 = 0;
  v5 = 0;
  if ( (unsigned __int8)sub_32BB20(&v4, v2 + 48, nullptr, 0) )
  {
    if ( v4 )
    {
      *(_QWORD *)&v5 = 0;
      qfree(v4);
    }
    result = 255;
    if ( *(_DWORD *)(v2 + 8) != 48 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    if ( v4 )
    {
      *(_QWORD *)&v5 = 0;
      qfree(v4);
    }
    return 3329434;
  }
  return result;
}
