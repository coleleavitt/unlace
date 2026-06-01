__int64 __fastcall sub_280C90(int a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  bool v9; // zf
  const char *v10; // rax
  struct _Unwind_Exception *v12; // rbp

  v2 = qalloc_or_throw(184);
  v4 = itext(121, a2, v3);
  *(_BYTE *)(v2 + 10) = 0;
  *(_BYTE *)(v2 + 11) = (_BYTE)a2;
  *(_QWORD *)v2 = &stru_86F6A0;
  *(_DWORD *)(v2 + 12) = a1 & 0xFFFDFF7B | 0x20080;
  *(_QWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 3;
  *(_QWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 72) = -1;
  *(_QWORD *)(v2 + 40) = v4;
  *(_WORD *)(v2 + 8) = 4;
  *(_QWORD *)(v2 + 64) = &off_860910;
  v5 = (_QWORD *)(v2 + 80);
  *(_OWORD *)(v2 + 16) = -1;
  do
  {
    *v5 = 0;
    v5 += 3;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( v5 != (_QWORD *)(v2 + 176) );
  *(_DWORD *)(v2 + 176) = 0;
  v6 = *(unsigned int *)(v2 + 12);
  v7 = ((*(_DWORD *)(v2 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v2 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v2 + 11) != 0xFF )
    {
      if ( under_debugger )
        goto LABEL_14;
      interr(3449, a2, v6, v7, 0.0);
LABEL_12:
      if ( !under_debugger )
      {
        v12 = (struct _Unwind_Exception *)interr(3450, a2, v6, v7, 0.0);
        qfree(v2, a2);
        _Unwind_Resume(v12);
      }
LABEL_14:
      BUG();
    }
    v6 = (unsigned int)v6 & 0xFE07FFFF;
    *(_BYTE *)(v2 + 11) = ((*(_DWORD *)(v2 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v2 + 12) = v6;
  }
  if ( (_DWORD)a2 != (char)a2 )
    goto LABEL_12;
  *(_QWORD *)v2 = exp_chooser_t___vtable;
  v8 = *(_DWORD *)(get_eah(121, a2, v6) + 24);
  *(_DWORD *)(v2 + 72) = 135;
  *(_DWORD *)(v2 + 180) = v8;
  v9 = v8 == 4;
  v10 = " ";
  if ( v9 )
    v10 = (const char *)&unk_5E5318;
  *(_QWORD *)(v2 + 56) = v10;
  *(_QWORD *)v2 = wexp_chooser_t___vtable;
  return v2;
}
