_QWORD *__fastcall sub_2223360(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v6; // r13d
  _QWORD **v7; // rax
  _QWORD *v8; // r15
  _BYTE *v9; // rdi
  _QWORD **v11; // [rsp+0h] [rbp-D8h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+18h] [rbp-C0h]
  _BYTE v15[184]; // [rsp+20h] [rbp-B8h] BYREF

  v6 = sub_985B10(*(_QWORD **)a2, *(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8));
  v7 = (_QWORD **)(*(_QWORD *)a1 + 8LL * (v6 & (*(_DWORD *)(a1 + 8) - 1)));
  v8 = *v7;
  *a3 = 0;
  v11 = v7;
  ptr = v15;
  v14 = 0x2000000000LL;
  if ( !v8 || ((unsigned __int8)v8 & 1) != 0 )
  {
    v9 = v15;
LABEL_6:
    v8 = nullptr;
    *a3 = v11;
  }
  else
  {
    while ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, __int64, _QWORD, void **))(a4 + 8))(
               a1,
               v8,
               a2,
               v6,
               &ptr) )
    {
      v8 = (_QWORD *)*v8;
      LODWORD(v14) = 0;
      if ( (unsigned __int8)v8 & 1 | (v8 == nullptr) )
      {
        v9 = ptr;
        goto LABEL_6;
      }
    }
    v9 = ptr;
  }
  if ( v9 != v15 )
    free(v9);
  return v8;
}
