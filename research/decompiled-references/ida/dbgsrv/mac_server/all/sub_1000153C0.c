/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000153C0
// Address: 0x00000001000153C0

//----- (00000001000153C0) ----------------------------------------------------
__int64 __fastcall sub_1000153C0(__int64 a1, const char *a2)
{
  off_t v3; // r14
  __int64 v4; // rdi
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // r13
  void *v8; // rdi
  __int64 v9; // r12
  _BYTE *v10; // rax
  const char *v11; // rdi
  _QWORD *v12; // rax
  const char *v13; // rsi
  char v14; // r15
  char *v15; // rax
  off_t v16; // r14
  __int64 v17; // rsi
  __int128 v19; // [rsp+10h] [rbp-250h] BYREF
  unsigned __int64 v20; // [rsp+20h] [rbp-240h]
  char __s1[4]; // [rsp+30h] [rbp-230h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-22Ch]
  unsigned int v23; // [rsp+38h] [rbp-228h]
  unsigned int v24; // [rsp+3Ch] [rbp-224h]
  unsigned int v25; // [rsp+40h] [rbp-220h]
  unsigned int v26; // [rsp+44h] [rbp-21Ch]
  off_t v27; // [rsp+78h] [rbp-1E8h]

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 && *(_QWORD *)(a1 + 96) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 752) = v4;
LABEL_28:
    if ( qlseek(v4, v3, 0) == v3 && qlread(*(_QWORD *)(a1 + 752), __s1, 24) == 24 )
    {
      *(_QWORD *)(a1 + 808) = v3 + *(unsigned int *)__s1;
      *(_QWORD *)(a1 + 816) = v22;
      v15 = sub_1000133A0(*(_QWORD *)(a1 + 752), v3 + v23, v24, 1);
      *(_QWORD *)(a1 + 824) = v15;
      *(_QWORD *)(a1 + 776) = v15;
      v16 = v25 + v3;
      v17 = *(_QWORD *)(a1 + 752);
      if ( *(_DWORD *)(a1 + 32) < 0x188u )
        sub_100016BC0((void **)(a1 + 704), v17, v16, v26, -1, (__int64)"local symbols size", 0);
      else
        sub_100016940((void **)(a1 + 728), v17, v16, v26, -1, (__int64)"local symbols size", 0);
    }
    return __stack_chk_guard;
  }
  if ( a2 )
  {
    v19 = 0;
    v20 = 0;
    v5 = strlen(a2);
    v6 = v5;
    v7 = v5 + 1;
    if ( v5 == -1 )
    {
      v8 = nullptr;
    }
    else
    {
      v8 = qvector_reserve((__int64)&v19, nullptr, v5 + 1, 1u);
      *(_QWORD *)&v19 = v8;
    }
    *((_QWORD *)&v19 + 1) = v7;
    memmove(v8, a2, v6);
    *(_BYTE *)(v19 + v6) = 0;
    v9 = 0;
    if ( *((_QWORD *)&v19 + 1) )
      v9 = *((_QWORD *)&v19 + 1) - 1LL;
    v10 = (_BYTE *)v19;
    if ( v20 < v9 + 9 )
    {
      v10 = qvector_reserve((__int64)&v19, (void *)v19, v9 + 9, 1u);
      *(_QWORD *)&v19 = v10;
    }
    *((_QWORD *)&v19 + 1) = v9 + 9;
    v10[v9 + 8] = 0;
    *(_QWORD *)(v19 + v9) = 0x736C6F626D79732ELL;
    if ( *((_QWORD *)&v19 + 1) )
      v11 = (const char *)v19;
    else
      v11 = _s1;
    v12 = open_linput(v11, 0);
    *(_QWORD *)(a1 + 752) = v12;
    if ( v12 && (*(_BYTE *)(a1 + 775) = 1, qlread((__int64)v12, __s1, 512) == 512) )
    {
      if ( !strncmp(__s1, (const char *)(a1 + 16), 0x10u) )
      {
        v14 = 1;
        v3 = v27;
      }
      else
      {
        if ( *((_QWORD *)&v19 + 1) )
          v13 = (const char *)v19;
        else
          v13 = _s1;
        v14 = 0;
        sub_100000AE0((int)"Error loading %s: magic does not match\n", v13);
      }
    }
    else
    {
      v14 = 0;
    }
    if ( (_QWORD)v19 )
    {
      *((_QWORD *)&v19 + 1) = 0;
      qfree((void *)v19);
    }
    if ( v14 )
    {
      v4 = *(_QWORD *)(a1 + 752);
      goto LABEL_28;
    }
  }
  return __stack_chk_guard;
}
