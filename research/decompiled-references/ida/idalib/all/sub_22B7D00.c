bool __fastcall sub_22B7D00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  bool result; // al
  unsigned int v5; // edx
  unsigned int v6; // edx
  int v7; // eax

  *(_QWORD *)a2 = sub_22B7B00(a1);
  v2 = *(unsigned int *)(a1 + 44);
  *(_QWORD *)(a2 + 8) = v3;
  switch ( v2 )
  {
    case 0LL:
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 6LL:
    case 7LL:
    case 8LL:
    case 10LL:
    case 11LL:
    case 12LL:
    case 13LL:
    case 14LL:
    case 15LL:
    case 16LL:
    case 17LL:
    case 18LL:
    case 19LL:
    case 20LL:
    case 21LL:
    case 22LL:
    case 23LL:
    case 24LL:
    case 25LL:
    case 26LL:
    case 27LL:
    case 28LL:
      goto LABEL_3;
    case 1LL:
      v5 = *(_DWORD *)a2;
      if ( !*(_DWORD *)a2 )
      {
        v5 = 8;
LABEL_13:
        v7 = *(_DWORD *)(a2 + 4);
        *(_QWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 4) = v7 & 0x80000000 | (v5 - 4) & 0x7FFFFFFF;
        *(_QWORD *)a2 = *(_QWORD *)a2 & 0x7FFFFFFF00000000LL | 0x800000000000000ALL;
        return 1;
      }
      result = 0;
      if ( v5 <= 3 )
        return result;
      if ( v5 <= 0x13 )
        goto LABEL_13;
      if ( v5 > 0x18 )
        v6 = v5 + 1;
      else
        v6 = v5 - 9;
      *(_QWORD *)(a2 + 4) = 0;
      *(_DWORD *)a2 = v6;
      *(_DWORD *)(a2 + 12) = 0;
      return 1;
    case 9LL:
      if ( *(_DWORD *)a2 )
        return *(_DWORD *)a2 > 9u;
LABEL_3:
      *(_QWORD *)(a2 + 8) = 0;
      *(_QWORD *)a2 = 0x800000040000000ALL;
      return 1;
  }
}
