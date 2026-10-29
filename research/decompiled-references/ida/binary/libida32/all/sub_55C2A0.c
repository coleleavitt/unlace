__int64 __fastcall sub_55C2A0(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        unsigned __int8 a8)
{
  __int64 v10; // rax
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // r14
  unsigned int radix; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 (__fastcall *v17)(_QWORD *, char); // rax
  __int64 v18; // rdx
  _QWORD v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  if ( a5 < 0 )
    v10 = *(_QWORD *)(a3 + 12);
  else
    v10 = *((_QWORD *)a3 + 1);
  v19[0] = v10;
  if ( (a5 & 4) != 0 )
  {
    if ( v10 >= 0 )
    {
      if ( v10 && a6 )
        goto LABEL_7;
LABEL_16:
      if ( (a5 & 3) == 2 )
      {
        v17 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
        if ( v17 == sub_558570 )
        {
          sub_558320((_QWORD *)a1, 43);
          if ( !a7 )
            goto LABEL_18;
          goto LABEL_29;
        }
        v17((_QWORD *)a1, 43);
      }
      if ( !a7 )
        goto LABEL_18;
LABEL_29:
      v19[0] = ~v19[0];
      sub_55BEB0((_QWORD *)a1, a2);
      goto LABEL_18;
    }
    if ( a6 )
      goto LABEL_16;
  }
  else if ( !v10 || !a6 )
  {
    goto LABEL_16;
  }
  if ( v10 == 0x8000000000000000LL )
    goto LABEL_16;
LABEL_7:
  v19[0] = -v10;
  v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
  if ( v11 == sub_558570 )
  {
    sub_558320((_QWORD *)a1, 45);
    if ( (*(_BYTE *)(a1 + 146) & 1) == 0 )
      goto LABEL_9;
LABEL_19:
    v12 = *(_QWORD *)(a1 + 528);
    if ( !(unsigned __int8)is_char(v12, *a3) )
      goto LABEL_10;
    goto LABEL_20;
  }
  v11((_QWORD *)a1, 45);
LABEL_18:
  if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
    goto LABEL_19;
LABEL_9:
  v12 = *(unsigned int *)(a1 + 60);
  if ( !(unsigned __int8)is_char(v12, *a3) )
  {
LABEL_10:
    radix = get_radix(v12, *a3);
    sub_56F930(a4, 1024, v19[0], 8, radix, a8);
    v14 = *(_DWORD *)(a1 + 56);
    if ( v14 )
    {
      v15 = 5 * (unsigned int)(v14 == 2) + 13;
    }
    else
    {
      v15 = 31;
      if ( (~(_DWORD)v12 & 0x600) == 0 )
        v15 = 12;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a4, v15);
    return (unsigned int)-(*(_DWORD *)(a1 + 56) == 2);
  }
LABEL_20:
  if ( !(unsigned __int8)sub_55BDF0(a4, v19, 8) )
  {
    *(_DWORD *)(a1 + 56) = 2;
    goto LABEL_10;
  }
  v18 = 30;
  if ( (~(_DWORD)v12 & 0x600) == 0 )
    v18 = 10;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a4, v18);
  return 0;
}

