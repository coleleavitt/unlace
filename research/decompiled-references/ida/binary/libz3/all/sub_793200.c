__int64 __fastcall sub_793200(_QWORD *a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(); // rax
  __int64 **v11; // rdx
  __int64 **v12; // r13
  __int64 **v13; // r14
  __int64 (__fastcall *v14)(); // rax
  char v15; // al
  __int64 *v16; // rbx
  __int64 v17; // r15
  __int16 v18; // ax
  int v19; // eax
  std::ostream *v21; // rsi
  std::ostream *v22; // rax
  char v23[8]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v24[8]; // [rsp+18h] [rbp-40h] BYREF

  result = a1[277];
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (_DWORD)result )
      return result;
  }
  if ( *((_BYTE *)a1 + 1117) )
    return result;
  v6 = (__int64 *)a1[299];
  if ( !v6 || (v7 = &v6[*((unsigned int *)v6 - 1)], v6 == v7) )
  {
LABEL_12:
    v24[0] = 0;
    sub_1360C00(v23, a2, v24);
    sub_18572D0(v24);
    sub_1360B80(v23, 1);
    v11 = (__int64 **)a1[221];
    if ( !v11 )
      return sub_13606C0(v23);
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v12 == v11 )
      return sub_13606C0(v23);
    v13 = (__int64 **)a1[221];
    while ( 1 )
    {
      v16 = *v13;
      v17 = **v13;
      if ( !(unsigned __int8)sub_15D2CB0(a1[18], v17) )
        goto LABEL_20;
      v18 = *(_WORD *)(v17 + 4);
      if ( v18 )
      {
        if ( v18 == 2 )
          goto LABEL_20;
      }
      else if ( (*(_BYTE *)(v17 + 30) & 2) != 0 )
      {
        goto LABEL_20;
      }
      v14 = *(__int64 (__fastcall **)())(*a1 + 488LL);
      if ( v14 == sub_795570 )
      {
        if ( !*((_BYTE *)a1 + 168) )
          goto LABEL_25;
        v15 = *((_BYTE *)v16 + 16);
      }
      else
      {
        v15 = ((__int64 (__fastcall *)(_QWORD *, __int64 *))v14)(a1, v16);
      }
      if ( v15 )
      {
LABEL_25:
        v19 = *((_DWORD *)v16 + 7);
        if ( v19 != 0x7FFFFFFF )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * (unsigned int)(2 * v19)) == 1
             ? sub_13742D0(a2, v17)
             : (unsigned __int8)sub_1374270(a2, v17) )
          {
            sub_180B130(a2);
            if ( (unsigned __int8)sub_186A530(a3) )
            {
              sub_186A4C0(a3);
              v21 = (std::ostream *)sub_180B150(a2, v17);
              sub_792BA0(a1, v21, a2, v16);
              sub_186A500(a1, v21);
            }
            else
            {
              v22 = (std::ostream *)sub_180B150(a2, v17);
              sub_792BA0(a1, v22, a2, v16);
            }
            exit(1);
          }
        }
      }
LABEL_20:
      if ( v12 == ++v13 )
        return sub_13606C0(v23);
    }
  }
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 )
    {
      v9 = v8 + 32;
      v10 = *(__int64 (__fastcall **)())(*(_QWORD *)(v8 + 32) + 56LL);
      if ( v10 != sub_795560 )
      {
        result = ((__int64 (__fastcall *)(__int64))v10)(v9);
        if ( (_BYTE)result )
          return result;
      }
    }
    if ( v7 == ++v6 )
      goto LABEL_12;
  }
}

