__int64 sub_3A94B0()
{
  __int64 v0; // rbx
  __int64 *v1; // rbp
  __int64 v2; // rbx
  __int64 result; // rax
  char v4; // al

  v0 = qword_2CCB598;
  sub_4B3DE0(qword_2CCB598);
  v1 = *(__int64 **)(v0 + 1672);
  v2 = *(_QWORD *)(*v1 + 1536);
  if ( *(_BYTE *)(v2 + 124) || !(unsigned __int8)netnode_is_available() )
    return 0;
  v4 = *(_BYTE *)(v2 + 125);
  *(_BYTE *)(v2 + 124) = 1;
  if ( v4 )
  {
    result = sub_3A8E40(v1, 0, 0xFFFFFFFFFFFFFFFFLL, 1);
  }
  else
  {
    show_auto(-1, 0);
    result = 0;
  }
  *(_BYTE *)(v2 + 124) = 0;
  return result;
}
