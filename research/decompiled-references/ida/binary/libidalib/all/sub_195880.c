unsigned __int64 __fastcall sub_195880(__int64 a1, __int64 *a2)
{
  void (*v4)(void); // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdi
  int v12; // edx
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // edx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  _DWORD *v23; // rdi
  __int64 v24; // rax
  int v25; // edx
  __int64 (*v26)(); // rcx
  __int64 v27; // rax
  __int64 v28; // rsi
  const void *v30; // r14
  void *v31; // rax

  v4 = *(void (**)(void))(*(_QWORD *)a1 + 392LL);
  if ( v4 != nullsub_121 )
    v4();
  v5 = *a2;
  *(_QWORD *)(a1 + 2520) = *a2;
  if ( !*(_BYTE *)(v5 + 8) )
  {
    if ( !under_debugger )
      interr();
    goto LABEL_33;
  }
  *(_QWORD *)(a1 + 2528) = a2[1];
  if ( (__int64 *)(a1 + 2576) != a2 + 5 )
  {
    v6 = a2[6];
    if ( v6 > 1 )
    {
      v30 = (const void *)a2[5];
      v31 = *(void **)(a1 + 2576);
      if ( *(_QWORD *)(a1 + 2592) < v6 )
      {
        v31 = (void *)qvector_reserve();
        *(_QWORD *)(a1 + 2576) = v31;
      }
      *(_QWORD *)(a1 + 2584) = v6;
      memmove(v31, v30, v6 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 2576) + v6 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 2584) = 0;
    }
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(v7, a1);
  *(_BYTE *)(a1 + 2120) = 0;
  v9 = *(_QWORD *)(a1 + 2520);
  *(_QWORD *)(a1 + 2248) = v8;
  *(_QWORD *)(a1 + 2104) = 0;
  *(_QWORD *)(a1 + 1928) = -1;
  *(_DWORD *)(a1 + 1936) = -1;
  sub_195420((__int64 *)(a1 + 2128), v9, 0);
  v10 = *(_QWORD *)(a1 + 2520);
  v11 = a1 + 2152;
  sub_195420((__int64 *)(a1 + 2152), v10, 1);
  v12 = *(_DWORD *)(a1 + 2104);
  v13 = v12 & 0xFFFFFFFE;
  v14 = v12 | 1;
  if ( (a2[8] & 1) != 0 )
    v13 = v14;
  v15 = v13;
  *(_DWORD *)(a1 + 2104) = v13;
  v16 = v13 & 0xFFFFFFFD;
  v17 = v15 | 2;
  if ( (a2[8] & 2) != 0 )
    v16 = v17;
  v18 = *(_QWORD *)(a1 + 2520);
  *(_DWORD *)(a1 + 2104) = v16;
  v19 = ((*(_DWORD *)(v18 + 12) >> 19) & 0x3F) - 1;
  if ( *(_BYTE *)(v18 + 8) > 3u )
  {
    if ( ((*(_DWORD *)(v18 + 12) >> 19) & 0x3F) != 0 )
      goto LABEL_32;
    v19 = *(char *)(v18 + 11);
  }
  *(_DWORD *)(a1 + 2176) = v19;
  *(_DWORD *)(a1 + 2240) = 0;
  if ( *(int *)(v18 + 48) <= 0 )
  {
    if ( !under_debugger )
    {
      v11 = 40583;
      interr();
LABEL_32:
      sub_18EB20(v11, v10);
    }
LABEL_33:
    BUG();
  }
  v20 = xmmword_256B08;
  v21 = qword_256B00;
  if ( *((_QWORD *)&xmmword_256B08 + 1) < (unsigned __int64)(xmmword_256B08 + 1) )
  {
    qword_256B00 = qvector_reserve();
    v21 = qword_256B00;
    v20 = xmmword_256B08;
  }
  *(_QWORD *)(v21 + 8 * v20) = a1;
  v22 = *(int *)(a1 + 2176);
  *(_QWORD *)&xmmword_256B08 = xmmword_256B08 + 1;
  if ( (unsigned int)v22 <= 0x7F )
    qword_256700[v22] = a1;
  v23 = *(_DWORD **)(a1 + 2520);
  v24 = 0;
  v25 = v23[3];
  if ( (v25 & 0x2000000) != 0 )
  {
    v26 = *(__int64 (**)())(*(_QWORD *)v23 + 128LL);
    if ( (v25 & 4) != 0 )
    {
      if ( v26 == sub_B7410 )
        goto LABEL_22;
    }
    else if ( v26 == sub_91C50 )
    {
      goto LABEL_22;
    }
    v24 = ((__int64 (__fastcall *)(_DWORD *, __int64))v26)(v23, v21);
  }
LABEL_22:
  *(_QWORD *)(a1 + 2568) = v24;
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
  v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 40LL))(v27, a1);
  return sub_1842C0(a1 + 160, v28);
}

