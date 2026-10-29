void __fastcall sub_17A5890(__int64 *a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  __int64 v8; // r14
  __int64 v10; // r8
  __int64 v11; // [rsp+0h] [rbp-50h]
  unsigned int v12; // [rsp+Ch] [rbp-44h]

  if ( a3 )
  {
    v5 = a2;
    v6 = *a2;
    if ( *a2 )
    {
      v7 = a1[33];
      v8 = a3;
      v12 = *(_DWORD *)(v6 + 24);
      v11 = *(_QWORD *)(v7 + 32);
      if ( (unsigned __int8)sub_FD3830(v11, 0xA57u, v12, v7, a5, v11) != 1
        || (unsigned __int8)sub_FD3830(v11, 0xA5Eu, v12, v7, v10, v11) != 1 )
      {
        if ( a3 <= 1 )
        {
          v8 = 1;
        }
        else if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 58 <= 4 )
        {
          v8 = a3 - 1;
          v5 = a2 + 1;
        }
        sub_A93480(a1[31], v5, v8, a1[30]);
      }
    }
  }
}
