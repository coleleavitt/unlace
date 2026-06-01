__int64 __fastcall sub_457FC0(__int64 a1, signed int a2, signed int a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v9; // rdi
  __int64 v11; // r9
  char *v12; // rax
  int v14[2]; // [rsp+0h] [rbp-118h] BYREF
  int v15[2]; // [rsp+8h] [rbp-110h]
  void *ptr; // [rsp+10h] [rbp-108h]
  char v17; // [rsp+18h] [rbp-100h] BYREF
  _QWORD v18[8]; // [rsp+D8h] [rbp-40h] BYREF

  v9 = *(int *)(a1 + 4LL * a3 + 16);
  v18[0] = __readfsqword(0x28u);
  switch_dbctx(v9);
  *(_QWORD *)v14 = -1;
  ptr = nullptr;
  *(_QWORD *)v15 = 0xFFFFFFFFLL;
  v12 = &v17;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 24;
    *((_WORD *)v12 - 11) = 0;
    *((_WORD *)v12 - 10) = 0;
    *((_DWORD *)v12 - 1) = 0;
    *((_WORD *)v12 - 9) = 0;
    *((_QWORD *)v12 - 2) = 0;
    *((_DWORD *)v12 - 2) = 0;
  }
  while ( v18 != (_QWORD *)v12 );
  if ( (unsigned int)decode_insn(v14, a4, v18, 0, 0, v11) && HIWORD(v15[1]) == a6 )
  {
    switch_dbctx(*(int *)(a1 + 4LL * a2 + 16));
    return 0;
  }
  else
  {
    sub_457D00(a1, a3, a4, 2);
    switch_dbctx(*(int *)(a1 + 4LL * a2 + 16));
    sub_457D00(a1, a2, a4, 2);
    return 1;
  }
}

