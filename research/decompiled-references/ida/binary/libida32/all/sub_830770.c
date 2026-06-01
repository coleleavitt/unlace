__int64 __fastcall sub_830770(__int64 a1, char a2)
{
  unsigned int v2; // r13d
  unsigned int v5; // r12d
  const char *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // eax
  unsigned int *v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  __int64 v18; // rdi
  unsigned __int64 v19; // r12
  _BYTE *v20; // rax
  __int64 v21; // r13
  void *v22; // rdi
  unsigned __int64 v23; // rdx
  char *v24; // r12
  char *v25; // rbp
  char *v26; // rax
  int v27; // eax
  int v28; // ecx
  const char *v29; // rdx
  int v30; // [rsp+0h] [rbp-C8h]
  unsigned int *v32; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  int v34[4]; // [rsp+18h] [rbp-B0h]
  int v35[4]; // [rsp+30h] [rbp-98h]
  int v36[4]; // [rsp+40h] [rbp-88h]
  int v37[4]; // [rsp+50h] [rbp-78h]
  __int64 v38[2]; // [rsp+60h] [rbp-68h]
  int v39[4]; // [rsp+70h] [rbp-58h]
  int v40[2]; // [rsp+88h] [rbp-40h]

  *(_QWORD *)v40 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 5712);
  if ( v2 != -1 )
  {
    if ( !under_debugger )
      interr(2718);
    BUG();
  }
  v5 = 2;
  *(_OWORD *)v35 = 0;
  v6 = (const char *)(a1 + 1032);
  *(_OWORD *)v36 = 0;
  *(_OWORD *)v37 = 0;
  *(_OWORD *)v38 = 0;
  *(_OWORD *)v39 = 0;
  if ( !a2 )
  {
    v2 = 0;
    v5 = qstat((char *)(a1 + 1032));
    if ( v5 )
    {
      v5 = 0;
    }
    else if ( *(_QWORD *)&v37[2] == *(_QWORD *)(a1 + 5696) && *(_QWORD *)v39 == *(_QWORD *)(a1 + 5704) )
    {
      return 1;
    }
  }
  v7 = 2066;
  v30 = time(nullptr) + 15;
  while ( 1 )
  {
    v8 = v5;
    v9 = qopen_shared(v6, v5, v2);
    *(_DWORD *)(a1 + 5712) = v9;
    if ( v9 != -1 )
      break;
    v10 = (unsigned int *)__errno_location();
    v12 = *v10;
    if ( (_DWORD)v12 == 2 )
    {
      v32 = v10;
      if ( !a2 )
        return 1;
      v8 = 420;
      v14 = qcreate(v6, 420);
      *(_DWORD *)(a1 + 5712) = v14;
      if ( v14 != -1 )
      {
        *(_BYTE *)(a1 + 5640) = 1;
        return 1;
      }
      v10 = v32;
      v12 = *v32;
    }
    if ( (unsigned int)v12 <= 0xB )
    {
      if ( _bittest64(&v7, v12) )
      {
        qsleep(1);
        v10 = (unsigned int *)time(nullptr);
        if ( (__int64)v10 <= v30 )
          continue;
      }
    }
    if ( *(_DWORD *)(a1 + 5712) == -1 )
    {
      v29 = (const char *)qstrerror(0xFFFFFFFFLL, v8, v10, v11);
      sub_375320((__int64)"%s: %s", v6, v29);
    }
    return 1;
  }
  if ( a2 )
  {
    v27 = qfstat(v9);
    v16 = *(_QWORD *)v39;
    v28 = v27;
    v15 = *(_QWORD *)&v37[2];
    if ( !v28 && *(_QWORD *)(a1 + 5696) == *(_QWORD *)&v37[2] && *(_QWORD *)(a1 + 5704) == *(_QWORD *)v39 )
      return 1;
  }
  else
  {
    v15 = *(_QWORD *)&v37[2];
    v16 = *(_QWORD *)v39;
  }
  *(_QWORD *)(a1 + 5696) = v15;
  v17 = *(_QWORD **)(a1 + 5664);
  *(_QWORD *)(a1 + 5704) = v16;
  sub_82C910(v17);
  *(_QWORD *)(a1 + 5664) = 0;
  v18 = *(unsigned int *)(a1 + 5712);
  *(_QWORD *)(a1 + 5672) = a1 + 5656;
  *(_QWORD *)(a1 + 5680) = a1 + 5656;
  *(_QWORD *)(a1 + 5688) = 0;
  v19 = qfilelength(v18);
  if ( v19 <= 7 )
  {
    qclose(*(unsigned int *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
    goto LABEL_42;
  }
  v20 = nullptr;
  ptr = nullptr;
  *(_OWORD *)v34 = 0;
  if ( v19 != -1 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, v19 + 1, 1);
    memset((char *)ptr + *(_QWORD *)v34, 0, v19 + 1 - *(_QWORD *)v34);
    *(_QWORD *)v34 = v19 + 1;
    v20 = ptr;
  }
  v20[v19] = 0;
  v21 = (int)qread(*(unsigned int *)(a1 + 5712), ptr, v19);
  if ( !a2 )
  {
    qclose(*(unsigned int *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
  }
  v22 = ptr;
  if ( *(_DWORD *)ptr != 929121385 || v19 != v21 )
    goto LABEL_44;
  v23 = v19 - 8;
  v24 = (char *)ptr + 4;
  v25 = (char *)ptr + v23 + 4;
  if ( (unsigned int)calc_crc32(929121385, (char *)ptr + 4, v23) != *(_DWORD *)v25 )
  {
    v22 = ptr;
    goto LABEL_44;
  }
  v26 = sub_830040((_QWORD *)(a1 + 5648), v24, v25);
  v22 = ptr;
  if ( !v26 || v25 != v26 )
  {
LABEL_44:
    if ( v22 )
    {
      *(_QWORD *)v34 = 0;
      qfree(v22);
    }
LABEL_42:
    sub_375320((__int64)"%s: corrupted registry file, please delete it", v6);
  }
  if ( ptr )
  {
    *(_QWORD *)v34 = 0;
    qfree(ptr);
  }
  return 1;
}

