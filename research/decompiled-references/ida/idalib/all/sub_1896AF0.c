__int64 __fastcall sub_1896AF0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r13
  __int64 v11; // r12

  v6 = *(_QWORD *)(a1 + 104);
  if ( !v6 )
  {
    sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v6 = *(_QWORD *)(a1 + 104);
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v7 || (*(_BYTE *)(*(_QWORD *)v7 + 8LL) & 6) != 0 )
  {
    *a2 = a1;
    return 1;
  }
  else
  {
    v9 = *(_QWORD **)(v7 + 8);
    v10 = &v9[*(unsigned int *)(v7 + 16)];
    if ( v9 == v10 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        v11 = *v9;
        result = sub_1896AF0(*v9, a2);
        if ( (_BYTE)result )
          break;
        if ( v10 == ++v9 )
          return 0;
      }
      *a2 = v11;
    }
  }
  return result;
}
