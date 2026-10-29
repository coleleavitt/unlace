/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006DC3C
// Address: 0x000000014006DC3C

//----- (000000014006DC3C) ----------------------------------------------------
__int64 __fastcall sub_14006DC3C(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  _BYTE *v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 ThrowImageBase; // rax
  _BYTE *v27; // rsi

  v4 = *(int *)(a1 + 8);
  v5 = 0;
  if ( (_DWORD)v4 )
  {
    v12 = v4 + GetImageBase(a1, a2, a3, a4);
    if ( v12 )
    {
      v13 = *(int *)(a1 + 8);
      v14 = (_DWORD)v13 ? v13 + GetImageBase(v10, v9, v11, v12) : 0LL;
      if ( *(_BYTE *)(v14 + 16) )
      {
        v15 = (_BYTE *)(a1 + 4);
        if ( *(char *)(a1 + 4) >= 0 || (*(_BYTE *)a2 & 0x10) == 0 )
        {
          v16 = *(int *)(a1 + 8);
          if ( (_DWORD)v16 )
            v17 = v16 + GetImageBase(v14, v9, v11, v12);
          else
            v17 = 0;
          v19 = GetThrowImageBase() + *(int *)(a2 + 4);
          if ( v17 != v19 )
          {
            v22 = *(int *)(a1 + 8);
            if ( (_DWORD)v22 )
              v23 = v22 + GetImageBase(v19, v18, v20, v21);
            else
              v23 = 0;
            v24 = *(int *)(a2 + 4);
            ThrowImageBase = GetThrowImageBase();
            if ( strcmp((const char *)(v23 + 16), (const char *)(ThrowImageBase + v24 + 16)) )
              return 0;
            v15 = (_BYTE *)(a1 + 4);
          }
          if ( (*(_BYTE *)a2 & 2) != 0 )
          {
            if ( (*v15 & 8) == 0 )
              return v5;
            v27 = (_BYTE *)(a1 + 4);
          }
          else
          {
            v27 = v15;
          }
          if ( ((*a3 & 1) == 0 || (*v15 & 1) != 0)
            && ((*a3 & 4) == 0 || (*v15 & 4) != 0)
            && ((*a3 & 2) == 0 || (*v27 & 2) != 0) )
          {
            return 1;
          }
          return v5;
        }
      }
    }
  }
  return 1;
}
// 14006DC89: variable 'v10' is possibly undefined
// 14006DC89: variable 'v9' is possibly undefined
// 14006DC89: variable 'v11' is possibly undefined
// 14006DCBD: variable 'v12' is possibly undefined
// 14006DCE4: variable 'v18' is possibly undefined
// 14006DCE4: variable 'v20' is possibly undefined
// 14006DCE4: variable 'v21' is possibly undefined
// 14006C370: using guessed type __int64 __fastcall GetImageBase(_QWORD, _QWORD, _QWORD, _QWORD);
// 14006C384: using guessed type __int64 GetThrowImageBase(void);
