bool __fastcall sub_944F0(__m128i *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  int v6; // eax
  bool result; // al
  unsigned __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+10h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a2 + 88);
  v9[1] = __readfsqword(0x28u);
  v8 = 0;
  v9[0] = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *, _QWORD *))(v4 + 88))(
         a3,
         (unsigned __int16)a4,
         &v8,
         v9);
  if ( v6 )
  {
    if ( v6 == 1 )
      sub_943B0((_BYTE *)(a2 + 330), (__int64)"Error retrieving attribute %hu for DIE\n", a4);
    return 0;
  }
  else
  {
    result = v8 != 0;
    *a1 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)a2);
  }
  return result;
}
