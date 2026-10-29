__int64 __fastcall sub_E6F1E0(__int64 *a1, __int64 a2)
{
  char v3; // al
  __int64 (*v4)(); // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 (*v8)(); // rax
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax

  if ( (unsigned int)sub_E6EBB0(a1[1], a2) )
    return 1;
  v3 = sub_B81B70(a2);
  if ( v3 != 3 && v3 != 6 && sub_B72C70(a2) )
    return 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1[1] + 2320) + 1LL) & 8) != 0 )
    goto LABEL_17;
  v4 = sub_E381C0;
  v8 = *(__int64 (**)())(*a1 + 56);
  if ( v8 != sub_E381C0 )
  {
    if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(a1, a2) )
      return 1;
    if ( (*(_BYTE *)(*(_QWORD *)(a1[1] + 2320) + 1LL) & 8) != 0 )
    {
LABEL_17:
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      {
LABEL_18:
        if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x1F )
          return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 40))(a1, a2);
        return 1;
      }
LABEL_9:
      v9 = sub_B8C3D0(a2, a2, (__int64)v4, v5, v6, v7);
      v10 = *v9;
      v11 = *v9 + 8LL * *((unsigned int *)v9 + 2);
      if ( *v9 >= v11 )
      {
        if ( v10 != v11 )
        {
          while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 139 )
          {
            v11 += 8LL;
            if ( v10 == v11 )
              goto LABEL_18;
          }
          return 1;
        }
      }
      else
      {
        v12 = *v9;
        while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 139 )
        {
          v12 += 8LL;
          if ( v11 == v12 )
            goto LABEL_18;
        }
        if ( v11 != v12 )
          return 1;
      }
      goto LABEL_18;
    }
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    goto LABEL_9;
  return 0;
}
