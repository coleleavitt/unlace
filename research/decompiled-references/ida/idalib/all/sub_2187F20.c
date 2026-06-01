void __fastcall sub_2187F20(__int64 *a1, __int64 a2)
{
  size_t v2; // rbp
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  size_t v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  void *v20; // [rsp+0h] [rbp-120h] BYREF
  void *v21; // [rsp+8h] [rbp-118h] BYREF
  __int64 v22; // [rsp+10h] [rbp-110h]
  _BYTE v23[16]; // [rsp+18h] [rbp-108h] BYREF
  _QWORD v24[7]; // [rsp+28h] [rbp-F8h] BYREF
  int v25; // [rsp+60h] [rbp-C0h]
  __int64 v26; // [rsp+68h] [rbp-B8h]
  _QWORD v27[5]; // [rsp+70h] [rbp-B0h] BYREF
  int v28; // [rsp+98h] [rbp-88h]
  __int64 v29; // [rsp+A0h] [rbp-80h]
  __int128 v30; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-68h]
  __int64 v32; // [rsp+C0h] [rbp-60h]
  __int64 v33; // [rsp+C8h] [rbp-58h]
  __int64 v34; // [rsp+D0h] [rbp-50h]
  __int16 v35; // [rsp+D8h] [rbp-48h]
  __int64 v36; // [rsp+E0h] [rbp-40h]
  __int64 v37; // [rsp+E8h] [rbp-38h]

  if ( !*(_DWORD *)(a2 + 36) )
  {
    v2 = j__strlen("aeabi");
    v3 = (__int64 *)sub_220C6D0();
    v4 = *v3;
    v5 = v3[1];
    v24[2] = v2;
    v24[1] = "aeabi";
    v32 = v5;
    v35 = 1;
    v24[0] = &off_2C75288;
    v6 = *a1;
    v24[3] = v27;
    v25 = 1065353216;
    v28 = 1065353216;
    v31 = v4;
    v24[4] = 1;
    v24[5] = 0;
    v24[6] = 0;
    v26 = 0;
    v27[0] = 0;
    v27[1] = &v30;
    v27[2] = 1;
    v27[3] = 0;
    v27[4] = 0;
    v29 = 0;
    v30 = 0;
    v33 = 0;
    v34 = 0;
    v36 = 0;
    v37 = 0;
    (*(void (__fastcall **)(void **, __int64 *, _QWORD *))(v6 + 520))(&v20, a1, v24);
    if ( v20 )
    {
      v21 = v20;
      v20 = nullptr;
      sub_A0E8E0((_QWORD **)&v21);
      if ( v21 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 8LL))(v21);
      if ( v20 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 8LL))(v20);
    }
    else
    {
      v23[0] = 0;
      v22 = 0;
      v21 = v23;
      if ( (unsigned int)(*(_DWORD *)(a2 + 32) - 35) > 1 )
      {
        v16 = j__strlen("arm");
        sub_99BDC0(&v21, 0, 0, "arm", v16);
      }
      else
      {
        v7 = j__strlen("thumb");
        sub_99BDC0(&v21, 0, 0, "thumb", v7);
      }
      v12 = sub_21831C0((__int64)v24, 6u, v8, v9, v10, v11);
      if ( BYTE4(v12) )
      {
        switch ( v12 )
        {
          case 1uLL:
            sub_9EE7C0(&v21, "v4");
            break;
          case 2uLL:
            sub_9EE7C0(&v21, "v4t");
            break;
          case 3uLL:
            sub_9EE7C0(&v21, "v5t");
            break;
          case 4uLL:
            sub_9EE7C0(&v21, "v5te");
            break;
          case 5uLL:
            sub_9EE7C0(&v21, (char *)"v5tej");
            break;
          case 6uLL:
            sub_9EE7C0(&v21, "v6");
            break;
          case 7uLL:
            sub_9EE7C0(&v21, "v6kz");
            break;
          case 8uLL:
            sub_9EE7C0(&v21, "v6t2");
            break;
          case 9uLL:
            sub_9EE7C0(&v21, "v6k");
            break;
          case 0xAuLL:
            v17 = sub_21831C0((__int64)v24, 7u, HIDWORD(v12), v13, v14, v15);
            if ( BYTE4(v17) && (_DWORD)v17 == 77 )
              sub_9EE7C0(&v21, "v7m");
            else
              sub_9EE7C0(&v21, "v7");
            break;
          case 0xBuLL:
            sub_9EE7C0(&v21, "v6m");
            break;
          case 0xCuLL:
            sub_9EE7C0(&v21, "v6sm");
            break;
          case 0xDuLL:
            sub_9EE7C0(&v21, "v7em");
            break;
          case 0xEuLL:
            sub_9EE7C0(&v21, "v8a");
            break;
          case 0xFuLL:
            sub_9EE7C0(&v21, "v8r");
            break;
          case 0x10uLL:
            sub_9EE7C0(&v21, "v8m.base");
            break;
          case 0x11uLL:
            sub_9EE7C0(&v21, "v8m.main");
            break;
          case 0x15uLL:
            sub_9EE7C0(&v21, "v8.1m.main");
            break;
          case 0x16uLL:
            sub_9EE7C0(&v21, "v9a");
            break;
          default:
            break;
        }
      }
      v18 = *((unsigned int *)a1 + 2);
      if ( (unsigned int)v18 <= 0x14 )
      {
        v19 = 1398784;
        if ( _bittest64(&v19, v18) )
          sub_9EE7C0(&v21, "eb");
      }
      sub_22BAF00(a2, v21, v22);
      if ( v21 != v23 )
        operator delete(v21);
    }
    v24[0] = &off_2C75288;
    sub_2182FA0((__int64)v24);
  }
}
