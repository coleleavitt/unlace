/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140032C30
// Address: 0x0000000140032C30

//----- (0000000140032C30) ----------------------------------------------------
__int64 __fastcall sub_140032C30(__int64 a1, const char *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdx
  const char *v6; // rdx
  int v7; // ebp
  void **v8; // rdi
  unsigned __int64 v9; // r8
  _DWORD *v10; // rax
  void **v11; // rdi
  unsigned __int64 v12; // r8
  __int64 result; // rax

  v2 = a1 + 32;
  sub_140002FB0(a1 + 32, "%s.%s", a2, a2);
  sub_140031C80(a1);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * *(_QWORD *)(a1 + 344) - 8);
  if ( *(_DWORD *)v4 == 1 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    if ( *(_QWORD *)(v5 + 8) )
      v6 = *(const char **)v5;
    else
      v6 = Str1;
    v2 = a1 + 32;
  }
  else
  {
    v6 = pNodeName;
  }
  sub_140034D00((_QWORD *)(a1 + 152), v6);
  v7 = *(_DWORD *)(a1 + 200);
  v8 = (void **)(a1 + 240);
  v9 = *(_QWORD *)(a1 + 248) + 1LL;
  if ( v9 > *(_QWORD *)(a1 + 256) )
    *v8 = sub_14005ABE0(a1 + 240, *v8, v9, 4u);
  v10 = *v8;
  v11 = (void **)(a1 + 312);
  v10[(*(_QWORD *)(a1 + 248))++] = v7;
  v12 = *(_QWORD *)(a1 + 320) + 1LL;
  if ( v12 > *(_QWORD *)(a1 + 328) )
    *v11 = sub_14005ABE0(a1 + 312, *v11, v12, 2u);
  *((_WORD *)*v11 + (*(_QWORD *)(a1 + 320))++) = 0;
  sub_140001810(v2, "this", 4u);
  sub_140031C80(a1);
  result = sub_140031FD0(a1);
  if ( !(_DWORD)result )
    return sub_140032380(a1);
  return result;
}
