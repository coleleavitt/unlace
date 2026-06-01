unsigned __int64 __fastcall sub_82D040(__int64 a1)
{
  __int64 v3; // r14
  int v4; // r13d
  int v5; // eax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r13d
  int v11; // eax
  __int64 v12; // r15
  int v13; // r8d
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  char *v16; // rsi
  __int64 v17; // rax
  size_t v18; // rcx
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // r15
  __int64 v22; // r14
  char *v23; // rsi
  void *v24; // rdi
  int v25; // ebx
  const char *v26; // rsi
  const char *v27; // rdx
  char v28; // [rsp+0h] [rbp-10D8h]
  int v29; // [rsp+8h] [rbp-10D0h]
  __int64 v30; // [rsp+8h] [rbp-10D0h]
  __int64 v31; // [rsp+10h] [rbp-10C8h]
  int v32; // [rsp+10h] [rbp-10C8h]
  __int64 v33; // [rsp+18h] [rbp-10C0h]
  void *ptr; // [rsp+20h] [rbp-10B8h] BYREF
  __int128 v35; // [rsp+28h] [rbp-10B0h]
  char v36; // [rsp+40h] [rbp-1098h] BYREF
  __int64 v37; // [rsp+68h] [rbp-1070h]
  __int64 v38; // [rsp+80h] [rbp-1058h]
  char filename[4096]; // [rsp+90h] [rbp-1048h] BYREF
  _BYTE v40[8]; // [rsp+1090h] [rbp-48h] BYREF
  unsigned __int64 v41; // [rsp+1098h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 5640) )
  {
    qstrncpy(filename, a1 + 1032, 4096);
    v3 = qbasename(filename);
    v4 = time(nullptr);
    v5 = rand();
    qsnprintf(v3, (int)&v40[-v3], (int)".tmp%u.reg", v5 % 1000 + 1000 * v4, v6, v7, v28);
    v10 = qcreate(filename, 420);
    if ( v10 == -1 )
    {
      v27 = (const char *)qstrerror(0xFFFFFFFFLL, 420, v8, v9);
      sub_375320((__int64)"%s: %s", filename, v27);
    }
    v35 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 4, 1);
    memset((char *)ptr + v35, 0, 4 - v35);
    *(_QWORD *)&v35 = 4;
    *(_DWORD *)ptr = 929121385;
    sub_82C4F0((__int64 *)&ptr, a1 + 5648);
    v11 = calc_crc32(929121385, (char *)ptr + 4, v35 - 4);
    v12 = v35;
    v13 = v11;
    v14 = v35 + 4;
    v15 = v35 + 4;
    if ( (unsigned __int64)v35 >= 0xFFFFFFFFFFFFFFFCLL )
    {
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v16 = (char *)ptr;
      v17 = v35;
      v18 = 4;
      if ( *((_QWORD *)&v35 + 1) < v14 )
      {
        v33 = v35 + 4;
        v32 = v13;
        v30 = v35 + 4;
        ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
        v16 = (char *)ptr;
        v17 = v35;
        v15 = v33;
        v13 = v32;
        v18 = v30 - v35;
      }
      v31 = v15;
      v29 = v13;
      memset(&v16[v17], 0, v18);
      v13 = v29;
      v19 = v31;
    }
    *(_QWORD *)&v35 = v19;
    *(_DWORD *)((char *)ptr + v12) = v13;
    v20 = qwrite(v10, ptr, v35);
    v21 = v35;
    v22 = v20;
    qclose(v10);
    v23 = &v36;
    if ( !(unsigned int)qstat(filename) )
    {
      *(_QWORD *)(a1 + 5696) = v37;
      *(_QWORD *)(a1 + 5704) = v38;
    }
    if ( v22 != v21 || (v23 = (char *)(a1 + 1032), (unsigned int)qrename(filename, a1 + 1032)) )
    {
      v25 = *__errno_location();
      qunlink(filename);
      sub_82D390(qword_2CAD038, v23);
      v26 = (const char *)winerr(v25);
      sub_375320((__int64)"Fatal registry error: %s", v26);
    }
    v24 = ptr;
    *(_BYTE *)(a1 + 5640) = 0;
    if ( v24 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v24);
    }
  }
  return v41 - __readfsqword(0x28u);
}

