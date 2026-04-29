__int64 __fastcall sub_1D40D0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi

  if ( *(_QWORD *)(a1 + 368) )
  {
    sub_7F200((unsigned __int64 **)(a1 + 368));
    v2 = *(_QWORD *)(a1 + 368);
    if ( v2 )
      qfree(v2);
  }
  v3 = *(_QWORD *)(a1 + 344);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 352) = 0;
    qfree(v3);
  }
  v4 = *(_QWORD *)(a1 + 320);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 328);
    if ( v5 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v4 + v6);
        clear_tinfo_t(v4 + v6 + 80);
        v9 = *(_QWORD *)(v4 + v6 + 56);
        if ( v9 )
        {
          v8[8] = 0;
          qfree(v9);
        }
        v10 = v8[4];
        if ( v10 )
        {
          v8[5] = 0;
          qfree(v10);
        }
        ++v7;
        v6 += 104;
        cleanup_argloc(v8);
        v4 = *(_QWORD *)(a1 + 320);
      }
      while ( v5 != v7 );
    }
    *(_QWORD *)(a1 + 328) = 0;
    qfree(v4);
  }
  v11 = *(_QWORD *)(a1 + 296);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 304) = 0;
    qfree(v11);
  }
  v12 = *(_QWORD *)(a1 + 264);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 272) = 0;
    qfree(v12);
  }
  result = qfree(*(_QWORD *)(a1 + 248));
  v14 = *(_QWORD *)(a1 + 224);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    result = qfree(v14);
  }
  v15 = *(_QWORD *)(a1 + 200);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    result = qfree(v15);
  }
  v16 = *(_QWORD *)(a1 + 176);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    result = qfree(v16);
  }
  v17 = *(_QWORD *)(a1 + 144);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 152) = 0;
    result = qfree(v17);
  }
  v18 = *(_QWORD *)(a1 + 8);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    return qfree(v18);
  }
  return result;
}
