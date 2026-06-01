__int64 __fastcall sub_15F0FD0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  size_t v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_BYTE *)(v4 + 8) & 0x7Fu) - 34 <= 5
    && v4 != 72
    && *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596)
    && (_DWORD)a2
    && (v7 = sub_1021680(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2312LL), a2), LOBYTE(v3) = v7 != 3 && v7 != 0, (_BYTE)v3) )
  {
    if ( (*(_BYTE *)(v4 - 43) & 1) == 0 )
    {
LABEL_9:
      v12 = j__strlen(&byte_22F0C30);
      v13 = sub_B35CE0(
              *(_QWORD *)(a1 + 248),
              &byte_22F0C30,
              v12,
              a3,
              (unsigned int)a2 | ((unsigned __int64)(unsigned int)a2 << 32),
              0);
      sub_B8CC60(v4 - 72, v13, v14, v15, v16, v17);
      return v3;
    }
    v18 = sub_B8C3D0(v4 - 72, a2, v8, v9, v10, v11);
    v19 = *v18;
    v20 = *v18 + 8LL * *((unsigned int *)v18 + 2);
    if ( *v18 >= v20 )
    {
      if ( v19 == v20 )
        goto LABEL_9;
      while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 386 )
      {
        v20 += 8LL;
        if ( v19 == v20 )
          goto LABEL_9;
      }
    }
    else
    {
      v21 = *v18;
      while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 386 )
      {
        v21 += 8LL;
        if ( v20 == v21 )
          goto LABEL_9;
      }
      if ( v20 == v21 )
        goto LABEL_9;
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
