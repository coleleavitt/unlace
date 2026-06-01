__int64 __fastcall sub_F1920(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  *(_QWORD *)a1 = &unk_236180;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  result = get_dbctx_id();
  v5 = xmmword_251628;
  *(_QWORD *)(a1 + 8) = result;
  v6 = qword_251620;
  if ( v5 )
  {
    v7 = (_QWORD *)qword_251620;
    v8 = 0;
    while ( *v7 )
    {
      ++v8;
      v7 += 2;
      if ( v5 == v8 )
        goto LABEL_6;
    }
    *v7 = a2;
    v7[1] = a1;
  }
  else
  {
LABEL_6:
    if ( *((_QWORD *)&xmmword_251628 + 1) < (unsigned __int64)(v5 + 1) )
    {
      result = qvector_reserve();
      qword_251620 = result;
      v5 = xmmword_251628;
      v6 = result;
    }
    v9 = v6 + 16 * v5;
    *(_OWORD *)v9 = 0;
    *(_QWORD *)&xmmword_251628 = xmmword_251628 + 1;
    *(_QWORD *)v9 = a2;
    *(_QWORD *)(v9 + 8) = a1;
  }
  return result;
}

