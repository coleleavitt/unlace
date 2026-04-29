unsigned __int64 __fastcall sub_378480(__int64 a1)
{
  unsigned int v1; // esi
  unsigned __int64 result; // rax
  int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  _DWORD *v11; // rax
  __int64 v12; // rcx

  v1 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 4) &= ~0x40u;
  sub_374480(a1, v1, 0);
  if ( (unsigned __int8)sub_368130(a1) )
  {
    if ( *(_QWORD *)(a1 + 464) )
    {
      while ( 1 )
      {
        v9 = **(int **)(a1 + 456);
        if ( !(_DWORD)v9 )
          break;
        v6 = *(_QWORD *)(a1 + 432) + 104 * v9;
        v7 = *(_DWORD *)(v6 + 24);
        BYTE1(v7) &= 0x7Eu;
        *(_DWORD *)(v6 + 24) = v7 | 0x100000;
        memmove(*(void **)(a1 + 456), (const void *)(*(_QWORD *)(a1 + 456) + 4LL), 4LL * *(_QWORD *)(a1 + 464) - 4);
        if ( (*(_QWORD *)(a1 + 464))-- == 1 )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      *(_DWORD *)(a1 + 4) &= 0xFFFFFFCF;
    }
  }
  sub_375F10(a1, 0);
  result = sub_19AB10(*(_QWORD **)(a1 + 936));
  if ( !(_BYTE)result )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 72) - 208);
    if ( (unsigned int)result <= 0x2F )
    {
      result = *(_QWORD *)(a1 + 1496);
      if ( (*(_BYTE *)(result + 606) & 0x10) != 0 )
        result = sub_375F10(a1, 1);
    }
  }
  if ( *(_QWORD *)(a1 + 464) )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = sub_1386C0((_QWORD *)a1, v3);
      *(_DWORD *)(v4 + 92) = 0;
      v5 = v4;
      if ( (*(_BYTE *)(v4 + 24) & 0x40) != 0 || *(_DWORD *)v4 != 2 || !(unsigned __int8)sub_1BE390(v4, 0, 0) )
        goto LABEL_9;
      if ( *(_DWORD *)v5 == 2 )
        break;
      if ( (unsigned int)(*(_DWORD *)v5 - 3) > 1 )
        goto LABEL_17;
LABEL_9:
      result = ++v3;
      if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 464) )
        goto LABEL_10;
    }
    v10 = *(_QWORD *)(v5 + 8);
    v11 = *(_DWORD **)v10;
    v12 = *(_QWORD *)v10 + 24LL * *(_QWORD *)(v10 + 8);
    if ( *(_QWORD *)v10 != v12 )
    {
      while ( (unsigned int)(*v11 - 3) > 1 )
      {
        v11 += 6;
        if ( (_DWORD *)v12 == v11 )
          goto LABEL_17;
      }
      goto LABEL_9;
    }
LABEL_17:
    sub_1BF4C0(v5, *(_QWORD *)(a1 + 1496), *(_DWORD *)(v5 + 88));
    goto LABEL_9;
  }
LABEL_10:
  *(_DWORD *)(a1 + 4) |= 0x40u;
  return result;
}
