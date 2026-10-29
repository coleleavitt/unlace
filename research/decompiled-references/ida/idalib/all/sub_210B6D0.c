unsigned __int64 __fastcall sub_210B6D0(
        __int64 a1,
        const char **a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int8 a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v12; // r9
  void *v15[2]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v16[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a6 + 32) <= 1u )
  {
LABEL_2:
    v12 = 0;
    return sub_210B330(a1, a2, a3, a4, a5, v12, a7, a8, a9);
  }
  sub_2253560(v15, a6);
  if ( !v15[1] )
  {
    if ( v15[0] != v16 )
    {
      operator delete(v15[0]);
      v12 = 0;
      return sub_210B330(a1, a2, a3, a4, a5, v12, a7, a8, a9);
    }
    goto LABEL_2;
  }
  if ( v15[0] != v16 )
    operator delete(v15[0]);
  v12 = sub_2108A30(a1, (const void ***)a6);
  return sub_210B330(a1, a2, a3, a4, a5, v12, a7, a8, a9);
}
