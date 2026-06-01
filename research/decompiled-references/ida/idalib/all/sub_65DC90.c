__int64 __fastcall sub_65DC90(_QWORD *a1, __int64 *a2, double a3, double a4, __int64 a5, char **a6)
{
  char v7; // r12
  unsigned int v8; // eax
  __int64 v9; // rbx
  __int64 result; // rax
  const char *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r15
  unsigned __int64 v16; // r13
  __int64 v17; // rax

  v7 = **a6;
  v8 = sub_6584F0(*(_QWORD *)(a1[1] + 1672LL), a6, 0, a3, a4);
  v9 = v8;
  if ( !v8 || !(unsigned __int8)sub_651630(a1, v8, 1u) )
    return 0;
  v11 = haystack;
  v12 = a1[6] + 24 * v9;
  if ( !*(_QWORD *)(v12 + 8) )
  {
    v13 = a2[1];
    if ( !v13 )
      goto LABEL_7;
LABEL_13:
    v16 = v13 + 1;
    v15 = v13;
    v14 = *a2;
    --v13;
    if ( a2[2] >= v16 )
      goto LABEL_8;
    goto LABEL_14;
  }
  v13 = a2[1];
  v11 = *(const char **)v12;
  if ( v13 )
    goto LABEL_13;
LABEL_7:
  v14 = *a2;
  v15 = 1;
  v16 = 2;
  if ( (unsigned __int64)a2[2] >= 2 )
    goto LABEL_8;
LABEL_14:
  v17 = qvector_reserve(a2, v14, v16, 1);
  *a2 = v17;
  v14 = v17;
LABEL_8:
  a2[1] = v16;
  *(_BYTE *)(v14 + v13) = v7;
  *(_BYTE *)(*a2 + v15) = 0;
  if ( (v7 & 0x3F) != 0x3D && !(unsigned __int8)sub_6B35E0(a2, 0, 0) || (result = sub_6A99B0(a2, v11), !(_BYTE)result) )
  {
    if ( !under_debugger )
      interr(2067);
    BUG();
  }
  return result;
}
