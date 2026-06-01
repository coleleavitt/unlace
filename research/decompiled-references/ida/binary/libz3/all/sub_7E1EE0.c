_DWORD *__fastcall sub_7E1EE0(_QWORD *a1, __int64 *a2, __int64 a3)
{
  _QWORD *v4; // rbx
  _DWORD *result; // rax
  unsigned int v6; // eax
  __int64 v7; // r15
  int v8; // edx
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  unsigned int v20; // eax
  void *v21; // [rsp+0h] [rbp-68h]
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-50h]
  _QWORD v25[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1 - 6;
  result = (_DWORD *)sub_7E5030(a1 - 6, a2);
  if ( !(_BYTE)result
    && (*(_WORD *)(*a2 + 4)
     || (result = *(_DWORD **)(*(_QWORD *)(*a2 + 16) + 24LL)) == nullptr
     || *(_QWORD *)result != 0x400000000LL) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*(a1 - 6) + 528LL))(v4, a2);
    sub_13D7950(a1[4] + 1592LL, a2, v6, *((unsigned int *)a1 - 9));
    v7 = *a2;
    v8 = *(_DWORD *)(a1[166] + 16LL);
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
        v11 = a1[3];
        v23 = 4;
        v12 = a1[167];
        v24 = 0;
        v22 = v11;
        v25[0] = 1;
        v25[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v25);
        BYTE4(v25[0]) &= ~1u;
        LODWORD(v25[0]) = 1;
        v13 = sub_1674520(v12, &v23, 3);
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v23);
        sub_182CBA0(v21, v25);
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        v14 = a1[167];
        sub_D56BF0(&v23, a1 + 10, v7);
        v15 = sub_15E1B70(*(_QWORD *)(v14 + 8));
        v16 = v15;
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        v17 = v23;
        if ( v23 )
        {
          v18 = v24;
          v19 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v19 )
            sub_15D7BC0(v18, v17);
        }
        v20 = sub_7E58C0(v4, v16);
        sub_7E5160(v4, v20, 0);
        if ( v13 )
        {
          v19 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v19 )
            sub_15D7BC0(v22, v13);
        }
        if ( v16 )
        {
          v19 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v19 )
            sub_15D7BC0(v22, v16);
        }
      }
    }
    return sub_7E1790(v4, v7);
  }
  return result;
}

