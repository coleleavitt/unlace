__int64 __fastcall sub_2778A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  *(_QWORD *)a1 = &unk_8711E8;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  result = get_dbctx_id();
  v5 = xmmword_8CC778;
  *(_QWORD *)(a1 + 8) = result;
  v6 = qword_8CC770;
  if ( v5 )
  {
    v7 = (_QWORD *)qword_8CC770;
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
    if ( *((_QWORD *)&xmmword_8CC778 + 1) < (unsigned __int64)(v5 + 1) )
    {
      result = qvector_reserve(&qword_8CC770, qword_8CC770, v5 + 1, 16);
      qword_8CC770 = result;
      v5 = xmmword_8CC778;
      v6 = result;
    }
    v9 = v6 + 16 * v5;
    *(_OWORD *)v9 = 0;
    *(_QWORD *)&xmmword_8CC778 = xmmword_8CC778 + 1;
    *(_QWORD *)v9 = a2;
    *(_QWORD *)(v9 + 8) = a1;
  }
  return result;
}
