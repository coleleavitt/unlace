unsigned __int64 __fastcall sub_9BE30(__int64 a1)
{
  char *v3; // r14
  int v4; // r13d
  int v5; // eax
  __int64 v6; // r15
  int v7; // r8d
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  char *v10; // rsi
  __int64 v11; // rax
  size_t v12; // rcx
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // r15
  __int64 v16; // r14
  void *v17; // rdi
  int v18; // ebx
  const char *v19; // rsi
  const char *v20; // rdx
  int v21; // [rsp+8h] [rbp-10D0h]
  __int64 v22; // [rsp+8h] [rbp-10D0h]
  __int64 v23; // [rsp+10h] [rbp-10C8h]
  int v24; // [rsp+10h] [rbp-10C8h]
  __int64 v25; // [rsp+18h] [rbp-10C0h]
  void *ptr; // [rsp+20h] [rbp-10B8h] BYREF
  __int128 v27; // [rsp+28h] [rbp-10B0h]
  char v28[40]; // [rsp+40h] [rbp-1098h] BYREF
  __int64 v29; // [rsp+68h] [rbp-1070h]
  __int64 v30; // [rsp+80h] [rbp-1058h]
  char filename[4096]; // [rsp+90h] [rbp-1048h] BYREF
  _BYTE v32[8]; // [rsp+1090h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+1098h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 5640) )
  {
    sub_976E0(filename, (char *)(a1 + 1032), 4096);
    v3 = sub_94E50(filename);
    time(nullptr);
    rand();
    sub_9A810(v3, v32 - v3, ".tmp%u.reg");
    v4 = sub_95420(filename, 0x1A4u);
    if ( v4 == -1 )
    {
      v20 = sub_978C0(-1);
      sub_16AB0((__int64)"%s: %s", filename, v20);
    }
    v27 = 0;
    ptr = nullptr;
    ptr = sub_96080((__int64)&ptr, nullptr, 4u, 1u);
    memset((char *)ptr + v27, 0, 4 - v27);
    *(_QWORD *)&v27 = 4;
    *(_DWORD *)ptr = 929121385;
    sub_9B2E0((__int64)&ptr, a1 + 5648);
    v5 = sub_8E7C0(0x37614469u);
    v6 = v27;
    v7 = v5;
    v8 = v27 + 4;
    v9 = v27 + 4;
    if ( (unsigned __int64)v27 >= 0xFFFFFFFFFFFFFFFCLL )
    {
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v10 = (char *)ptr;
      v11 = v27;
      v12 = 4;
      if ( *((_QWORD *)&v27 + 1) < v8 )
      {
        v25 = v27 + 4;
        v24 = v7;
        v22 = v27 + 4;
        ptr = sub_96080((__int64)&ptr, ptr, v8, 1u);
        v10 = (char *)ptr;
        v11 = v27;
        v9 = v25;
        v7 = v24;
        v12 = v22 - v27;
      }
      v23 = v9;
      v21 = v7;
      memset(&v10[v11], 0, v12);
      v7 = v21;
      v13 = v23;
    }
    *(_QWORD *)&v27 = v13;
    *(_DWORD *)((char *)ptr + v6) = v7;
    v14 = sub_95220(v4, ptr, v27);
    v15 = v27;
    v16 = v14;
    sub_952F0(v4);
    if ( !(unsigned int)sub_95460(filename, (__int64)v28) )
    {
      *(_QWORD *)(a1 + 5696) = v29;
      *(_QWORD *)(a1 + 5704) = v30;
    }
    if ( v16 != v15 || (unsigned int)sub_95A50(filename, (const char *)(a1 + 1032)) )
    {
      v18 = *__errno_location();
      sub_95A30(filename);
      sub_9C180(qword_1671F8);
      v19 = (const char *)sub_974E0(v18);
      sub_16AB0((__int64)"Fatal registry error: %s", v19);
    }
    v17 = ptr;
    *(_BYTE *)(a1 + 5640) = 0;
    if ( v17 )
    {
      *(_QWORD *)&v27 = 0;
      j__free(v17);
    }
  }
  return v33 - __readfsqword(0x28u);
}

