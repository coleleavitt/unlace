/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A570
// Address: 0x000000000044A570

//----- (000000000044A570) ----------------------------------------------------
char *__fastcall sub_44A570(__int64 a1, char *a2, __int64 a3, char *a4, char a5, char a6)
{
  unsigned int v10; // ebp
  _BYTE *v11; // rbx
  int v12; // r15d
  __int64 v13; // rbp
  const char *v14; // rdx
  const char *v15; // rbx
  __int64 *v16; // rax
  unsigned int v18; // [rsp+8h] [rbp-1050h]
  char dest[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v20; // [rsp+1018h] [rbp-40h]

  v10 = *(_DWORD *)(a1 + 356) & 4;
  v20 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_480670(a4) )
  {
    v11 = sub_4821A0(a2, a4, a3);
    if ( v10 && !(unsigned __int8)sub_448C90(a2, a3) )
      return nullptr;
    return v11;
  }
  v18 = v10 >> 2;
  if ( a6 == 1 || a5 != 34 )
  {
    if ( a6 )
    {
      v15 = dest;
      if ( (unsigned __int8)sub_480530(dest, 0x1000u, *(const char **)(a1 + 296)) )
        goto LABEL_10;
    }
    goto LABEL_9;
  }
  v11 = sub_448EE0(a2, a3, *(const char **)(a1 + 296), (__int64)a4, v18);
  v12 = *(_DWORD *)(a1 + 272) - 1;
  if ( v11 )
    return v11;
  if ( v12 < 0 )
  {
LABEL_9:
    v15 = nullptr;
LABEL_10:
    v16 = off_4C61C0();
    return sub_44A370(v16, a2, a3, (__int64)a4, v15, v18);
  }
  v13 = 40LL * (unsigned int)v12;
  while ( 1 )
  {
    --v12;
    v14 = *(const char **)(*(_QWORD *)(a1 + 264) + v13);
    v13 -= 40;
    v11 = sub_448EE0(a2, a3, v14, (__int64)a4, v18);
    if ( v11 )
      return v11;
    if ( v12 == -1 )
      goto LABEL_9;
  }
}
// 44A668: conditional instruction was optimized away because rbx.8==0
// 4C61C0: using guessed type __int64 *(*off_4C61C0)();
