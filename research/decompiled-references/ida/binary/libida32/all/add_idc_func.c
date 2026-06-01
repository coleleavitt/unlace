__int64 __fastcall add_idc_func(_QWORD *a1)
{
  const char *v1; // r12
  __int64 v2; // r13
  __int64 v3; // r15
  const char **v4; // r14
  __int64 v5; // rbp
  int v6; // r12d
  const char *v7; // r13
  int v8; // edx
  const char *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rdx
  _QWORD *v13; // r13
  _BYTE *v14; // rax
  __int64 v15; // r15
  unsigned int v16; // ebx
  void *v18; // rbp
  void *v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  char *v21; // [rsp+18h] [rbp-40h]

  if ( *a1 && a1[1] && a1[2] )
  {
    v19 = qword_2CAA770;
    qmutex_lock(qword_2CAA770);
    v20 = sub_76BCD0();
    v1 = (const char *)*a1;
    v2 = unk_2C52600;
    if ( !*a1 || !unk_2C52600 )
      goto LABEL_29;
    v3 = 0;
    v21 = off_2C52608;
    v4 = (const char **)off_2C52608;
    while ( 1 )
    {
      v5 = (__int64)v4;
      if ( !strcmp(*v4, v1) )
        break;
      ++v3;
      v4 += 5;
      if ( v3 == v2 )
        goto LABEL_29;
    }
    if ( v4 )
    {
      if ( 0xCCCCCCCCCCCCCCCDLL * (((char *)v4 - v21) >> 3) < *(_QWORD *)(v20 + 48) )
      {
        v16 = 0;
        goto LABEL_27;
      }
    }
    else
    {
LABEL_29:
      unk_2C52600 = v2 + 1;
      v18 = (void *)qcalloc(v2 + 1, 40);
      if ( !v18 )
        sub_3B74D0((int)"add_idc_func");
      memcpy(v18, off_2C52608, 40 * v2);
      if ( off_2C52608 != *(char **)(v20 + 40) )
        qfree(off_2C52608);
      off_2C52608 = (char *)v18;
      v5 = (__int64)v18 + 40 * v2;
      *(_QWORD *)v5 = 0;
      *(_OWORD *)(v5 + 16) = 0;
    }
    sub_76A890(v5);
    *(_QWORD *)v5 = qstrdup(*a1);
    *(_QWORD *)(v5 + 8) = a1[1];
    *(_QWORD *)(v5 + 16) = qstrdup(a1[2]);
    v6 = *((_DWORD *)a1 + 8);
    if ( a1[3] )
    {
      v7 = (const char *)a1[2];
      v8 = strlen(v7);
      v9 = &v7[v8 - 1];
      while ( v8 > 0 )
      {
        if ( *v9-- != 4 )
          break;
        --v8;
      }
      if ( v6 > 0 && v6 <= v8 )
      {
        v10 = (_QWORD *)operator new[](32LL * v6 + 8);
        v11 = v10 + 1;
        *v10 = v6;
        v12 = v6 - 2LL;
        v13 = v10 + 1;
        v14 = v10 + 1;
        do
        {
          --v12;
          *v14 = 2;
          v14 += 32;
          *(_OWORD *)(v14 - 24) = 0;
          *((_QWORD *)v14 - 1) = 0;
        }
        while ( v12 != -2 );
        v15 = 0;
        do
        {
          copy_idcv(v13);
          ++v15;
          v13 += 4;
        }
        while ( v6 > (int)v15 );
        *(_QWORD *)(v5 + 24) = v11;
        *(_DWORD *)(v5 + 32) = v6;
        goto LABEL_26;
      }
      if ( !under_debugger )
        interr(1445);
    }
    else
    {
      if ( !v6 )
      {
LABEL_26:
        v16 = 1;
        *(_DWORD *)(v5 + 36) = *((_DWORD *)a1 + 9);
LABEL_27:
        qmutex_unlock(v19);
        return v16;
      }
      if ( !under_debugger )
        interr(1446);
    }
    BUG();
  }
  return 0;
}

