__int64 __fastcall Z3_algebraic_sign(__int64 a1, __int64 a2)
{
  char v2; // r12
  int v3; // edx
  _DWORD *v4; // rax
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rax
  int v11; // eax
  void *v12; // rbx
  unsigned int v13; // [rsp+Ch] [rbp-6Ch]
  char v14; // [rsp+1Fh] [rbp-59h] BYREF
  int v15; // [rsp+20h] [rbp-58h] BYREF
  char v16; // [rsp+24h] [rbp-54h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+30h] [rbp-48h] BYREF
  char v19; // [rsp+34h] [rbp-44h]
  __int64 v20; // [rsp+38h] [rbp-40h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29EE20();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned int)(v3 - 3) <= 1 )
    goto LABEL_8;
  if ( (_WORD)v3 || (v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v4 != 5 || (v5 = a1 + 296, v4[1]) )
  {
    v5 = a1 + 296;
    if ( (unsigned __int8)sub_1666670(a1 + 296, a2) )
    {
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_12;
      v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v4 || *v4 != 5 )
        goto LABEL_12;
      goto LABEL_21;
    }
LABEL_8:
    sub_24EA30(a1, 3u, nullptr);
    result = 0;
    goto LABEL_9;
  }
LABEL_21:
  if ( !v4[1] )
  {
    v16 &= 0xFCu;
    v19 &= 0xFCu;
    v15 = 0;
    v17 = 0;
    v18 = 1;
    v20 = 0;
    if ( !(unsigned __int8)sub_1666AE0(v5, a2, &v15, &v14) )
    {
      sub_1872CE0("");
      sub_1873130(114, 63);
    }
    v11 = 1;
    if ( v15 <= 0 )
      v11 = -(v15 != 0);
    v13 = v11;
    v12 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v15);
    sub_182CBA0(v12, &v18);
    result = v13;
    goto LABEL_9;
  }
LABEL_12:
  v7 = sub_1666D30(v5, a2);
  if ( !*(_QWORD *)(a1 + 304) )
    sub_16669E0(v5);
  v8 = sub_1666310();
  v9 = sub_17B1EA0(v8, v7);
  result = 1;
  if ( v9 )
  {
LABEL_9:
    if ( !v2 )
      return result;
LABEL_18:
    byte_1C7EBA0 = 1;
    return result;
  }
  if ( !*(_QWORD *)(a1 + 304) )
    sub_16669E0(v5);
  v10 = sub_1666310();
  result = (unsigned int)-(unsigned __int8)sub_17B1EE0(v10, v7);
  if ( v2 )
    goto LABEL_18;
  return result;
}

