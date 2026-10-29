__int64 __fastcall sub_DD7380(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // eax
  int v4; // eax
  int v6; // r13d
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // esi
  __int64 *v15; // rax
  unsigned int v16; // eax
  _QWORD *exception; // r15
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // r15
  _QWORD *v28; // r15
  int v29; // [rsp+0h] [rbp-58h]
  int v30; // [rsp+8h] [rbp-50h]
  int v31; // [rsp+10h] [rbp-48h]
  __int64 v32[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a1[176];
  *((_DWORD *)a1 + 378) = 0;
  if ( v2 )
    v3 = *(_DWORD *)(v2 - 4);
  else
    v3 = 0;
  *((_DWORD *)a1 + 517) = v3;
  v4 = sub_DDB0A0((int)a1 + 16, v29, v30, v31, v32[0]);
  *((_DWORD *)a1 + 356) = v4;
  *((_DWORD *)a1 + 524) = 0;
  while ( v4 == 1 )
  {
    v6 = *((_DWORD *)a1 + 9);
    v7 = *((_DWORD *)a1 + 10);
    sub_DC0980(a1);
    sub_DBF580(*((unsigned int *)a1 + 356), (__int64)"invalid command, symbol expected");
    v8 = a1[6];
    if ( v8 == a1[231] )
    {
      sub_DD3990(a1);
      goto LABEL_28;
    }
    if ( v8 == a1[237] )
    {
      sub_DC3EE0(a1);
      goto LABEL_28;
    }
    if ( v8 == a1[238] )
    {
      sub_DC3CF0(a1);
      goto LABEL_28;
    }
    if ( v8 == a1[232] )
    {
      if ( *((_DWORD *)a1 + 356) != 9 )
        sub_DC0980(a1);
      v9 = sub_DC2710(a1)[1];
      if ( v9 )
        v10 = *(_DWORD *)(v9 - 4);
      else
        v10 = 0;
      sub_DD4000(a1);
      v11 = *a1;
      v12 = sub_DC2710(a1)[1] + 8LL * v10;
      v13 = sub_DC2710(a1)[1];
      if ( v13 )
        v14 = *(_DWORD *)(v13 - 4);
      else
        v14 = 0;
      sub_E09F90(v11, v14 - v10, v12);
      if ( *((_DWORD *)a1 + 356) != 9 )
        sub_DC0980(a1);
      v15 = sub_DC2710(a1);
      sub_39BEE0(v15, v10);
    }
    else
    {
      if ( v8 == a1[245] )
      {
        if ( *((_DWORD *)a1 + 356) != 9 )
          sub_DC0980(a1);
        sub_DC1910((__int64)a1, 1u);
        sub_E01940(*a1);
        sub_DBF590(*((unsigned int *)a1 + 356), (__int64)"invalid push command, ')' expected");
      }
      else if ( v8 == a1[246] )
      {
        if ( *((_DWORD *)a1 + 356) != 9 )
          sub_DC0980(a1);
        v16 = sub_DC1910((__int64)a1, 1u);
        sub_E0ACB0(*a1, v16);
        sub_DBF590(*((unsigned int *)a1 + 356), (__int64)"invalid pop command, ')' expected");
      }
      else
      {
        if ( v8 == a1[233] )
        {
          sub_DD6280(a1, 1);
          goto LABEL_28;
        }
        if ( v8 == a1[234] )
        {
          sub_DD4160((_QWORD **)a1);
          goto LABEL_28;
        }
        if ( v8 == a1[239] )
        {
          sub_DCCA60(a1);
          goto LABEL_28;
        }
        if ( v8 == a1[240] )
        {
          sub_DC1700(a1);
          goto LABEL_28;
        }
        if ( v8 == a1[241] )
        {
          if ( *((_DWORD *)a1 + 356) == 9
            || (sub_DC0980(a1), *((_DWORD *)a1 + 356) != 4)
            || (v21 = a1[6], v21 == a1[254])
            || v21 == a1[220] )
          {
            exception = __cxa_allocate_exception(0x30u);
            sub_305660(exception, "invalid sort declaration, symbol expected");
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
          }
          v22 = *a1;
          v32[0] = a1[6];
          if ( sub_DF89E0(v22, v32) )
          {
            v27 = __cxa_allocate_exception(0x30u);
            sub_305660(v27, "invalid sort declaration, sort already declared/defined");
            __cxa_throw(v27, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
          }
          v23 = *((unsigned int *)a1 + 356);
          if ( (_DWORD)v23 != 9 )
          {
            sub_DC0980(a1);
            v23 = *((unsigned int *)a1 + 356);
          }
          sub_DBF590(v23, (__int64)"invalid sort declaration, ')' expected");
          v24 = *a1;
          v25 = *(_QWORD *)(*a1 + 312LL);
          if ( !v25 )
          {
            sub_DFBCB0(*a1);
            v25 = *(_QWORD *)(v24 + 312);
          }
          v26 = sub_DE1840(v25, v32);
          sub_DFAB80(*a1, v26 + 24, v26);
        }
        else
        {
          if ( v8 == a1[242] )
          {
            sub_DCCD40(a1);
            goto LABEL_28;
          }
          if ( v8 == a1[243] )
          {
            sub_DCC3A0(a1);
            goto LABEL_28;
          }
          if ( v8 == a1[247] )
          {
            sub_DD4340((int)a1);
            goto LABEL_28;
          }
          if ( v8 != a1[248] )
          {
            if ( v8 == a1[249] )
            {
              sub_DD5FE0(a1);
            }
            else if ( v8 == a1[250] )
            {
              sub_DD6D70((_QWORD **)a1);
            }
            else if ( v8 == a1[251] )
            {
              sub_DD6F40((_QWORD **)a1);
            }
            else if ( v8 == a1[235] )
            {
              sub_DD6280(a1, 0);
            }
            else if ( v8 == a1[236] )
            {
              if ( *((_DWORD *)a1 + 356) != 9 )
                sub_DC0980(a1);
              v18 = *a1;
              v32[0] = a1[6];
              v19 = sub_DFC0A0(v18, v32);
              sub_E01970(*a1, v19);
              if ( *((_DWORD *)a1 + 356) != 9 )
                sub_DC0980(a1);
              sub_DBF8C0((__int64)a1, "invalid model-del, ')' expected");
              if ( *(_BYTE *)(*a1 + 258LL) )
                sub_DBF4C0((_QWORD *)*a1);
            }
            else
            {
              sub_DD59A0(a1, v6, v7);
            }
            goto LABEL_28;
          }
          v20 = *((unsigned int *)a1 + 356);
          if ( (_DWORD)v20 != 9 )
          {
            sub_DC0980(a1);
            v20 = *((unsigned int *)a1 + 356);
          }
          sub_DBF590(v20, (__int64)"invalid reset command, ')' expected");
          sub_DCAEC0((__int64)a1);
          sub_E04890(*a1, 0);
        }
      }
      if ( *(_BYTE *)(*a1 + 258LL) )
        sub_DBF4C0((_QWORD *)*a1);
      if ( *((_DWORD *)a1 + 356) == 9 )
        return 1;
      sub_DC0980(a1);
    }
LABEL_28:
    v4 = *((_DWORD *)a1 + 356);
  }
  if ( v4 != 9 )
  {
    v28 = __cxa_allocate_exception(0x30u);
    sub_305660(v28, "invalid command, '(' expected");
    __cxa_throw(v28, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  return 1;
}

