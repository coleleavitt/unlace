__int64 __fastcall sub_3B8C20(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 *v4; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 184);
  v6 = __readfsqword(0x28u);
  v4 = nullptr;
  v5 = 0;
  callui(203, 4, v1, 1, (unsigned int)&v4, (unsigned int)&callui);
  v2 = -1;
  if ( (_QWORD)v5 )
    v2 = *v4;
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4, &byte_4);
  }
  return v2;
}
