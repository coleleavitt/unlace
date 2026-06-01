__int64 __fastcall sub_35A0C0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, const char *a5, const char *a6)
{
  __int64 result; // rax
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned int final_alignment; // r12d
  unsigned int radix; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-E0h]
  __int64 v20; // [rsp+10h] [rbp-D8h]
  __int64 v21; // [rsp+18h] [rbp-D0h]
  _BYTE v22[136]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+A8h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  result = sub_359FE0((__int64)a1, a3);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[60] + 248LL), 32);
    v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v11 != sub_3598B0 )
    {
      v11(a1, 32);
      goto LABEL_6;
    }
    v12 = a1[4];
    if ( v12 )
    {
      v15 = v12 + 1;
      v14 = a1[4];
      v13 = a1[3];
      --v12;
      if ( a1[5] >= v15 )
        goto LABEL_5;
    }
    else
    {
      v13 = a1[3];
      v14 = 1;
      v15 = 2;
      if ( a1[5] >= 2u )
      {
LABEL_5:
        a1[4] = v15;
        *(_BYTE *)(v13 + v12) = 32;
        *(_BYTE *)(a1[3] + v14) = 0;
LABEL_6:
        final_alignment = get_final_alignment(a4);
        radix = get_radix(a3, 0);
        btoa32(v22, 136, final_alignment, radix);
        (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v22, 31);
        return sub_359C80(a1, a6, a5);
      }
    }
    v21 = v12;
    v20 = v14;
    v19 = v15;
    v18 = qvector_reserve(a1 + 3, v13, v15, 1);
    v12 = v21;
    v14 = v20;
    a1[3] = v18;
    v15 = v19;
    v13 = v18;
    goto LABEL_5;
  }
  return result;
}

