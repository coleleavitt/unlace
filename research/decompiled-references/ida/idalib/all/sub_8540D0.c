__int64 __fastcall sub_8540D0(__int64 a1, char a2)
{
  unsigned int v2; // r13d
  unsigned int v4; // r12d
  const char *v5; // r14
  __int64 v6; // r15
  int v7; // eax
  int *v8; // rdx
  unsigned __int64 v9; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  __int64 v15; // rdi
  unsigned __int64 v16; // r12
  _BYTE *v17; // rax
  __int64 v18; // r13
  void *v19; // rdi
  unsigned __int64 v20; // rdx
  char *v21; // r12
  char *v22; // rbp
  char *v23; // rax
  int v24; // eax
  int v25; // ecx
  const char *v26; // rdx
  int v27; // [rsp+0h] [rbp-C8h]
  int *v28; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  int v30[4]; // [rsp+18h] [rbp-B0h]
  int v31[4]; // [rsp+30h] [rbp-98h]
  int v32[4]; // [rsp+40h] [rbp-88h]
  int v33[4]; // [rsp+50h] [rbp-78h]
  __int64 v34[2]; // [rsp+60h] [rbp-68h]
  int v35[4]; // [rsp+70h] [rbp-58h]
  int v36[2]; // [rsp+88h] [rbp-40h]

  *(_QWORD *)v36 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 5712);
  if ( v2 != -1 )
  {
    if ( !under_debugger )
      interr(2718);
    BUG();
  }
  v4 = 2;
  *(_OWORD *)v31 = 0;
  v5 = (const char *)(a1 + 1032);
  *(_OWORD *)v32 = 0;
  *(_OWORD *)v33 = 0;
  *(_OWORD *)v34 = 0;
  *(_OWORD *)v35 = 0;
  if ( !a2 )
  {
    v2 = 0;
    v4 = qstat((char *)(a1 + 1032));
    if ( v4 )
    {
      v4 = 0;
    }
    else if ( *(_QWORD *)&v33[2] == *(_QWORD *)(a1 + 5696) && *(_QWORD *)v35 == *(_QWORD *)(a1 + 5704) )
    {
      return 1;
    }
  }
  v6 = 2066;
  v27 = time(nullptr) + 15;
  while ( 1 )
  {
    v7 = qopen_shared(v5, v4, v2);
    *(_DWORD *)(a1 + 5712) = v7;
    if ( v7 != -1 )
      break;
    v8 = __errno_location();
    v9 = (unsigned int)*v8;
    if ( (_DWORD)v9 == 2 )
    {
      v28 = v8;
      if ( !a2 )
        return 1;
      v11 = qcreate(v5, 420);
      *(_DWORD *)(a1 + 5712) = v11;
      if ( v11 != -1 )
      {
        *(_BYTE *)(a1 + 5640) = 1;
        return 1;
      }
      v9 = (unsigned int)*v28;
    }
    if ( (unsigned int)v9 <= 0xB )
    {
      if ( _bittest64(&v6, v9) )
      {
        qsleep(1);
        if ( time(nullptr) <= v27 )
          continue;
      }
    }
    if ( *(_DWORD *)(a1 + 5712) == -1 )
    {
      v26 = (const char *)qstrerror(0xFFFFFFFFLL);
      sub_378C70((__int64)"%s: %s", v5, v26);
    }
    return 1;
  }
  if ( a2 )
  {
    v24 = qfstat(v7);
    v13 = *(_QWORD *)v35;
    v25 = v24;
    v12 = *(_QWORD *)&v33[2];
    if ( !v25 && *(_QWORD *)(a1 + 5696) == *(_QWORD *)&v33[2] && *(_QWORD *)(a1 + 5704) == *(_QWORD *)v35 )
      return 1;
  }
  else
  {
    v12 = *(_QWORD *)&v33[2];
    v13 = *(_QWORD *)v35;
  }
  *(_QWORD *)(a1 + 5696) = v12;
  v14 = *(_QWORD **)(a1 + 5664);
  *(_QWORD *)(a1 + 5704) = v13;
  sub_850270(v14);
  *(_QWORD *)(a1 + 5664) = 0;
  v15 = *(unsigned int *)(a1 + 5712);
  *(_QWORD *)(a1 + 5672) = a1 + 5656;
  *(_QWORD *)(a1 + 5680) = a1 + 5656;
  *(_QWORD *)(a1 + 5688) = 0;
  v16 = qfilelength(v15);
  if ( v16 <= 7 )
  {
    qclose(*(unsigned int *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
    goto LABEL_42;
  }
  v17 = nullptr;
  ptr = nullptr;
  *(_OWORD *)v30 = 0;
  if ( v16 != -1 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, v16 + 1, 1);
    memset((char *)ptr + *(_QWORD *)v30, 0, v16 + 1 - *(_QWORD *)v30);
    *(_QWORD *)v30 = v16 + 1;
    v17 = ptr;
  }
  v17[v16] = 0;
  v18 = (int)qread(*(unsigned int *)(a1 + 5712), ptr, v16);
  if ( !a2 )
  {
    qclose(*(unsigned int *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
  }
  v19 = ptr;
  if ( *(_DWORD *)ptr != 929121385 || v16 != v18 )
    goto LABEL_44;
  v20 = v16 - 8;
  v21 = (char *)ptr + 4;
  v22 = (char *)ptr + v20 + 4;
  if ( (unsigned int)calc_crc32(929121385, (char *)ptr + 4, v20) != *(_DWORD *)v22 )
  {
    v19 = ptr;
    goto LABEL_44;
  }
  v23 = sub_8539A0((_QWORD *)(a1 + 5648), v21, v22);
  v19 = ptr;
  if ( !v23 || v22 != v23 )
  {
LABEL_44:
    if ( v19 )
    {
      *(_QWORD *)v30 = 0;
      qfree(v19);
    }
LABEL_42:
    sub_378C70((__int64)"%s: corrupted registry file, please delete it", v5);
  }
  if ( ptr )
  {
    *(_QWORD *)v30 = 0;
    qfree(ptr);
  }
  return 1;
}
