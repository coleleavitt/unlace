__int64 __fastcall sub_1FBB8E0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax

  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 72));
  sub_1FBAE50((__int64 *)a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 76));
  v2 = sub_B7A180(a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v2);
  result = *(unsigned int *)(a2 + 72);
  if ( (_DWORD)result )
  {
    v4 = 0;
    do
    {
      v5 = v4++;
      result = sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 8 * v5 + 88), *(_QWORD *)(a1 + 24));
    }
    while ( v4 < *(_DWORD *)(a2 + 72) );
  }
  *(_DWORD *)(a1 + 224) = 81;
  return result;
}
