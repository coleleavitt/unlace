__int64 __fastcall sub_6B0060(__int64 a1, unsigned int a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // r8d
  __int64 *v6; // rsi
  unsigned int v7; // ecx
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 *v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 48LL);
  if ( (char *)v2 == (char *)sub_6AFDD0 )
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 728) + 16LL) + 8LL * a2);
  else
    v3 = v2();
  v4 = *(unsigned int *)(a1 + 456);
  v5 = *(_DWORD *)(v3 + 12);
  v6 = *(__int64 **)(a1 + 448);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = (__int64 *)((char *)v6 + v4);
  v9 = 16LL * (v5 & v7);
  v10 = &v6[(unsigned __int64)v9 / 8];
  if ( v9 == v4 )
  {
LABEL_11:
    while ( v10 != v6 )
    {
      v13 = *v6;
      if ( (unsigned __int64)*v6 > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v5 && v3 == v13 )
        {
          v11 = v6;
          return v11[1];
        }
      }
      else if ( !v13 )
      {
        break;
      }
      v6 += 2;
    }
LABEL_10:
    BUG();
  }
  v11 = &v6[(unsigned __int64)v9 / 8];
  while ( 1 )
  {
    v12 = *v11;
    if ( (unsigned __int64)*v11 > 1 )
      break;
    if ( !v12 )
      goto LABEL_10;
LABEL_7:
    v11 += 2;
    if ( v8 == v11 )
      goto LABEL_11;
  }
  if ( *(_DWORD *)(v12 + 12) != v5 || v3 != v12 )
    goto LABEL_7;
  return v11[1];
}

