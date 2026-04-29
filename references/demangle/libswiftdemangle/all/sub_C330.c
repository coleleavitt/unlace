__int64 __fastcall sub_C330(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r8d
  __int64 v4; // rax

  result = *(unsigned __int8 *)(a1 + 18);
  switch ( (_BYTE)result )
  {
    case 4:
      if ( !(_DWORD)a2 )
      {
        result = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = result;
      }
      *(_BYTE *)(a1 + 18) = 3;
      break;
    case 5:
      result = *(unsigned int *)(a1 + 8);
      v3 = result - 1;
      if ( (_DWORD)a2 != (_DWORD)result - 1 )
      {
        do
        {
          v4 = (unsigned int)a2;
          a2 = (unsigned int)(a2 + 1);
          *(_QWORD *)(*(_QWORD *)a1 + 8 * v4) = *(_QWORD *)(*(_QWORD *)a1 + 8 * a2);
        }
        while ( v3 != (_DWORD)a2 );
        result = *(unsigned int *)(a1 + 8);
        v3 = result - 1;
      }
      *(_DWORD *)(a1 + 8) = v3;
      break;
    case 3:
      *(_BYTE *)(a1 + 18) = 0;
      break;
  }
  return result;
}
