void __fastcall sub_1521F20(__int64 a1, int a2, _BYTE *a3, signed __int64 a4, unsigned int a5)
{
  const char *v7; // r13
  unsigned __int8 *v8; // rbx
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  unsigned __int8 *v11; // rbx
  unsigned __int8 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // r12
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r14
  __int64 v26; // r12
  void *v27; // rdi
  unsigned __int8 *v28; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+8h] [rbp-C0h]
  unsigned __int8 *v30[15]; // [rsp+50h] [rbp-78h] BYREF

  sub_1564820(v30, a1, a5, 1844);
  sub_AEC220(v30, a3, a4);
  sub_FC70F0((__int64)&v28, (__int64)v30);
  sub_AEA040((__int64)v30);
  switch ( a2 )
  {
    case 4:
      v7 = "'is_member'";
      goto LABEL_3;
    case 10:
      v7 = "'is_instance'";
      goto LABEL_3;
    case 14:
      v8 = v28;
      v7 = "'unless(is_union)'";
      if ( !v28 )
        goto LABEL_8;
      goto LABEL_4;
    case 16:
      v7 = "'functionType'";
      goto LABEL_3;
    case 19:
      v7 = "'is_thread_local', 'is_global', 'is_local', 'is_parameter', 'unless(is_parameter)'";
LABEL_3:
      v8 = v28;
      if ( v28 )
        goto LABEL_4;
LABEL_8:
      v14 = v29;
      v15 = *(_DWORD *)(v29 + 14976);
      if ( !v15 )
      {
        v8 = (unsigned __int8 *)operator new(0x3A0u);
        *v8 = 0;
        *((_QWORD *)v8 + 12) = v8 + 112;
        *((_QWORD *)v8 + 16) = v8 + 144;
        *((_QWORD *)v8 + 20) = v8 + 176;
        *((_QWORD *)v8 + 24) = v8 + 208;
        *((_QWORD *)v8 + 28) = v8 + 240;
        *((_QWORD *)v8 + 32) = v8 + 272;
        *((_QWORD *)v8 + 36) = v8 + 304;
        *((_QWORD *)v8 + 40) = v8 + 336;
        *((_QWORD *)v8 + 44) = v8 + 368;
        *((_QWORD *)v8 + 48) = v8 + 400;
        *((_QWORD *)v8 + 52) = v8 + 432;
        *((_QWORD *)v8 + 13) = 0;
        v8[112] = 0;
        *((_QWORD *)v8 + 17) = 0;
        v8[144] = 0;
        *((_QWORD *)v8 + 21) = 0;
        v8[176] = 0;
        *((_QWORD *)v8 + 25) = 0;
        v8[208] = 0;
        *((_QWORD *)v8 + 29) = 0;
        v8[240] = 0;
        *((_QWORD *)v8 + 33) = 0;
        v8[272] = 0;
        *((_QWORD *)v8 + 37) = 0;
        v8[304] = 0;
        *((_QWORD *)v8 + 41) = 0;
        v8[336] = 0;
        *((_QWORD *)v8 + 45) = 0;
        v8[368] = 0;
        *((_QWORD *)v8 + 49) = 0;
        v8[400] = 0;
        *((_QWORD *)v8 + 53) = 0x800000000LL;
        *((_QWORD *)v8 + 66) = v8 + 544;
        *((_QWORD *)v8 + 67) = 0x600000000LL;
        goto LABEL_10;
      }
      v23 = (unsigned int)(v15 - 1);
      *(_DWORD *)(v29 + 14976) = v23;
      v8 = *(unsigned __int8 **)(v14 + 8 * v23 + 14848);
      v24 = *((unsigned int *)v8 + 134);
      *v8 = 0;
      v25 = *((_QWORD *)v8 + 66);
      *((_DWORD *)v8 + 106) = 0;
      v26 = v25 + (v24 << 6);
      break;
    default:
      sub_1520C80(&v28, 0);
      goto LABEL_6;
  }
  while ( v25 != v26 )
  {
    while ( 1 )
    {
      v26 -= 64;
      v27 = *(void **)(v26 + 24);
      if ( v27 == (void *)(v26 + 40) )
        break;
      operator delete(v27);
      if ( v25 == v26 )
        goto LABEL_27;
    }
  }
LABEL_27:
  *((_DWORD *)v8 + 134) = 0;
LABEL_10:
  v28 = v8;
LABEL_4:
  v8[*v8 + 1] = 2;
  v9 = v28;
  v10 = *v28;
  *v28 = v10 + 1;
  v11 = v28;
  *(_QWORD *)&v9[8 * v10 + 16] = 1;
  if ( !v11 )
  {
    v16 = v29;
    v17 = *(_DWORD *)(v29 + 14976);
    if ( v17 )
    {
      v18 = (unsigned int)(v17 - 1);
      *(_DWORD *)(v29 + 14976) = v18;
      v11 = *(unsigned __int8 **)(v16 + 8 * v18 + 14848);
      v19 = *((unsigned int *)v11 + 134);
      *v11 = 0;
      v20 = *((_QWORD *)v11 + 66);
      *((_DWORD *)v11 + 106) = 0;
      v21 = v20 + (v19 << 6);
      while ( v20 != v21 )
      {
        while ( 1 )
        {
          v21 -= 64;
          v22 = *(void **)(v21 + 24);
          if ( v22 == (void *)(v21 + 40) )
            break;
          operator delete(v22);
          if ( v20 == v21 )
            goto LABEL_22;
        }
      }
LABEL_22:
      *((_DWORD *)v11 + 134) = 0;
    }
    else
    {
      v11 = (unsigned __int8 *)operator new(0x3A0u);
      *v11 = 0;
      *((_QWORD *)v11 + 12) = v11 + 112;
      *((_QWORD *)v11 + 16) = v11 + 144;
      *((_QWORD *)v11 + 20) = v11 + 176;
      *((_QWORD *)v11 + 24) = v11 + 208;
      *((_QWORD *)v11 + 28) = v11 + 240;
      *((_QWORD *)v11 + 32) = v11 + 272;
      *((_QWORD *)v11 + 36) = v11 + 304;
      *((_QWORD *)v11 + 40) = v11 + 336;
      *((_QWORD *)v11 + 44) = v11 + 368;
      *((_QWORD *)v11 + 48) = v11 + 400;
      *((_QWORD *)v11 + 52) = v11 + 432;
      *((_QWORD *)v11 + 13) = 0;
      v11[112] = 0;
      *((_QWORD *)v11 + 17) = 0;
      v11[144] = 0;
      *((_QWORD *)v11 + 21) = 0;
      v11[176] = 0;
      *((_QWORD *)v11 + 25) = 0;
      v11[208] = 0;
      *((_QWORD *)v11 + 29) = 0;
      v11[240] = 0;
      *((_QWORD *)v11 + 33) = 0;
      v11[272] = 0;
      *((_QWORD *)v11 + 37) = 0;
      v11[304] = 0;
      *((_QWORD *)v11 + 41) = 0;
      v11[336] = 0;
      *((_QWORD *)v11 + 45) = 0;
      v11[368] = 0;
      *((_QWORD *)v11 + 49) = 0;
      v11[400] = 0;
      *((_QWORD *)v11 + 53) = 0x800000000LL;
      *((_QWORD *)v11 + 66) = v11 + 544;
      *((_QWORD *)v11 + 67) = 0x600000000LL;
    }
    v28 = v11;
  }
  v11[*v11 + 1] = 1;
  v12 = v28;
  v13 = *v28;
  *v28 = v13 + 1;
  *(_QWORD *)&v12[8 * v13 + 16] = v7;
LABEL_6:
  sub_AEA040((__int64)&v28);
}
