unsigned __int64 __fastcall sub_3A9550(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v6; // r14
  __int64 v8; // rax
  char *v9; // rsi
  int v11; // [rsp+4h] [rbp-44h] BYREF
  int v12[2]; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 1536);
  *(_QWORD *)v12 = __readfsqword(0x28u);
  while ( 1 )
  {
    v8 = 0;
    while ( a4 != dword_23AD7A0[v8] )
    {
      if ( ++v8 == 14 )
      {
        if ( !under_debugger )
          interr(44);
        BUG();
      }
    }
    v11 = v8;
    v9 = (char *)sub_3A38C0(v6, a2, a3, (unsigned int *)&v11, 1);
    if ( v9 == (char *)-1LL )
      break;
    sub_3A8380(*(__int64 **)(a1 + 1672), v9, a4);
  }
  return *(_QWORD *)v12 - __readfsqword(0x28u);
}
