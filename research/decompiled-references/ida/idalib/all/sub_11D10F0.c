__int64 __fastcall sub_11D10F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // rax
  int v12[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 608LL))(a1);
  if ( !(_DWORD)result )
  {
    v5 = *(unsigned int *)(a3 + 8);
    if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v5 + 1, 8);
      v5 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "-lc++";
    ++*(_DWORD *)(a3 + 8);
    v12[0] = 671;
    v6 = sub_21B6DA0(a2, v12, 1);
    v7 = *(_QWORD *)(a2 + 8);
    v8 = (unsigned int)v6;
    result = HIDWORD(v6);
    v9 = (_QWORD *)(v7 + 8 * v8);
    v10 = (_QWORD *)(v7 + 8 * result);
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
              goto LABEL_17;
          }
        }
        while ( v10 != v9 );
LABEL_17:
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
  }
  return result;
}
