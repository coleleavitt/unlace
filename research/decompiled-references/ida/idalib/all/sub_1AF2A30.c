__int64 __fastcall sub_1AF2A30(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  __int64 result; // rax

  *(_BYTE *)(*(_QWORD *)a1 + 10024LL) = *(_BYTE *)(a1 + 24);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 11200LL) = *(_DWORD *)(a1 + 16);
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 12592LL) = *(_BYTE *)(a1 + 20);
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 11248LL) = *(_BYTE *)(a1 + 21);
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL);
  v2 = *(_BYTE *)(a1 + 22);
  if ( *(_DWORD *)(v1 + 204) == 5 )
    *(_BYTE *)(v1 + 194) = 1;
  result = v2 == 0 ? 3 : 0;
  *(_DWORD *)(v1 + 204) = result;
  return result;
}
