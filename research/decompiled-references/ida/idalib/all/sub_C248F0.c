__int64 __fastcall sub_C248F0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // rdi
  unsigned __int8 **v9; // rax
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  void *v29; // rax
  void *v30; // [rsp+0h] [rbp-E8h] BYREF
  unsigned int v31; // [rsp+8h] [rbp-E0h]
  char v32; // [rsp+Ch] [rbp-DCh]
  _QWORD v33[3]; // [rsp+20h] [rbp-C8h] BYREF
  char v34; // [rsp+38h] [rbp-B0h]
  __int64 v35; // [rsp+48h] [rbp-A0h]
  void *ptr; // [rsp+50h] [rbp-98h]
  __int64 v37; // [rsp+58h] [rbp-90h]
  _BYTE v38[136]; // [rsp+60h] [rbp-88h] BYREF

  v6 = a3;
  v8 = a1[3];
  if ( v8 )
  {
    sub_A54D20(v8, (int *)a2);
    a1[3] = 0;
  }
  switch ( *(_DWORD *)a2 )
  {
    case 2:
      return (unsigned int)sub_C1BFE0(a1, a2 + 8, v6, a4, a5);
    case 3:
      if ( (v6 & 1) != 0 || (byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        goto LABEL_6;
      v12 = sub_21F90D0();
      v13 = v12;
      if ( *(_QWORD *)(a2 + 8) == v12 )
        sub_21FFCB0(v33, v12, 1);
      else
        sub_21FAF40(v33, *(_QWORD *)(a2 + 8), 1);
      v14 = a2 + 8;
      v15 = ((unsigned int)sub_BFE5A0(a1[1], *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 2320LL)) >> 3) & 7;
      if ( (_BYTE)v15 == 7 )
        v15 = 1;
      v16 = *(_QWORD *)(a2 + 8);
      if ( *((_DWORD *)a1 + 4) != 3 )
      {
        if ( v13 == v16 )
          goto LABEL_40;
        goto LABEL_19;
      }
      if ( v13 != v16 )
        goto LABEL_53;
      goto LABEL_55;
    case 5:
      v18 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v18 + 16) != 14 )
        v18 = sub_F63050(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
      return (unsigned int)sub_C1BFE0(
                             a1,
                             a2 + 8,
                             *(_QWORD *)(v18 + 32) & 0xFFFFFFFFFFFFFFF8LL
                           | (*(_DWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL]
                            | (unsigned int)*(_QWORD *)(v18 + 32)
                            | (unsigned int)v6)
                           & 7,
                             a4,
                             a5);
    case 6:
      v19 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v19 + 16) != 14 )
        v19 = sub_F63050(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
      v6 = *(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFF8LL
         | (*(_DWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned int)*(_QWORD *)(v19 + 32) | (unsigned int)v6) & 7;
      if ( (v6 & 1) != 0 || (byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        goto LABEL_6;
      if ( a1[3] )
      {
        sub_995620((__int64)&v30, (_QWORD *)(a2 + 8));
        sub_C18B90((__int64)v33, &v30);
        sub_A4FD20(a1[3], (__int64)v33);
        if ( LODWORD(v33[0]) > 1 )
          sub_A4F8E0((int *)v33);
        sub_9955A0(&v30);
      }
      v20 = sub_21F90D0();
      v21 = v20;
      if ( *(_QWORD *)(a2 + 8) == v20 )
        sub_21FFCB0(v33, v20, 1);
      else
        sub_21FAF40(v33, *(_QWORD *)(a2 + 8), 1);
      v14 = a2 + 8;
      v15 = ((unsigned int)sub_BFE5A0(a1[1], *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 2320LL)) >> 3) & 7;
      if ( (_BYTE)v15 == 7 )
        v15 = 1;
      v22 = *(_QWORD *)(a2 + 8);
      if ( *((_DWORD *)a1 + 4) == 3 )
      {
        if ( v22 == v21 )
LABEL_55:
          v17 = sub_2200B70(v14, v33, v15);
        else
LABEL_53:
          v17 = sub_21FD860(v14, v33, v15);
      }
      else if ( v22 == v21 )
      {
LABEL_40:
        v17 = sub_2200970(v14, v33, v15);
      }
      else
      {
LABEL_19:
        v17 = sub_21FD850(v14, v33, v15);
      }
      v10 = *(unsigned __int8 *)(*a1 + 8LL);
      if ( !(_BYTE)v10 )
        v10 = sub_C104C0(*a1, a1[1], v17);
      sub_9955A0(v33);
      return v10;
    case 7:
      if ( (v6 & 1) != 0 || (byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
      {
LABEL_6:
        v9 = (unsigned __int8 **)sub_E33C10(*a1, a1[1], 2442, 0);
        if ( v9 )
          sub_AE9DF0(v9, v6, 8u);
        return 0;
      }
      else
      {
        v24 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v24 + 16) == 42
          || (v23 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v23 + 16) == 42)
          && (v24 = sub_F63050(v24, a2, v23, a4)) != 0 )
        {
          v25 = *(_QWORD *)(v24 + 32);
          v34 |= 1u;
          memset(v33, 0, sizeof(v33));
          ptr = v38;
          v37 = 0x800000000LL;
          v26 = *a1;
          v35 = 0;
          v38[65] = 0;
          sub_C245D0((__int64)v33, *(_QWORD **)(v26 + 16), a2);
          v27 = a1[1];
          v28 = *a1;
          v29 = (void *)(2LL * (*((_DWORD *)a1 + 4) == 3) - 1);
          v32 = 0;
          v31 = 64;
          v30 = v29;
          v10 = sub_C1A330(v28, v27, (__int64)v33, v25, (__int64)&v30);
          if ( v31 > 0x40 && v30 )
            operator delete[](v30);
          if ( (_BYTE)v10 )
            sub_C0F890((__int64)v33, a2);
          if ( ptr != v38 )
            free(ptr);
        }
        else
        {
LABEL_43:
          v10 = 0;
          sub_E33C10(*a1, a1[1], 108, 0);
        }
      }
      return v10;
    default:
      goto LABEL_43;
  }
}
