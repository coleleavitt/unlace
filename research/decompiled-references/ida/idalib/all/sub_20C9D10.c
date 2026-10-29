unsigned __int8 *__fastcall sub_20C9D10(unsigned __int8 *a1, __int64 a2, void (__fastcall *a3)(unsigned __int8 *))
{
  unsigned __int8 *v3; // rbx
  __int64 v6; // r13
  int v7; // eax
  unsigned __int8 *v8; // rbx
  __int64 v9; // rdx
  char *v10; // rax
  char v11; // di
  char *v12; // rcx
  char *v13; // rsi
  __int16 v14; // ax
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int8 *i; // r14
  _BYTE *v19; // rdi
  unsigned int v20; // edx
  __int64 v22; // rdi
  unsigned __int8 **v23; // rsi
  unsigned __int64 v24; // rax
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v26; // [rsp+18h] [rbp-70h]
  int v27; // [rsp+20h] [rbp-68h]
  unsigned __int8 v28; // [rsp+24h] [rbp-64h]
  unsigned __int8 *v29; // [rsp+28h] [rbp-60h] BYREF

  v3 = a1;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 8LL) == 14 )
  {
    v29 = a1;
    v28 = 1;
    v6 = 0x8000000000041LL;
    ptr = &v29;
    v26 = 0x100000004LL;
    v27 = 0;
    a3(a1);
    v7 = *a1;
    if ( (unsigned __int8)v7 <= 0x1Cu )
      goto LABEL_19;
LABEL_4:
    if ( (_BYTE)v7 == 63 )
    {
      while ( 1 )
      {
        v17 = *((_DWORD *)v3 + 1) & 0x7FFFFFF;
        for ( i = &v3[32 * (1 - v17)]; v3 != i; i += 32 )
        {
          v19 = *(_BYTE **)i;
          if ( **(_BYTE **)i != 5 )
            goto LABEL_27;
          v20 = *((_DWORD *)v19 + 8);
          if ( !(v20 <= 0x40 ? *((_QWORD *)v19 + 3) == 0 : v20 == (unsigned int)sub_2206780(v19 + 24)) )
            goto LABEL_27;
        }
        v3 = *(unsigned __int8 **)&v3[-32 * v17];
LABEL_37:
        v9 = v28;
        if ( !v28 )
          goto LABEL_10;
LABEL_38:
        v12 = (char *)ptr;
        v22 = 8LL * HIDWORD(v26);
        v23 = (unsigned __int8 **)((char *)ptr + v22);
        if ( ptr == (char *)ptr + v22 )
          goto LABEL_43;
        v10 = (char *)ptr;
        if ( v3 != *(unsigned __int8 **)ptr )
          break;
LABEL_46:
        v9 = 0;
        v11 = 1;
        v13 = (char *)ptr + 8 * HIDWORD(v26);
LABEL_12:
        while ( 2 )
        {
          if ( v13 != v10 )
          {
            v12 = (char *)(*(_QWORD *)v10 + 2LL);
            if ( *(_QWORD *)v10 == -2 || v12 == (_BYTE *)&dword_0 + 1 )
            {
              do
                v10 += 8;
              while ( v13 != v10 && *(_QWORD *)v10 >= 0xFFFFFFFFFFFFFFFELL );
            }
          }
          if ( !(_BYTE)v9 )
            goto LABEL_28;
          ((void (__fastcall *)(unsigned __int8 *, char *, __int64, char *))a3)(v3, v13, v9, v12);
          v7 = *v3;
          if ( (unsigned __int8)v7 > 0x1Cu )
            goto LABEL_4;
LABEL_19:
          if ( (_BYTE)v7 != 18 )
            goto LABEL_27;
          v14 = *((_WORD *)v3 + 1);
          if ( v14 != 34 )
          {
            if ( v14 == 49 )
            {
LABEL_22:
              if ( (v3[7] & 0x40) != 0 )
                v15 = *((__int64 **)v3 - 1);
              else
                v15 = (__int64 *)&v3[-32 * (*((_DWORD *)v3 + 1) & 0x7FFFFFF)];
              v16 = *v15;
              if ( *(_BYTE *)(*(_QWORD *)(v16 + 8) + 8LL) == 14 )
                goto LABEL_25;
              goto LABEL_27;
            }
            if ( v14 != 50 )
              goto LABEL_27;
LABEL_7:
            if ( (v3[7] & 0x40) != 0 )
              v8 = *((unsigned __int8 **)v3 - 1);
            else
              v8 = &v3[-32 * (*((_DWORD *)v3 + 1) & 0x7FFFFFF)];
            v9 = v28;
            v3 = *(unsigned __int8 **)v8;
            if ( v28 )
              goto LABEL_38;
LABEL_10:
            v10 = (char *)sub_2236760(&ptr, v3);
            v11 = v28;
            v12 = (char *)ptr;
            if ( !v28 )
            {
              v13 = (char *)ptr + 8 * (unsigned int)v26;
              continue;
            }
            goto LABEL_45;
          }
          break;
        }
      }
      while ( 1 )
      {
        v10 += 8;
        if ( v23 == (unsigned __int8 **)v10 )
          break;
        if ( v3 == *(unsigned __int8 **)v10 )
          goto LABEL_46;
      }
LABEL_43:
      if ( HIDWORD(v26) >= (unsigned int)v26 )
        goto LABEL_10;
      ++HIDWORD(v26);
      *v23 = v3;
      v12 = (char *)ptr;
      v10 = (char *)ptr + v22;
LABEL_45:
      v11 = 1;
      v13 = &v12[8 * HIDWORD(v26)];
      goto LABEL_12;
    }
    if ( (unsigned __int8)v7 == 78 )
      goto LABEL_22;
    if ( (unsigned __int8)v7 == 79 )
      goto LABEL_7;
    v24 = (unsigned int)(v7 - 34);
    if ( (unsigned __int8)v24 <= 0x33u )
    {
      if ( _bittest64(&v6, v24) )
      {
        v16 = sub_20906B0((__int64)v3, 53);
        if ( v16 )
        {
LABEL_25:
          v3 = (unsigned __int8 *)v16;
          goto LABEL_37;
        }
      }
    }
LABEL_27:
    v11 = v28;
LABEL_28:
    if ( !v11 )
      free(ptr);
  }
  return v3;
}
