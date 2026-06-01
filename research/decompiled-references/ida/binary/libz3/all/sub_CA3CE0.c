void __fastcall sub_CA3CE0(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v7; // rsi
  void *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // edx
  void *v13; // rdi
  unsigned int v14; // r12d
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // eax
  void *v19; // r15
  void *v20; // r13
  __int64 *v21; // r8
  int v22; // ecx
  __int64 v23; // rax
  char **exception; // rbx
  void *v25; // [rsp+0h] [rbp-80h]
  int v26; // [rsp+8h] [rbp-78h] BYREF
  char v27; // [rsp+Ch] [rbp-74h]
  __int64 v28; // [rsp+10h] [rbp-70h]
  int v29; // [rsp+18h] [rbp-68h] BYREF
  char v30; // [rsp+1Ch] [rbp-64h]
  __int64 v31; // [rsp+20h] [rbp-60h]
  __int64 v32; // [rsp+28h] [rbp-58h] BYREF
  __int64 v33; // [rsp+30h] [rbp-50h]
  __int64 v34; // [rsp+38h] [rbp-48h] BYREF
  __int64 v35; // [rsp+40h] [rbp-40h]

  if ( *(int *)a3 <= 0 )
    return;
  if ( *((_DWORD *)a1 + 4) == a2
    || (v5 = a2, v7 = a1[3] + 32LL * a2, v8 = qword_1C7F2C0, sub_3ED700((__int64)qword_1C7F2C0, v7, a3)) )
  {
    v21 = (__int64 *)a1[6];
    if ( v21 && (v22 = *((_DWORD *)v21 - 1)) != 0 )
    {
      if ( v22 == 1 )
      {
        v23 = *v21;
        v32 = v23;
        if ( !v23 )
          goto LABEL_24;
      }
      else
      {
        v23 = sub_15E1AF0(a1[1]);
        v32 = v23;
        if ( !v23 )
        {
LABEL_24:
          sub_C9F390(a1 + 9, &v32);
          return;
        }
      }
    }
    else
    {
      v23 = *(_QWORD *)(a1[1] + 864);
      v32 = v23;
      if ( !v23 )
        goto LABEL_24;
    }
    ++*(_DWORD *)(v23 + 8);
    goto LABEL_24;
  }
  v9 = *a1;
  if ( *(_QWORD *)(v9 + 496) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v8, v7) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_C9E960(&v32, off_1C7E178);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, &v32);
    sub_233E40((__int64)&v32);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  v10 = *(_QWORD *)(a1[5] + 8 * v5);
  v11 = a1[6];
  if ( !v11 || (v12 = *(_DWORD *)(v11 - 4), v12 == *(_DWORD *)(v11 - 8)) )
  {
    sub_23A6F0((unsigned int **)a1 + 6);
    v11 = a1[6];
    v12 = *(_DWORD *)(v11 - 4);
  }
  v13 = qword_1C7F2C0;
  v14 = a2 + 1;
  *(_QWORD *)(v11 + 8LL * v12) = v10;
  *(_DWORD *)(v11 - 4) = v12 + 1;
  v32 = 0;
  v33 = 0;
  v34 = 1;
  v35 = 0;
  sub_27B950((__int64)v13, (__int64)&v32, (int *)a3);
  sub_CA3CE0(a1, v14, &v32);
  sub_25A130((char *)&v32);
  v15 = qword_1C7F2C0;
  --*(_DWORD *)(a1[6] - 4);
  v16 = *(_QWORD *)a1[7];
  v32 = 0;
  v33 = 0;
  v34 = 1;
  v17 = v16 + 40 * v5;
  v35 = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    sub_182C690(v15, &v32, a3);
  else
    LODWORD(v32) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(v15, &v34, a3 + 16);
  }
  else
  {
    v18 = *(_DWORD *)(a3 + 16);
    BYTE4(v34) &= ~1u;
    LODWORD(v34) = v18;
  }
  if ( (v34 & 0x100000000LL) != 0 || (_DWORD)v34 != 1 || (*(_BYTE *)(v17 + 20) & 1) != 0 || *(_DWORD *)(v17 + 16) != 1 )
  {
    sub_1852000(qword_1C7F2C0, &v32, v17);
  }
  else
  {
    v25 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, &v32, v17);
    sub_182CBA0(v25, &v34);
    BYTE4(v34) &= ~1u;
    LODWORD(v34) = 1;
  }
  v27 &= 0xFCu;
  v19 = qword_1C7F2C0;
  v30 &= 0xFCu;
  v26 = 0;
  v28 = 0;
  v29 = 1;
  v31 = 0;
  if ( (v32 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v26, &v32);
  else
    v26 = v32;
  if ( (v34 & 0x100000000LL) != 0 )
  {
    sub_182C690(v19, &v29, &v34);
  }
  else
  {
    v30 &= ~1u;
    v29 = v34;
  }
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v32);
  sub_182CBA0(v20, &v34);
  sub_CA3CE0(a1, v14, &v26);
  sub_25A130((char *)&v26);
}

