__int64 __fastcall sub_12B9880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  result = sub_12B9180(a1, a2);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      result = *(unsigned int *)(a3 + 8);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, result + 1, 8);
        result = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-lstdc++";
      ++*(_DWORD *)(a3 + 8);
    }
  }
  else
  {
    v5 = *(unsigned int *)(a3 + 8);
    if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v5 + 1, 8);
      v5 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "-lc++";
    ++*(_DWORD *)(a3 + 8);
    v14[0] = 671;
    v6 = sub_21B6DA0(a2, v14, 1);
    v7 = *(_QWORD *)(a2 + 8);
    v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
    v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
    if ( v8 == v9 )
      goto LABEL_13;
    while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 671) )
    {
      if ( v9 == ++v8 )
        goto LABEL_13;
    }
    if ( v9 == v8 )
    {
LABEL_13:
      result = *(unsigned int *)(a3 + 8);
      v10 = *(unsigned int *)(a3 + 12);
      v11 = result + 1;
    }
    else
    {
      do
      {
        v12 = *v8;
        if ( *(_QWORD *)(*v8 + 16LL) )
          v12 = *(_QWORD *)(*v8 + 16LL);
        ++v8;
        *(_BYTE *)(v12 + 44) |= 1u;
        if ( v8 == v9 )
          break;
        while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 671) )
        {
          if ( v9 == ++v8 )
            goto LABEL_24;
        }
      }
      while ( v9 != v8 );
LABEL_24:
      v13 = *(unsigned int *)(a3 + 8);
      if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v13 + 1, 8);
        v13 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v13) = "-lc++experimental";
      v10 = *(unsigned int *)(a3 + 12);
      result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = result;
      v11 = result + 1;
    }
    if ( v11 > v10 )
    {
      sub_2237220(a3, a3 + 16, v11, 8);
      result = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-lc++abi";
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}
