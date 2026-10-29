__int64 __fastcall sub_BC4A40(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r12
  _QWORD *v15; // rbx
  __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *a1;
  v19[0] = a1;
  v4 = *(unsigned __int8 (**)(void))(v3 + 216);
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = (__int64 *)v19[0];
    v3 = *(_QWORD *)v19[0];
  }
  v5 = *(__int64 (**)())(v3 + 1160);
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v5)(a1, a2) )
      return 0;
    a1 = (__int64 *)v19[0];
    v3 = *(_QWORD *)v19[0];
  }
  v6 = *(__int64 (**)())(v3 + 1624);
  if ( v6 != sub_BA20C0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v6)(a1, a2) )
      return 0;
    a1 = (__int64 *)v19[0];
    v3 = *(_QWORD *)v19[0];
  }
  v7 = *(__int64 (**)())(v3 + 1632);
  if ( v7 != sub_BA20D0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v7)(a1, a2) )
      return 0;
    a1 = (__int64 *)v19[0];
    v3 = *(_QWORD *)v19[0];
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v3 + 56))(a1, a2[6]) )
  {
    v8 = a2[9];
    if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v8 >> 1) & 3) == 1 )
    {
LABEL_8:
      v9 = sub_BA55A0(v19, a2[7]);
      if ( (_BYTE)v9 )
      {
        if ( !sub_B6A370((__int64)a2) || (v11 = sub_B69600((__int64)a2)) == 0 || (unsigned __int8)sub_BABBC0(v19, v11) )
        {
          v12 = sub_9A4B10((__int64)a2);
          v14 = v13;
          v15 = (_QWORD *)v12;
          if ( (_QWORD *)v12 == v13 )
            return v9;
          while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19[0] + 32LL))(v19[0], *v15) )
          {
            if ( v14 == ++v15 )
              return v9;
          }
        }
      }
      return 0;
    }
    if ( !(_BYTE)byte_2CA2510 && __cxa_guard_acquire(&byte_2CA2510) )
    {
      qword_2CA2520 &= 0xFFFFFFFE00000000LL;
      qword_2CA2528 = 0;
      qword_2CA2538 = 0;
      __cxa_guard_release(&byte_2CA2510);
    }
    v16 = (__int64 *)(a2[9] & 0xFFFFFFFFFFFFFFF8LL);
    if ( (a2[9] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v16 = &qword_2CA2520;
      goto LABEL_24;
    }
    v17 = ((__int64)a2[9] >> 1) & 3;
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
            goto LABEL_36;
        }
      }
    }
    else if ( v17 == 2 )
    {
LABEL_36:
      v16 = (__int64 *)v16[1];
    }
LABEL_24:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v19[0] + 112LL))(v19[0], v16) )
      return 0;
    goto LABEL_8;
  }
  return 0;
}

