__int64 __fastcall file_assoc_chooser_t__::vfunc_11(__int64 a1, const char *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi

  result = -1;
  v4 = 0;
  if ( (unsigned __int64)a2 < *(_QWORD *)(a1 + 192) )
  {
    v6 = (__int64 *)(*(_QWORD *)(a1 + 184) + 240LL * (_QWORD)a2);
    v7 = v6[27];
    if ( v7 )
    {
      v6[28] = 0;
      qfree(v7, a2, a3, 0);
    }
    v8 = v6[24];
    if ( v8 )
    {
      v6[25] = 0;
      qfree(v8, a2, a3, v4);
    }
    v9 = v6[21];
    if ( v9 )
    {
      v6[22] = 0;
      qfree(v9, a2, a3, v4);
    }
    v10 = v6[18];
    if ( v10 )
    {
      v6[19] = 0;
      qfree(v10, a2, a3, v4);
    }
    v11 = v6[15];
    if ( v11 )
    {
      v6[16] = 0;
      qfree(v11, a2, a3, v4);
    }
    v12 = v6[12];
    if ( v12 )
    {
      v6[13] = 0;
      qfree(v12, a2, a3, v4);
    }
    v13 = v6[9];
    if ( v13 )
    {
      v6[10] = 0;
      qfree(v13, a2, a3, v4);
    }
    v14 = v6[6];
    if ( v14 )
    {
      v6[7] = 0;
      qfree(v14, a2, a3, v4);
    }
    v15 = v6[3];
    if ( v15 )
    {
      v6[4] = 0;
      qfree(v15, a2, a3, v4);
    }
    v16 = *v6;
    if ( *v6 )
    {
      v6[1] = 0;
      qfree(v16, a2, a3, v4);
    }
    memmove(v6, v6 + 30, *(_QWORD *)(a1 + 184) + 240LL * *(_QWORD *)(a1 + 192) - (_QWORD)v6 - 240);
    --*(_QWORD *)(a1 + 192);
    return 1;
  }
  return result;
}
