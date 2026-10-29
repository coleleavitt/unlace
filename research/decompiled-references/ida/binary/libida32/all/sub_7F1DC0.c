__int64 __fastcall sub_7F1DC0(__int64 a1)
{
  int v1; // ebp
  unsigned __int8 v3; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  if ( qlread(*(_QWORD *)(a1 + 16), &v3, 1) != 1 )
    *(_BYTE *)a1 = 1;
  v1 = v3 << 8;
  if ( qlread(*(_QWORD *)(a1 + 16), &v3, 1) != 1 )
    *(_BYTE *)a1 = 1;
  return v1 | (unsigned int)v3;
}

