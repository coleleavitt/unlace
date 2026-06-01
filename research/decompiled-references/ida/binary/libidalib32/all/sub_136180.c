bool sub_136180(__int64 a1, int a2, __int64 a3, __int64 a4, ...)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // edx
  char v8; // al
  const char *v9; // rax
  char v10; // si
  int v11; // ecx
  void *v12; // rdx
  char **v13; // rax
  __int64 v15; // [rsp+8h] [rbp-100h] BYREF
  gcc_va_list va; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-E0h]

  v17 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  va_start(va, a4);
  v5 = qalloc_or_throw();
  *(_QWORD *)v5 = &stru_235898;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 72) = -1;
  *(_OWORD *)(v5 + 16) = -1;
  *(_QWORD *)(v5 + 8) = 0x2000013000004LL;
  v6 = (_QWORD *)(v5 + 80);
  *(_OWORD *)(v5 + 56) = 0;
  do
  {
    *v6 = 0;
    v6 += 3;
    *((_OWORD *)v6 - 1) = 0;
  }
  while ( v6 != (_QWORD *)(v5 + 176) );
  *(_DWORD *)(v5 + 176) = 0;
  v7 = *(_DWORD *)(v5 + 12);
  if ( ((v7 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v5 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    *(_BYTE *)(v5 + 11) = ((v7 >> 19) & 0x3F) - 1;
    *(_DWORD *)(v5 + 12) = v7 & 0xFE07FFFF;
  }
  *(_QWORD *)(v5 + 208) = 0;
  *(_QWORD *)v5 = off_2318C0;
  *(_QWORD *)(v5 + 232) = 0;
  *(_OWORD *)(v5 + 216) = 0;
  *(_OWORD *)(v5 + 240) = 0;
  v8 = *(_BYTE *)(a1 + 765);
  if ( v8 )
  {
    *(_QWORD *)(v5 + 184) = 0;
    *(_DWORD *)(v5 + 192) = a2;
  }
  else
  {
    *(_QWORD *)(v5 + 184) = a1;
    *(_DWORD *)(v5 + 192) = a2;
    v8 = a2 != 2;
  }
  *(_BYTE *)(v5 + 200) = v8;
  sub_94290((__int64 *)(v5 + 232));
  v9 = s1;
  if ( *(_QWORD *)(v5 + 240) )
    v9 = *(const char **)(v5 + 232);
  *(_QWORD *)(v5 + 40) = v9;
  v10 = sub_13BCE0(a1, a4);
  v11 = 3;
  v12 = &unk_1D5FA0;
  v13 = &off_231980;
  if ( !v10 )
  {
    v11 = 2;
    v12 = &unk_1D5F98;
    v13 = &off_231970;
  }
  *(_DWORD *)(v5 + 48) = v11;
  *(_QWORD *)(v5 + 56) = v12;
  *(_QWORD *)(v5 + 64) = v13;
  *(_DWORD *)(v5 + 72) = -1;
  v15 = 0;
  return sub_198260(v5, &v15) == 0;
}

