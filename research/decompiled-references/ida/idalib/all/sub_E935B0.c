_QWORD *__fastcall sub_E935B0(__int64 a1, int a2)
{
  __int64 v2; // rbp
  _QWORD *result; // rax
  size_t v4; // r12
  __int64 v5; // rbx
  const void *v6; // r14
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // r13
  char *v16; // rdx
  _QWORD *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+Ch] [rbp-4Ch]
  int v25; // [rsp+Ch] [rbp-4Ch]
  __int64 *v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a1 + 8LL * a2;
  result = *(_QWORD **)(v2 + 8);
  if ( !result )
  {
    v4 = 0;
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
    v6 = *(&off_2B4BB20 + a2);
    if ( v6 )
      v4 = strlen((const char *)*(&off_2B4BB20 + a2));
    v7 = sub_2244B30(v6, v4);
    v8 = (unsigned int)sub_2244CB0(v5, v6, v4, v7);
    v10 = (__int64 *)(*(_QWORD *)v5 + 8 * v8);
    if ( *v10 )
    {
      if ( *v10 != -8 )
      {
        sub_989490(v26, v10, 0);
        v13 = *v26[0];
        result = *(_QWORD **)(*v26[0] + 8);
        if ( result )
        {
LABEL_7:
          *(_QWORD *)(v2 + 8) = result;
          return result;
        }
LABEL_15:
        v19 = *(_QWORD *)(v5 + 120);
        if ( !v19
          || (result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v19 + 16LL))(
                                   v19,
                                   v6,
                                   v4),
              (*(_QWORD *)(v13 + 8) = result) == 0) )
        {
          v20 = *(_QWORD *)(v5 + 24);
          *(_QWORD *)(v5 + 104) += 24LL;
          result = (_QWORD *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v5 + 32) >= (unsigned __int64)(result + 3) && v20 )
            *(_QWORD *)(v5 + 24) = result + 3;
          else
            result = (_QWORD *)sub_986170(v5 + 24, 24, 24, 3, v11, v12);
          v21 = *result & 0xFFFFF80000000000LL;
          result[1] = 0;
          *result = v21 | 0x1FFFC05;
          *(_QWORD *)(v13 + 8) = result;
          result[2] = v13;
        }
        goto LABEL_7;
      }
      --*(_DWORD *)(v5 + 16);
    }
    v14 = *(_QWORD *)(v5 + 24);
    *(_QWORD *)(v5 + 104) += v4 + 17;
    v15 = (_QWORD *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v16 = (char *)v15 + v4 + 17;
    if ( *(_QWORD *)(v5 + 32) >= (unsigned __int64)v16 && v14 )
    {
      *(_QWORD *)(v5 + 24) = v16;
    }
    else
    {
      v25 = v8;
      v23 = sub_986170(v5 + 24, v4 + 17, v4 + 17, 3, v8, v9);
      LODWORD(v8) = v25;
      v15 = (_QWORD *)v23;
    }
    v17 = v15 + 2;
    if ( v4 )
    {
      v24 = v8;
      v22 = memcpy(v15 + 2, v6, v4);
      LODWORD(v8) = v24;
      v17 = v22;
    }
    *((_BYTE *)v17 + v4) = 0;
    *v15 = v4;
    v15[1] = 0;
    *v10 = (__int64)v15;
    ++*(_DWORD *)(v5 + 12);
    v18 = sub_22450D0(v5, (unsigned int)v8);
    sub_989490(v26, (__int64 *)(*(_QWORD *)v5 + 8LL * v18), 0);
    v13 = *v26[0];
    result = *(_QWORD **)(*v26[0] + 8);
    if ( result )
      goto LABEL_7;
    goto LABEL_15;
  }
  return result;
}
