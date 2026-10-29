__int64 __fastcall sub_DA2BE0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 i; // r13
  int v7; // edx
  unsigned int v8; // r14d
  __int64 v9; // rdx
  _QWORD v10[6]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v11[88]; // [rsp+30h] [rbp-58h] BYREF

  v1 = sub_CDA220(a1);
  v2 = *(_QWORD *)(v1 + 32);
  if ( v2 )
  {
    if ( !*(_DWORD *)(a1 + 24) )
    {
      v3 = *(unsigned int *)(a1 + 40);
      if ( (unsigned int)v3 > 0xF )
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + v3 + 30) = 1;
    }
    v4 = *(_QWORD *)(v2 + 280);
    result = 3LL * *(unsigned int *)(v2 + 288);
    for ( i = v4 + 8 * result; v4 != i; result = sub_DFF560(v11) )
    {
      v7 = *(_DWORD *)(v4 + 8);
      v4 += 24;
      sub_DFF4E0(v11, *(_QWORD *)(a1 + 32), (unsigned int)(*(_DWORD *)a1 + v7), (unsigned int)(*(_DWORD *)a1 + v7));
      sub_DA2BE0(v11);
    }
  }
  else if ( *(_QWORD *)(v1 + 40) && (v8 = 0, *(_BYTE *)(v1 + 60)) )
  {
    result = *(unsigned int *)(v1 + 20);
    if ( (_DWORD)result == -1 )
      goto LABEL_13;
    while ( 1 )
    {
      result = (unsigned int)result / *(_DWORD *)(v1 + 16);
      if ( v8 == (_DWORD)result )
        break;
      while ( 1 )
      {
        v9 = v8++;
        sub_CDA6F0((__int64)v10, a1, v9);
        sub_CDAA60((__int64)v11, v10);
        sub_DA2BE0(v11);
        sub_DFF560(v11);
        sub_DFF560(v10);
        result = *(unsigned int *)(v1 + 20);
        if ( (_DWORD)result != -1 )
          break;
LABEL_13:
        if ( !v8 )
          return result;
      }
    }
  }
  else
  {
    result = *(unsigned int *)(a1 + 24);
    if ( !(_DWORD)result )
    {
      result = *(unsigned int *)(a1 + 40);
      if ( (unsigned int)result > 0xF )
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + result + 30) = 1;
    }
  }
  return result;
}

