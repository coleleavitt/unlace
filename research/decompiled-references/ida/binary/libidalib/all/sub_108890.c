void *__fastcall sub_108890(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  void *result; // rax
  __int64 v5; // r12
  int v7; // eax
  __int64 v8; // rdi
  void (*v9)(); // rax
  const char *v10; // rsi

  result = &unk_254269;
  if ( unk_254269 )
    return result;
  v5 = *(_QWORD *)(a4 + 16);
  v7 = *(_DWORD *)(a1 + 112);
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 64) )
    {
      v5 = 0;
      if ( (v7 & 0x40000) == 0 )
        goto LABEL_8;
      goto LABEL_16;
    }
    v5 = *(_QWORD *)(v5 + 56);
    if ( v5 && (v7 & 2) == 0 )
    {
      *(_DWORD *)(v5 + 880) = 0;
      v7 = *(_DWORD *)(a1 + 112);
    }
  }
  if ( (v7 & 0x40000) == 0 )
  {
LABEL_8:
    if ( a2 == -1 )
    {
      sub_19AEE0(a4, 2);
      v10 = s1;
      if ( !*(_QWORD *)(a1 + 48) )
        goto LABEL_18;
      goto LABEL_20;
    }
    v8 = a4;
    result = (void *)sub_19AEE0(a4, 0);
    if ( a2 > 0 )
      goto LABEL_10;
LABEL_17:
    v10 = s1;
    if ( !*(_QWORD *)(a1 + 48) )
    {
LABEL_18:
      sub_8F740((__int64)"Command %s failed\n", v10);
      return (void *)TScreen::makeBeep(nullptr);
    }
LABEL_20:
    v10 = *(const char **)(a1 + 40);
    goto LABEL_18;
  }
LABEL_16:
  v8 = 0x40000000000000LL;
  result = (void *)mark_builtin_widgets();
  if ( a2 <= 0 )
    goto LABEL_17;
LABEL_10:
  if ( (*(_BYTE *)(a1 + 114) & 1) != 0 )
  {
    if ( v5 )
    {
      v9 = *(void (**)())(*(_QWORD *)v5 + 688LL);
      if ( v9 != nullsub_41 )
      {
        v8 = v5;
        ((void (__fastcall *)(__int64, __int64, __int64))v9)(v5, 1, a1);
      }
    }
    sub_154600(v8);
    return (void *)sub_154630();
  }
  return result;
}

