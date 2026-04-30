__int64 __fastcall sub_513CD0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 v2; // dl

  v1 = *(_QWORD *)(a1 + 256);
  if ( !v1 )
    return 0;
  v2 = *(_BYTE *)(v1 + 152) ^ 1;
  *(_BYTE *)(v1 + 152) = v2;
  reg_int_op("LogAutoScroll", 1, v2, 0);
  return 1;
}
