__int64 __fastcall sub_F87650(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        unsigned __int64 a8,
        __int64 a9)
{
  int v10; // eax
  __int64 v11; // r8
  int v12; // esi
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // [rsp+0h] [rbp-18h]

  v17 = 0;
  if ( a9 )
  {
    if ( !a8 )
      return a9;
    if ( *(char **)(a1 + 8) != a7 )
    {
LABEL_4:
      sub_F87280(*(_QWORD *)a1, a7, a8);
      return a9;
    }
LABEL_9:
    v10 = *(_DWORD *)(a1 + 152);
    v11 = *(_QWORD *)(a1 + 136);
    if ( v10 )
    {
      v12 = v10 - 1;
      v13 = (v10 - 1) & (((unsigned int)a8 >> 9) ^ ((unsigned int)a8 >> 4));
      v14 = (_QWORD *)(v11 + 16LL * v13);
      if ( a8 != *v14 && *v14 != -4096 )
      {
        v15 = 1;
        do
        {
          v13 = v12 & (v15 + v13);
          v16 = *(_QWORD *)(v11 + 16LL * v13);
          if ( a8 == v16 )
            break;
          ++v15;
        }
        while ( v16 != -4096 );
      }
    }
    return a9;
  }
  if ( a8 )
  {
    if ( *(char **)(a1 + 8) != a7 )
      goto LABEL_4;
    goto LABEL_9;
  }
  return v17;
}
