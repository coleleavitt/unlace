void __fastcall sub_455B20(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  std::chrono::_V2::steady_clock *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // rdx
  std::chrono::_V2::steady_clock *v12; // rdi
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rbp
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // [rsp+Ch] [rbp-3Ch] BYREF
  std::chrono::_V2::steady_clock *v21; // [rsp+10h] [rbp-38h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-30h]

  ++*(_DWORD *)(a1 + 16);
  if ( !*(_BYTE *)(a1 + 40) )
  {
    v18 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 24) = v18;
  }
  v7 = *(std::chrono::_V2::steady_clock **)(*a2 + 8);
  v8 = *(_QWORD *)(*(_QWORD *)(*a2 + 80) + 16LL);
  v9 = *(_QWORD *)(sub_4095A0(*a2, (__int64)a2, a3, a4, a5, a6) + 8);
  if ( v9 )
    v10 = *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  v11 = *a2;
  v21 = v7;
  v12 = (std::chrono::_V2::steady_clock *)v8;
  v22 = nullptr;
  if ( !(unsigned __int8)sub_40B430(v8, *(_DWORD *)(v11 + 96), v11, &v20, (__int64)&v21) )
  {
    sub_1872CE0("");
    sub_1873130((char *)&qword_70 + 2, 165);
  }
  v13 = v22;
  if ( v22 )
  {
    v14 = *((unsigned int *)v22 - 1);
    if ( (unsigned int)v14 >= v10 )
      goto LABEL_8;
  }
  else if ( !v10 )
  {
    goto LABEL_16;
  }
  sub_40ABA0(*a2, *a2 + 80, (__int64)&v21);
  v12 = (std::chrono::_V2::steady_clock *)*a2;
  sub_3FE9B0(*a2, v20);
  v13 = v22;
  if ( !v22 )
    goto LABEL_16;
  v14 = *((unsigned int *)v22 - 1);
LABEL_8:
  v15 = &v13[v14];
  if ( v13 >= v15 )
    goto LABEL_15;
  do
  {
    while ( 1 )
    {
      v16 = *v13;
      if ( *v13 )
      {
        v17 = (*(_DWORD *)(v16 + 8))-- == 1;
        v12 = v21;
        if ( v17 )
          break;
      }
      if ( ++v13 >= v15 )
        goto LABEL_14;
    }
    sub_15D7BC0(v21, v16);
    ++v13;
  }
  while ( v13 < v15 );
LABEL_14:
  v13 = v22;
  if ( v22 )
  {
LABEL_15:
    v12 = (std::chrono::_V2::steady_clock *)(v13 - 1);
    sub_186B220(v13 - 1);
  }
LABEL_16:
  if ( *(_BYTE *)(a1 + 40) )
  {
    v19 = std::chrono::_V2::steady_clock::now(v12);
    *(_BYTE *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) += v19 - *(_QWORD *)(a1 + 24);
  }
}

