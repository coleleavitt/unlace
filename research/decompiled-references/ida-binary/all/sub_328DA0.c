bool sub_328DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // al
  const char *v12; // rax
  char v13; // si
  __int64 v14; // rcx
  void *v15; // rdx
  char **v16; // rax
  __int64 v18; // [rsp+8h] [rbp-100h] BYREF
  gcc_va_list va; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-E0h]
  __int64 v21; // [rsp+50h] [rbp-B8h]
  __int64 v22; // [rsp+58h] [rbp-B0h]

  va_start(va, a4);
  v21 = va_arg(va, _QWORD);
  v22 = va_arg(va, _QWORD);
  va_end(va);
  v20 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  va_start(va, a4);
  v5 = qalloc_or_throw(256);
  *(_QWORD *)v5 = &stru_86F6A0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 72) = -1;
  *(_OWORD *)(v5 + 16) = -1;
  *(_QWORD *)(v5 + 8) = 0x2000013000004LL;
  v8 = (_QWORD *)(v5 + 80);
  *(_OWORD *)(v5 + 56) = 0;
  do
  {
    *v8 = 0;
    v8 += 3;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( v8 != (_QWORD *)(v5 + 176) );
  *(_DWORD *)(v5 + 176) = 0;
  v9 = *(unsigned int *)(v5 + 12);
  v10 = ((*(_DWORD *)(v5 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v5 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v5 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, v9, v10, 0.0);
      BUG();
    }
    *(_BYTE *)(v5 + 11) = ((*(_DWORD *)(v5 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v5 + 12) = v9 & 0xFE07FFFF;
  }
  *(_QWORD *)(v5 + 208) = 0;
  *(_QWORD *)v5 = sa_chooser_t___vtable;
  *(_QWORD *)(v5 + 232) = 0;
  *(_OWORD *)(v5 + 216) = 0;
  *(_OWORD *)(v5 + 240) = 0;
  v11 = *(_BYTE *)(a1 + 741);
  if ( v11 )
  {
    *(_QWORD *)(v5 + 184) = 0;
    *(_DWORD *)(v5 + 192) = a2;
  }
  else
  {
    *(_QWORD *)(v5 + 184) = a1;
    *(_DWORD *)(v5 + 192) = a2;
    v11 = (_DWORD)a2 != 2;
  }
  *(_BYTE *)(v5 + 200) = v11;
  sub_169980((__int64 *)(v5 + 232), a4, (const __m128i *)va, v10, v6, v7);
  v12 = &s1;
  if ( *(_QWORD *)(v5 + 240) )
    v12 = *(const char **)(v5 + 232);
  *(_QWORD *)(v5 + 40) = v12;
  v13 = sub_331080(a1);
  v14 = 3;
  v15 = &unk_5E7CA8;
  v16 = (char **)&off_8661A0;
  if ( !v13 )
  {
    v14 = 2;
    v15 = &unk_5E7CA0;
    v16 = &off_866190;
  }
  *(_DWORD *)(v5 + 48) = v14;
  *(_QWORD *)(v5 + 56) = v15;
  *(_QWORD *)(v5 + 64) = v16;
  *(_DWORD *)(v5 + 72) = -1;
  v18 = 0;
  return sub_4AED50(v5, &v18, v15, v14) == 0;
}
