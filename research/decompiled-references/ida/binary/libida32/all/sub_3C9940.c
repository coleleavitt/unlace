__int64 __fastcall sub_3C9940(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  int v4; // edx
  _QWORD *v6; // r12
  __int64 result; // rax
  _DWORD *v8; // rdi
  _DWORD *v9; // r13
  int v10; // eax
  _QWORD *v11; // r14
  int v12; // r13d
  __int64 v13; // rdx
  _DWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // cc
  __int64 range; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 *v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  _DWORD v27[3]; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 1024);
  v4 = *(_DWORD *)(a1 + 1016);
  v28 = __readfsqword(0x28u);
  if ( v3 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    result = 0;
    if ( a2 == v4 )
    {
      v21 = *(__int64 **)(a1 + 1008);
      v22 = sub_8954D0(v21, a2);
      result = 0;
      if ( v22 )
      {
        v23 = *v21;
        v24 = v22 >> *(_DWORD *)(*v21 + 8);
        if ( (_DWORD)v24 == *((_DWORD *)v21 + 16) )
        {
          v25 = v21[9];
        }
        else
        {
          *((_DWORD *)v21 + 16) = v24;
          v25 = sub_898D20(v23, (unsigned int)v24, 1);
          v21[9] = v25;
        }
        *(_BYTE *)(v25 - 2) = 1;
        v26 = (_QWORD *)*v21;
        *((_BYTE *)v21 + 92) = 1;
        result = (v22 & (*v26 - 1LL) & 0xFFFFFFFFFFFFFFFCLL) + v21[9];
      }
      if ( *(_QWORD *)(a1 + 1024) != result )
      {
        if ( !under_debugger )
          interr(55);
        BUG();
      }
    }
  }
  else
  {
    if ( v3 == -1 )
    {
      if ( a2 == v4 )
      {
        v20 = *(_QWORD *)(a1 + 992);
        *(_BYTE *)(a1 + 1192) = 1;
        return v20 + 40;
      }
      v6 = (_QWORD *)(a1 + 944);
    }
    else
    {
      v6 = (_QWORD *)(a1 + 896);
      if ( a2 == v4 )
      {
        result = *(_QWORD *)(a1 + 992) + 40LL;
        if ( v6 != (_QWORD *)(a1 + 944) )
          return result;
LABEL_23:
        *(_BYTE *)(a1 + 1192) = 1;
        return result;
      }
    }
    v8 = *(_DWORD **)(a1 + 992);
    v9 = (_DWORD *)v6[3];
    while ( 1 )
    {
      if ( v8 == v9 )
      {
LABEL_26:
        v12 = 0;
        v11 = v6 + 1;
        if ( !*(_QWORD *)(a1 + 1160) )
          goto LABEL_14;
        goto LABEL_27;
      }
      v8 = (_DWORD *)std::_Rb_tree_decrement();
      v10 = v8[9];
      if ( v10 )
        break;
      if ( (v8[10] & 0x600) != 0x200 )
        goto LABEL_26;
    }
    v11 = v6 + 1;
    if ( v6 + 1 == (_QWORD *)v8 )
      v12 = 0;
    else
      v12 = (a2 < v8[8] + v10) << 9;
    if ( !*(_QWORD *)(a1 + 1160) )
      goto LABEL_14;
LABEL_27:
    v8 = (_DWORD *)(a1 + 1152);
    range = rangeset_t_find_range(a1 + 1152, a2);
    v19 = v12;
    if ( range )
    {
      BYTE1(v19) = BYTE1(v12) | 1;
      v12 = v19;
    }
LABEL_14:
    v13 = v6[2];
    v27[0] = a2;
    v14 = v11;
    v27[1] = 0;
    v27[2] = v12;
    if ( !v13 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v13 + 16);
        v16 = *(_QWORD *)(v13 + 24);
        if ( *(_DWORD *)(v13 + 32) < a2 )
          break;
        v14 = (_DWORD *)v13;
        v13 = *(_QWORD *)(v13 + 16);
        if ( !v15 )
          goto LABEL_19;
      }
      v13 = *(_QWORD *)(v13 + 24);
    }
    while ( v16 );
LABEL_19:
    if ( v14 == (_DWORD *)v11 || a2 < v14[8] )
    {
LABEL_24:
      v8 = v6;
      v14 = sub_3C8070(v6, (__int64)v14, (__int64)v27);
    }
    v17 = *(_QWORD *)(a1 + 1024) <= 0xFFFFFFFFFFFFFFFDLL;
    *(_QWORD *)(a1 + 992) = v14;
    if ( v17 )
      sub_3B4540(v8, v14, v13, v15);
    *(_DWORD *)(a1 + 1016) = a2;
    result = (__int64)(v14 + 10);
    if ( v6 == (_QWORD *)(a1 + 944) )
      goto LABEL_23;
  }
  return result;
}

