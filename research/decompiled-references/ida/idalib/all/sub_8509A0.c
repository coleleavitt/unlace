unsigned __int64 __fastcall sub_8509A0(__int64 a1)
{
  __int64 v3; // r14
  int v4; // r13d
  int v5; // eax
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // r13d
  int v9; // eax
  __int64 v10; // r15
  int v11; // r8d
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  char *v14; // rsi
  __int64 v15; // rax
  size_t v16; // rcx
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // r15
  __int64 v20; // r14
  char *v21; // rsi
  void *v22; // rdi
  int v23; // ebx
  const char *v24; // rsi
  const char *v25; // rdx
  int v26; // [rsp+8h] [rbp-10D0h]
  __int64 v27; // [rsp+8h] [rbp-10D0h]
  __int64 v28; // [rsp+10h] [rbp-10C8h]
  int v29; // [rsp+10h] [rbp-10C8h]
  __int64 v30; // [rsp+18h] [rbp-10C0h]
  void *ptr; // [rsp+20h] [rbp-10B8h] BYREF
  __int128 v32; // [rsp+28h] [rbp-10B0h]
  char v33; // [rsp+40h] [rbp-1098h] BYREF
  __int64 v34; // [rsp+68h] [rbp-1070h]
  __int64 v35; // [rsp+80h] [rbp-1058h]
  char filename[4096]; // [rsp+90h] [rbp-1048h] BYREF
  _BYTE v37[8]; // [rsp+1090h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+1098h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 5640) )
  {
    qstrncpy(filename, a1 + 1032, 4096);
    v3 = qbasename(filename);
    v4 = time(nullptr);
    v5 = rand();
    qsnprintf(v3, (unsigned int)&v37[-v3], (unsigned int)".tmp%u.reg", v5 % 1000 + 1000 * v4, v6, v7);
    v8 = qcreate(filename, 420);
    if ( v8 == -1 )
    {
      v25 = (const char *)qstrerror(0xFFFFFFFFLL);
      sub_378C70((__int64)"%s: %s", filename, v25);
    }
    v32 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 4, 1);
    memset((char *)ptr + v32, 0, 4 - v32);
    *(_QWORD *)&v32 = 4;
    *(_DWORD *)ptr = 929121385;
    sub_84FE50((__int64 *)&ptr, a1 + 5648);
    v9 = calc_crc32(929121385, (char *)ptr + 4, v32 - 4);
    v10 = v32;
    v11 = v9;
    v12 = v32 + 4;
    v13 = v32 + 4;
    if ( (unsigned __int64)v32 >= 0xFFFFFFFFFFFFFFFCLL )
    {
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v14 = (char *)ptr;
      v15 = v32;
      v16 = 4;
      if ( *((_QWORD *)&v32 + 1) < v12 )
      {
        v30 = v32 + 4;
        v29 = v11;
        v27 = v32 + 4;
        ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
        v14 = (char *)ptr;
        v15 = v32;
        v13 = v30;
        v11 = v29;
        v16 = v27 - v32;
      }
      v28 = v13;
      v26 = v11;
      memset(&v14[v15], 0, v16);
      v11 = v26;
      v17 = v28;
    }
    *(_QWORD *)&v32 = v17;
    *(_DWORD *)((char *)ptr + v10) = v11;
    v18 = qwrite(v8, ptr, v32);
    v19 = v32;
    v20 = v18;
    qclose(v8);
    v21 = &v33;
    if ( !(unsigned int)qstat(filename) )
    {
      *(_QWORD *)(a1 + 5696) = v34;
      *(_QWORD *)(a1 + 5704) = v35;
    }
    if ( v20 != v19 || (v21 = (char *)(a1 + 1032), (unsigned int)qrename(filename, a1 + 1032)) )
    {
      v23 = *__errno_location();
      qunlink(filename);
      sub_850CF0(qword_2CD6F58, v21);
      v24 = (const char *)winerr(v23);
      sub_378C70((__int64)"Fatal registry error: %s", v24);
    }
    v22 = ptr;
    *(_BYTE *)(a1 + 5640) = 0;
    if ( v22 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v22);
    }
  }
  return v38 - __readfsqword(0x28u);
}
