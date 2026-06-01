_QWORD *__fastcall sub_13F8240(__int64 a1, __int64 *a2, const void *a3, size_t a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // dl
  char v13; // r13
  _QWORD *vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars8; // [rsp+8h] [rbp+8h]

  sub_FD9C70((__int64)&vars0, *(_QWORD *)(*(_QWORD *)a1 + 16LL), a3, a4, 0, 1, 1);
  if ( (vars8 & 1) != 0 )
  {
    v11 = sub_13F8200(&vars0);
    v13 = v12;
    v4 = (_QWORD *)v11;
    sub_A04D90((__int64 *)&vars0);
    if ( !v13 )
      return nullptr;
  }
  else
  {
    v4 = vars0;
    sub_A04D90((__int64 *)&vars0);
  }
  v5 = *a2;
  if ( *(_BYTE *)(*a2 + 56) )
  {
    v6 = (unsigned __int64)v4;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      if ( !v7 )
        break;
      v6 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v7 & 4) == 0 || !v6 )
      {
        if ( *(_QWORD *)(v6 + 32) == *(_QWORD *)(v5 + 48) )
          goto LABEL_11;
        return nullptr;
      }
    }
    if ( *(_QWORD *)(v5 + 48) != 64 )
      return nullptr;
  }
LABEL_11:
  if ( *(_BYTE *)(v5 + 72) )
  {
    v9 = (unsigned __int64)v4;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 8);
      if ( !v10 )
        break;
      v9 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v10 & 4) == 0 || !v9 )
        goto LABEL_16;
    }
    v9 = 0;
LABEL_16:
    if ( *(_QWORD *)(v9 + 40) != *(_QWORD *)(v5 + 64) )
      return nullptr;
  }
  return v4;
}
