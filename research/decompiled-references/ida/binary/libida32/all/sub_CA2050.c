__int64 __fastcall sub_CA2050(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned int v6; // esi
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9[4]; // [rsp+8h] [rbp-20h] BYREF

  switch ( *a1 )
  {
    case 0:
      v9[0] = a3 | 4;
      result = sub_C87DA0(a2, v9);
      break;
    case 1:
      v5 = a1[2];
      v9[0] = a3 | 4;
      result = sub_C80E00(a2, v5, v9);
      break;
    case 2:
      v6 = a1[2];
      v9[0] = a3 | 4;
      result = sub_C80E60(a2, v6, v9);
      break;
    case 3:
      result = sub_CA1880(a2, *((_QWORD *)a1 + 1), a3);
      break;
    case 4:
    case 7:
      result = 1;
      break;
    case 5:
      v7 = a1[2];
      v8 = a3 | 4;
      v9[0] = a3 | 4;
      result = sub_C80730(a2, v7, v9);
      if ( (_BYTE)result )
      {
        v9[0] = v8;
        result = sub_C884A0(a2, v9);
      }
      break;
    case 6:
      v9[0] = a3 | 4;
      result = sub_C7EBF0(a2, v9);
      break;
  }
  return result;
}

