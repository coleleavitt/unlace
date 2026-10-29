__int64 __fastcall sub_99D4C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _BOOL4 v6; // edx
  void *v7; // rdi
  unsigned int v8; // eax

  result = (*(_BYTE *)(a3 + 20) & 1) == 0;
  v6 = (*(_BYTE *)(a3 + 4) & 1) == 0;
  if ( !v6 || *(_DWORD *)a3 != -1 )
  {
    v7 = qword_1C7F2C0;
    if ( (_BYTE)result && *(_DWORD *)(a3 + 16) == 1 && (*(_BYTE *)(a2 + 20) & 1) == 0 && *(_DWORD *)(a2 + 16) == 1 )
    {
      if ( !v6 || (*(_BYTE *)(a2 + 4) & 1) != 0 )
      {
        v8 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a3, a2) >> 31;
      }
      else
      {
        v8 = *(_DWORD *)a2;
        LOBYTE(v8) = *(_DWORD *)a3 < *(_DWORD *)a2;
      }
      return v8 ^ 1;
    }
LABEL_5:
    v8 = sub_1848D40(v7, a3, a2);
    return v8 ^ 1;
  }
  if ( !(_BYTE)result || *(_DWORD *)(a3 + 16) != 1 )
  {
    v7 = qword_1C7F2C0;
    goto LABEL_5;
  }
  return result;
}

