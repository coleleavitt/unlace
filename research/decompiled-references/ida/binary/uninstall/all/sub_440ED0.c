__int64 __fastcall sub_440ED0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rsi
  int v10; // r9d
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // [rsp+8h] [rbp-60h] BYREF
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  int v18; // [rsp+1Ch] [rbp-4Ch] BYREF
  _BYTE v19[40]; // [rsp+20h] [rbp-48h] BYREF

  v17 = 0;
  if ( a3 <= 1 )
  {
    sub_458930(a2, 1, a4, "dictionary ?key key ...?");
    return 1;
  }
  if ( a3 == 2 )
  {
    result = sub_440900(a2, *(_QWORD *)(a4 + 8), (__int64)v19, &v16, &v17, &v18);
    if ( (_DWORD)result )
      return result;
    v13 = sub_46EEB0(0, 0);
    while ( !v18 )
    {
      sub_46FBF0(a2, v13, v16);
      sub_46FBF0(a2, v13, v17);
      sub_440A10((__int64)v19, &v16, &v17, &v18, v14, v15);
    }
    v9 = v13;
    goto LABEL_14;
  }
  v7 = sub_440270(a2, *(_QWORD *)(a4 + 8), a3 - 3, a4 + 16, 0);
  result = 1;
  if ( !v7 )
    return result;
  result = sub_4406D0(a2, v7, *(_QWORD *)(a4 + 8LL * a3 - 8), &v17);
  if ( (_DWORD)result )
    return result;
  v9 = v17;
  if ( v17 )
  {
LABEL_14:
    sub_48AFD0(a2, v9);
    return 0;
  }
  sub_48B350(a2);
  v11 = *(_QWORD *)(a4 + 8LL * a3 - 8);
  v12 = *(_QWORD *)(v11 + 8);
  if ( !v12 )
    LODWORD(v12) = sub_47B3B0(v11);
  sub_48B710(a2, (unsigned int)"key \"", v12, (unsigned int)"\" not known in dictionary", 0, v10);
  return 1;
}

