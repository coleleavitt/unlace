__int64 __fastcall sub_3565B0(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  char v6; // al
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_2AFC558;
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = a4;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 44) = 0;
  v6 = getinf_flag(3, 64);
  *(_BYTE *)(a1 + 56) = a5;
  *(_BYTE *)(a1 + 48) = v6;
  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result == -1 || *(_DWORD *)(a1 + 28) < (unsigned int)result )
    sub_356190();
  return result;
}

