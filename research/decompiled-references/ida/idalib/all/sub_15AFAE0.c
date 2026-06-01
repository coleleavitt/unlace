__int64 __fastcall sub_15AFAE0(__int64 a1, int a2, int a3, int *a4)
{
  int v4; // eax
  __int64 result; // rax

  *(_QWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = a2;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 8) = a3;
  v4 = *a4;
  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 12) = v4;
  if ( *a4 )
    *(_DWORD *)(a1 + 28) = *a4;
  *(_DWORD *)(a1 + 16) = a4[1];
  if ( a4[1] )
    *(_DWORD *)(a1 + 28) = a4[1];
  *(_DWORD *)(a1 + 20) = a4[2];
  result = (unsigned int)a4[2];
  if ( (_DWORD)result )
  {
    result = (unsigned int)a4[2];
    *(_DWORD *)(a1 + 28) = result;
  }
  return result;
}
