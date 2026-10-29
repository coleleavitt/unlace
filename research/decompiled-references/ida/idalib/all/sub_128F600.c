__int64 __fastcall sub_128F600(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r12
  __int64 v11; // rax
  int v12[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 608LL))(a1);
  v4 = *(unsigned int *)(a3 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v4) = "-lc++";
  ++*(_DWORD *)(a3 + 8);
  v12[0] = 671;
  v5 = sub_21B6DA0(a2, v12, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (unsigned int)v5;
  result = HIDWORD(v5);
  v9 = (_QWORD *)(v6 + 8 * v7);
  v10 = (_QWORD *)(v6 + 8 * result);
  if ( v9 != v10 )
  {
    while ( 1 )
    {
      if ( *v9 )
      {
        result = sub_21B9810(*v9, 671);
        if ( (_BYTE)result )
          break;
      }
      if ( v10 == ++v9 )
        return result;
    }
    if ( v10 != v9 )
    {
      do
      {
        v11 = *v9;
        if ( *(_QWORD *)(*v9 + 16LL) )
          v11 = *(_QWORD *)(*v9 + 16LL);
        ++v9;
        *(_BYTE *)(v11 + 44) |= 1u;
        if ( v9 == v10 )
          break;
        while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 671) )
        {
          if ( v10 == ++v9 )
            goto LABEL_15;
        }
      }
      while ( v10 != v9 );
LABEL_15:
      result = *(unsigned int *)(a3 + 8);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, result + 1, 8);
        result = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-lc++experimental";
      ++*(_DWORD *)(a3 + 8);
    }
  }
  return result;
}
