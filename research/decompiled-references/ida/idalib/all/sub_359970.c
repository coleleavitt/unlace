unsigned __int64 __fastcall sub_359970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v6; // al
  unsigned __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_2B25638;
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = a3;
  *(_DWORD *)(a1 + 56) = 0;
  v6 = getinf_flag(3, 64);
  *(_BYTE *)(a1 + 64) = a5;
  *(_BYTE *)(a1 + 60) = v6;
  result = *(_QWORD *)(a1 + 24);
  if ( result == -1 || *(_QWORD *)(a1 + 32) < result )
    sub_359560();
  return result;
}
