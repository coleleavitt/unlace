__int64 __fastcall sub_2162A0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  int v4; // r12d
  unsigned __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // eax
  bool v9; // cc
  _QWORD *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rdi

  if ( a2[1] )
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = 96 * v3;
        v7 = 96 * v3 + *a2;
        if ( *(_BYTE *)(v7 + 48) || (*(_BYTE *)(v7 + 88) & 4) != 0 )
          break;
        v5 = a2[1];
        ++v4;
LABEL_4:
        v3 = v4;
        if ( v4 >= v5 )
          return v2;
      }
      clear_tinfo_t(v7 + 48);
      v8 = *(_DWORD *)(v7 + 88);
      v9 = *(_QWORD *)(v7 + 32) <= 1u;
      *(_DWORD *)(v7 + 88) = v8 & 0xFFFFFFFB;
      if ( v9 && !*(_BYTE *)(v7 + 48) && *(_QWORD *)(v7 + 64) <= 1u && (v8 & 0x2A) == 0 )
      {
        v11 = (_QWORD *)(*a2 + v6);
        v12 = v11[7];
        if ( v12 )
        {
          v11[8] = 0;
          qfree(v12);
        }
        clear_tinfo_t(v11 + 6);
        v13 = v11[3];
        if ( v13 )
        {
          v11[4] = 0;
          qfree(v13);
        }
        cleanup_argloc(v11);
        memmove(v11, v11 + 12, *a2 + 96LL * a2[1] - (_QWORD)v11 - 96);
        v2 = 1;
        v5 = a2[1] - 1LL;
        a2[1] = v5;
        goto LABEL_4;
      }
      ++v4;
      v2 = 1;
      v3 = v4;
      if ( (unsigned __int64)v4 >= a2[1] )
        return v2;
    }
  }
  return 0;
}
