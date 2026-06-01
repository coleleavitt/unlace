__int64 __fastcall sub_823900(_QWORD *a1, __int64 a2)
{
  _DWORD *v3; // rdi
  __int64 result; // rax
  unsigned int v5; // r12d
  size_t v6; // rdx

  v3 = a1 + 5;
  *(v3 - 10) = *(_DWORD *)a2;
  *((_QWORD *)v3 - 4) = *(_QWORD *)(a2 + 8);
  *((_QWORD *)v3 - 3) = *(_QWORD *)(a2 + 16);
  result = 0x800000000LL;
  a1[3] = v3;
  a1[4] = 0x800000000LL;
  v5 = *(_DWORD *)(a2 + 32);
  if ( v5 )
  {
    result = (__int64)(a1 + 3);
    if ( a1 + 3 != (_QWORD *)(a2 + 24) )
    {
      if ( v5 > 8 )
      {
        result = sub_25D6060(a1 + 3, v3, v5, 8);
        v6 = 8LL * *(unsigned int *)(a2 + 32);
        if ( !v6 )
          goto LABEL_7;
        v3 = (_DWORD *)a1[3];
      }
      else
      {
        v6 = 8LL * v5;
      }
      result = (__int64)memcpy(v3, *(const void **)(a2 + 24), v6);
LABEL_7:
      *((_DWORD *)a1 + 8) = v5;
    }
  }
  return result;
}

