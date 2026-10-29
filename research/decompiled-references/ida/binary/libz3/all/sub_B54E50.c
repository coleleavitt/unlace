__int64 __fastcall sub_B54E50(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  _DWORD *v7; // rax
  int v8; // edx
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  void *v13; // r14
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  __int64 v23; // [rsp+18h] [rbp-50h]
  _QWORD v24[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *a2;
  LODWORD(result) = sub_B39350((__int64)a2, *(_DWORD *)(a1 + 8));
  if ( (_DWORD)result == -1
    || (result = (unsigned int)result, a2 != *(__int64 **)(*(_QWORD *)(a1 + 32) + 8LL * (unsigned int)result)) )
  {
    sub_B54D60(a1, (__int64)a2);
    v7 = *(_DWORD **)(a3 + 24);
    if ( v7 )
    {
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 1384) + 16LL);
      if ( *v7 == v8
        && v7[1] == 1
        && (*(_WORD *)(v5 + 4) || (v9 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) == nullptr
                               || v8 != *v9
                               || v9[1] != 49) )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v22 = 4;
        v11 = *(_QWORD *)(a1 + 1392);
        v23 = 0;
        v21 = v10;
        v24[0] = 1;
        v24[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v24);
        BYTE4(v24[0]) &= ~1u;
        LODWORD(v24[0]) = 1;
        v12 = sub_1674520(v11, &v22, 3);
        v13 = qword_1C7F2C0;
        v14 = v12;
        sub_182CBA0(qword_1C7F2C0, &v22);
        sub_182CBA0(v13, v24);
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        v15 = *(_QWORD *)(a1 + 1392);
        sub_D56BF0(&v22, a1 + 72, v5);
        v16 = sub_15E1B70(*(_QWORD *)(v15 + 8));
        v17 = v16;
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        v18 = v22;
        if ( v22 )
        {
          v19 = v23;
          v20 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(v19, v18);
        }
        sub_B52AB0(a1, v17);
        if ( v14 )
        {
          v20 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(v21, v14);
        }
        if ( v17 )
        {
          v20 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(v21, v17);
        }
      }
    }
    result = sub_8E7030(*(_QWORD *)(a1 + 16));
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL))(a1, v5);
  }
  return result;
}

