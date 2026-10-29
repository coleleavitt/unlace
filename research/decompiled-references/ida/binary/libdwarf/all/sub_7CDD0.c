__int64 __fastcall sub_7CDD0(__int64 a1, const void *a2, unsigned __int64 a3, int a4, int a5)
{
  __int64 result; // rax
  _DWORD *v9; // rsi
  __int64 (__fastcall *v10)(_QWORD, unsigned __int64); // rax
  void *v11; // rdi

  if ( a4 == 1 || !a2 )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = a2;
    if ( !a2 )
    {
LABEL_5:
      *(_QWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 10288) = 201326604;
      *(_QWORD *)(a1 + 27316) = 0;
      if ( a5 == 1 )
        return 0;
      goto LABEL_6;
    }
LABEL_10:
    *(_QWORD *)(a1 + 16) = a3;
    *(_DWORD *)(a1 + 10288) = 201326604;
    *(_QWORD *)(a1 + 27316) = 0;
    if ( a5 == 1 )
      return 0;
    if ( a3 > 7 )
    {
      v9 = *(_DWORD **)(a1 + 8);
      if ( *v9 == -332356553 )
      {
        *(_DWORD *)(a1 + 27316) = v9[1];
        if ( (unsigned __int64)sub_62F90(a1 + 24, (__int64)v9, a3) <= 0xFFFFFFFFFFFFFF88LL )
        {
          *(_DWORD *)(a1 + 27320) = 1;
          return 0;
        }
        return -30;
      }
    }
LABEL_6:
    if ( a5 != 2 )
      return 0;
    return -30;
  }
  if ( !a3 )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = a2;
    goto LABEL_5;
  }
  v10 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64))(a1 + 27328);
  if ( v10 )
    v11 = (void *)v10(*(_QWORD *)(a1 + 27344), a3);
  else
    v11 = malloc(a3);
  *(_QWORD *)a1 = v11;
  result = -64;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v11 )
  {
    memcpy(v11, a2, a3);
    goto LABEL_10;
  }
  return result;
}

