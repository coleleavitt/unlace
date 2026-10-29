/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006E9D4
// Address: 0x000000014006E9D4

//----- (000000014006E9D4) ----------------------------------------------------
char __fastcall sub_14006E9D4(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rsi
  char v4; // r12
  int i; // ebp
  __int64 v6; // rdi
  int *v7; // rdi
  __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // rsi
  __int64 ThrowImageBase; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 ImageBase; // rax
  int *v22; // [rsp+68h] [rbp+10h]

  v3 = a1;
  if ( !a2 )
    abort();
  v4 = 0;
  for ( i = 0; i < *a2; ++i )
  {
    v6 = *(int *)(*(_QWORD *)(v3 + 48) + 12LL);
    v7 = (int *)(GetThrowImageBase() + 4 + v6);
    v22 = v7;
    v8 = *(int *)(*(_QWORD *)(v3 + 48) + 12LL);
    v9 = *(_DWORD *)(GetThrowImageBase() + v8);
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        v10 = *v7;
        ThrowImageBase = GetThrowImageBase();
        v12 = (int)a2[1];
        v13 = ThrowImageBase + v10;
        v14 = *(_BYTE **)(a1 + 48);
        ImageBase = GetImageBase(v16, v15, v17, v18);
        if ( (unsigned int)sub_14006DB1C(v12 + ImageBase + 20LL * i, v13, v14) )
          break;
        --v9;
        v7 = ++v22;
        if ( v9 <= 0 )
          goto LABEL_8;
      }
      v4 = 1;
LABEL_8:
      v3 = a1;
    }
  }
  return v4;
}
// 14006EA57: variable 'v16' is possibly undefined
// 14006EA57: variable 'v15' is possibly undefined
// 14006EA57: variable 'v17' is possibly undefined
// 14006EA57: variable 'v18' is possibly undefined
// 14006C370: using guessed type __int64 __fastcall GetImageBase(_QWORD, _QWORD, _QWORD, _QWORD);
// 14006C384: using guessed type __int64 GetThrowImageBase(void);
