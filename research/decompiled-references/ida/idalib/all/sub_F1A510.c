__int64 __fastcall sub_F1A510(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx

  for ( i = 0; ; ++i )
  {
    v3 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
    v4 = *v3;
    v5 = *(unsigned __int8 *)(*v3 + 16);
    if ( (unsigned __int8)(v5 - 2) > 4u )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        break;
      v4 = sub_F63050(
             *v3,
             a2,
             (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
             v5);
      if ( !v4 )
        break;
    }
    a1 = *(_QWORD *)(v4 + 32);
  }
  return i;
}
