/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006EABC
// Address: 0x000000014006EABC

//----- (000000014006EABC) ----------------------------------------------------
char __fastcall sub_14006EABC(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 i; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax

  v4 = 0;
  if ( *a1 <= 0 )
    return 0;
  for ( i = 0; ; i += 20 )
  {
    v7 = a1[1];
    if ( *(_DWORD *)(i + GetImageBase(a1, a2, a3, a4) + v7 + 4) )
    {
      v12 = a1[1];
      v13 = *(int *)(i + GetImageBase(v9, v8, v10, v11) + v12 + 4);
      v18 = v13 + GetImageBase(v15, v14, v16, v17);
    }
    else
    {
      v18 = 0;
    }
    if ( !sub_14006CCC0(v18 + 8, (__int64)&qword_1400CADA0) )
      break;
    if ( ++v4 >= *a1 )
      return 0;
  }
  return 1;
}
// 14006EADF: variable 'a1' is possibly undefined
// 14006EADF: variable 'a2' is possibly undefined
// 14006EADF: variable 'a3' is possibly undefined
// 14006EADF: variable 'a4' is possibly undefined
// 14006EAF2: variable 'v9' is possibly undefined
// 14006EAF2: variable 'v8' is possibly undefined
// 14006EAF2: variable 'v10' is possibly undefined
// 14006EAF2: variable 'v11' is possibly undefined
// 14006EAFF: variable 'v15' is possibly undefined
// 14006EAFF: variable 'v14' is possibly undefined
// 14006EAFF: variable 'v16' is possibly undefined
// 14006EAFF: variable 'v17' is possibly undefined
// 14006C370: using guessed type __int64 __fastcall GetImageBase(_QWORD, _QWORD, _QWORD, _QWORD);
// 1400CADA0: using guessed type __int64 qword_1400CADA0;
