__int64 __fastcall sub_2630B0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // r12
  const char *v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const char *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi

  if ( a3 )
  {
    v8 = *(_QWORD *)a1;
    v9 = 80LL * *(_QWORD *)(a1 + 8);
    v10 = (const char *)(*(_QWORD *)a1 + v9);
    if ( *(const char **)a1 != v10 )
    {
      v11 = 0xCCCCCCCCCCCCCCCDLL * (v9 >> 4);
      if ( v11 )
      {
        _BitScanReverse64(&v12, v11);
        sub_262470(*(_QWORD *)a1, (unsigned __int64)v10, 2LL * (int)v12, a4, a5, a6);
        if ( v9 > 1280 )
        {
          v17 = (const char *)(v8 + 1280);
          sub_229F50(v8, (const char *)(v8 + 1280), v13, v14, v15, v16);
          do
          {
            v22 = (__int64)v17;
            v17 += 80;
            sub_229D40(v22, (const char *)(v8 + 1280), v18, v19, v20, v21);
          }
          while ( v10 != v17 );
          goto LABEL_2;
        }
      }
      else
      {
        sub_262470(*(_QWORD *)a1, (unsigned __int64)v10, -2, a4, a5, a6);
      }
      sub_229F50(v8, v10, v13, v14, v15, v16);
    }
  }
LABEL_2:
  invalidate_dbgmem_config();
  *(_BYTE *)(a1 + 48) = 1;
  return sub_232570(a1, a2);
}
