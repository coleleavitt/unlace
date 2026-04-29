char __fastcall sub_38E20(_QWORD *a1, __int64 a2)
{
  int v3; // eax
  __int64 v5; // rdi
  __int64 v6; // r13
  char v7; // r14
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(_QWORD *, _QWORD, __int64); // rcx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // esi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  int i; // ecx

  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 == 1 )
  {
    if ( *(_DWORD *)(a2 + 8) > 0x1Fu )
      return v3;
    LOBYTE(v3) = (unsigned int)(*(_DWORD *)(a2 + 12) - 1) <= 0xF;
    goto LABEL_8;
  }
  v5 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    return v3;
  if ( v3 != 3 )
  {
    if ( v3 != 4 )
    {
      if ( v3 == 2 )
      {
        v3 = 8;
        if ( (v5 & 0xFFFFFFFFFFFFFF0FLL) != 0 )
          return v3;
      }
      else
      {
        v3 = -1;
      }
      goto LABEL_7;
    }
    if ( (~(_DWORD)v5 & 0x80010000) != 0 )
    {
      v22 = bitcountr_zero(v5);
      if ( v22 > 63 )
      {
        *(_DWORD *)(a2 + 8) = -1;
      }
      else
      {
        *(_DWORD *)(a2 + 8) = v22;
        if ( v22 == 28 )
        {
          v23 = *(_QWORD *)a2;
          if ( (*(_QWORD *)a2 & 0x10000000) != 0 && (v23 & 0x28000000) == 0 )
          {
            if ( (v23 & 0x40000000) != 0 )
            {
              *(_DWORD *)(a2 + 8) = 30;
            }
            else if ( (int)v23 < 0 )
            {
              *(_DWORD *)(a2 + 8) = 31;
            }
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(a2 + 8) = 31;
      for ( i = 30; i != 0x7FFFFFFF; --i )
      {
        if ( (v5 & (1LL << i)) == 0 )
          break;
        *(_DWORD *)(a2 + 8) = i;
      }
    }
LABEL_9:
    while ( 1 )
    {
      v6 = *(int *)(a2 + 8);
      v7 = sub_37FC0((__int64 *)a2);
      if ( v7 )
        break;
      v9 = (int)v6;
LABEL_20:
      v11 = *(_QWORD *)(a1[78] + 56LL);
      v12 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL);
      if ( (_DWORD)v6 == (_DWORD)v9 )
      {
        LOBYTE(v3) = v12(a1, *(_QWORD *)(v11 + 8 * v6), 33);
      }
      else
      {
        if ( (int)v6 <= (int)v9 )
        {
          v13 = v9;
          v9 = (int)v6;
          v6 = v13;
        }
        v12(a1, *(_QWORD *)(v11 + 8 * v9), 33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
        LOBYTE(v3) = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
                       a1,
                       *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8 * v6),
                       33);
      }
      if ( !v7 )
        return v3;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
    }
    v8 = v6;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_11:
        v9 = *(int *)(a2 + 8);
        if ( (_DWORD)v9 != v8 - 1 && (_DWORD)v9 != v8 + 1 )
        {
          v9 = v8;
          goto LABEL_20;
        }
        if ( (_DWORD)v9 == -2 )
        {
          v7 = 0;
          goto LABEL_20;
        }
        v10 = *(_DWORD *)(a2 + 16);
        if ( v10 == 3 )
        {
          if ( (int)v9 <= 16 )
            goto LABEL_18;
          v16 = *(_DWORD *)(a2 + 8);
          while ( --v16 != 15 )
          {
            if ( v16 <= 63 && (*(_QWORD *)a2 & (1LL << v16)) != 0 )
            {
              *(_DWORD *)(a2 + 8) = v16;
LABEL_42:
              v8 = v9;
              goto LABEL_11;
            }
          }
          v19 = 8;
LABEL_52:
          while ( --v19 != 3 )
          {
            if ( v19 <= 63 && (*(_QWORD *)a2 & (1LL << v19)) != 0 )
            {
              *(_DWORD *)(a2 + 8) = v19;
              goto LABEL_42;
            }
          }
LABEL_19:
          *(_DWORD *)(a2 + 8) = -2;
          v7 = 0;
          goto LABEL_20;
        }
        if ( v10 > 3 )
          break;
        if ( v10 != 1 )
        {
          if ( v10 == 2 )
          {
LABEL_18:
            if ( (int)v9 > 4 )
            {
              v19 = *(_DWORD *)(a2 + 8);
              goto LABEL_52;
            }
          }
          else
          {
LABEL_43:
            if ( (int)v9 <= 30 )
            {
              v17 = *(_DWORD *)(a2 + 8);
              while ( ++v17 != 32 )
              {
                if ( (*(_QWORD *)a2 & (1LL << v17)) != 0 )
                {
                  *(_DWORD *)(a2 + 8) = v17;
                  goto LABEL_42;
                }
              }
            }
          }
          goto LABEL_19;
        }
        v18 = *(_DWORD *)(a2 + 12);
        if ( v18 == 1 )
          goto LABEL_19;
        *(_DWORD *)(a2 + 12) = v18 - 1;
        if ( (_DWORD)v9 == 31 )
        {
          *(_DWORD *)(a2 + 8) = 16;
          v8 = 31;
        }
        else
        {
          *(_DWORD *)(a2 + 8) = v9 + 1;
          v8 = v9;
        }
      }
      if ( v10 != 4 )
        goto LABEL_43;
      if ( (_DWORD)v9 == 28 )
        break;
      v14 = v9 + 1;
      *(_DWORD *)(a2 + 8) = v9 + 1;
      if ( (_DWORD)v9 == 31 )
      {
        v15 = *(_QWORD *)a2;
        v20 = 16;
        v21 = 0x10000;
LABEL_59:
        *(_DWORD *)(a2 + 8) = v20;
        goto LABEL_60;
      }
      v15 = *(_QWORD *)a2;
      if ( v14 <= 63 )
      {
        v21 = 1LL << v14;
LABEL_60:
        if ( (v21 & v15) == 0 )
          goto LABEL_32;
        v8 = v9;
      }
      else
      {
LABEL_32:
        if ( (v15 & 0x10000000) == 0 || (v15 & 0x28000000) != 0 )
          goto LABEL_19;
        *(_DWORD *)(a2 + 8) = 28;
        v8 = v9;
      }
    }
    v15 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 0x10000000) != 0 && (v15 & 0x28000000) == 0 )
      goto LABEL_19;
    v20 = 29;
    v21 = 0x20000000;
    goto LABEL_59;
  }
  LOBYTE(v3) = 15;
  if ( (v5 & 0xFFFFFFFF3F00FF0FLL) != 0 )
    return v3;
  v3 = 32;
LABEL_7:
  *(_DWORD *)(a2 + 8) = v3;
  LOBYTE(v3) = sub_37FC0((__int64 *)a2);
LABEL_8:
  if ( (_BYTE)v3 )
    goto LABEL_9;
  return v3;
}
