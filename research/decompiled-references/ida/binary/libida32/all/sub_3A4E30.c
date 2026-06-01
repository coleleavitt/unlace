unsigned __int64 __fastcall sub_3A4E30(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // r14
  __int64 v8; // rax
  unsigned int v9; // esi
  unsigned int v11; // [rsp+4h] [rbp-44h] BYREF
  int v12[2]; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 1344);
  *(_QWORD *)v12 = __readfsqword(0x28u);
  while ( 1 )
  {
    v8 = 0;
    while ( a4 != dword_2389780[v8] )
    {
      if ( ++v8 == 14 )
      {
        if ( !under_debugger )
          interr(44);
        BUG();
      }
    }
    v11 = v8;
    v9 = sub_39F0C0(v6, a2, a3, &v11, 1);
    if ( v9 == -1 )
      break;
    sub_3A3D00(*(__int64 **)(a1 + 1480), v9, a4);
  }
  return *(_QWORD *)v12 - __readfsqword(0x28u);
}

