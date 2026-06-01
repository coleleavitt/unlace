__int64 __fastcall sub_559F10(_QWORD *a1, __int64 a2)
{
  char v3; // al
  unsigned int v4; // r14d
  char v5; // r12
  unsigned __int64 v6; // r13
  unsigned int *v8; // rax
  unsigned int *v9; // r11
  int v10; // r15d
  bool v11; // al
  char v12; // al
  __int64 v13; // rdi
  unsigned int v14; // r12d
  unsigned int *v15; // [rsp+0h] [rbp-58h]
  __int64 v16; // [rsp+8h] [rbp-50h]
  char v17; // [rsp+17h] [rbp-41h]

  v3 = sub_559BB0(a2);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = v3;
  v6 = sub_3B9AA0((__int64)a1, v4, 0);
  if ( (unsigned __int8)sub_615160(*a1, 10, 0x200000) )
  {
    v8 = sub_4EE820((__int64)(a1 + 194), v4);
    v9 = v8;
    if ( !v8 )
    {
      if ( !under_debugger )
        interr(1219);
      BUG();
    }
    if ( *((_BYTE *)v8 + 23) )
    {
      v10 = 0;
      v16 = a2 + 24;
      do
      {
        if ( !*(_DWORD *)(a1[2] + 4LL) && v10 == 2 )
          break;
        v15 = v9;
        v11 = sub_3BFC10((__int64)a1, v6, v10);
        v9 = v15;
        if ( !v11 )
        {
          v12 = sub_559EA0(a1, a2, v16);
          v9 = v15;
          v17 = v12;
          if ( v12 )
          {
            v13 = v15[*(_DWORD *)(a1[2] + 84LL) - *(_DWORD *)(a1[2] + 68LL) + 8];
            if ( (_DWORD)v13 != -1 )
            {
              sel2para(v13);
              v14 = *(_DWORD *)(a2 + 8);
              get_default_reftype(v14);
              op_offset(v14, v10);
              v5 = v17;
              v9 = v15;
            }
          }
        }
        ++v10;
        v16 += 24;
      }
      while ( v10 != 8 );
    }
  }
  if ( !v5 )
    return *(unsigned __int16 *)(a2 + 14);
  *(_DWORD *)(a2 + 8) = -1;
  return sub_559920(a1, a2, v4, 1);
}

