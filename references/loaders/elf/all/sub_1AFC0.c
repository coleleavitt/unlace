char __fastcall sub_1AFC0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  const char *v7; // r15
  __int64 v8; // rbp
  const char *v9; // r15
  __int64 v10; // rax
  int v11; // eax
  int v13; // eax
  size_t v14; // rbx
  char *v15; // rax
  char *v16; // rbp
  int v17; // ebx
  __int64 v18; // r8
  char *v19; // rax
  char *v20; // rbp
  size_t n; // [rsp+8h] [rbp-60h]
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(a4 + 8);
  v5 = v4;
  v25 = __readfsqword(0x28u);
  if ( v4 )
  {
    v7 = *(const char **)a4;
    if ( !strcmp(*(const char **)a4, ".sdata2") || !strcmp(v7, ".sbss2") )
      goto LABEL_3;
    v18 = v4 - 1;
    s1 = nullptr;
    v24 = 0;
    if ( (unsigned __int64)(v4 - 1) > 8 )
    {
      v4 = 10;
      v18 = 9;
      goto LABEL_27;
    }
    if ( v4 != 1 )
    {
LABEL_27:
      n = v18;
      v19 = (char *)qvector_reserve(&s1, 0, v4, 1);
      *(_QWORD *)&v24 = v4;
      s1 = v19;
      memmove(v19, v7, n);
      s1[n] = 0;
      v20 = s1;
      if ( !(_QWORD)v24
        || strcmp(s1, ".PPC.EMB.")
        || *(_QWORD *)(a4 + 8) && !strcmp(*(const char **)a4, ".PPC.EMB.apuinfo") )
      {
        if ( v20 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v20);
          v5 = *(_QWORD *)(a4 + 8);
          goto LABEL_5;
        }
LABEL_4:
        v5 = *(_QWORD *)(a4 + 8);
        goto LABEL_5;
      }
      if ( v20 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v20);
      }
LABEL_3:
      append_abi_opts("eabi", 0);
      goto LABEL_4;
    }
  }
LABEL_5:
  v8 = v5;
  if ( v5 )
  {
    v9 = *(const char **)a4;
    if ( !strcmp(*(const char **)a4, ".plt") )
    {
      v10 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 352) = 0;
      if ( *(_BYTE *)(v10 + 617) )
      {
        if ( *(_DWORD *)(a2 + 4) == 8 && (*(_BYTE *)(a2 + 8) & 4) == 0 )
        {
          v11 = ((*(_DWORD *)(v10 + 552) & 3) == 2) + 5;
          goto LABEL_10;
        }
      }
      else
      {
        if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
        {
          v11 = 2;
LABEL_10:
          *(_DWORD *)(a1 + 352) = v11;
          *(_QWORD *)(a1 + 356) = *(_QWORD *)(a2 + 16);
          *(_QWORD *)(a1 + 364) = *(_QWORD *)(a2 + 32);
          return 1;
        }
        if ( *(_DWORD *)(a2 + 4) == 1 )
        {
          v11 = 3;
          goto LABEL_10;
        }
      }
      sub_BFC0((__int64)"AUTOHIDE SESSION\nIllegal .plt section: nor Secure nor BSS nor 64-bit => skip it");
      *(_DWORD *)(a1 + 352) = 1;
      return 0;
    }
  }
  else
  {
    v9 = &::s1;
  }
  if ( *(_DWORD *)(a2 + 4) != 1 || (*(_WORD *)(a2 + 8) & 0x407) != 0 )
    return 1;
  v13 = strcmp(v9, ".line");
  if ( v5 )
  {
    if ( !v13 )
      return 0;
    v14 = v5 - 1;
    s1 = nullptr;
    v24 = 0;
    if ( (unsigned __int64)(v5 - 1) <= 5 )
    {
      if ( v5 == 1 )
        return sub_3BD80(*(_QWORD *)(a1 + 16) + 80LL, a3, 0) != 0;
    }
    else
    {
      v8 = 7;
      v14 = 6;
    }
    v15 = (char *)qvector_reserve(&s1, 0, v8, 1);
    *(_QWORD *)&v24 = v8;
    s1 = v15;
    memmove(v15, v9, v14);
    s1[v14] = 0;
    v16 = s1;
    if ( !(_QWORD)v24 )
    {
      if ( s1 )
        qfree(s1);
      return sub_3BD80(*(_QWORD *)(a1 + 16) + 80LL, a3, 0) != 0;
    }
    v17 = strcmp(s1, ".debug");
    if ( v16 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v16);
    }
    if ( !v17 )
      return 0;
    return sub_3BD80(*(_QWORD *)(a1 + 16) + 80LL, a3, 0) != 0;
  }
  if ( v13 )
    return sub_3BD80(*(_QWORD *)(a1 + 16) + 80LL, a3, 0) != 0;
  return 0;
}
