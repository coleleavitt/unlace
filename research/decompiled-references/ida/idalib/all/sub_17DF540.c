unsigned __int64 __fastcall sub_17DF540(__int64 *a1, __int64 *a2, __int64 a3, unsigned __int64 a4, int *a5, _BYTE *a6)
{
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // eax
  _QWORD *v16; // rsi
  _QWORD *i; // r15
  __int64 v18; // rax
  _DWORD *v19; // r12
  __int64 *v20; // rdi
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdi
  _QWORD *v31; // r12
  void *v32; // rdi
  unsigned int v33; // r12d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // [rsp+0h] [rbp-58h]
  unsigned __int64 v41; // [rsp+10h] [rbp-48h]
  char v42; // [rsp+1Fh] [rbp-39h]

  v39 = sub_17A4490((__int64)a1, a4, (__int64)a5, a4, (__int64)a5, (__int64)a6);
  sub_17A32D0((__int64)a1, a5, a3, a2, 0, 0);
  v14 = a1[29];
  v15 = a5[4];
  if ( (*(_BYTE *)(v14 + 21) & 2) == 0 && *(char *)(v14 + 22) >= 0 )
  {
LABEL_5:
    if ( !v15 )
      goto LABEL_38;
    goto LABEL_6;
  }
  if ( !v15 )
    goto LABEL_38;
  v16 = *((_QWORD **)a5 + 1);
  v14 = v15;
  v42 = 0;
  for ( i = v16; ; i = v31 )
  {
    v31 = i + 1;
    if ( (*(_BYTE *)((*i & 0xFFFFFFFFFFFFFFF8LL) + 8) & 6) == 0 )
      break;
    v41 = *i & 0xFFFFFFFFFFFFFFF8LL;
    if ( (unsigned __int8)sub_1A427C0(a1, v41, 0) )
      goto LABEL_39;
    if ( (*(_BYTE *)(v41 + 28) & 0x7Fu) - 64 <= 2 )
    {
      v22 = (__int64 *)(*(_QWORD *)(a4 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a4 + 80) & 4) != 0 )
      {
        v23 = v22[1];
        v24 = (__int64 *)(*(_QWORD *)(v41 + 80) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v41 + 80) & 4) != 0 )
          goto LABEL_41;
LABEL_20:
        v25 = *v24;
      }
      else
      {
        v23 = *v22;
        v24 = (__int64 *)(*(_QWORD *)(v41 + 80) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v41 + 80) & 4) == 0 )
          goto LABEL_20;
LABEL_41:
        v25 = v24[1];
      }
      v26 = *(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v25) & 7;
      if ( v26 == (*(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                 | ((unsigned __int8)*(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v23) & 7)
        || sub_B7A5B0((_QWORD *)v41, 1, v26, v41, v12) && sub_B7A5B0((_QWORD *)a4, 0, v27, v28, v12) )
      {
LABEL_39:
        v14 = (unsigned int)a5[4];
        v16 = *((_QWORD **)a5 + 1);
        v15 = a5[4];
        goto LABEL_27;
      }
    }
    v29 = (unsigned int)a5[4];
    v16 = *((_QWORD **)a5 + 1);
    v30 = v16[v29 - 1];
    v14 = (unsigned int)(v29 - 1);
    v15 = v14;
    a5[4] = v14;
    if ( i != &v16[v14] )
    {
      *i = v30;
      v14 = (unsigned int)a5[4];
      v16 = *((_QWORD **)a5 + 1);
      v15 = a5[4];
    }
    v42 = 1;
    v31 = i;
LABEL_27:
    v11 = (__int64)&v16[v14];
    if ( v31 == (_QWORD *)v11 )
      goto LABEL_31;
LABEL_28:
    ;
  }
  v11 = (__int64)&v16[v14];
  if ( v31 != (_QWORD *)v11 )
    goto LABEL_28;
LABEL_31:
  if ( !v42 )
    goto LABEL_5;
  v14 = (unsigned int)*a5;
  if ( !v15 )
  {
    if ( (_DWORD)v14 != 1 )
      *a5 = 0;
    v32 = *((void **)a5 + 11);
    if ( v32 )
    {
LABEL_36:
      sub_1A39780(v32);
      *((_QWORD *)a5 + 11) = 0;
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  v33 = 0;
  if ( (_DWORD)v14 == 5 )
    v33 = a5[1];
  *a5 = 2;
  sub_1A43500(a5);
  if ( *a5 == 5 )
  {
    a5[1] = v33;
    v15 = a5[4];
    goto LABEL_5;
  }
  v32 = *((void **)a5 + 11);
  if ( v32 )
    goto LABEL_36;
LABEL_37:
  if ( !a5[4] )
  {
LABEL_38:
    sub_1669300((__int64)a1, a4, v14, v11, v12, v13);
    goto LABEL_7;
  }
LABEL_6:
  *a6 = 1;
  sub_17C72D0(a1, (__int64)a2, a4, (__int64)a5);
LABEL_7:
  if ( v39 && !*a6 )
    sub_17DD7F0((__int64)a1, a4, v39, (__int64)a5);
  v18 = *(_QWORD *)(a4 + 40);
  if ( (v18 & 7) == 0 )
  {
    v19 = (_DWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v18 & 0xFFFFFFFFFFFFFFF8LL) != 0 && *(char *)(a4 + 28) >= 0 )
    {
      v20 = (__int64 *)(*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
      {
        if ( (*(_BYTE *)(sub_B8EAA0(*v20) + 8) & 0x7F) != 0 )
          return a4;
      }
      else if ( (*(_BYTE *)(sub_B8EAA0((__int64)v20) + 8) & 0x7F) != 0 )
      {
        return a4;
      }
      switch ( (unsigned __int16)(*v19 >> 9) )
      {
        case 0x1Du:
          *(_QWORD *)(a1[31] + 1648) = a4;
          break;
        case 0x1Eu:
          *(_QWORD *)(a1[31] + 1656) = a4;
          break;
        case 0x1Fu:
          *(_QWORD *)(a1[31] + 1664) = a4;
          break;
        case 0x20u:
          *(_QWORD *)(a1[31] + 1672) = a4;
          break;
        case 0x21u:
        case 0x22u:
          v34 = sub_B323B0(a1[31], 0, 0);
          sub_B8CC60(a4, v34, v35, v36, v37, v38);
          break;
        default:
          return a4;
      }
    }
  }
  return a4;
}
