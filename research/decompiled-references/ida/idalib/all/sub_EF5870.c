__int64 __fastcall sub_EF5870(__int64 a1, char a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int16 v9; // dx
  __int64 v10; // rcx
  __int64 v11; // rdi

  v7 = 0;
  v8 = sub_EE9D60(a1, 0);
  if ( a3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *(_WORD *)v8 & 0x1FF;
        if ( ((v9 + 325) & 0x1FFu) <= 4 )
          break;
        if ( v9 == 237 )
        {
          v8 = *(_QWORD *)(v8 + 8);
          v9 = *(_WORD *)v8 & 0x1FF;
        }
        if ( v9 != 243 )
          goto LABEL_16;
        v10 = *(_QWORD *)(v8 + 40);
LABEL_7:
        if ( (*(_WORD *)v10 & 0x1FF) == 0xED )
          v10 = *(_QWORD *)(v10 + 8);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))a5)(*(_QWORD *)(a5 + 8), v7, v8, v10);
        if ( (*(_WORD *)v8 & 0x1FF) == 0xF3 )
          v11 = *(_QWORD *)(v8 + 40);
        else
          v11 = *(_QWORD *)(v8 + 64);
        ++v7;
        v8 = (__int64)sub_EF53F0(v11, a2);
        if ( a3 == v7 )
          return 1;
      }
      if ( !*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL * **(unsigned int **)(v8 + 24) + 24) )
      {
        if ( *(_DWORD *)(v8 + 36) )
          return 1;
LABEL_16:
        v10 = *(_QWORD *)(v8 + 64);
        goto LABEL_7;
      }
      v8 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL * **(unsigned int **)(v8 + 24) + 24);
    }
  }
  return 1;
}
