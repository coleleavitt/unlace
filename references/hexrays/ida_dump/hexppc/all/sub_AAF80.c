__int64 __fastcall sub_AAF80(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r13d
  __int64 v6; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  int v13; // ebx
  int v14; // eax
  __int64 v16[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v17[11]; // [rsp+20h] [rbp-58h] BYREF

  v17[3] = __readfsqword(0x28u);
  v5 = 0;
  if ( a3 != a4 )
  {
    v6 = a3;
    do
    {
      if ( (unsigned __int8)sub_60E40(a2) && !a2[3] )
        break;
      if ( !v6 )
      {
        if ( !under_debugger )
          sub_37EEE0(50036);
        BUG();
      }
      sub_123FE0(v16, a1, v6, a5);
      v13 = sub_60C00(a2, v16, v9, v10, v11, v12);
      v14 = sub_313AE0(a2 + 2, v17);
      v6 = *(_QWORD *)(v6 + 8);
      v5 |= v14 | v13;
      if ( v17[0] )
      {
        v17[1] = 0;
        qfree(v17[0]);
      }
      qfree(v16[0]);
    }
    while ( a4 != v6 );
  }
  return v5;
}
