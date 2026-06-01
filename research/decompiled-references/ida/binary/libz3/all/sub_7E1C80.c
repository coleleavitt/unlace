_DWORD *__fastcall sub_7E1C80(_QWORD *a1, __int64 *a2, __int64 a3)
{
  _DWORD *result; // rax
  unsigned int v6; // eax
  __int64 v7; // r15
  int v8; // edx
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  void *v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  unsigned int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h] BYREF
  __int64 v25; // [rsp+18h] [rbp-50h]
  _QWORD v26[9]; // [rsp+20h] [rbp-48h] BYREF

  result = (_DWORD *)sub_7E5030(a1, a2);
  if ( !(_BYTE)result
    && (*(_WORD *)(*a2 + 4)
     || (result = *(_DWORD **)(*(_QWORD *)(*a2 + 16) + 24LL)) == nullptr
     || *(_QWORD *)result != 0x400000000LL) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 528LL))(a1, a2);
    sub_13D7950(a1[10] + 1592LL, a2, v6, *((unsigned int *)a1 + 3));
    v7 = *a2;
    v8 = *(_DWORD *)(a1[172] + 16LL);
    v9 = *(_DWORD **)(a3 + 24);
    if ( v9 )
    {
      if ( v8 == *v9
        && v9[1] == 1
        && (*(_WORD *)(v7 + 4)
         || (v10 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) == nullptr
         || v8 != *v10
         || v10[1] != 49) )
      {
        v11 = a1[9];
        v24 = 4;
        v12 = a1[173];
        v25 = 0;
        v23 = v11;
        v26[0] = 1;
        v26[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v26);
        BYTE4(v26[0]) &= ~1u;
        LODWORD(v26[0]) = 1;
        v13 = sub_1674520(v12, &v24, 3);
        v14 = qword_1C7F2C0;
        v15 = v13;
        sub_182CBA0(qword_1C7F2C0, &v24);
        sub_182CBA0(v14, v26);
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        v16 = a1[173];
        sub_D56BF0(&v24, a1 + 16, v7);
        v17 = sub_15E1B70(*(_QWORD *)(v16 + 8));
        v18 = v17;
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        v19 = v24;
        if ( v24 )
        {
          v20 = v25;
          v21 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v20, v19);
        }
        v22 = sub_7E58C0(a1, v18);
        sub_7E5160(a1, v22, 0);
        if ( v15 )
        {
          v21 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v23, v15);
        }
        if ( v18 )
        {
          v21 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v23, v18);
        }
      }
    }
    return sub_7E1790(a1, v7);
  }
  return result;
}

