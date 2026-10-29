unsigned __int64 __fastcall sub_21092C0(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, int a6)
{
  __int64 v8; // r8
  __int64 v11; // rax
  char v12; // [rsp+Ch] [rbp-5Ch]
  char v13; // [rsp+Ch] [rbp-5Ch]
  void *v14[2]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v15[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a5 + 32) <= 1u )
  {
LABEL_2:
    v8 = 0;
    return sub_2108710(a1, a2, a3, a4, v8, a6);
  }
  v12 = a3;
  sub_2253560(v14, a5);
  a3 = v12;
  if ( !v14[1] )
  {
    if ( v14[0] != v15 )
    {
      operator delete(v14[0]);
      v8 = 0;
      a3 = v12;
      return sub_2108710(a1, a2, a3, a4, v8, a6);
    }
    goto LABEL_2;
  }
  if ( v14[0] != v15 )
  {
    operator delete(v14[0]);
    a3 = v12;
  }
  v13 = a3;
  v11 = sub_2108A30(a1, (const void ***)a5);
  a3 = v13;
  v8 = v11;
  *(_BYTE *)(v11 + 42) = 1;
  if ( !v13 && !*(_BYTE *)(v11 + 36) )
  {
    *(_DWORD *)(v11 + 32) = 3;
    *(_BYTE *)(v11 + 36) = 1;
  }
  return sub_2108710(a1, a2, a3, a4, v8, a6);
}
