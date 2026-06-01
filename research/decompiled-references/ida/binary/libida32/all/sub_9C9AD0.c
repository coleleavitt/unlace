__int64 __fastcall sub_9C9AD0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char v3; // dl
  __int64 result; // rax
  void *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  char *v12; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-78h] BYREF
  void *v14[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v16[4]; // [rsp+40h] [rbp-48h] BYREF

  v1 = sub_BD7F30(*(_QWORD *)(a1 + 32));
  if ( !v1 )
    return 0;
  v2 = v1;
  v3 = *(_BYTE *)(v1 + 28) + 93;
  result = 0;
  if ( (v3 & 0x7Fu) <= 3 )
  {
    sub_B62CC0(v14, v2 + 40);
    if ( sub_990D60((__int64)v14, "data") )
      goto LABEL_4;
    v6 = v2 + 72;
    v7 = *(_QWORD *)(sub_B68470(v6) + 16);
    if ( (v7 & 4) != 0 )
      v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 )
      v8 -= 64LL;
    if ( !(unsigned __int8)sub_B6AF40(v8) )
      goto LABEL_4;
    v9 = *(_QWORD *)(sub_B68470(v6) + 16);
    v10 = (v9 & 4) != 0 ? *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL) : v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10 )
      v10 -= 64;
    v13[0] = sub_971A10(v10);
    v12 = "array";
    v13[1] = v11;
    v16[0] = _mm_loadh_ps((const double *)&v12);
    v12 = "basic_string_view";
    v16[1] = _mm_loadh_ps((const double *)&v12);
    v12 = "initializer_list";
    v16[2] = _mm_loadh_ps((const double *)&v12);
    result = sub_9C9110((const char **)v16, 6, (__int64)v13);
    if ( (_BYTE)result )
    {
      v5 = v14[0];
      if ( v14[0] == v15 )
        return result;
    }
    else
    {
LABEL_4:
      v5 = v14[0];
      result = 0;
      if ( v14[0] == v15 )
        return result;
    }
    LOBYTE(v12) = result;
    operator delete(v5);
    return (unsigned __int8)v12;
  }
  return result;
}

