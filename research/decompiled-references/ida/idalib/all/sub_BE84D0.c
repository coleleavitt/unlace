__int64 __fastcall sub_BE84D0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rbp
  _QWORD *v14; // rbx
  __int64 result; // rax
  __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v19 = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v19;
    v3 = (_QWORD *)*v19;
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v19;
    v3 = (_QWORD *)*v19;
  }
  v6 = (__int64 (*)())v3[190];
  if ( v6 != sub_BC5D30 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v19;
    v3 = (_QWORD *)*v19;
  }
  v7 = (__int64 (*)())v3[202];
  if ( v7 != sub_BC5DF0 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
    return 0;
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64))(*v19 + 128LL))(v19, v8 & 0xFFFFFFFFFFFFFFF0LL) )
      return 0;
  }
  if ( (*(_BYTE *)(a2 + 60) & 4) != 0
    && a2 != -80
    && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v19 + 152LL))(v19, a2 + 80) )
  {
    return 0;
  }
  v9 = *(_QWORD *)(a2 + 72);
  if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) != 0 && ((v9 >> 1) & 3) != 1 )
  {
    if ( !(_BYTE)byte_2CCC480 && __cxa_guard_acquire(&byte_2CCC480) )
    {
      qword_2CCC4A0 &= 0xFFFFFFFE00000000LL;
      qword_2CCC4A8 = 0;
      qword_2CCC4B8 = 0;
      __cxa_guard_release(&byte_2CCC480);
    }
    v16 = (__int64 *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v16 )
    {
      v16 = &qword_2CCC4A0;
      goto LABEL_25;
    }
    v17 = (*(__int64 *)(a2 + 72) >> 1) & 3;
    if ( v17 == 1 )
    {
      v18 = v16[9];
      v16 = nullptr;
      if ( v18 )
      {
        v16 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v18 >> 1) & 3) == 2 )
        {
          if ( v16 )
            goto LABEL_38;
        }
      }
    }
    else if ( v17 == 2 )
    {
LABEL_38:
      v16 = (__int64 *)v16[1];
    }
LABEL_25:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *))(*v19 + 112LL))(v19, v16) )
      goto LABEL_12;
    return 0;
  }
LABEL_12:
  if ( sub_B8E0B0(a2) )
  {
    v10 = sub_B8D340(a2);
    if ( v10 )
    {
      if ( !(unsigned __int8)sub_BCF900(&v19, v10) )
        return 0;
    }
  }
  v11 = sub_9C8850(a2);
  v13 = v12;
  v14 = (_QWORD *)v11;
  if ( (_QWORD *)v11 == v12 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v19 + 32LL))(v19, *v14);
    if ( !(_BYTE)result )
      break;
    if ( v13 == ++v14 )
      return 1;
  }
  return result;
}
