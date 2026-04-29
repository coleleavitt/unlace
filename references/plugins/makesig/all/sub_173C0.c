__int64 __fastcall sub_173C0(__int64 a1)
{
  __int64 result; // rax
  int v2; // eax
  int v3; // ebx
  unsigned __int8 v4; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( qlread(*(_QWORD *)(a1 + 16), &v4, 1) != 1 )
    *(_BYTE *)a1 = 1;
  result = v4;
  if ( (v4 & 0x80u) != 0 )
  {
    v2 = v4 << 8;
    LOWORD(v2) = v2 & 0x7F00;
    v3 = v2;
    if ( qlread(*(_QWORD *)(a1 + 16), &v4, 1) != 1 )
      *(_BYTE *)a1 = 1;
    return v3 + (unsigned int)v4;
  }
  return result;
}
