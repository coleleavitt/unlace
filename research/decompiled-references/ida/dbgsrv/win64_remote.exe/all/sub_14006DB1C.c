/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006DB1C
// Address: 0x000000014006DB1C

//----- (000000014006DB1C) ----------------------------------------------------
__int64 __fastcall sub_14006DB1C(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 ThrowImageBase; // rax

  v3 = *(int *)(a1 + 4);
  v4 = 0;
  if ( !(_DWORD)v3 )
    return 1;
  v11 = v3 + ((__int64 (*)(void))GetImageBase)();
  if ( !v11 )
    return 1;
  v12 = *(int *)(a1 + 4);
  v13 = (_DWORD)v12 ? v12 + GetImageBase(v9, v8, v10, v11) : 0LL;
  if ( !*(_BYTE *)(v13 + 16) || *(char *)a1 < 0 && (*(_BYTE *)a2 & 0x10) != 0 )
    return 1;
  v14 = *(int *)(a1 + 4);
  if ( (_DWORD)v14 )
    v15 = GetImageBase(v13, v8, v10, v11) + v14;
  else
    v15 = 0;
  v17 = GetThrowImageBase() + *(int *)(a2 + 4);
  if ( v15 != v17 )
  {
    v20 = *(int *)(a1 + 4);
    v21 = (_DWORD)v20 ? v20 + GetImageBase(v17, v16, v18, v19) : 0LL;
    v22 = *(int *)(a2 + 4);
    ThrowImageBase = GetThrowImageBase();
    if ( strcmp((const char *)(v21 + 16), (const char *)(ThrowImageBase + v22 + 16)) )
      return 0;
  }
  if ( ((*(_BYTE *)a2 & 2) == 0 || (*(_BYTE *)a1 & 8) != 0)
    && ((*a3 & 1) == 0 || (*(_BYTE *)a1 & 1) != 0)
    && ((*a3 & 4) == 0 || (*(_BYTE *)a1 & 4) != 0)
    && ((*a3 & 2) == 0 || (*(_BYTE *)a1 & 2) != 0) )
  {
    return 1;
  }
  return v4;
}
// 14006DB64: variable 'v9' is possibly undefined
// 14006DB64: variable 'v8' is possibly undefined
// 14006DB64: variable 'v10' is possibly undefined
// 14006DB93: variable 'v11' is possibly undefined
// 14006DBBA: variable 'v16' is possibly undefined
// 14006DBBA: variable 'v18' is possibly undefined
// 14006DBBA: variable 'v19' is possibly undefined
// 14006C370: using guessed type __int64 __fastcall GetImageBase(_QWORD, _QWORD, _QWORD, _QWORD);
// 14006C384: using guessed type __int64 GetThrowImageBase(void);
