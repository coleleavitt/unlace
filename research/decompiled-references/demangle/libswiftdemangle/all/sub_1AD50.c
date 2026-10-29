unsigned __int64 __fastcall sub_1AD50(__int64 a1)
{
  __int64 v1; // rax
  char *v2; // rdx
  char v3; // cl

  v1 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
    return 0;
  v2 = *(char **)(a1 + 24);
  v3 = *v2;
  if ( *v2 == 116 )
  {
    *(_QWORD *)(a1 + 24) = v2 + 1;
    *(_QWORD *)(a1 + 32) = v1 - 1;
    return sub_C650(*(_QWORD **)(a1 + 40), 136, "@thin");
  }
  else if ( v3 == 84 )
  {
    *(_QWORD *)(a1 + 24) = v2 + 1;
    *(_QWORD *)(a1 + 32) = v1 - 1;
    return sub_C650(*(_QWORD **)(a1 + 40), 136, "@thick");
  }
  else
  {
    if ( v3 != 111 )
      return 0;
    *(_QWORD *)(a1 + 24) = v2 + 1;
    *(_QWORD *)(a1 + 32) = v1 - 1;
    return sub_C650(*(_QWORD **)(a1 + 40), 136, "@objc_metatype");
  }
}
