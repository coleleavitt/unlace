__int64 __fastcall sub_211BB10(__int64 a1, __int64 a2, char a3, char a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // r9
  const char *v7; // rcx
  int v8; // r9d
  __int64 v9; // r9
  __int64 v10; // rdi
  _QWORD v11[4]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v12; // [rsp+20h] [rbp-18h]

  result = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(result + 152);
  if ( *(_DWORD *)(v6 + 312) != 4 || (v8 = *(_DWORD *)(v6 + 320)) == 0 || v8 == 6 )
  {
    v7 = ".seh_* directives are not supported on this target";
LABEL_3:
    v11[0] = v7;
LABEL_4:
    v12 = 259;
    return sub_2100A30(result, a5, (__int64)v11);
  }
  v9 = *(_QWORD *)(a1 + 104);
  if ( !v9 || *(_QWORD *)(v9 + 8) )
  {
    v7 = ".seh_ directive must appear within an active frame";
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v9 + 96) )
  {
    v11[0] = "Chained unwind areas can't have handlers!";
    goto LABEL_4;
  }
  *(_QWORD *)(v9 + 24) = a2;
  if ( a4 )
  {
    if ( !a3 )
    {
LABEL_17:
      *(_BYTE *)(v9 + 81) = 1;
      return result;
    }
  }
  else if ( !a3 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11[0] = "Don't know what kind of handler this is!";
    v12 = 259;
    return sub_2100A30(v10, a5, (__int64)v11);
  }
  *(_BYTE *)(v9 + 80) = 1;
  if ( a4 )
    goto LABEL_17;
  return result;
}
