__int64 __fastcall sub_1DFDDC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rdx

  v3 = (__int64 *)(a2 + 24);
  result = *(_DWORD *)(a2 + 20) & 0x1FFFFFFF;
  v5 = a2 + 8 * result + 24;
  if ( a2 + 24 != v5 )
  {
    do
    {
      result = sub_B8BE90(*v3);
      if ( !(_BYTE)result )
      {
        v7 = *v3;
        result = *(_BYTE *)(*v3 + 28) & 0x7F;
        if ( (_BYTE)result == 47 )
        {
          v8 = *(_QWORD *)(v7 + 56);
          v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v8 & 4) != 0 )
            v9 = (_QWORD *)v9[4];
          sub_1E4C9B0(a1, *v9, v9 + 1, a3);
          v7 = *v3;
          result = *(_BYTE *)(*v3 + 28) & 0x7F;
        }
        if ( (_BYTE)result == 68 )
          result = sub_1DFDDC0(a1, *(_QWORD *)(v7 + 56), a3);
      }
      ++v3;
    }
    while ( (__int64 *)v5 != v3 );
  }
  return result;
}
