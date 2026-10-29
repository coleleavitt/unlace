__int64 __fastcall sub_21A2870(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 560) + 144 * HIDWORD(a3) + 16);
  *(_BYTE *)(a1 + 8) &= ~1u;
  switch ( v3 )
  {
    case 0LL:
      *(_DWORD *)a1 = 5;
      result = a1;
      break;
    case 1LL:
      *(_DWORD *)a1 = 2;
      result = a1;
      break;
    case 2LL:
    case 4LL:
    case 5LL:
      *(_DWORD *)a1 = 1;
      result = a1;
      break;
    case 3LL:
      *(_DWORD *)a1 = 3;
      result = a1;
      break;
  }
  return result;
}
