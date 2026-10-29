__int64 __fastcall sub_1165660(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 608LL))(a1);
  if ( v4 )
  {
    if ( v4 == 1 )
      sub_2221C70("linking libstdc++ unimplemented on AIX", 1);
    return sub_1165840();
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
    v15[0] = 671;
    v6 = sub_21B6DA0(a2, v15, 1);
    v7 = *(_QWORD *)(a2 + 8);
    v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
    v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
    if ( v8 == v9 )
      goto LABEL_8;
    while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 671) )
    {
      if ( v9 == ++v8 )
        goto LABEL_8;
    }
    if ( v9 == v8 )
    {
LABEL_8:
      result = *(unsigned int *)(a3 + 8);
      v11 = *(unsigned int *)(a3 + 12);
      v12 = result + 1;
    }
    else
    {
      do
      {
        v13 = *v8;
        if ( *(_QWORD *)(*v8 + 16LL) )
          v13 = *(_QWORD *)(*v8 + 16LL);
        ++v8;
        *(_BYTE *)(v13 + 44) |= 1u;
        if ( v8 == v9 )
          break;
        while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 671) )
        {
          if ( v9 == ++v8 )
            goto LABEL_18;
        }
      }
      while ( v9 != v8 );
LABEL_18:
      v14 = *(unsigned int *)(a3 + 8);
      if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v14 + 1, 8);
        v14 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v14) = "-lc++experimental";
      v11 = *(unsigned int *)(a3 + 12);
      result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = result;
      v12 = result + 1;
    }
    if ( v12 > v11 )
    {
      sub_2237220(a3, a3 + 16, v12, 8);
      result = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-lc++abi";
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}
