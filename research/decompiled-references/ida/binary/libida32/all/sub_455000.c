__int64 __fastcall sub_455000(__int64 *a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 5) & 1) != 0 )
  {
    v4 = *a2;
    sub_3BA160(*(_QWORD **)(*a1 + 1480), v5, *a2);
    sub_3C98C0(a1[1], v4, v5[0]);
  }
  return 0;
}

