__int64 __fastcall sub_214DA70(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v9; // rdi
  int *v10; // rcx
  int v11; // edx
  __int64 v12; // rdx
  const char *v13; // [rsp+0h] [rbp-48h] BYREF
  __int16 v14; // [rsp+20h] [rbp-28h]

  result = sub_214D6B0(a1, a2, a3, "OS", a5, a6);
  if ( !(_BYTE)result )
  {
    v9 = *(_QWORD *)(a1 + 8);
    *a4 = 0;
    v10 = *(int **)(v9 + 48);
    v11 = *v10;
    if ( *v10 != 9 )
    {
      if ( v11 != 2 )
      {
        if ( v11 == 26 )
          return sub_214CB10(a1, a4, "OS update");
        goto LABEL_5;
      }
      if ( *((_QWORD *)v10 + 2) != 11
        || (v12 = *((_QWORD *)v10 + 1), *(_QWORD *)v12 != 0x737265765F6B6473LL)
        || *(_WORD *)(v12 + 8) != 28521
        || *(_BYTE *)(v12 + 10) != 110 )
      {
LABEL_5:
        v13 = "invalid OS update specifier, comma expected";
        v14 = 259;
        return sub_21543E0(v9, &v13, 0, 0);
      }
    }
  }
  return result;
}
