__int64 __fastcall sub_7BF5F0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rbx
  __int64 v10; // r13
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax

  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 )
  {
    if ( v4 <= 7 )
      return 0;
  }
  else
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v4 = *(_QWORD *)(a1 + 120);
    if ( v4 <= 7 )
      return 0;
  }
  if ( (*(_BYTE *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    sub_7B7DB0(a1);
  result = sub_7BDED0(a1 + 48, a2, a3);
  if ( result )
    return result;
  v6 = *(_QWORD *)(a1 + 120);
  if ( v6 )
  {
    if ( v6 <= 7 )
      return 0;
  }
  else
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 <= 7 )
      goto LABEL_38;
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
  {
    v8 = *(unsigned int *)(v7 + 48);
    if ( (_DWORD)v8 )
    {
      v9 = *(__int64 **)(v7 + 40);
      v10 = (__int64)&v9[v8];
      goto LABEL_14;
    }
    goto LABEL_29;
  }
  sub_7B7DB0(a1);
  v6 = *(_QWORD *)(a1 + 120);
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = *(unsigned int *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 48);
  if ( !(_DWORD)v12 )
  {
    if ( v6 )
    {
      if ( v6 <= 7 )
        return 0;
    }
    else
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v6 = *(_QWORD *)(a1 + 120);
      v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v6 <= 7 )
      {
LABEL_38:
        if ( !v6 )
        {
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
          v6 = *(_QWORD *)(a1 + 120);
          if ( v6 > 7 )
          {
            v10 = 0;
            goto LABEL_31;
          }
        }
        return 0;
      }
    }
LABEL_29:
    if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
    {
      sub_7B7DB0(a1);
      v6 = *(_QWORD *)(a1 + 120);
      v10 = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 8LL * *(unsigned int *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 24);
      if ( !v6 )
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
        v6 = *(_QWORD *)(a1 + 120);
      }
      v9 = nullptr;
      if ( v6 <= 7 )
        goto LABEL_16;
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 16) + 8LL * *(unsigned int *)(v7 + 24);
    }
    goto LABEL_31;
  }
  v9 = *(__int64 **)(v7 + 40);
  v10 = (__int64)&v9[v12];
  if ( !v6 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 <= 7 )
      goto LABEL_27;
LABEL_31:
    v11 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
    {
      if ( *(_DWORD *)(v11 + 48) )
        goto LABEL_23;
      goto LABEL_33;
    }
LABEL_22:
    sub_7B7DB0(a1);
    v6 = *(_QWORD *)(a1 + 120);
    v11 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 48) )
    {
LABEL_23:
      v9 = *(__int64 **)(v11 + 40);
      goto LABEL_16;
    }
    if ( !v6 )
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v6 = *(_QWORD *)(a1 + 120);
    }
    v9 = nullptr;
    if ( v6 <= 7 )
    {
LABEL_16:
      if ( v9 != (__int64 *)v10 )
        goto LABEL_17;
      return 0;
    }
LABEL_33:
    v13 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v13 + 72) & 1) != 0 )
    {
      sub_7B7DB0(a1);
      v13 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v9 = *(__int64 **)(v13 + 16);
    goto LABEL_16;
  }
LABEL_14:
  if ( v6 > 7 )
  {
    if ( (*(_BYTE *)(v7 + 72) & 1) == 0 )
      goto LABEL_16;
    goto LABEL_22;
  }
LABEL_27:
  v9 = nullptr;
LABEL_17:
  while ( 1 )
  {
    result = sub_7BF0A0(*v9, a2, a3);
    if ( result )
      break;
    if ( (__int64 *)v10 == ++v9 )
      return 0;
  }
  return result;
}

