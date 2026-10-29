_QWORD *__fastcall sub_844080(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  int v6; // eax
  unsigned __int64 v8; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))a1)(152, *(_QWORD *)(a1 + 16));
  if ( !v2 )
    return nullptr;
  *v2 = 0;
  v3 = v2;
  v2[18] = 0;
  memset(
    (void *)((unsigned __int64)(v2 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v2 - (((_DWORD)v2 + 8) & 0xFFFFFFF8) + 152) >> 3));
  v2[7] = a1;
  v2[9] = (*(__int64 (__fastcall **)(__int64, _QWORD))a1)(4096, *(_QWORD *)(a1 + 16));
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))a1)(4096, *(_QWORD *)(a1 + 16));
  v5 = (_QWORD *)v3[9];
  v3[10] = v4;
  if ( !v5 )
  {
LABEL_8:
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 8))(v4, *(_QWORD *)(a1 + 16));
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 8))(v3, *(_QWORD *)(a1 + 16));
    return nullptr;
  }
  if ( !v4 )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 8))(v5, *(_QWORD *)(a1 + 16));
    v4 = v3[10];
    goto LABEL_8;
  }
  *v5 = 0;
  *(_QWORD *)(v3[9] + 8LL) = 0;
  *(_QWORD *)v3[10] = 0;
  *(_QWORD *)(v3[10] + 8LL) = 0;
  v6 = dword_2CAD0B0;
  *((_DWORD *)v3 + 28) = -1;
  *((_OWORD *)v3 + 6) = -1;
  if ( !v6 )
  {
    sub_843440();
    dword_2CAD0B0 = 1;
    v8 = (unsigned __int64)&unk_2CAD06F & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(v8 + 32) = 0x8000000000000000LL;
    *(_DWORD *)v8 = 0x80000000;
    *(_DWORD *)(v8 + 16) = 0x7FFFFFFF;
    *(_QWORD *)(v8 + 48) = 0x7FFFFFFFFFFFFFFFLL;
  }
  return v3;
}

