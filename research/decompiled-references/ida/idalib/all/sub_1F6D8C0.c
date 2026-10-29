__int64 __fastcall sub_1F6D8C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r12
  char v8; // dl
  int v9; // edx
  __int64 v10; // rdi
  unsigned int v11; // edx
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  int v16; // ecx
  _QWORD *v17; // r8

  v2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v2 )
    return 1;
  while ( 1 )
  {
    v4 = v2;
    v5 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    v6 = (_QWORD *)v5;
    LODWORD(v4) = (v4 >> 2) & 1;
    v7 = (unsigned int)v4;
    if ( (_DWORD)v4 )
    {
      v6 = nullptr;
      if ( v5 )
        v6 = *(_QWORD **)v5;
    }
    v8 = *((_BYTE *)v6 + 29);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 56LL) + 21LL) & 2) == 0 )
      goto LABEL_8;
    if ( v8 < 0 )
    {
      v6 = sub_1F6AC90(v6, a2);
      v8 = *((_BYTE *)v6 + 29);
LABEL_8:
      if ( v8 < 0 )
        goto LABEL_17;
    }
    if ( *(_BYTE *)(a1 + 155) )
    {
      v9 = *(_DWORD *)(a1 + 440);
      v10 = *(_QWORD *)(a1 + 424);
      if ( !v9 )
        goto LABEL_17;
      a2 = (unsigned int)(v9 - 1);
      v11 = a2 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
      v12 = *(_QWORD **)(v10 + 16LL * v11);
      if ( v12 != v6 )
      {
        if ( v12 == (_QWORD *)-4096LL )
          goto LABEL_17;
        v16 = 1;
        while ( 1 )
        {
          v11 = a2 & (v16 + v11);
          v17 = *(_QWORD **)(v10 + 16LL * v11);
          if ( v17 == v6 )
            break;
          ++v16;
          if ( v17 == (_QWORD *)-4096LL )
            goto LABEL_17;
        }
      }
    }
    if ( !*(_BYTE *)(a1 + 468) )
      break;
    v13 = *(_QWORD **)(a1 + 448);
    v14 = &v13[*(unsigned int *)(a1 + 460)];
    if ( v13 == v14 )
      return 0;
    while ( v6 != (_QWORD *)*v13 )
    {
      if ( v14 == ++v13 )
        return 0;
    }
LABEL_17:
    if ( v7 )
    {
      if ( v5 )
      {
        v2 = *(_QWORD *)(v5 + 8);
        if ( v2 )
          continue;
      }
    }
    return 1;
  }
  a2 = (__int64)v6;
  if ( sub_2236570(a1 + 448, v6) )
    goto LABEL_17;
  return 0;
}
