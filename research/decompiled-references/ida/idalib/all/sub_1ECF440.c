_QWORD *__fastcall sub_1ECF440(__int64 a1, const void *a2, size_t a3)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r15d
  __int64 *v8; // r14
  __int64 v9; // r14
  _QWORD *v10; // r12
  __int64 v11; // rax
  _QWORD *v12; // r12
  char *v13; // rdx
  _BYTE *v14; // rcx
  unsigned int v15; // eax
  __int64 *v17[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = sub_2244B30(a2, a3);
  v7 = sub_2244CB0(a1, a2, a3, v4);
  v8 = (__int64 *)(*(_QWORD *)a1 + 8LL * v7);
  if ( *v8 )
  {
    if ( *v8 != -8 )
    {
      sub_989490(v17, v8, 0);
      v9 = *v17[0];
      v10 = *(_QWORD **)(*v17[0] + 8);
      if ( v10 )
        return v10;
      goto LABEL_4;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v11 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 104) += a3 + 17;
  v12 = (_QWORD *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v13 = (char *)v12 + a3 + 17;
  if ( *(_QWORD *)(a1 + 32) >= (unsigned __int64)v13 && v11 )
    *(_QWORD *)(a1 + 24) = v13;
  else
    v12 = (_QWORD *)sub_986170(a1 + 24, a3 + 17, a3 + 17, 3, v5, v6);
  v14 = v12 + 2;
  if ( a3 )
    v14 = memcpy(v12 + 2, a2, a3);
  v14[a3] = 0;
  *v12 = a3;
  v12[1] = 0;
  *v8 = (__int64)v12;
  ++*(_DWORD *)(a1 + 12);
  v15 = sub_22450D0(a1, v7);
  sub_989490(v17, (__int64 *)(*(_QWORD *)a1 + 8LL * v15), 0);
  v9 = *v17[0];
  v10 = *(_QWORD **)(*v17[0] + 8);
  if ( !v10 )
  {
LABEL_4:
    v10 = (_QWORD *)sub_1EC2080((__int64 *)(a1 + 24), 24, 3u);
    v10[1] = 0;
    *v10 = *v10 & 0xFFFFF80000000000LL | 0x1FFFC05;
    *(_QWORD *)(v9 + 8) = v10;
    v10[2] = v9;
    if ( j__strlen("import") == a3 && (!a3 || !memcmp(a2, "import", a3)) )
    {
      *v10 |= 0x2080000000uLL;
      return *(_QWORD **)(v9 + 8);
    }
  }
  return v10;
}
