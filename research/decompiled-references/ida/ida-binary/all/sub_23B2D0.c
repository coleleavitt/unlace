unsigned __int64 __fastcall sub_23B2D0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  char v4[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v5; // [rsp+1008h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( (unsigned __int8)qdirname(v4, 4096, a2) && v4[0] )
  {
    v3 = sub_239CC0(a1, v4);
    if ( !v3 )
      v3 = (__int64)sub_239A90(a1, v4, &unk_5C2F25);
    *(_QWORD *)(v3 + 32) = 0;
  }
  return v5 - __readfsqword(0x28u);
}
