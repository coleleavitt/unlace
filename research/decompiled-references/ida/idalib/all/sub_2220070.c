_QWORD *__fastcall sub_2220070(_QWORD *a1, __int64 **a2, __int64 *a3)
{
  __int64 *v6; // rax
  __int64 *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rax

  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, void *))(**a2 + 48))(*a2, &unk_2D0AA9C) )
  {
    v8 = *a2;
    v9 = *a3;
    *a2 = nullptr;
    (*(void (__fastcall **)(__int64 *, __int64))(*v8 + 16))(v8, v9);
    v10 = *a3;
    v11 = *(_BYTE **)(*a3 + 32);
    if ( *(_BYTE **)(*a3 + 24) == v11 )
    {
      sub_227BF10(v10, "\n", 1);
    }
    else
    {
      *v11 = 10;
      ++*(_QWORD *)(v10 + 32);
    }
    v12 = *v8;
    *a1 = 0;
    (*(void (__fastcall **)(__int64 *))(v12 + 8))(v8);
    return a1;
  }
  else
  {
    v6 = *a2;
    *a2 = nullptr;
    *a1 = v6;
    return a1;
  }
}
