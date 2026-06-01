/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140023AB0
// Address: 0x0000000140023AB0

//----- (0000000140023AB0) ----------------------------------------------------
void __fastcall sub_140023AB0(__int64 a1, __int64 a2)
{
  unsigned int v4; // r15d
  const char *v5; // rbx
  const char *v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  size_t v9; // rax
  size_t v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  char v13[8]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h]
  int v16; // [rsp+70h] [rbp+30h] BYREF
  __int128 *v17; // [rsp+80h] [rbp+40h]

  v13[0] = 2;
  v15 = 0;
  v14 = 0u;
  v16 = -1;
  v4 = sub_140063DE0();
  v5 = nullptr;
  v6 = nullptr;
  v7 = *(_QWORD **)(a1 + 104);
  if ( v7 )
  {
    v6 = sub_14002DAC0(v7, *(_DWORD *)(a1 + 112), (unsigned int *)&v16);
    v8 = *(_QWORD *)(a1 + 104);
    if ( *(_QWORD *)(v8 + 8) )
      v5 = *(const char **)v8;
    else
      v5 = Str1;
  }
  sub_140029390((__int64)v13);
  if ( v6 )
    v9 = strlen(v6);
  else
    v9 = 0;
  v13[0] = 7;
  v17 = &v14;
  v14 = 0;
  v15 = 0;
  if ( v9 )
    sub_140001810((__int64)&v14, v6, v9);
  sub_14002A890(a2, "file", v13, 0);
  sub_140029390((__int64)v13);
  if ( v5 )
    v10 = strlen(v5);
  else
    v10 = 0;
  v13[0] = 7;
  v17 = &v14;
  v14 = 0;
  v15 = 0;
  if ( v10 )
    sub_140001810((__int64)&v14, v5, v10);
  sub_14002A890(a2, "func", v13, 0);
  v11 = v16;
  sub_140029390((__int64)v13);
  v13[0] = 2;
  *(_QWORD *)&v14 = v11;
  sub_14002A890(a2, "line", v13, 0);
  v12 = *(_QWORD *)(a1 + 112);
  sub_140029390((__int64)v13);
  v13[0] = 2;
  *(_QWORD *)&v14 = v12;
  sub_14002A890(a2, (char *)&dword_1400920BC, v13, 0);
  sub_1400640B0(v4);
  sub_140029390((__int64)v13);
}
// 1400920BC: using guessed type int dword_1400920BC;
