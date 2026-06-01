void __fastcall sub_10DB050(__int64 a1, _BYTE *a2, signed __int64 a3)
{
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  size_t v10; // rax
  const char *v11; // rdi
  unsigned __int8 *v12[15]; // [rsp+0h] [rbp-78h] BYREF

  if ( (_BYTE)byte_2CD87B8 || !__cxa_guard_acquire(&byte_2CD87B8) )
  {
    if ( a3 == 3 )
      goto LABEL_10;
  }
  else
  {
    v6 = sub_1105E80();
    v7 = sub_21BB380(v6, 299);
    v9 = *(unsigned int *)(*(_QWORD *)(v8 + 32) + 80LL * (unsigned int)(*(_DWORD *)(v7 + 40) - 1) + 4);
    v10 = 0;
    v11 = (const char *)(**(_QWORD **)(v8 + 8) + v9);
    if ( v11 )
      v10 = j__strlen(v11);
    qword_2CD87C0 = (__int64)v11;
    qword_2CD87C8 = v10;
    __cxa_guard_release(&byte_2CD87B8);
    if ( a3 == 3 )
    {
LABEL_10:
      if ( *(_WORD *)a2 == 25447 )
      {
        v5 = 0;
        if ( a2[2] == 99 )
          goto LABEL_16;
      }
      if ( *(_WORD *)a2 == 11111 )
      {
        v5 = 1;
        if ( a2[2] == 43 )
          goto LABEL_16;
      }
      if ( *(_WORD *)a2 == 28771 )
      {
        v5 = 2;
        if ( a2[2] == 112 )
          goto LABEL_16;
      }
      if ( *(_WORD *)a2 == 30820 && a2[2] == 99 )
      {
        v5 = 5;
        goto LABEL_16;
      }
LABEL_5:
      sub_FC70B0((__int64)v12, *(_QWORD *)a1, 0, 497);
      sub_AEC220(v12, (_BYTE *)qword_2CD87C0, qword_2CD87C8);
      sub_AEC220(v12, a2, a3);
      sub_AEA040((__int64)v12);
      return;
    }
  }
  if ( a3 != 2 )
  {
    if ( a3 == 5 && *(_DWORD *)a2 == 1851878502 )
    {
      v5 = 4;
      if ( a2[4] == 103 )
        goto LABEL_16;
    }
    goto LABEL_5;
  }
  v5 = 3;
  if ( *(_WORD *)a2 != 27747 )
    goto LABEL_5;
LABEL_16:
  *(_DWORD *)(a1 + 16) = v5;
}
