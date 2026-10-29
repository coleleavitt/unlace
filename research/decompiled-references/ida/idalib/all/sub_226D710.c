__int64 __fastcall sub_226D710(_QWORD *a1, const void *a2, size_t a3, char a4)
{
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r12
  void *v10; // rdi
  __int64 v12; // rax
  _WORD *v13; // rbp
  __int64 v14; // rdx

  if ( a3 )
  {
    v10 = (void *)a1[4];
    if ( a1[3] - (_QWORD)v10 < a3 )
    {
      v12 = sub_227BF10(a1, a2, a3);
      v13 = *(_WORD **)(v12 + 32);
      if ( *(_QWORD *)(v12 + 24) - (_QWORD)v13 <= 1u )
        goto LABEL_12;
    }
    else
    {
      memcpy(v10, a2, a3);
      v12 = (__int64)a1;
      v13 = (_WORD *)(a1[4] + a3);
      v14 = a1[3];
      a1[4] = v13;
      if ( (unsigned __int64)(v14 - (_QWORD)v13) <= 1 )
      {
LABEL_12:
        sub_227BF10(v12, ": ", 2);
        goto LABEL_2;
      }
    }
    *v13 = 8250;
    *(_QWORD *)(v12 + 32) += 2LL;
  }
LABEL_2:
  v6 = 2;
  if ( !a4 )
  {
    v6 = 0;
    if ( off_2CCA880((__int64)a1) )
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 24LL))(a1, 1, 1, 0);
  }
  v7 = a1[4];
  if ( (unsigned __int64)(a1[3] - v7) > 6 )
  {
    *(_DWORD *)v7 = 1869771365;
    v8 = (__int64)a1;
    *(_WORD *)(v7 + 4) = 14962;
    *(_BYTE *)(v7 + 6) = 32;
    a1[4] += 7LL;
    if ( v6 == 2 )
      return v8;
  }
  else
  {
    v8 = sub_227BF10(a1, "error: ", 7);
    if ( v6 == 2 )
      return v8;
  }
  if ( !off_2CCA880((__int64)a1) )
    return v8;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  return v8;
}
