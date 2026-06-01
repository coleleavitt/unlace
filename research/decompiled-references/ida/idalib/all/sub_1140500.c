__int64 __fastcall sub_1140500(_WORD *a1, size_t a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  void *v7; // rax
  size_t v8; // rdx
  unsigned int v9; // [rsp+Ch] [rbp-3Ch]
  void *v10; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-30h]
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 == 7 )
  {
    if ( *(_DWORD *)a1 == 1701733735 && a1[2] == 26994 && *((_BYTE *)a1 + 6) == 99 )
      goto LABEL_8;
LABEL_3:
    if ( a4 == 6 )
    {
      if ( *(_DWORD *)a3 == 1986884193 )
      {
        result = 41;
        if ( *(_WORD *)(a3 + 4) == 27447 )
          return result;
      }
    }
    else if ( a4 == 8 )
    {
      result = 41;
      if ( *(_QWORD *)a3 == 0x6B3776626D756874LL )
        return result;
    }
    return sub_229FE00(a1, a2);
  }
  if ( a2 )
    goto LABEL_3;
LABEL_8:
  sub_113FDE0(&v10, (_BYTE *)a3, a4, a5);
  result = sub_229CAC0(v10, v11);
  if ( !(_DWORD)result )
  {
    v7 = (void *)sub_22A0130(a5, v10, v11);
    result = sub_229FE00(v7, v8);
  }
  if ( v10 != &v12 )
  {
    v9 = result;
    operator delete(v10);
    return v9;
  }
  return result;
}
