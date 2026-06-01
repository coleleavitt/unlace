__int64 __fastcall sub_13D79E0(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 *v4; // rbx
  char v5; // cl
  __int64 v6; // r13
  unsigned __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int8 *v12; // rdx
  unsigned __int8 *v13; // rcx
  unsigned __int8 *v14; // rax
  int v15; // [rsp+4h] [rbp-94h]
  unsigned __int8 *i; // [rsp+8h] [rbp-90h] BYREF
  _BYTE v17[136]; // [rsp+10h] [rbp-88h] BYREF

  v4 = a3;
  for ( i = a3; ; v4 = i )
  {
    while ( 1 )
    {
      while ( byte_23F75C0[*v4] )
        ++v4;
      i = v4;
      v5 = *v4;
      if ( *v4 != 63 && v5 != 92 )
      {
        if ( byte_23F75C0[(unsigned __int8)v5] )
          goto LABEL_23;
        if ( v5 != 36 )
          goto LABEL_8;
        v9 = 1;
        goto LABEL_19;
      }
      v8 = sub_13D1690(a1, v4, 0);
      v5 = v8;
      v9 = HIDWORD(v8);
      if ( byte_23F75C0[(unsigned __int8)v8] )
      {
        v4 = i;
        if ( HIDWORD(v8) == 1 )
          goto LABEL_23;
        goto LABEL_30;
      }
      v4 = i;
      if ( (_BYTE)v8 != 36 )
        break;
LABEL_19:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) & 1) == 0 )
        goto LABEL_11;
      if ( !*(_BYTE *)(a1 + 26) )
      {
        v15 = v9;
        sub_13D1530((__int64)v17, a1, (__int64)v4, 1218);
        sub_AEA040((__int64)v17);
        v4 = i;
        v9 = v15;
      }
      if ( v9 == 1 )
      {
LABEL_23:
        ++v4;
        goto LABEL_31;
      }
LABEL_30:
      v4 += sub_13D1690(a1, v4, a2) >> 32;
LABEL_31:
      i = v4;
    }
    if ( (_BYTE)v8 != 92 )
      break;
    if ( !(unsigned __int8)sub_13D7240(a1, (__int64 *)&i, HIDWORD(v8), a2) )
      goto LABEL_10;
LABEL_17:
    ;
  }
LABEL_8:
  if ( v5 < 0 && (unsigned __int8)sub_13D5920(a1, &i, a2) )
    goto LABEL_17;
LABEL_10:
  v4 = i;
LABEL_11:
  v6 = *(_QWORD *)(a1 + 152);
  *(_DWORD *)(a2 + 4) = (_DWORD)v4 - v6;
  *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v4 - (int)v6);
  *(_WORD *)(a2 + 16) = 6;
  *(_QWORD *)(a1 + 152) = v4;
  *(_QWORD *)(a2 + 8) = v6;
  if ( *(_BYTE *)(a1 + 26) )
    return 1;
  v10 = sub_1460F90(*(_QWORD *)(a1 + 8), a2);
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 )
  {
    if ( *(_QWORD *)(v11 + 760) )
    {
      v12 = i;
      if ( *(_DWORD *)(a1 + 128) + (_DWORD)i - *(_DWORD *)(a1 + 112) == *(_DWORD *)(v11 + 772) )
      {
        v13 = i + 1;
        *(_WORD *)(a2 + 16) = 3;
        i = v12 + 1;
        if ( (unsigned __int64)(v12 + 1) < *(_QWORD *)(a1 + 120) && byte_23F75C0[v12[1]] )
        {
          v14 = v12 + 2;
          do
          {
            v13 = v14;
            i = v14++;
          }
          while ( byte_23F75C0[*v13] );
        }
        *(_QWORD *)(a1 + 152) = v13;
        return 1;
      }
    }
  }
  if ( *(char *)(v10 + 3) >= 0 )
    return 1;
  return sub_1461090(v11, a2);
}
