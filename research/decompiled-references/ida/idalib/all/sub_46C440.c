__int64 __fastcall sub_46C440(__int64 a1, signed int a2, signed int a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  __int64 v11; // r9
  char *v12; // rax
  int v14[4]; // [rsp+0h] [rbp-1A8h] BYREF
  void *ptr; // [rsp+10h] [rbp-198h]
  __int64 v16; // [rsp+18h] [rbp-190h]
  int v17[2]; // [rsp+20h] [rbp-188h]
  char v18; // [rsp+28h] [rbp-180h] BYREF
  _QWORD v19[8]; // [rsp+168h] [rbp-40h] BYREF

  v9 = *(int *)(a1 + 4LL * a3 + 16);
  v19[0] = __readfsqword(0x28u);
  switch_dbctx(v9);
  ptr = (void *)-1LL;
  v12 = &v18;
  *(_OWORD *)v14 = -1;
  v16 = 0;
  *(_QWORD *)v17 = 0;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 40;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *((_QWORD *)v12 - 2) = 0;
  }
  while ( v19 != (_QWORD *)v12 );
  if ( (unsigned int)decode_insn(v14, a4, v19, 0, 0, v11, 0.0) && WORD1(v16) == a6 )
  {
    switch_dbctx(*(int *)(a1 + 4LL * a2 + 16));
    return 0;
  }
  else
  {
    sub_46C190(a1, a3, a4, 2);
    switch_dbctx(*(int *)(a1 + 4LL * a2 + 16));
    sub_46C190(a1, a2, a4, 2);
    return 1;
  }
}
