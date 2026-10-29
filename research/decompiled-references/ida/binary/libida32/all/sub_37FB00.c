__int64 __fastcall sub_37FB00(__int64 a1, _BYTE *a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  int v5; // edx

  result = *(unsigned int *)(a1 + 204);
  if ( (_DWORD)result )
  {
    if ( (*(_BYTE *)(a1 + 144) & 1) == 0 )
    {
      sub_37F3D0(a1, a2, a3);
      v4 = *(_QWORD *)a1;
      v5 = *(_DWORD *)(a1 + 148) + *(_DWORD *)(a1 + 204);
      *(_DWORD *)(a1 + 148) = v5;
      return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v4 + 48))(a1, a1 + 24, v5);
    }
  }
  return result;
}

