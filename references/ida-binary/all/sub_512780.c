__int64 __fastcall sub_512780(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 i; // r12
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 64);
  v8 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 56);
  for ( i = v3 + 48 * v2; i != v3; v3 += 48 )
  {
    QT::QTextLayout::text((QT::QTextLayout *)&ptr);
    v1 += v7 + 1;
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  return v1;
}
