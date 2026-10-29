/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006CF48
// Address: 0x000000014006CF48

//----- (000000014006CF48) ----------------------------------------------------
__int64 __fastcall sub_14006CF48(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rsi
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  const void *v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx
  size_t v18; // rbx
  const void *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx

  v6 = a2;
  v8 = 0;
  v9 = *(int *)(a3 + 8);
  if ( (_DWORD)v9 )
    v10 = v9 + GetImageBase(a1, a2, a3, a4);
  else
    v10 = 0;
  if ( v10 )
  {
    v11 = *(int *)(a3 + 8);
    v12 = (_DWORD)v11 ? v11 + GetImageBase(a1, v10, a3, a4) : 0LL;
    if ( *(_BYTE *)(v12 + 16) && (*(_DWORD *)(a3 + 12) || *(int *)(a3 + 4) < 0) )
    {
      if ( *(int *)(a3 + 4) >= 0 )
        v6 = (__int64 *)(*v6 + *(unsigned int *)(a3 + 12));
      if ( *(char *)(a3 + 4) < 0 && (*(_BYTE *)a4 & 0x10) != 0 && qword_1400CC040 )
      {
        v13 = qword_1400CC040();
        if ( !v13 || !v6 )
          abort();
        *v6 = v13;
        v14 = v13;
      }
      else if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 40);
        if ( !v14 || !v6 )
          abort();
        *v6 = v14;
      }
      else
      {
        if ( (*(_BYTE *)a4 & 1) == 0 )
        {
          v16 = *(int *)(a4 + 24);
          if ( (_DWORD)v16 )
            v17 = v16 + GetThrowImageBase();
          else
            v17 = 0;
          if ( v17 )
          {
            if ( !*(_QWORD *)(a1 + 40)
              || !v6
              || ((v20 = *(int *)(a4 + 24), !(_DWORD)v20) ? (v21 = 0) : (v21 = v20 + GetThrowImageBase()), !v21) )
            {
              abort();
            }
            return (unsigned int)((*(_BYTE *)a4 & 4) != 0) + 1;
          }
          else
          {
            if ( !*(_QWORD *)(a1 + 40) || !v6 )
              abort();
            v18 = *(int *)(a4 + 20);
            v19 = (const void *)_AdjustPointer(*(_QWORD *)(a1 + 40), a4 + 8);
            memcpy(v6, v19, v18);
          }
          return v8;
        }
        v15 = *(const void **)(a1 + 40);
        if ( !v15 || !v6 )
          abort();
        memcpy(v6, v15, *(int *)(a4 + 20));
        if ( *(_DWORD *)(a4 + 20) != 8 || !*v6 )
          return v8;
        v14 = *v6;
      }
      *v6 = _AdjustPointer(v14, a4 + 8);
      return v8;
    }
  }
  return 0;
}
// 14006CF98: variable 'a1' is possibly undefined
// 14006CF98: variable 'a3' is possibly undefined
// 14006CF98: variable 'a4' is possibly undefined
// 14006BBB4: using guessed type __int64 __fastcall _AdjustPointer(_QWORD, _QWORD);
// 14006C370: using guessed type __int64 __fastcall GetImageBase(_QWORD, _QWORD, _QWORD, _QWORD);
// 14006C384: using guessed type __int64 GetThrowImageBase(void);
// 1400CC040: using guessed type __int64 (*qword_1400CC040)(void);
