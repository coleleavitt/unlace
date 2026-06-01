char __fastcall sub_22A9F40(__int64 a1, _QWORD *a2, size_t a3)
{
  _BYTE *v3; // r13
  size_t v4; // rbp
  char result; // al
  char v6; // [rsp+Fh] [rbp-49h]
  void *v7[2]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v8[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  v4 = a3;
  if ( a3 > 0xC )
  {
    if ( *a2 != 0x656D697265707865LL || *((_DWORD *)a2 + 2) != 1818326126 || *((_BYTE *)a2 + 12) != 45 )
    {
      result = sub_22A9170(a2, a3);
      if ( !result )
        return result;
LABEL_4:
      v7[0] = v8;
      sub_22A8AD0(v7, v3, (__int64)&v3[v4]);
      goto LABEL_11;
    }
    v4 = a3 - 13;
    v3 = (char *)a2 + 13;
  }
  result = sub_22A9170(v3, v4);
  if ( !result )
    return result;
  if ( v3 )
    goto LABEL_4;
  v8[0] = 0;
  v7[1] = nullptr;
  v7[0] = v8;
LABEL_11:
  result = sub_22A98A0(a1 + 24, (__int64)v7) != a1 + 32;
  if ( v7[0] != v8 )
  {
    v6 = result;
    operator delete(v7[0]);
    return v6;
  }
  return result;
}
