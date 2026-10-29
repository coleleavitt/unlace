__int64 __fastcall Z3_algebraic_get_i(__int64 a1, __int64 a2)
{
  char v2; // r12
  int v3; // edx
  _DWORD *v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29F280();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned int)(v3 - 3) > 1
    && (!(_WORD)v3 && (v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v4 == 5 && (v5 = a1 + 296, !v4[1])
     || (v5 = a1 + 296, (unsigned __int8)sub_1666670(a1 + 296, a2))) )
  {
    if ( !*(_QWORD *)(a1 + 304) )
      sub_16669E0(v5);
    v6 = sub_1666310();
    v7 = sub_1666D30(v5, a2);
    result = sub_17B23E0(v6, v7);
    if ( v2 )
      goto LABEL_11;
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
    result = 0;
    if ( v2 )
LABEL_11:
      byte_1C7EBA0 = 1;
  }
  return result;
}

