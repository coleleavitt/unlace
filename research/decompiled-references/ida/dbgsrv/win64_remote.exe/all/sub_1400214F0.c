/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400214F0
// Address: 0x00000001400214F0

//----- (00000001400214F0) ----------------------------------------------------
__int64 __fastcall sub_1400214F0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  const char *v7; // rcx
  const char *v8; // rdx
  __int64 v9; // r14
  __int64 *v10; // rbx
  size_t v11; // rbp
  void *v12; // rax
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

  sub_140020E30(a1, (__int64)&v15, a2);
  v6 = v16;
  if ( *(_BYTE *)(v16 + 25) )
    goto LABEL_7;
  v7 = Str1;
  v8 = Str1;
  if ( *(_QWORD *)(v16 + 40) )
    v8 = *(const char **)(v16 + 32);
  if ( *(_QWORD *)(a2 + 8) )
    v7 = *(const char **)a2;
  if ( strcmp(v7, v8) < 0 )
  {
LABEL_7:
    if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
      unknown_libname_1(v5, v4);
    v9 = *a1;
    *(_QWORD *)&v14 = a1;
    v10 = (__int64 *)operator new(0x58u);
    *((_QWORD *)&v14 + 1) = v10;
    v10[4] = 0;
    v10[5] = 0;
    v10[6] = 0;
    v11 = *(_QWORD *)(a2 + 8);
    if ( v11 )
    {
      v12 = sub_14005AAA0(*(_QWORD *)(a2 + 8));
      v10[4] = (__int64)v12;
      v10[6] = v11;
      memcpy(v12, *(const void **)a2, v11);
      v10[5] = v11;
    }
    *((_BYTE *)v10 + 56) = 2;
    v10[9] = 0;
    v10[10] = 0;
    v10[8] = 0;
    *v10 = v9;
    v10[1] = v9;
    v10[2] = v9;
    *((_WORD *)v10 + 12) = 0;
    v14 = v15;
    v6 = sub_140003FC0(a1, (__int64)&v14, (__int64)v10);
  }
  return v6 + 56;
}
// 140021620: variable 'v5' is possibly undefined
// 140021620: variable 'v4' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
