__int64 sub_3A4DA0()
{
  __int64 v0; // rbx
  __int64 *v1; // rbp
  __int64 v2; // rbx
  __int64 result; // rax
  char v4; // al

  v0 = qword_2CA1698;
  sub_49E8A0(qword_2CA1698);
  v1 = *(__int64 **)(v0 + 1480);
  v2 = *(_QWORD *)(*v1 + 1344);
  if ( *(_BYTE *)(v2 + 96) || !(unsigned __int8)netnode_is_available() )
    return 0;
  v4 = *(_BYTE *)(v2 + 97);
  *(_BYTE *)(v2 + 96) = 1;
  if ( v4 )
  {
    result = sub_3A4750(v1, 0, 0xFFFFFFFF, 1);
  }
  else
  {
    show_auto(0xFFFFFFFFLL, 0);
    result = 0;
  }
  *(_BYTE *)(v2 + 96) = 0;
  return result;
}

