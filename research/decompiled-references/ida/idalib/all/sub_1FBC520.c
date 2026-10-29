__int64 __fastcall sub_1FBC520(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r12
  __int64 **v5; // rax

  sub_1FBC160(a1, a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 88), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 96), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 104), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 108), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 112), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 132) & 1);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 132) & 2) != 0);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 128));
  result = *(unsigned int *)(a2 + 128);
  if ( (_DWORD)result )
  {
    v4 = sub_BA9430(a2) + 8LL * *(unsigned int *)(a2 + 128);
    v5 = (__int64 **)sub_BA9430(a2);
    result = sub_1FA1570(a1 + 8, v5, (v4 - (__int64)v5) >> 3);
  }
  *(_DWORD *)(a1 + 224) = 64;
  return result;
}
