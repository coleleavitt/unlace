__int64 __fastcall sub_E393B0(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // al
  __int64 v6; // r14
  const char *v7; // rsi
  size_t v8; // rax
  unsigned __int8 v9; // bl
  size_t v10; // rax
  __int64 v11; // rax
  char *v12; // rsi
  __int64 v13; // rdx
  size_t v14; // rax
  __int64 result; // rax
  size_t v16; // rax
  __int16 *v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int16 v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+18h] [rbp-50h]

  v5 = (*(_BYTE *)(a2 + 15) >> 5) & 3;
  if ( v5 == 1 )
  {
    v6 = a1 + 1048;
    v7 = "out";
  }
  else if ( v5 )
  {
    if ( v5 != 2 )
      goto LABEL_6;
    v6 = a1 + 1048;
    v7 = "in,out";
  }
  else
  {
    v6 = a1 + 1048;
    v7 = "in";
  }
  sub_E35B80((__int64)&v19, v7);
  v8 = j__strlen("direction");
  v17 = &v19;
  v18 = v6;
  sub_E34890(v6, (__int64)"direction", v8, (__int64)sub_E34840, &v17);
  sub_2207560(&v19);
LABEL_6:
  v9 = *(_BYTE *)(a2 + 15);
  v10 = j__strlen("explicit");
  sub_E35E50(a1, (__int64)"explicit", v10, v9 >> 7);
  if ( *(_DWORD *)(a2 + 24) )
  {
    if ( *(_DWORD *)(a2 + 40) == -1 )
    {
      v11 = *(_QWORD *)(a2 + 16);
      v12 = *(char **)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
    }
    else
    {
      v12 = sub_B17430(a2, a3);
    }
    sub_E35AF0((__int64)&v19, (__int64)v12, v13);
    v14 = j__strlen("param");
    v17 = &v19;
    v18 = a1 + 1048;
    sub_E34890(a1 + 1048, (__int64)"param", v14, (__int64)sub_E34840, &v17);
    sub_2207560(&v19);
  }
  result = *(unsigned int *)(a2 + 40);
  if ( (unsigned int)(result + 2) > 1 )
  {
    v20 = *(unsigned int *)(a2 + 40);
    v19 = 3;
    v16 = j__strlen("paramIdx");
    v17 = &v19;
    v18 = a1 + 1048;
    sub_E34890(a1 + 1048, (__int64)"paramIdx", v16, (__int64)sub_E34840, &v17);
    return sub_2207560(&v19);
  }
  return result;
}

