/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000652E0
// Address: 0x00000001000652E0

//----- (00000001000652E0) ----------------------------------------------------
__int64 __fastcall sub_1000652E0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  const char *v4; // rsi
  int v5; // r15d
  __int64 v6; // rax
  unsigned int v7; // eax
  void *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  void *v13; // rdi
  __int128 v15; // [rsp+0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+10h] [rbp-60h]
  unsigned int v17; // [rsp+24h] [rbp-4Ch] BYREF
  int v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h]
  __int128 v20; // [rsp+38h] [rbp-38h]

  v3 = sub_100064B70();
  if ( *(_QWORD *)(a1 + 16) )
    v4 = *(const char **)(a1 + 8);
  else
    v4 = _s1;
  v5 = (*(__int64 (__fastcall **)(__int64, const char *, unsigned int *))(*(_QWORD *)v3 + 488LL))(v3, v4, &v17);
  if ( v5 < 0 )
    goto LABEL_24;
  v6 = *(_QWORD *)(v3 + 552);
  if ( !v6 )
    LODWORD(v6) = *(_DWORD *)(v3 + 648);
  if ( v5 >= (int)v6 )
  {
LABEL_24:
    if ( under_debugger != 1 )
      interr(0x7568u);
    BUG();
  }
  v15 = 0;
  v16 = 0;
  v18 = -2;
  v20 = 0;
  v19 = -1;
  sub_10005F910((__int64)&v15, (unsigned int)v6, (unsigned __int64)&v18);
  if ( v18 >= -1 && v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree((void *)v19);
  }
  v7 = sub_100064B80();
  if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v3 + 224LL))(v3, v7, v17, v15, 0) <= 0 )
  {
    v9 = throw_idc_exception((unsigned __int8 *)a2, "failed to read register value");
    v8 = (void *)v15;
    if ( !(_QWORD)v15 )
      return v9;
  }
  else
  {
    v8 = (void *)v15;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v15 + 32LL * (unsigned int)v5 + 8);
    v9 = 0;
  }
  v10 = *((_QWORD *)&v15 + 1);
  if ( *((_QWORD *)&v15 + 1) )
  {
    v11 = 0;
    do
    {
      v12 = v15;
      if ( *(int *)(v15 + v11) >= -1 )
      {
        v13 = *(void **)(v15 + v11 + 8);
        if ( v13 )
        {
          *(_QWORD *)(v15 + v11 + 16) = 0;
          qfree(v13);
          *(_QWORD *)(v12 + v11 + 8) = 0;
          *(_QWORD *)(v12 + v11 + 24) = 0;
        }
        *(_DWORD *)(v12 + v11) = -2;
      }
      v11 += 32;
      --v10;
    }
    while ( v10 );
    v8 = (void *)v15;
  }
  *((_QWORD *)&v15 + 1) = 0;
  qfree(v8);
  return v9;
}
// 1000AE23D: using guessed type char under_debugger;
