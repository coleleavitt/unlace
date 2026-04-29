unsigned __int64 __fastcall sub_195BA0(__int64 a1, __int64 a2, __int64 *a3, int a4, char a5)
{
  __int64 v7; // r15
  int tinfo_size; // eax
  char v9; // dl
  __int64 v10; // rax
  __int64 v12; // r12
  int v13; // r13d
  __int64 v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v18; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v19; // [rsp+18h] [rbp-60h]
  _DWORD v20[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 1496);
  v18 = 0xFFFFFFFF00000000LL;
  v19 = nullptr;
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(v7 + 248), 0);
  v9 = *((_BYTE *)a3 + 8);
  if ( a4 == -1 )
  {
    if ( v9 == 1 )
    {
      v16 = *a3;
      v20[0] = 1;
      v20[1] = tinfo_size;
      v20[2] = v16;
      sub_125180((__int64)&v18, (unsigned __int8 *)v20);
      sub_11CDA0((__int64)v20);
    }
    else
    {
      if ( v9 != 5 )
        sub_195120();
      LOBYTE(v18) = 5;
      v14 = *a3;
      v15 = (_QWORD *)j__qalloc_or_throw(16);
      *v15 = a2;
      v15[1] = v14;
      v19 = v15;
    }
  }
  else
  {
    if ( v9 )
    {
      if ( !under_debugger )
        sub_383060(51594);
      BUG();
    }
    LOBYTE(v18) = 9;
    v10 = j__qalloc_or_throw(24);
    *(_QWORD *)v10 = a2;
    *(_QWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 16) = a4;
    v19 = (_QWORD *)v10;
  }
  if ( a5 )
  {
    *(_BYTE *)a1 = 10;
    v12 = j__qalloc_or_throw(24);
    v13 = -(*((_BYTE *)a3 + 8) != 1);
    sub_123A40(v12, (unsigned __int8 *)&v18);
    *(_DWORD *)(v12 + 16) = v13;
    *(_DWORD *)(v12 + 20) = -1;
    *(_QWORD *)(a1 + 8) = v12;
  }
  else
  {
    sub_11CA10((char *)a1, (char *)&v18);
  }
  sub_1959F0(v7, a1);
  sub_11CDA0((__int64)&v18);
  return v21 - __readfsqword(0x28u);
}
