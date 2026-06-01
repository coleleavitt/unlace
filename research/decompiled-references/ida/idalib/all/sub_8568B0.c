_DWORD *__fastcall sub_8568B0(int a1, _QWORD *a2, int a3, _DWORD *a4, __int64 a5)
{
  _DWORD *v6; // rdi
  _DWORD *v7; // rdx

  v6 = (_DWORD *)*a2;
  if ( *a2 )
  {
    v6[2] = a1 - *(_DWORD *)(a5 + 56) - v6[1];
    if ( a3 )
    {
      if ( v6 == a4 - 4 && v6[3] == 255 )
      {
        v7 = a4;
        a4 = v6;
        goto LABEL_5;
      }
LABEL_4:
      *a4 = -2147090432;
      v7 = a4 + 4;
      *((_QWORD *)a4 + 1) = 0xFF00000000LL;
LABEL_5:
      a4[1] = a1 - *(_DWORD *)(a5 + 56);
      *a2 = a4;
      return v7;
    }
  }
  else if ( a3 )
  {
    goto LABEL_4;
  }
  *a2 = 0;
  return a4;
}
