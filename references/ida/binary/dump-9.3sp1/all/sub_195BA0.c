unsigned __int64 __fastcall sub_195BA0(__int64 a1, __int64 a2, __int64 *a3, int a4, char a5)
{
  __int64 v8; // r15
  _DWORD *v9; // rsi
  int tinfo_size; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // r12
  int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  _QWORD *v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v25; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v26; // [rsp+18h] [rbp-60h]
  _DWORD v27[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a2 + 1496);
  v25 = 0xFFFFFFFF00000000LL;
  v26 = nullptr;
  v9 = *(_DWORD **)(v8 + 248);
  tinfo_size = get_tinfo_size();
  v12 = *((unsigned __int8 *)a3 + 8);
  if ( a4 == -1 )
  {
    if ( (_BYTE)v12 == 1 )
    {
      v23 = *a3;
      v27[0] = 1;
      v9 = v27;
      v27[1] = tinfo_size;
      v27[2] = v23;
      sub_125180((__int64)&v25, (unsigned __int8 *)v27);
      sub_11CDA0((__int64)v27);
    }
    else
    {
      if ( (_BYTE)v12 != 5 )
        sub_195120(0, v9);
      LOBYTE(v25) = 5;
      v21 = *a3;
      v22 = (_QWORD *)j__qalloc_or_throw(16, (__int64)v9, v12, v11);
      *v22 = a2;
      v22[1] = v21;
      v26 = v22;
    }
  }
  else
  {
    if ( (_BYTE)v12 )
    {
      if ( !under_debugger )
        sub_383060(51594);
      BUG();
    }
    LOBYTE(v25) = 9;
    v13 = j__qalloc_or_throw(24, (__int64)v9, v12, v11);
    *(_QWORD *)v13 = a2;
    *(_QWORD *)(v13 + 8) = 0;
    *(_DWORD *)(v13 + 16) = a4;
    v26 = (_QWORD *)v13;
  }
  if ( a5 )
  {
    *(_BYTE *)a1 = 10;
    v17 = j__qalloc_or_throw(24, (__int64)v9, v14, v15);
    v18 = -(*((_BYTE *)a3 + 8) != 1);
    sub_123A40(v17, (unsigned __int8 *)&v25, v19, v20);
    *(_DWORD *)(v17 + 16) = v18;
    *(_DWORD *)(v17 + 20) = -1;
    *(_QWORD *)(a1 + 8) = v17;
  }
  else
  {
    sub_11CA10((char *)a1, (char *)&v25);
  }
  sub_1959F0(v8, a1);
  sub_11CDA0((__int64)&v25);
  return v28 - __readfsqword(0x28u);
}
