__int64 __fastcall sub_CCBE40(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  unsigned __int64 v4; // r12
  void **v6; // rbp
  __int64 v7; // r14
  _QWORD *v8; // rbp
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  _BYTE *v11; // rax
  _BYTE *v12; // rsi
  signed __int64 v13; // rbx
  void **v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  void **v21; // r12
  void **v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rdi
  void **v26; // r12
  _BYTE *src; // [rsp+0h] [rbp-48h]
  unsigned int v28; // [rsp+Ch] [rbp-3Ch]

  if ( a1 != a2 )
  {
    v4 = *(unsigned int *)(a1 + 8);
    v6 = *(void ***)a1;
    v28 = *(_DWORD *)(a2 + 8);
    v3 = v28;
    if ( v28 <= v4 )
    {
      v14 = *(void ***)a1;
      if ( v28 )
      {
        v15 = *(_QWORD *)a2;
        v16 = 32LL * v28;
        v17 = *(_QWORD *)a1;
        v18 = *(_QWORD *)a2 + v16;
        do
        {
          v19 = v15;
          v20 = v17;
          v15 += 32;
          v17 += 32;
          sub_9CAB60(v20, v19);
        }
        while ( v15 != v18 );
        v14 = *(void ***)a1;
        v4 = *(unsigned int *)(a1 + 8);
        v6 = (void **)((char *)v6 + v16);
      }
      v21 = &v14[4 * v4];
      while ( v6 != v21 )
      {
        while ( 1 )
        {
          v21 -= 4;
          if ( *v21 == v21 + 2 )
            break;
          operator delete(*v21);
          if ( v6 == v21 )
            goto LABEL_23;
        }
      }
      goto LABEL_23;
    }
    if ( v28 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v26 = &v6[4 * v4];
      while ( v26 != v6 )
      {
        while ( 1 )
        {
          v26 -= 4;
          if ( *v26 == v26 + 2 )
            break;
          operator delete(*v26);
          if ( v26 == v6 )
            goto LABEL_35;
        }
      }
LABEL_35:
      *(_DWORD *)(a1 + 8) = 0;
      v4 = 0;
      sub_A684B0(a1, v28);
      v3 = *(unsigned int *)(a2 + 8);
      v6 = *(void ***)a1;
      v7 = *(_QWORD *)a2;
    }
    else
    {
      v7 = *(_QWORD *)a2;
      if ( *(_DWORD *)(a1 + 8) )
      {
        v4 *= 32LL;
        v23 = (void **)((char *)v6 + v4);
        do
        {
          v24 = v7;
          v25 = (__int64)v6;
          v6 += 4;
          v7 += 32;
          sub_9CAB60(v25, v24);
        }
        while ( v6 != v23 );
        v3 = *(unsigned int *)(a2 + 8);
        v6 = *(void ***)a1;
        v7 = *(_QWORD *)a2;
      }
    }
    v8 = (void **)((char *)v6 + v4);
    v9 = v7 + v4;
    v10 = v7 + 32 * v3;
    if ( v9 == v10 )
    {
LABEL_23:
      *(_DWORD *)(a1 + 8) = v28;
      return a1;
    }
    while ( 1 )
    {
      *v8 = v8 + 2;
      v12 = *(_BYTE **)v9;
      v13 = *(_QWORD *)(v9 + 8);
      if ( v13 + *(_QWORD *)v9 && !v12 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v13 > 0xF )
        break;
      v11 = (_BYTE *)*v8;
      if ( v13 == 1 )
      {
        *v11 = *v12;
        v11 = (_BYTE *)*v8;
      }
      else if ( v13 )
      {
        goto LABEL_27;
      }
LABEL_8:
      v9 += 32LL;
      v8[1] = v13;
      v8 += 4;
      v11[v13] = 0;
      if ( v10 == v9 )
        goto LABEL_23;
    }
    if ( v13 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src = *(_BYTE **)v9;
    v11 = (_BYTE *)operator new(v13 + 1);
    v8[2] = v13;
    v12 = src;
    *v8 = v11;
LABEL_27:
    memcpy(v11, v12, v13);
    v11 = (_BYTE *)*v8;
    goto LABEL_8;
  }
  return a1;
}

