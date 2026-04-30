__int64 sub_17FAE0()
{
  __int64 v0; // rdi
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  unsigned int v5; // eax
  unsigned __int64 not_tail; // rbx
  unsigned int i; // ebp
  unsigned __int64 v8; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-70h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v11; // [rsp+20h] [rbp-58h]
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[7]; // [rsp+40h] [rbp-38h] BYREF

  v13[3] = __readfsqword(0x28u);
  v0 = 0xFFFFFFFFLL;
  if ( !(unsigned __int8)sub_1F09E0(0, &v8, &v9) )
  {
    v8 = xmmword_8CC810;
    v9 = xmmword_8CC810 + 1;
    v0 = (unsigned int)__ROR4__(_byteswap_ulong(get_item_color()), 8);
  }
  v11 = 0;
  *(_OWORD *)ptr = 0;
  v1 = QT::QColor::fromRgb((QT::QColor *)v0, (unsigned int)&v8);
  v13[1] = v2;
  v13[0] = v1;
  v12[0] = sub_4AF930(v13, 0, ptr, 0);
  v12[1] = v3;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( !LODWORD(v12[0]) )
      return 1;
  }
  else if ( !LODWORD(v12[0]) )
  {
    return 1;
  }
  v5 = QT::QColor::rgba((QT::QColor *)v12);
  not_tail = v8;
  for ( i = __ROR4__(_byteswap_ulong(v5), 8); not_tail != -1; not_tail = next_not_tail(not_tail) )
  {
    if ( not_tail >= v9 )
      break;
    set_item_color(not_tail, i);
  }
  return 1;
}
