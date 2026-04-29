unsigned __int64 __fastcall sub_7C0B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int128 v3; // rt0
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v7[0] = __readfsqword(0x28u);
  v2 = -*(_QWORD *)(a1 + 8);
  if ( *(__int64 *)(a1 + 8) > 0 )
    v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v3 + 1) = v2;
  sub_7BF00(a2, v3 >> 63);
  v4 = pack_dd(&v6, v7, (unsigned int)(*(_DWORD *)(a1 + 16) + 1));
  sub_7BD20(a2, (__int64)&v6, v4 - (_QWORD)&v6);
  return v7[0] - __readfsqword(0x28u);
}
