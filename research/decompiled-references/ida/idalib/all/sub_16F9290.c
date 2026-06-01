__int64 __fastcall sub_16F9290(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __int64 a8)
{
  int v8; // r14d
  unsigned int v9; // r13d
  unsigned __int64 v11; // rbx
  __int64 **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // rax
  int v27; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v28; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v29[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v31; // [rsp+40h] [rbp-A8h] BYREF
  char v32; // [rsp+98h] [rbp-50h]
  unsigned int v33; // [rsp+A0h] [rbp-48h]
  char v34; // [rsp+A4h] [rbp-44h]

  LOBYTE(v8) = a5;
  v9 = a4;
  v11 = (unsigned __int64)a2;
  if ( !a6 )
    goto LABEL_18;
  v12 = *(__int64 ***)a6;
  a4 = *(_QWORD *)a6 + 8LL * *(unsigned int *)(a6 + 8);
  if ( *(_QWORD *)a6 < a4 )
  {
    while ( 1 )
    {
      a2 = *v12;
      if ( *((_WORD *)*v12 + 18) == 351 )
        break;
      if ( (__int64 **)a4 == ++v12 )
        goto LABEL_18;
    }
    if ( (__int64 **)a4 != v12 )
      goto LABEL_7;
LABEL_18:
    if ( !(_BYTE)a5 )
    {
      v16 = sub_F6A600(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, a3 & 0xFFFFFFFFFFFFFFF0LL, a4, a5);
      if ( HIBYTE(v16) )
      {
        if ( !(_BYTE)v16 )
        {
          a2 = (__int64 *)v11;
          if ( (unsigned __int8)sub_16B6AF0(a1 + 31, (_WORD *)v11) )
          {
            v8 = 0;
            sub_168B9F0((__int64)v29, a1 + 1, v9, 0x1C00u, 0);
LABEL_32:
            v27 = v8;
            v20 = sub_1587D10((__int64)v29, &v27);
            a2 = &v28;
            v28 = sub_EEC8C0(v11, (__int64)&v27, a7);
            sub_1587DB0(v20, &v28);
            sub_15F7200(v29);
            goto LABEL_8;
          }
        }
      }
    }
    goto LABEL_8;
  }
  if ( *(_QWORD *)a6 == a4 )
    goto LABEL_18;
  while ( 1 )
  {
    a2 = *(__int64 **)a4;
    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 351 )
      break;
    a4 += 8LL;
    if ( v12 == (__int64 **)a4 )
      goto LABEL_18;
  }
LABEL_7:
  a2 = (__int64 *)v11;
  if ( (unsigned __int8)sub_16B6AF0(a1 + 31, (_WORD *)v11) )
  {
    v8 = (unsigned __int8)v8;
    sub_168B9F0((__int64)v29, a1 + 1, v9, 0x1C00u, 0);
    goto LABEL_32;
  }
LABEL_8:
  if ( a8 && (sub_B77890(a8) & 0xFFFFFFFD) == 1 )
  {
    v17 = *(_QWORD *)(a8 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v18 = *(_QWORD *)v17;
    if ( *(_BYTE *)(*(_QWORD *)v17 + 16LL) == 26 )
    {
      if ( (unsigned int)sub_F63060(v18) != 2 )
        goto LABEL_10;
    }
    else
    {
      v19 = sub_F63050(v18, a2, v13, v14);
      if ( (unsigned int)sub_F63060(v19) != 2 )
        goto LABEL_10;
    }
    if ( (unsigned __int8)sub_16B6AF0(a1 + 31, (_WORD *)v11) )
    {
      sub_168B9F0((__int64)v29, a1 + 1, v9, 0x1C3Fu, 0);
      if ( v32 )
      {
        sub_16B73F0(&v31, a8);
      }
      else if ( v34 )
      {
        v24 = sub_168B9E0(v29);
        v25 = v30;
        if ( v30 )
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
        v28 = v25;
        v26 = sub_1587BC0(v24, &v28, (__int64)&v28, v21, v22, v23);
        sub_16B73F0((unsigned __int8 **)(*v26 + 32LL * v33 + 8), a8);
      }
      LODWORD(v28) = (*(_BYTE *)(a1[29] + 1) & 0x10) != 0;
      sub_1588370((__int64)v29, (unsigned int *)&v28);
      sub_15F7200(v29);
    }
  }
LABEL_10:
  if ( v11 && sub_F65F60(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    sub_168B9F0((__int64)v29, a1 + 1, v9, 0x1560u, 0);
    LODWORD(v28) = 1;
    sub_1587D10((__int64)v29, (int *)&v28);
    sub_15F7200(v29);
  }
  result = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[31] + 17448) + 248LL) - 23);
  if ( (unsigned int)result <= 1 )
    return sub_1C0D9F0(a1[96], *(_QWORD *)(v11 + 8), v9);
  return result;
}
