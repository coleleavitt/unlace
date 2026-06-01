__int64 __fastcall sub_7C5AC0(_QWORD *a1, unsigned int a2)
{
  __int64 (__fastcall *v2)(__int64, unsigned int); // rdx
  unsigned int (*v3)(void); // rax
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v7; // edx

  v2 = sub_7C55E0;
  v3 = *(unsigned int (**)(void))(*a1 + 536LL);
  if ( (char *)v3 == (char *)sub_7C55E0 )
  {
    v4 = a1[20];
    if ( v4 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)(v4 + 880) + 4LL * (a2 >> 1));
      if ( v5 >= *(_DWORD *)(v4 + 888) )
        return ((unsigned __int8)a2 ^ (unsigned __int8)v5) & 1;
      else
        return 0;
    }
    else
    {
      LOBYTE(v2) = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * a2) == -1;
      return (unsigned int)v2;
    }
  }
  else
  {
    LOBYTE(v7) = v3() == -1;
    return v7;
  }
}

