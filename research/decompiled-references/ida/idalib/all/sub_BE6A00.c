__int64 __fastcall sub_BE6A00(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r12
  _QWORD *v14; // rbx
  __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v19[0] = a1;
  if ( !(unsigned __int8)sub_BC9800(v19, a2) )
    return 0;
  v3 = v19[0];
  v4 = *v19[0];
  v5 = *(__int64 (**)())(*v19[0] + 1248);
  if ( v5 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v19[0], a2) )
      return 0;
    v3 = v19[0];
    v4 = *v19[0];
  }
  v6 = *(__int64 (**)())(v4 + 1320);
  if ( v6 != sub_BC5BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v3, a2) )
      return 0;
    v3 = v19[0];
    v4 = *v19[0];
  }
  v7 = *(__int64 (**)())(v4 + 1432);
  if ( v7 != sub_BC5C80 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(v3, a2) )
    return 0;
  v8 = sub_BC9420(v19, a2);
  if ( !(_BYTE)v8 )
    return 0;
  v9 = *(_QWORD *)(a2 + 72);
  if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) != 0 && ((v9 >> 1) & 3) != 1 )
  {
    if ( !(_BYTE)byte_2CCC440 && __cxa_guard_acquire(&byte_2CCC440) )
    {
      qword_2CCC460 &= 0xFFFFFFFE00000000LL;
      qword_2CCC468 = 0;
      qword_2CCC478 = 0;
      __cxa_guard_release(&byte_2CCC440);
    }
    v16 = (__int64 *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v16 = &qword_2CCC460;
      goto LABEL_20;
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
            goto LABEL_32;
        }
      }
    }
    else if ( v17 == 2 )
    {
LABEL_32:
      v16 = (__int64 *)v16[1];
    }
LABEL_20:
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v19[0] + 112))(v19[0], v16) )
      return 0;
  }
  if ( !sub_B8E0B0(a2) || (v10 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(v19, v10) )
  {
    v11 = sub_9C8850(a2);
    v13 = v12;
    v14 = (_QWORD *)v11;
    if ( (_QWORD *)v11 == v12 )
      return v8;
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v19[0] + 32))(v19[0], *v14) )
    {
      if ( v13 == ++v14 )
        return v8;
    }
  }
  return 0;
}
