void __fastcall sub_753360(_QWORD *a1, unsigned int a2)
{
  __int64 *v3; // rax
  __int64 **v4; // rcx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  __int64 *v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // r8
  __int64 *v12; // rdi
  __int64 ***v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx

  if ( !a1[3] )
  {
    v3 = (__int64 *)a1[2];
    v4 = (__int64 **)(a1 + 2);
    if ( !v3 )
      return;
    while ( *((_DWORD *)v3 + 2) != a2 )
    {
      v4 = (__int64 **)v3;
      if ( !*v3 )
        return;
      v3 = (__int64 *)*v3;
    }
    v12 = *v4;
    v11 = *a1;
    v14 = **v4;
    v8 = 8 * ((unsigned __int64)*((unsigned int *)*v4 + 2) % a1[1]);
    v7 = (unsigned __int64)*((unsigned int *)*v4 + 2) % a1[1];
    v13 = (__int64 ***)(*a1 + v8);
    if ( v4 == *v13 )
      goto LABEL_20;
    goto LABEL_15;
  }
  v5 = a1[1];
  v6 = a2 % v5;
  v4 = *(__int64 ***)(*a1 + 8 * v6);
  v7 = v6;
  v8 = 8 * v6;
  if ( v4 )
  {
    v9 = *v4;
    if ( *((_DWORD *)*v4 + 2) == a2 )
    {
LABEL_13:
      if ( v4 )
      {
        v11 = *a1;
        v12 = *v4;
        v13 = (__int64 ***)(*a1 + v8);
        v14 = **v4;
        if ( v4 == *v13 )
        {
LABEL_20:
          if ( v14 )
          {
            v16 = (unsigned __int64)*(unsigned int *)(v14 + 8) % a1[1];
            if ( v7 != v16 )
            {
              *(_QWORD *)(v11 + 8 * v16) = v4;
              *(_QWORD *)(*a1 + v8) = 0;
              v14 = *v12;
            }
          }
          else
          {
            *v13 = nullptr;
            v14 = *v12;
          }
LABEL_18:
          *v4 = (__int64 *)v14;
          operator delete(v12, 0x10u);
          --a1[3];
          return;
        }
LABEL_15:
        if ( v14 )
        {
          v15 = (unsigned __int64)*(unsigned int *)(v14 + 8) % a1[1];
          if ( v7 != v15 )
          {
            *(_QWORD *)(v11 + 8 * v15) = v4;
            v14 = *v12;
          }
        }
        goto LABEL_18;
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = (_QWORD *)*v9;
        if ( !*v9 )
          break;
        v4 = (__int64 **)v9;
        if ( a2 % v5 != *((unsigned int *)v10 + 2) % v5 )
          break;
        v9 = (__int64 *)*v9;
        if ( *((_DWORD *)v10 + 2) == a2 )
          goto LABEL_13;
      }
    }
  }
}

