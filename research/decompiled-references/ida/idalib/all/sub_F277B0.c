unsigned __int64 __fastcall sub_F277B0(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbx
  unsigned __int64 result; // rax
  unsigned int *v4; // r15
  __int64 v6; // rdi
  void *v7; // rdx
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rdx

  v2 = *(unsigned int **)(a2 + 48);
  result = *(unsigned int *)(a2 + 40);
  v4 = &v2[result];
  if ( v2 != v4 )
  {
    while ( 1 )
    {
      result = *v2;
      if ( (_DWORD)result == 1 )
        break;
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result == 2 )
        {
          v6 = *(_QWORD *)(a1 + 1096);
          v7 = *(void **)(v6 + 32);
          if ( *(_QWORD *)(v6 + 24) - (_QWORD)v7 > 0xAu )
          {
            qmemcpy(v7, " Unconsumed", 11);
            result = 25965;
            *(_QWORD *)(v6 + 32) += 11LL;
          }
          else
          {
            result = sub_227BF10(v6, " Unconsumed", 11);
          }
        }
        goto LABEL_6;
      }
      v8 = *(_QWORD *)(a1 + 1096);
      v9 = *(_QWORD **)(v8 + 32);
      result = *(_QWORD *)(v8 + 24) - (_QWORD)v9;
      if ( result > 7 )
      {
        *v9 = 0x6E776F6E6B6E5520LL;
        *(_QWORD *)(v8 + 32) += 8LL;
LABEL_6:
        if ( ++v2 == v4 )
          return result;
      }
      else
      {
        ++v2;
        result = sub_227BF10(v8, " Unknown", 8);
        if ( v2 == v4 )
          return result;
      }
    }
    v10 = *(_QWORD *)(a1 + 1096);
    v11 = *(_QWORD *)(v10 + 32);
    result = *(_QWORD *)(v10 + 24) - v11;
    if ( result > 8 )
    {
      *(_QWORD *)v11 = 0x656D75736E6F4320LL;
      *(_BYTE *)(v11 + 8) = 100;
      *(_QWORD *)(v10 + 32) += 9LL;
    }
    else
    {
      result = sub_227BF10(v10, " Consumed", 9);
    }
    goto LABEL_6;
  }
  return result;
}
