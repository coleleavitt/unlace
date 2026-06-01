void __fastcall sub_9ED840(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  unsigned __int8 *v7; // r13
  __int64 v8; // rax
  int v9; // edx
  void *v10; // r14
  char v11; // r12
  _BYTE *v12; // rdi
  _QWORD *v13; // r12
  _QWORD *v14; // rbp
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  char v21; // [rsp+1Fh] [rbp-3E9h]
  _QWORD *v22; // [rsp+20h] [rbp-3E8h] BYREF
  char v23; // [rsp+28h] [rbp-3E0h]
  _QWORD *v24[4]; // [rsp+30h] [rbp-3D8h] BYREF
  char v25; // [rsp+50h] [rbp-3B8h]
  void *v26; // [rsp+60h] [rbp-3A8h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-3A0h]
  unsigned __int64 v28; // [rsp+70h] [rbp-398h]
  __int64 v29; // [rsp+78h] [rbp-390h]
  __int64 v30; // [rsp+80h] [rbp-388h]
  __int128 v31; // [rsp+88h] [rbp-380h] BYREF
  __int64 v32; // [rsp+98h] [rbp-370h]
  _QWORD *v33; // [rsp+A0h] [rbp-368h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-360h]
  _QWORD v35[34]; // [rsp+B0h] [rbp-358h] BYREF
  void *ptr; // [rsp+1C0h] [rbp-248h] BYREF
  __int64 v37; // [rsp+1C8h] [rbp-240h]
  _BYTE v38[568]; // [rsp+1D0h] [rbp-238h] BYREF

  v7 = (unsigned __int8 *)&unk_23B88E8;
  v8 = operator new(0xB8u);
  *a1 = v8;
  *(_QWORD *)(v8 + 24) = v8 + 40;
  *(_QWORD *)v8 = a2;
  *(_QWORD *)(v8 + 8) = a3;
  *(_QWORD *)(v8 + 32) = 0;
  *(_BYTE *)(v8 + 40) = 0;
  *(_BYTE *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_QWORD *)(v8 + 88) = 0;
  *(_QWORD *)(v8 + 96) = 0;
  *(_QWORD *)(v8 + 104) = 0;
  *(_QWORD *)(v8 + 112) = 0;
  *(_QWORD *)(v8 + 120) = 0;
  *(_QWORD *)(v8 + 128) = 0;
  *(_QWORD *)(v8 + 136) = 0;
  *(_QWORD *)(v8 + 144) = 0;
  *(_QWORD *)(v8 + 152) = 0;
  *(_QWORD *)(v8 + 160) = 0;
  *(_QWORD *)(v8 + 168) = 0;
  *(_QWORD *)(v8 + 176) = 0;
  *(_QWORD *)(v8 + 16) = a4;
  *a5 = 0;
  sub_220D3C0(&ptr, a2);
  v9 = 0;
  v28 = 0;
  v26 = ptr;
  v29 = 0;
  v27 = v37;
  v30 = 0x200000000LL;
  v33 = v35;
  v32 = 0;
  v34 = 0x800000000LL;
  v35[32] = 0;
  v31 = 0;
  while ( 1 )
  {
    if ( !v9 && v28 >= v27 )
    {
      *a5 = 1;
      goto LABEL_18;
    }
    v10 = (void *)*v7;
    sub_9E7620((__int64)&ptr, (__int64)&v26, 8u);
    v11 = v37 & 1;
    if ( (v37 & 1) != 0 )
    {
      v16 = ptr;
      ptr = nullptr;
      v24[0] = v16;
      sub_9EABA0(v24);
      if ( v24[0] )
        (*(void (__fastcall **)(_QWORD *))(*v24[0] + 8LL))(v24[0]);
LABEL_78:
      *a5 = 1;
      sub_9E7130((__int64 *)&ptr);
      goto LABEL_18;
    }
    if ( ptr != v10 )
      goto LABEL_78;
    ++v7;
    sub_9E7130((__int64 *)&ptr);
    if ( v7 == (unsigned __int8 *)&unk_23B88EC )
      break;
    v9 = v30;
  }
  ptr = v38;
  v37 = 0x4000000000LL;
  while ( 1 )
  {
    if ( !(_DWORD)v30 && v28 >= v27 )
    {
      v12 = ptr;
      goto LABEL_11;
    }
    sub_9E7920((__int64)&v22, (__int64)&v26);
    if ( (v23 & 1) != 0 )
    {
      v17 = v22;
      v22 = nullptr;
      v24[0] = v17;
      sub_9EABA0(v24);
      v15 = v24[0];
      if ( v24[0] )
LABEL_72:
        (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
LABEL_73:
      *a5 = 1;
      sub_9E72F0((__int64 *)&v22);
      v12 = ptr;
      goto LABEL_27;
    }
    if ( (_DWORD)v22 != 2 )
      break;
    switch ( HIDWORD(v22) )
    {
      case 0:
        sub_2007B50(v24, &v26, 0);
        v21 = v25 & 1;
        sub_9E73F0((__int64)v24);
        if ( v21 )
          *a5 = 1;
        break;
      case 8:
        if ( v11 || (unsigned __int8)sub_9EABE0(*a1, (__int64)&v26, &ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 9:
        if ( !v11 || (unsigned __int8)sub_9EB010(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 0xA:
        if ( !v11 || (unsigned __int8)sub_9EB350(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 0xB:
        if ( !v11 || (unsigned __int8)sub_9EB750(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 0xC:
        if ( !v11 || (unsigned __int8)sub_9EBA90(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 0xD:
        if ( !v11 || (unsigned __int8)sub_9EBDD0(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 0xE:
        if ( !v11 || (unsigned __int8)sub_9EC460(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 0xF:
        if ( !v11 || (unsigned __int8)sub_9EC120(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 0x10:
        if ( !v11 || (unsigned __int8)sub_9EC7B0(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 0x11:
        if ( !v11 || (unsigned __int8)sub_9ECB00(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 0x12:
        if ( !v11 || (unsigned __int8)sub_9ED1A0(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 0x13:
        if ( !v11 || (unsigned __int8)sub_9ED4F0(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
        goto LABEL_31;
      case 0x14:
        if ( !v11 || (unsigned __int8)sub_9ECE50(*a1, (__int64)&v26, (unsigned int **)&ptr) )
          goto LABEL_73;
LABEL_31:
        v11 = 1;
        break;
      default:
        sub_9E7DB0((__int64 *)v24, (__int64)&v26);
        v15 = v24[0];
        if ( v24[0] )
          goto LABEL_72;
        break;
    }
    sub_9E72F0((__int64 *)&v22);
  }
  sub_9E72F0((__int64 *)&v22);
  v12 = ptr;
  if ( !(_DWORD)v30 && v27 <= v28 )
  {
LABEL_11:
    if ( v12 != v38 )
      free(v12);
    sub_9E7170((__int64)&v33);
    sub_9E6FE0((__int64)&v31);
    return;
  }
  *a5 = 1;
LABEL_27:
  if ( v12 != v38 )
    free(v12);
LABEL_18:
  v13 = v33;
  v14 = &v33[4 * (unsigned int)v34];
  if ( v33 != v14 )
  {
    do
    {
      v14 -= 4;
      sub_9E6FE0((__int64)(v14 + 1));
    }
    while ( v13 != v14 );
    v14 = v33;
  }
  if ( v14 != v35 )
    free(v14);
  sub_9E6FE0((__int64)&v31);
}

