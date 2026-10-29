void __fastcall sub_11E0750(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  const char *v7; // rbx
  size_t v8; // rax
  char *v9; // rsi
  char *v10; // rsi
  const char *v11; // rdx
  char *v12; // rsi
  char *v13; // rsi
  char *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r14
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  __int64 v19; // r13
  _QWORD v20[2]; // [rsp+0h] [rbp-F8h] BYREF
  const char *v21; // [rsp+10h] [rbp-E8h] BYREF
  size_t v22; // [rsp+18h] [rbp-E0h]
  void *v23; // [rsp+20h] [rbp-D8h]
  __int64 v24; // [rsp+30h] [rbp-C8h] BYREF
  void *v25; // [rsp+40h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-A8h] BYREF
  void *v27; // [rsp+60h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-88h] BYREF
  void *v29; // [rsp+80h] [rbp-78h]
  __int64 v30; // [rsp+90h] [rbp-68h] BYREF
  void *ptr; // [rsp+A0h] [rbp-58h]
  int v32; // [rsp+A8h] [rbp-50h]
  int v33; // [rsp+ACh] [rbp-4Ch]

  if ( sub_10DCD30(a3, 0xEDu) )
  {
    v6 = sub_21B7BC0(a3, 237, "+ptx42", 6);
    v7 = (const char *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 16LL))(a3, v6);
    v21 = v7;
    v8 = 0;
    if ( v7 )
      v8 = strlen(v7);
    v22 = v8;
    v9 = *(char **)(a4 + 8);
    if ( v9 == *(char **)(a4 + 16) )
    {
      sub_1075D80(a4, v9, &v21);
    }
    else
    {
      *(_QWORD *)v9 = v7;
      v10 = v9 + 16;
      *((_QWORD *)v10 - 1) = v8;
      *(_QWORD *)(a4 + 8) = v10;
    }
  }
  else
  {
    sub_11DDAD0(&v21, a1, a2, a3);
    v11 = "+ptx87";
    if ( HIDWORD(v22) != 10000 )
    {
      switch ( HIDWORD(v22) )
      {
        case 4:
          v11 = "+ptx60";
          break;
        case 5:
        case 6:
          v11 = "+ptx61";
          break;
        case 7:
          v11 = "+ptx63";
          break;
        case 8:
          v11 = "+ptx64";
          break;
        case 9:
          v11 = "+ptx65";
          break;
        case 0xA:
          v11 = "+ptx70";
          break;
        case 0xB:
          v11 = "+ptx71";
          break;
        case 0xC:
          v11 = "+ptx72";
          break;
        case 0xD:
          v11 = "+ptx73";
          break;
        case 0xE:
          v11 = "+ptx74";
          break;
        case 0xF:
          v11 = "+ptx75";
          break;
        case 0x10:
          v11 = "+ptx76";
          break;
        case 0x11:
          v11 = "+ptx77";
          break;
        case 0x12:
          v11 = "+ptx78";
          break;
        case 0x13:
          v11 = "+ptx80";
          break;
        case 0x14:
          v11 = "+ptx81";
          break;
        case 0x15:
          v11 = "+ptx82";
          break;
        case 0x16:
          v11 = "+ptx83";
          break;
        case 0x17:
          v11 = "+ptx84";
          break;
        case 0x18:
        case 0x19:
          v11 = "+ptx85";
          break;
        case 0x1A:
          v11 = "+ptx87";
          break;
        default:
          v11 = "+ptx42";
          break;
      }
    }
    v20[0] = v11;
    v12 = *(char **)(a4 + 8);
    v20[1] = 6;
    if ( v12 == *(char **)(a4 + 16) )
    {
      sub_1075D80(a4, v12, v20);
    }
    else
    {
      *(_QWORD *)v12 = v11;
      v13 = v12 + 16;
      *((_QWORD *)v13 - 1) = 6;
      *(_QWORD *)(a4 + 8) = v13;
    }
    v14 = (char *)ptr;
    if ( v33 && v32 )
    {
      v15 = 0;
      v16 = 8LL * (unsigned int)(v32 - 1) + 8;
      do
      {
        v17 = *(_QWORD **)&v14[v15];
        if ( v17 && v17 != (_QWORD *)-8LL )
        {
          v18 = (_QWORD *)v17[1];
          v19 = *v17 + 41LL;
          if ( v18 != v17 + 3 )
            operator delete(v18);
          operator delete(v17, v19, 8);
          v14 = (char *)ptr;
        }
        v15 += 8;
      }
      while ( v16 != v15 );
    }
    free(v14);
    if ( v29 != &v30 )
      operator delete(v29);
    if ( v27 != &v28 )
      operator delete(v27);
    if ( v25 != &v26 )
      operator delete(v25);
    if ( v23 != &v24 )
      operator delete(v23);
  }
}
