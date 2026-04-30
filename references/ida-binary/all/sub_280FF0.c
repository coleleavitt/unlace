__int64 __fastcall sub_280FF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  bool v10; // zf
  const char *v11; // rax
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  v2 = xmmword_8CC810;
  v3 = qalloc_or_throw(184);
  v5 = itext(121, a2, v4);
  *(_QWORD *)(v3 + 32) = 0;
  *(_QWORD *)v3 = &stru_86F6A0;
  *(_QWORD *)(v3 + 8) = 0x2008000000004LL;
  *(_DWORD *)(v3 + 48) = 3;
  *(_QWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 72) = -1;
  *(_QWORD *)(v3 + 40) = v5;
  *(_QWORD *)(v3 + 64) = &off_860910;
  v6 = (_QWORD *)(v3 + 80);
  *(_OWORD *)(v3 + 16) = -1;
  do
  {
    *v6 = 0;
    v6 += 3;
    *((_OWORD *)v6 - 1) = 0;
  }
  while ( (_QWORD *)(v3 + 176) != v6 );
  *(_DWORD *)(v3 + 176) = 0;
  v7 = *(unsigned int *)(v3 + 12);
  if ( ((*(_DWORD *)(v3 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v3 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, 0x2008000000004LL, v7, ((*(_DWORD *)(v3 + 12) >> 19) & 0x3Fu) - 1, 0.0);
      BUG();
    }
    v7 = (unsigned int)v7 & 0xFE07FFFF;
    *(_BYTE *)(v3 + 11) = ((*(_DWORD *)(v3 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v3 + 12) = v7;
  }
  *(_QWORD *)v3 = exp_chooser_t___vtable;
  v8 = *(_DWORD *)(get_eah(121, 0x2008000000004LL, v7) + 24);
  *(_DWORD *)(v3 + 72) = 135;
  v10 = v8 == 4;
  *(_DWORD *)(v3 + 180) = v8;
  v11 = " ";
  if ( v10 )
    v11 = (const char *)&unk_5E5318;
  *(_OWORD *)(v3 + 16) = -1;
  *(_QWORD *)(v3 + 56) = v11;
  *(_QWORD *)v3 = wexp_chooser_t___vtable;
  v13[0] = v2;
  sub_4AED50(v3, v13, &unk_5E5318, v9);
  return 1;
}
