__int64 __fastcall sub_C9C0D0(__int64 a1, _BYTE **a2, _BYTE *a3)
{
  _BYTE *v3; // rcx
  __int64 result; // rax
  int v5; // edi
  _BYTE *v6; // r8
  int v7; // r9d

  v3 = *a2;
  result = a1;
  if ( *a2 != a3 )
  {
    v5 = (char)*v3;
    if ( (unsigned __int8)(*v3 - 48) <= 9u )
    {
      v6 = *a2;
      v7 = 0;
      while ( 1 )
      {
        ++v6;
        v7 = v5 + 10 * v7 - 48;
        if ( v6 == a3 )
          break;
        v5 = (char)*v6;
        if ( (unsigned __int8)(*v6 - 48) > 9u )
        {
          *(_QWORD *)result = v3;
          *(_DWORD *)(result + 16) = v7;
          *(_DWORD *)(result + 8) = (_DWORD)v6 - (_DWORD)v3;
          *(_DWORD *)(result + 12) = 1;
          *(_WORD *)(result + 20) &= 0xFEu;
          *a2 = v6;
          return result;
        }
      }
      v3 = v6;
    }
  }
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_WORD *)(result + 20) &= 0xFEu;
  *a2 = v3;
  return result;
}
