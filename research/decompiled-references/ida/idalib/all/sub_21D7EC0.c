_BYTE *__fastcall sub_21D7EC0(__int64 a1, __int64 a2, _BYTE *a3)
{
  size_t v5; // rax
  _BYTE *v6; // r12
  _BYTE *v7; // rbx
  size_t v8; // r15
  __int64 v9; // r15
  _BYTE *result; // rax
  char v11; // si
  __int64 v12; // rax
  char v13; // dl
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16[8]; // [rsp+8h] [rbp-40h] BYREF

  v5 = j__strlen("St");
  v6 = *(_BYTE **)(a1 + 8);
  v7 = *(_BYTE **)a1;
  v8 = v5;
  if ( sub_20D1BF0((size_t)&v6[-*(_QWORD *)a1], *(const void **)a1, v5, "St") )
  {
    v11 = *(_BYTE *)(a1 + 937);
    *(_QWORD *)a1 = &v7[v8];
    v12 = sub_21D40E0((__int64 *)(a1 + 808), v11, "std");
    v9 = v12;
    if ( v13 )
    {
      *(_QWORD *)(a1 + 920) = v12;
      if ( !v12 )
        return nullptr;
    }
    else
    {
      if ( !v12 )
        return nullptr;
      v16[0] = v12;
      v14 = sub_21D4F30(a1 + 944, v16);
      if ( v14 )
      {
        v15 = v14[1];
        if ( v15 )
          v9 = v15;
      }
      if ( *(_QWORD *)(a1 + 928) == v9 )
        *(_BYTE *)(a1 + 936) = 1;
    }
    v7 = *(_BYTE **)a1;
    v6 = *(_BYTE **)(a1 + 8);
  }
  else
  {
    v9 = 0;
  }
  result = nullptr;
  if ( v6 == v7 || *v7 != 83 )
    return (_BYTE *)sub_21E2640(a1, a2, v9, result);
  result = sub_21D7440(a1);
  if ( result )
  {
    if ( result[8] == 27 )
      return (_BYTE *)sub_21E2640(a1, a2, v9, result);
    if ( !v9 )
    {
      *a3 = 1;
      return result;
    }
  }
  return nullptr;
}
