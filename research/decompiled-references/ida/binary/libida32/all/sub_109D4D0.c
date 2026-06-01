__int64 __fastcall sub_109D4D0(__int64 a1, __int64 a2, char *a3, size_t a4, char a5)
{
  char *v6; // rbp
  size_t v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r15
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r14
  unsigned int v17; // eax
  unsigned int v19; // [rsp+Ch] [rbp-4Ch]
  __int64 *v20[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = a3;
  v7 = a4;
  if ( a4 == 4 && *(_DWORD *)a3 == 879063923 )
  {
    v6 = "sse4.1";
    v7 = 6;
    if ( a5 )
      v6 = (char *)"sse4.2";
  }
  v8 = sub_2220DF0(v6, v7);
  v9 = (unsigned int)sub_2220F70(a2, v6, v7, v8);
  v12 = (__int64 *)(*(_QWORD *)a2 + 8 * v9);
  if ( *v12 )
  {
    if ( *v12 != -8 )
    {
      sub_1005BB0(v20, v12, 0);
      v13 = v20[0];
      goto LABEL_10;
    }
    --*(_DWORD *)(a2 + 16);
  }
  v19 = v9;
  v14 = sub_220C370(v7 + 17, 8, v9, v9, v10, v11);
  v15 = v19;
  v16 = v14;
  if ( v7 )
  {
    memcpy((void *)(v14 + 16), v6, v7);
    v15 = v19;
  }
  *(_BYTE *)(v16 + v7 + 16) = 0;
  *(_QWORD *)v16 = v7;
  *(_BYTE *)(v16 + 8) = 0;
  *v12 = v16;
  ++*(_DWORD *)(a2 + 12);
  v17 = sub_2221390(a2, v15);
  sub_1005BB0(v20, (__int64 *)(*(_QWORD *)a2 + 8LL * v17), 0);
  v13 = v20[0];
LABEL_10:
  *(_BYTE *)(*v13 + 8) = a5;
  return sub_229AF70(v6, v7);
}

