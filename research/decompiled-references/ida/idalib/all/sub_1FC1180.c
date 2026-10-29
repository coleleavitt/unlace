__int64 __fastcall sub_1FC1180(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rax
  __int64 result; // rax

  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 72));
  sub_1FBAE50((__int64 *)a1, a2);
  if ( *(_DWORD *)(a2 + 72) )
  {
    v2 = 0;
    do
    {
      v3 = v2++;
      sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 8 * v3 + 88), *(_QWORD *)(a1 + 24));
    }
    while ( v2 < *(_DWORD *)(a2 + 72) );
  }
  v4 = sub_B79FF0(a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v4);
  v5 = sub_B70A80(a2);
  result = sub_183F100(a1 + 32, v5);
  *(_DWORD *)(a1 + 224) = 80;
  return result;
}
