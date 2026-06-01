__int64 __fastcall sub_13DB780(__int64 a1, _QWORD *a2, __m128i a3, double a4)
{
  unsigned __int8 *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 *v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  char v12; // [rsp+Fh] [rbp-49h]
  _QWORD v13[2]; // [rsp+10h] [rbp-48h] BYREF
  int v14; // [rsp+20h] [rbp-38h]

  v5 = *(unsigned __int8 **)(a1 + 152);
  v13[0] = 0;
  v13[1] = 0;
  v14 = 0;
LABEL_2:
  LOBYTE(v6) = *v5;
  if ( *v5 == 63 )
    goto LABEL_11;
LABEL_3:
  if ( (_BYTE)v6 == 92 )
  {
LABEL_11:
    while ( 1 )
    {
      v6 = sub_13D1690(a1, v5, (__int64)v13);
      v5 += HIDWORD(v6);
      if ( (_BYTE)v6 == 10 )
        break;
LABEL_5:
      if ( (_BYTE)v6 == 13 )
        break;
      if ( !(_BYTE)v6 )
      {
        v8 = *(unsigned __int8 **)(a1 + 120);
        if ( v5 - 1 == v8 )
          goto LABEL_13;
        v10 = *(_QWORD *)(a1 + 8);
        if ( v10
          && *(_QWORD *)(v10 + 760)
          && *(_DWORD *)(a1 + 128) + (_DWORD)v5 - 1 - *(_DWORD *)(a1 + 112) == *(_DWORD *)(v10 + 772) )
        {
          sub_145C700(*(double *)a3.m128i_i64, a4);
          result = *(_QWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 152) = result;
          return result;
        }
        if ( a2 )
        {
          v11 = a2[1];
          if ( (unsigned __int64)(v11 + 1) > a2[2] )
          {
            sub_2236E10(a2, a2 + 3, v11 + 1, 1);
            v11 = a2[1];
          }
          *(_BYTE *)(*a2 + v11) = 0;
          ++a2[1];
        }
        goto LABEL_2;
      }
      if ( !a2 )
        goto LABEL_2;
      v7 = a2[1];
      if ( (unsigned __int64)(v7 + 1) > a2[2] )
      {
        v12 = v6;
        sub_2236E10(a2, a2 + 3, v7 + 1, 1);
        v7 = a2[1];
        LOBYTE(v6) = v12;
      }
      *(_BYTE *)(*a2 + v7) = v6;
      ++a2[1];
      LOBYTE(v6) = *v5;
      if ( *v5 != 63 )
        goto LABEL_3;
    }
  }
  else
  {
    ++v5;
    if ( (_BYTE)v6 != 10 )
      goto LABEL_5;
  }
  v8 = v5 - 1;
LABEL_13:
  *(_QWORD *)(a1 + 152) = v8;
  result = sub_13DB5F0((_BYTE *)a1, (__int64)v13, a3, a4);
  if ( (_WORD)v14 == 3 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_145C700(*(double *)a3.m128i_i64, a4);
    return sub_13DB5F0((_BYTE *)a1, (__int64)v13, a3, a4);
  }
  return result;
}
