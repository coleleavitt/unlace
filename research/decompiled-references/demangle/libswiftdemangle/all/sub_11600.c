unsigned __int64 __fastcall sub_11600(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  char v2; // al

  v1 = a1[9];
  if ( v1 >= a1[8] )
    return 0;
  a1[9] = v1 + 1;
  v2 = *(_BYTE *)(a1[7] + v1);
  if ( v2 == 111 )
    return sub_C650(a1, 136, "@objc_metatype");
  if ( v2 == 116 )
    return sub_C650(a1, 136, "@thin");
  if ( v2 != 84 )
    return 0;
  return sub_C650(a1, 136, "@thick");
}
