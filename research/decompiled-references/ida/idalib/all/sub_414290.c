unsigned __int64 __fastcall sub_414290(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v7 = sub_3BDD60(a1, a2);
  v4 = -32770;
  v5 = a3 & 0xF;
  if ( _bittest64(&v4, v5) || (sub_7BE850(&v7, *a1, 11, 65), (_DWORD)v5) )
    sub_7BE850(&v7, *a1, 12, 65);
  return v8 - __readfsqword(0x28u);
}
