unsigned __int64 __fastcall sub_385020(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // r12
  __int64 v6; // rdx
  unsigned int v7; // r14d
  __int64 (__fastcall *v8)(__int64, __int64); // rdx
  int v9; // r15d
  _QWORD *v10; // rbx
  int v11; // edx
  _QWORD *v12; // rax
  __int64 v13; // rax
  void (__fastcall ***v14)(_QWORD); // rdi
  bool v15; // zf
  void (__fastcall ***v16)(_QWORD); // rdi
  _DWORD *v18; // [rsp+18h] [rbp-50h] BYREF
  _DWORD *v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v1 = a1[13];
  v20 = __readfsqword(0x28u);
  while ( v1 )
  {
    sub_382730(*(_QWORD **)(v1 + 24));
    v3 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = a1[5];
  v5 = a1 + 12;
  a1[14] = a1 + 12;
  v6 = a1[6];
  a1[13] = 0;
  a1[15] = a1 + 12;
  a1[16] = 0;
  (*(void (__fastcall **)(_DWORD **, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 56LL))(&v18, v4, v6, 0, 0);
  if ( v18 )
  {
    v7 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
    if ( (_BYTE)v7 )
    {
      while ( 1 )
      {
        v4 = (__int64)v18;
        v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL);
        if ( v8 == sub_1992A0 )
          (*(void (__fastcall **)(_DWORD **))(*(_QWORD *)v18 + 24LL))(&v19);
        else
          ((void (__fastcall *)(_DWORD **))v8)(&v19);
        v9 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 24LL))(v19);
        if ( v9 == -1 )
          goto LABEL_19;
        v10 = (_QWORD *)a1[13];
        if ( !v10 )
        {
          if ( v5 != (_QWORD *)a1[14] && v9 <= *(_DWORD *)(std::_Rb_tree_decrement(a1 + 12) + 32) )
            goto LABEL_19;
          v10 = a1 + 12;
          goto LABEL_18;
        }
        while ( 1 )
        {
          v11 = *((_DWORD *)v10 + 8);
          v12 = (_QWORD *)v10[2];
          v4 = v7;
          if ( v9 >= v11 )
          {
            v12 = (_QWORD *)v10[3];
            v4 = 0;
          }
          if ( !v12 )
            break;
          v10 = v12;
        }
        if ( !(_BYTE)v4 )
          goto LABEL_15;
        if ( (_QWORD *)a1[14] != v10 )
          break;
LABEL_16:
        if ( v5 != v10 )
          LOBYTE(v7) = v9 < *((_DWORD *)v10 + 8);
LABEL_18:
        v13 = operator new(0x28u);
        *(_DWORD *)(v13 + 32) = v9;
        v4 = v13;
        std::_Rb_tree_insert_and_rebalance((unsigned __int8)v7, v13, v10, a1 + 12);
        ++a1[16];
LABEL_19:
        v14 = (void (__fastcall ***)(_QWORD))v19;
        if ( v19 )
        {
          v15 = v19[2]-- == 1;
          if ( v15 )
            (**v14)(v14);
        }
        v7 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 16LL))(v18);
        if ( !(_BYTE)v7 )
          goto LABEL_23;
      }
      v11 = *(_DWORD *)(std::_Rb_tree_decrement(v10) + 32);
LABEL_15:
      if ( v9 <= v11 )
        goto LABEL_19;
      goto LABEL_16;
    }
  }
LABEL_23:
  sub_383B60(a1, v4);
  v16 = (void (__fastcall ***)(_QWORD))v18;
  if ( v18 )
  {
    v15 = v18[2]-- == 1;
    if ( v15 )
      (**v16)(v16);
  }
  return v20 - __readfsqword(0x28u);
}
