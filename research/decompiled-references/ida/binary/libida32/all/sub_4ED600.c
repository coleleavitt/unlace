unsigned __int64 __fastcall sub_4ED600(unsigned int *a1)
{
  __int64 v2; // rdi
  __int16 v4; // ax
  __int64 *v5; // rdx
  __int64 i; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // [rsp+0h] [rbp-38h] BYREF
  __int16 v10; // [rsp+4h] [rbp-34h]
  _QWORD v11[2]; // [rsp+6h] [rbp-32h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v2 = *a1;
  if ( (_DWORD)v2 != -1 )
  {
    v4 = *((_WORD *)a1 + 2);
    v9 = v2;
    v11[0] = 0;
    v10 = v4;
    *(_QWORD *)((char *)v11 + 6) = 0;
    ((void (__fastcall *)(__int64, int *, __int64))netnode_set)(v2, &v9, 20);
    v5 = *((__int64 **)a1 + 3);
    for ( i = v5[6]; i; i = v5[6] )
    {
      v7 = *(unsigned int *)(v5[5] + 4 * i - 4);
      v5[6] = i - 1;
      netnode_supdel(*a1, v7, 83);
      v5 = *((__int64 **)a1 + 3);
    }
    v8 = *v5;
    if ( 16 * v5[1] )
    {
      do
      {
        if ( *(_BYTE *)(v8 + 12) )
        {
          if ( !(unsigned __int8)sub_4EC7A0(a1, *(unsigned int **)v8) )
          {
            if ( !under_debugger )
              interr(1092);
            BUG();
          }
          *(_BYTE *)(v8 + 12) = 0;
          sub_4ED450((__int64 *)(*((_QWORD *)a1 + 3) + 64LL), *(unsigned int **)v8, 0, 1);
          v5 = *((__int64 **)a1 + 3);
        }
        v8 += 16;
      }
      while ( v8 != *v5 + 16 * v5[1] );
    }
  }
  return v12 - __readfsqword(0x28u);
}

