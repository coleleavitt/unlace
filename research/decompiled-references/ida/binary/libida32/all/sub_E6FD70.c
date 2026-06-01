__int64 __fastcall sub_E6FD70(__int64 a1, __int64 a2, const void *a3, size_t a4, _QWORD *a5)
{
  __int64 v5; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // r14
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // r10d
  __int64 *v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rax
  __int64 v22; // r15
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rcx
  char *v26; // rdx
  _QWORD *v27; // r11
  unsigned int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // [rsp+0h] [rbp-60h]
  unsigned int v35; // [rsp+0h] [rbp-60h]
  __int64 *v36; // [rsp+8h] [rbp-58h]
  __int64 *v37; // [rsp+8h] [rbp-58h]
  _QWORD *v38; // [rsp+10h] [rbp-50h]
  __int64 *v39[8]; // [rsp+20h] [rbp-40h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 2320LL) + 2LL) & 4) != 0 )
  {
    v5 = a2;
    if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
    if ( *a5 )
      goto LABEL_7;
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
    v14 = sub_2220DF0(a3, a4);
    v15 = sub_2220F70(v12, a3, a4, v14);
    v17 = v15;
    v18 = (__int64 *)(*(_QWORD *)v12 + 8LL * v15);
    if ( *v18 )
    {
      if ( *v18 != -8 )
      {
        sub_965750(v39, v18, 0);
        v21 = v39[0];
        goto LABEL_16;
      }
      --*(_DWORD *)(v12 + 16);
    }
    v24 = *(_QWORD *)(v12 + 24);
    *(_QWORD *)(v12 + 104) += a4 + 17;
    v25 = (_QWORD *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v26 = (char *)v25 + a4 + 17;
    if ( *(_QWORD *)(v12 + 32) >= (unsigned __int64)v26 && v24 )
    {
      *(_QWORD *)(v12 + 24) = v26;
    }
    else
    {
      v37 = v18;
      v35 = v17;
      v33 = sub_962430(v12 + 24, a4 + 17, a4 + 17, 3, v16, (__int64)v18);
      v18 = v37;
      v17 = v35;
      v25 = (_QWORD *)v33;
    }
    v27 = v25 + 2;
    if ( a4 )
    {
      v38 = v25;
      v36 = v18;
      v34 = v17;
      v32 = memcpy(v25 + 2, a3, a4);
      v25 = v38;
      v18 = v36;
      v17 = v34;
      v27 = v32;
    }
    *((_BYTE *)v27 + a4) = 0;
    *v25 = a4;
    v25[1] = 0;
    *v18 = (__int64)v25;
    ++*(_DWORD *)(v12 + 12);
    v28 = sub_2221390(v12, v17);
    sub_965750(v39, (__int64 *)(*(_QWORD *)v12 + 8LL * v28), 0);
    v21 = v39[0];
LABEL_16:
    v22 = *v21;
    v23 = *(_QWORD **)(*v21 + 8);
    if ( !v23 )
    {
      v29 = *(_QWORD *)(v12 + 120);
      if ( !v29
        || (v23 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v29 + 16LL))(
                              v29,
                              a3,
                              a4),
            (*(_QWORD *)(v22 + 8) = v23) == 0) )
      {
        v30 = *(_QWORD *)(v12 + 24);
        *(_QWORD *)(v12 + 104) += 24LL;
        v23 = (_QWORD *)((v30 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( *(_QWORD *)(v12 + 32) >= (unsigned __int64)(v23 + 3) && v30 )
          *(_QWORD *)(v12 + 24) = v23 + 3;
        else
          v23 = (_QWORD *)sub_962430(v12 + 24, 24, 24, 3, v19, v20);
        v31 = *v23 & 0xFFFFF80000000000LL;
        v23[1] = 0;
        *v23 = v31 | 0x1FFFC05;
        *(_QWORD *)(v22 + 8) = v23;
        v23[2] = v22;
      }
    }
    *a5 = v23;
LABEL_7:
    while ( 1 )
    {
      v9 = sub_F46EC0(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL));
      if ( !v9 )
        break;
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL);
      if ( (v10 & 7) != 0 )
      {
        if ( !*a5 )
          return 1;
      }
      else if ( *a5 == (v10 & 0xFFFFFFFFFFFFFFF8LL) )
      {
        return 1;
      }
      v5 = sub_F39D80(v9);
    }
    return 0;
  }
  return 0;
}

