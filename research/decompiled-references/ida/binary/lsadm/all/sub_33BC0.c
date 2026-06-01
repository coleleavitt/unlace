void *__fastcall sub_33BC0(__int64 a1, char **a2, int a3)
{
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  const char *v9; // r14
  size_t v10; // rdx
  __int64 v11; // r14
  size_t v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r13
  size_t v16; // rax
  __int64 v17; // r15
  size_t v18; // rdx
  const char *v19; // rsi
  __int64 v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  const char *v24; // rbx
  size_t v25; // rdx
  size_t v27; // rax
  _BYTE v28[5]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v29[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v30[8]; // [rsp+28h] [rbp-40h] BYREF

  v30[0] = __readfsqword(0x28u);
  sub_30190(a2, (const void *)a1, 6u);
  v5 = sub_28E10(v28, (unsigned __int64)v29, *(_DWORD *)(a1 + 8)) - v28;
  if ( v5 )
    sub_30190(a2, v28, v5);
  v6 = sub_28E10(v28, (unsigned __int64)v29, *(_DWORD *)(a1 + 12)) - v28;
  if ( v6 )
    sub_30190(a2, v28, v6);
  v7 = sub_28E10(v28, (unsigned __int64)v29, *(_DWORD *)(a1 + 16)) - v28;
  if ( v7 )
    sub_30190(a2, v28, v7);
  if ( a3 > 1 )
  {
    v27 = sub_28E10(v28, (unsigned __int64)v29, *(_DWORD *)(a1 + 20)) - v28;
    if ( v27 )
      sub_30190(a2, v28, v27);
  }
  v8 = sub_28F50(v28, (unsigned __int64)v30, *(_QWORD *)(a1 + 24)) - v28;
  if ( v8 )
    sub_30190(a2, v28, v8);
  v9 = s1;
  if ( *(_QWORD *)(a1 + 40) )
    v9 = *(const char **)(a1 + 32);
  if ( v9 )
  {
    v10 = strlen(v9) + 1;
  }
  else
  {
    v10 = 1;
    v9 = "";
  }
  sub_30190(a2, v9, v10);
  v11 = *(_QWORD *)(a1 + 64);
  v12 = sub_28E10(v28, (unsigned __int64)v29, v11) - v28;
  if ( v12 )
    sub_30190(a2, v28, v12);
  v13 = 0;
  if ( v11 )
  {
    do
    {
      v14 = 5 * v13++;
      sub_336D0(*(_QWORD *)(a1 + 56) + 8 * v14, a2);
    }
    while ( v11 != v13 );
  }
  v15 = *(_QWORD *)(a1 + 88);
  v16 = sub_28E10(v28, (unsigned __int64)v29, v15) - v28;
  if ( v16 )
    sub_30190(a2, v28, v16);
  v17 = 0;
  if ( v15 )
  {
    do
    {
      v19 = s1;
      v20 = *(_QWORD *)(a1 + 80) + 24 * v17;
      if ( *(_QWORD *)(v20 + 8) )
        v19 = *(const char **)v20;
      if ( v19 )
      {
        v18 = strlen(v19) + 1;
      }
      else
      {
        v18 = 1;
        v19 = "";
      }
      ++v17;
      sub_30190(a2, v19, v18);
    }
    while ( v17 != v15 );
  }
  v21 = sub_28F50(v28, (unsigned __int64)v30, *(_QWORD *)(a1 + 104)) - v28;
  if ( v21 )
    sub_30190(a2, v28, v21);
  v22 = sub_28F50(v28, (unsigned __int64)v30, *(_QWORD *)(a1 + 112)) - v28;
  if ( v22 )
    sub_30190(a2, v28, v22);
  v23 = sub_28F50(v28, (unsigned __int64)v30, *(_QWORD *)(a1 + 120)) - v28;
  if ( v23 )
    sub_30190(a2, v28, v23);
  v24 = s1;
  if ( *(_QWORD *)(a1 + 136) )
    v24 = *(const char **)(a1 + 128);
  if ( v24 )
  {
    v25 = strlen(v24) + 1;
  }
  else
  {
    v25 = 1;
    v24 = "";
  }
  return sub_30190(a2, v24, v25);
}

