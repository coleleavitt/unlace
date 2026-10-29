__int64 __fastcall sub_DBBCD0(_QWORD *a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rax
  _QWORD *v6; // rax
  __int64 v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = (_QWORD *)a1[4];
  if ( v3 )
  {
    if ( *((_DWORD *)v3 - 1) )
      goto LABEL_3;
    if ( !*((_DWORD *)v3 - 2) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v7, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v7);
      sub_233E40((__int64)v7);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  else
  {
    v6 = (_QWORD *)sub_186B270(0x68u);
    *v6 = 2;
    v3 = v6 + 1;
    a1[4] = v3;
  }
  ++*((_DWORD *)v3 - 1);
  *((_OWORD *)v3 + 1) = 0;
  *v3 = 0;
  *((_DWORD *)v3 + 2) = 0;
  *((_OWORD *)v3 + 2) = 0;
LABEL_3:
  sub_DBAA40(a1, a2);
  v4 = a1[2];
  if ( v4 )
    return (unsigned int)(*(_DWORD *)(v4 - 4) - 1);
  else
    return 0xFFFFFFFFLL;
}

