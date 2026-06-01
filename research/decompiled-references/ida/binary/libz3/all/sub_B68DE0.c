__int64 __fastcall sub_B68DE0(_QWORD *a1, unsigned int *a2, unsigned __int8 a3, double a4, __m128 a5, __m128 a6)
{
  unsigned int *v6; // rax
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v11; // rdi
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rcx
  unsigned __int64 v17; // r13
  __int64 v18; // rdx

  v6 = *(unsigned int **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( v6
    && (v7 = *v6, (_DWORD)v7 != -1)
    && (v9 = a1[1084]) != 0
    && (unsigned int)v7 < *(_DWORD *)(v9 - 4)
    && (v11 = *(_QWORD *)(v9 + 8 * v7)) != 0
    && (v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v11 + 16LL))(v11, a2, a3),
        (_BYTE)v12) )
  {
    v13 = *a2;
    v14 = v13;
    v15 = *(_DWORD *)(a1[1104] + 4 * v13);
    if ( !a3 )
    {
      v16 = a1[1082];
      if ( v16 && (unsigned int)v13 < *(_DWORD *)(v16 - 4) && (v17 = *(_QWORD *)(v16 + 8 * v13)) != 0 )
      {
        sub_B66DE0((__int64)a1, v15, 1);
        if ( *(char *)(v17 + 44) >= 0 )
          sub_B671D0(a1, v17, v15, 1);
        v14 = *a2;
      }
      else
      {
        sub_B68280((__int64)a1, a2, 1, 1u, 0, a4, *(double *)a5.m128_u64, a6);
        v14 = *a2;
      }
    }
    v18 = a1[1082];
    if ( v18 )
    {
      if ( (unsigned int)v14 < *(_DWORD *)(v18 - 4) )
      {
        if ( *(_QWORD *)(v18 + 8 * v14) )
        {
          sub_B66DE0((__int64)a1, v15, 1);
          if ( *(_BYTE *)(a1[1106] + 2 * v15) )
            sub_8F4D60((__int64)a1, v15, a4, a5);
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v12;
}

