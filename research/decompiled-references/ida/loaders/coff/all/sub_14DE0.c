__int64 __fastcall sub_14DE0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v5; // si
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int16 wide_byte; // ax
  __int64 v10; // rdx
  __int16 v11; // r12
  __int64 v12; // rax
  void (*v13)(); // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64, __int64); // rax
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, __int64, unsigned int); // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-20h]

  v5 = *(_WORD *)(a3 + 12);
  if ( v5 == 43 )
  {
    *(_WORD *)a2 = 4;
    v23 = *a1;
    v17 = a1[7];
    v14 = a1[4];
    v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v23 + 104);
    if ( v16 != sub_14A10 )
      goto LABEL_18;
    add_word(v14, v17);
    *(_DWORD *)(a2 + 4) &= ~4u;
    return 1;
  }
  else
  {
    if ( v5 <= 0x2Bu )
    {
      if ( !v5 )
      {
LABEL_11:
        *(_DWORD *)(a2 + 4) &= ~4u;
        return 1;
      }
      if ( v5 == 41 )
      {
        *(_DWORD *)(a2 + 4) |= 4u;
        *(_WORD *)a2 = 6;
        v6 = *a1;
        v7 = a1[4];
        v8 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 24);
        if ( v8 == sub_14A60 )
          wide_byte = get_wide_byte(v7);
        else
          wide_byte = v8((__int64)a1, v7);
        v10 = *a1;
        v11 = wide_byte;
        v12 = wide_byte & 0x1FF;
        v13 = *(void (**)())(*a1 + 16LL);
        if ( v13 != nullsub_2 )
        {
          v24 = v12;
          ((void (__fastcall *)(_QWORD *, __int64))v13)(a1, v12);
          v10 = *a1;
          v12 = v24;
        }
        v14 = a1[4];
        v15 = v12 + ((__int64)a1[7] >> 7);
        a1[7] = v15;
        v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v10 + 64);
        v17 = v11 & 0xFE00 | v15 & 0x1FF;
        if ( v16 == sub_14A70 )
        {
          put_byte(v14, v17);
          goto LABEL_11;
        }
LABEL_18:
        v16((__int64)a1, v14, v17);
        goto LABEL_11;
      }
      goto LABEL_15;
    }
    if ( v5 != 44 )
    {
LABEL_15:
      (*(void (__fastcall **)(_QWORD *))*a1)(a1);
      return 0;
    }
    *(_WORD *)a2 = 1;
    v19 = *a1;
    v20 = *((unsigned int *)a1 + 14);
    v21 = a1[4];
    v22 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int))(v19 + 96);
    if ( v22 != sub_14A00 )
    {
      v22((__int64)a1, v21, v20);
      goto LABEL_11;
    }
    add_byte(v21, v20);
    *(_DWORD *)(a2 + 4) &= ~4u;
    return 1;
  }
}

