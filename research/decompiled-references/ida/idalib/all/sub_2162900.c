__int64 __fastcall sub_2162900(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  _DWORD *v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // [rsp+2h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+Ah] [rbp-20h] BYREF

  result = *(unsigned __int16 *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 39) & 1) != 0 && (_WORD)result == 0xFFFF )
  {
    v9 = (_DWORD *)(a2 + *(unsigned int *)(a1 + 24));
    v10 = (unsigned __int64)v9 + 10;
    if ( ((unsigned __int64)v9 >= 0xFFFFFFFFFFFFFFF6LL || (a4 = a7 + a8, v10 > a7 + a8) || a7 > (unsigned __int64)v9)
      && (v11 = sub_2195B10(a1, a2, v10, a4), sub_2220500(v13, 4, v11), v13[0]) )
    {
      v12 = (_QWORD *)v13[0];
      sub_A05760(v13, &v12);
      if ( v12 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
      return 0;
    }
    else
    {
      return (unsigned int)(*v9 - 1);
    }
  }
  return result;
}
