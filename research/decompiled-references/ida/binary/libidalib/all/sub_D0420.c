unsigned __int64 __fastcall sub_D0420(TGroup *this, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  size_t v12; // rdx
  int v13; // edi
  unsigned __int64 result; // rax
  void *v15; // rax
  const void *v16; // rsi
  size_t n; // [rsp+8h] [rbp-40h]

  v10 = a5;
  v11 = operator new(0x90u);
  TView::TView(v11, a2);
  v12 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v11 + 72) = 0;
  *(_QWORD *)v11 = off_237000;
  *(_OWORD *)(v11 + 80) = 0;
  if ( v12 )
  {
    n = v12;
    v15 = (void *)qalloc_or_throw();
    v16 = *(const void **)a3;
    *(_QWORD *)(v11 + 72) = v15;
    *(_QWORD *)(v11 + 88) = n;
    memcpy(v15, v16, n);
    *(_QWORD *)(v11 + 80) = n;
  }
  *(_DWORD *)(v11 + 128) = v10;
  *(_DWORD *)(v11 + 96) = -2;
  v13 = dword_252588;
  *(_QWORD *)(v11 + 104) = -1;
  *(_DWORD *)(v11 + 132) = a4;
  *(_DWORD *)(v11 + 136) = a6;
  *(_BYTE *)(v11 + 140) = 1;
  *(_OWORD *)(v11 + 112) = 0;
  sub_CFEA0(v13, v10, v11 + 96);
  result = TFileList::getKey(TProgram::application, (const char *)v11);
  if ( result )
  {
    result = TGroup::insert(this, (TView *)v11);
    if ( (v10 & 0x80000000) == 0LL && v10 < (unsigned __int64)xmmword_2524F8 )
    {
      result = qword_2524F0 + 56 * v10;
      if ( result )
        *(_QWORD *)(result + 48) = v11;
    }
  }
  return result;
}

