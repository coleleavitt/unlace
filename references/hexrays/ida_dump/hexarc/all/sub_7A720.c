unsigned __int64 __fastcall sub_7A720(__int64 a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int128 v7; // rt0
  __int64 v8; // rax
  char v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx

  if ( *(_BYTE *)(a1 + 24) )
    return sub_792E0(a2, 0);
  result = sub_792E0(a2, *(_DWORD *)(a1 + 16) + 1);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 && *(_QWORD *)(a1 + 16) )
  {
    v5 = *(_QWORD *)(v4 + 8);
LABEL_6:
    while ( v4 != v5 )
    {
      v6 = -*(_QWORD *)(v5 + 24);
      if ( *(__int64 *)(v5 + 24) > 0 )
        v6 = *(_QWORD *)(v5 + 24);
      *(_QWORD *)&v7 = *(_QWORD *)(v5 + 24);
      *((_QWORD *)&v7 + 1) = v6;
      sub_79340(a2, v7 >> 63);
      v8 = a2[1];
      v9 = *(_BYTE *)(v5 + 32);
      v10 = *a2;
      if ( a2[2] < (unsigned __int64)(v8 + 1) )
      {
        v12 = qvector_reserve(a2, v10, v8 + 1, 1);
        *a2 = v12;
        v10 = v12;
        v8 = a2[1];
      }
      *(_BYTE *)(v10 + v8) = v9;
      ++a2[1];
      sub_7A630((unsigned int *)(v5 + 40), a2);
      result = *(_QWORD *)v5;
      if ( (*(_QWORD *)v5 & 2) == 0 )
      {
        v11 = *(_QWORD *)(v5 + 16);
        if ( (*(_BYTE *)v11 & 2) != 0 )
        {
          result &= 0xFFFFFFFFFFFFFFFCLL;
          v13 = *(_QWORD *)result;
          if ( (*(_QWORD *)result & 2) == 0 )
          {
            while ( *(_QWORD *)(result + 16) == v5 )
            {
              v5 = result;
              v14 = v13 & 0xFFFFFFFFFFFFFFFCLL;
              v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v13 & 2) != 0 )
              {
                v5 = v14;
                goto LABEL_6;
              }
              result = v14;
            }
          }
          v5 = result;
        }
        else
        {
          do
          {
            v5 = v11;
            v11 = *(_QWORD *)(v11 + 8);
          }
          while ( (*(_BYTE *)v11 & 2) == 0 );
        }
      }
    }
  }
  return result;
}
