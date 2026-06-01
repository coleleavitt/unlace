void __fastcall sub_1EFA340(__int64 *a1, __int64 a2, _DWORD *a3)
{
  int v5; // eax
  __int64 v6; // rdi
  _DWORD *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rdi
  bool v13; // zf
  unsigned __int64 v14; // rbx
  int v15; // eax
  unsigned __int64 v16; // rbx

  if ( (*(_BYTE *)(a2 + 32) & 0x3F) != 0 )
  {
    v5 = sub_1EE7490(*a1);
    v6 = *a1;
    a3[1] = v5;
    a3[2] = sub_1EE7490(v6);
    if ( (*(_BYTE *)(a2 + 32) & 0x3F) != 0 )
    {
      v7 = a3 + 3;
      v8 = (__int64)&a3[(*(_BYTE *)(a2 + 32) & 0x3F) + 3];
      do
      {
        while ( 1 )
        {
          v9 = *a1;
          v10 = *(unsigned int *)(*a1 + 24);
          v11 = *(_QWORD *)(*a1 + 16);
          v12 = *(_QWORD *)(*a1 + 8);
          v13 = *(_QWORD *)(v11 + 856) == 0;
          *(_DWORD *)(v9 + 24) = v10 + 1;
          v14 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10);
          if ( !v13 )
            sub_1EDF870(v12, v11);
          v15 = __ROR4__(v14, 1);
          v16 = HIDWORD(v14);
          if ( v16 )
            v11 = *(_QWORD *)(*(_QWORD *)(v11 + 3320) + 8LL * (unsigned int)(v16 - 1));
          if ( !v15 )
            break;
          *v7++ = v15 + *(_DWORD *)(v11 + 1648) - 2;
          if ( v7 == (_DWORD *)v8 )
            return;
        }
        *v7++ = 0;
      }
      while ( (_DWORD *)v8 != v7 );
    }
  }
}
