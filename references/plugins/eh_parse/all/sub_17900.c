__int64 __fastcall sub_17900(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  int v5; // r13d
  __int64 v6; // r12
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  char *v11; // r14
  unsigned __int64 v12; // rcx
  int v13; // esi
  unsigned __int64 v14; // r12
  char *v15; // r12
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( !a2 || *a2 >= a2[1] || (unsigned int)getinf(5) != 10 )
    return 0;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 40) = 8;
  v5 = 0;
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_DWORD *)(v6 + 4);
  if ( v7 == 15 )
  {
    s1 = nullptr;
    v17 = 0;
    get_abi_name(&s1);
    v11 = s1;
    if ( !(_QWORD)v17 || (v5 = 1, strcmp(s1, "wince")) && strcmp(v11, "xbox") )
    {
      *(_QWORD *)(a1 + 40) = 20;
      v5 = 4;
    }
    if ( v11 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v11);
    }
    v7 = *(_DWORD *)(v6 + 4);
  }
  if ( v7 == 13 )
  {
    if ( (getinf(3) & 6) == 2 )
    {
      s1 = nullptr;
      v17 = 0;
      get_abi_name(&s1);
      v15 = s1;
      if ( (_QWORD)v17 )
      {
        if ( !strcmp(s1, "wince") )
        {
          if ( v15 )
          {
            v5 = 1;
            *(_QWORD *)&v17 = 0;
            qfree(v15);
            v8 = *(_QWORD *)(a1 + 40);
            goto LABEL_14;
          }
          goto LABEL_26;
        }
        if ( !strcmp(v15, "win8") )
        {
          if ( v15 )
          {
            *(_QWORD *)&v17 = 0;
            qfree(v15);
          }
          v12 = *(_QWORD *)(a1 + 40);
          v13 = 2;
          goto LABEL_25;
        }
      }
      if ( v15 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v15);
      }
      goto LABEL_11;
    }
    v7 = *(_DWORD *)(v6 + 4);
  }
  if ( v7 == 12 || v7 == 24 )
  {
    *(_QWORD *)(a1 + 40) = 20;
    v8 = 20;
    v5 = 4;
    goto LABEL_14;
  }
  if ( v7 == 18 )
  {
LABEL_26:
    v8 = *(_QWORD *)(a1 + 40);
    v5 = 1;
    goto LABEL_14;
  }
  if ( !v7 && (unsigned __int8)getinf_flag(3, 4) )
  {
    *(_QWORD *)(a1 + 40) = 12;
    v12 = 12;
    v13 = 3;
LABEL_25:
    v14 = a2[1] - *a2;
    *(_DWORD *)(a1 + 48) = v13;
    v10 = v14 - v14 % v12;
    sub_85B0(*(_QWORD *)(a1 + 8));
    goto LABEL_15;
  }
LABEL_11:
  if ( !v5 )
    return 0;
  v8 = *(_QWORD *)(a1 + 40);
LABEL_14:
  v9 = a2[1] - *a2;
  *(_DWORD *)(a1 + 48) = v5;
  v10 = v9 - v9 % v8;
LABEL_15:
  sub_11390(*(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = v10 / *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = *a2;
  return 1;
}
