unsigned __int64 __fastcall sub_6100(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned __int64 v5; // rax
  _QWORD v7[25]; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 v8; // [rsp+C8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  memset(v7, 0, sizeof(v7));
  v5 = (unsigned int)sub_C5C0(a1 + 120, a3) - 1;
  if ( v5 >= *(_QWORD *)(a1 + 176) )
    sub_6040();
  if ( netnode_supval(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v5), a4, v7, 200, 77) > 199 )
  {
    if ( (v7[0] & 2) != 0 )
      *(_QWORD *)(a2 + 16) = v7[21];
    else
      *(_QWORD *)(a2 + 24) = v7[1];
  }
  return v8 - __readfsqword(0x28u);
}
