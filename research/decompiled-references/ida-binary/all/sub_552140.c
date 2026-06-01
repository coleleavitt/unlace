__int64 __fastcall sub_552140(__int64 a1)
{
  int v1; // ecx
  bool v2; // zf
  double v3; // xmm0_8
  __int64 v4; // rbx
  __int64 *v6; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v1 = 8;
  v8 = __readfsqword(0x28u);
  v2 = *(_BYTE *)(a1 + 240) == 0;
  v6 = nullptr;
  v7 = 0;
  if ( v2 )
    v1 = 6;
  v3 = callui(203, 4, *(_QWORD *)(a1 + 184), v1, (unsigned int)&v6, (unsigned int)&callui, v6);
  v4 = -1;
  if ( (_QWORD)v7 )
    v4 = *v6;
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6, &byte_4, v3);
  }
  return v4;
}
