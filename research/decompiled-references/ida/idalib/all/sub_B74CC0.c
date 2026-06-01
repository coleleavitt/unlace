__int64 __fastcall sub_B74CC0(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  unsigned __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 *v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  size_t v12; // rax
  _DWORD *v13; // rdi
  __int64 *v14; // rcx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_8;
  v2 = sub_B8C3D0(a1);
  v3 = *(__int64 **)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( (unsigned __int64)v3 >= v4 )
  {
    if ( v3 == (__int64 *)v4 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 64 )
    {
      v5 = (__int64 *)(v4 + 8);
      while ( v3 != v5 )
      {
        v6 = *v5++;
        if ( *(_WORD *)(v6 + 36) == 64 )
          goto LABEL_12;
      }
      goto LABEL_8;
    }
    goto LABEL_12;
  }
  v14 = v3;
  while ( *(_WORD *)(*v14 + 36) != 64 )
  {
    if ( (__int64 *)v4 == ++v14 )
      goto LABEL_8;
  }
  if ( (__int64 *)v4 != v14 )
  {
LABEL_12:
    while ( 1 )
    {
      v9 = (__int64 *)*v3;
      if ( *(_WORD *)(*v3 + 36) == 64 )
        break;
      ++v3;
    }
    if ( (*((_BYTE *)v9 + 34) & 0xF0) == 0xF0 )
      v10 = sub_FA77D0(v9);
    else
      v10 = *((_BYTE *)v9 + 34) >> 4;
    if ( v10 == 12 )
      return 1;
    v11 = *v9;
    if ( v11 )
    {
      v12 = j__strlen("kernel");
      v13 = *(_DWORD **)(v11 + 16);
      if ( v12 == *v13 && (!v12 || !memcmp(v13 + 4, "kernel", v12)) )
        return 1;
    }
  }
LABEL_8:
  v7 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v7 = *(_QWORD *)(v7 + 8);
  return sub_B8E4C0(v7);
}
