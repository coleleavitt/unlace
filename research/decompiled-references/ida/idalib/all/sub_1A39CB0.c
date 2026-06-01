__int64 __fastcall sub_1A39CB0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v18; // [rsp+8h] [rbp-30h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x400000000LL;
  v6 = sub_B91570(a2, a2, a3, a4, a5, a6);
  if ( v6 )
  {
    v7 = v6;
    do
    {
      while ( 1 )
      {
        v8 = v7 - 48;
        if ( (*(_BYTE *)(v7 + 8) & 0x7F) != 0x18 )
          v8 = 0;
        v9 = v8;
        if ( !sub_B8E160(v7) && !sub_B8E490(v7) )
        {
          if ( !v9 )
            break;
          v14 = *(_QWORD *)(v9 + 40);
          if ( (v14 & 7) == 0 && (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            break;
        }
        v7 = sub_B8ED10(v7);
        if ( !v7 )
          return a1;
      }
      v15 = sub_B91570(v7, a2, v10, v11, v12, v13);
      v16 = *(unsigned int *)(a1 + 8);
      a2 = *(unsigned int *)(a1 + 12);
      if ( v16 + 1 > a2 )
      {
        a2 = a1 + 16;
        v18 = v15;
        sub_2237220(a1, a1 + 16, v16 + 1, 8);
        v16 = *(unsigned int *)(a1 + 8);
        v15 = v18;
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v16) = v15;
      ++*(_DWORD *)(a1 + 8);
      v7 = sub_B8ED10(v7);
    }
    while ( v7 );
  }
  return a1;
}
