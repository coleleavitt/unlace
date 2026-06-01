/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A250
// Address: 0x000000014005A250

//----- (000000014005A250) ----------------------------------------------------
__int64 __fastcall sub_14005A250(__int64 a1)
{
  void **i; // rbx
  void *v3; // rdi
  __int64 (*v4)(void); // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  _QWORD *v6; // rsi
  __int64 (**v7)(void); // rcx
  __int64 v8; // r8
  const void *v9; // rdx
  void *v10; // rcx

  for ( i = (void **)qword_1400CB5F0; qword_1400CB5F0; i = (void **)qword_1400CB5F0 )
  {
    v3 = i[1];
    if ( !v3 )
      break;
    v4 = *((__int64 (**)(void))*i + (_QWORD)v3 - 1);
    v5 = (struct _RTL_CRITICAL_SECTION *)qword_1400CB5F8;
    sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CB5F8);
    v6 = qword_1400CB5F0;
    if ( qword_1400CB5F0 )
    {
      v7 = *(__int64 (***)(void))qword_1400CB5F0;
      v8 = *(_QWORD *)qword_1400CB5F0 + 8LL * *((_QWORD *)qword_1400CB5F0 + 1);
      if ( *(_QWORD *)qword_1400CB5F0 != v8 )
      {
        while ( 1 )
        {
          v9 = v7 + 1;
          if ( v4 == *v7 )
            break;
          ++v7;
          if ( v9 == (const void *)v8 )
            goto LABEL_9;
        }
        memcpy(v7, v9, 8 * ((v8 - (__int64)v7) >> 3) - 8);
        --v6[1];
      }
    }
LABEL_9:
    sub_14005D6D0(v5);
    sub_14005A3E0(v4);
  }
  if ( i )
  {
    v10 = *i;
    if ( *i )
    {
      i[1] = nullptr;
      j_free(v10);
      *i = nullptr;
      i[2] = nullptr;
    }
    j_free(i);
  }
  qword_1400CB5F0 = nullptr;
  if ( *(_BYTE *)(a1 + 28) )
    exit(*(_DWORD *)(a1 + 24));
  return 0;
}
// 1400CB5F8: using guessed type __int64 qword_1400CB5F8;
