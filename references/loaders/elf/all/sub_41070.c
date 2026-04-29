__int64 __fastcall sub_41070(__int64 a1, unsigned __int64 a2, const char *a3, double a4)
{
  __int64 result; // rax
  int segm_qty; // r13d
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  char v11; // al

  if ( !*(_BYTE *)(a1 + 525) )
    return a2;
  segm_qty = get_segm_qty();
  if ( segm_qty <= 0 )
    return a2;
  v7 = 0;
  while ( 1 )
  {
    v8 = getnseg(v7);
    v9 = *(_QWORD *)v8;
    if ( a2 >= *(_QWORD *)v8 )
    {
      v10 = *(_QWORD *)(v8 + 8);
      v11 = *(_BYTE *)(v8 + 184);
      if ( v11 == 2 )
        v10 = v9 + 2 * (v10 - v9);
      if ( a2 < v10 )
        break;
    }
    if ( segm_qty == ++v7 )
      return a2;
  }
  if ( v11 != 2 )
    return a2;
  result = v9 + ((a2 - v9) >> 1);
  if ( (((_BYTE)a2 - (_BYTE)v9) & 1) != 0 )
  {
    sub_EAA0((__int64)"Cannot %s because of an odd offset %a/2 in code segment\n", a3, a4);
    return -1;
  }
  return result;
}
