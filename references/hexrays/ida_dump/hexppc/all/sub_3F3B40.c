__int64 __fastcall sub_3F3B40(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int8 *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // r12d
  unsigned __int8 v10; // dl
  __int64 v11; // rcx
  _DWORD *v13; // rdi
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(_DWORD *, unsigned int); // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 (__fastcall *v19)(_DWORD *, unsigned int); // rax
  int v20; // r14d
  __int64 v21; // rax
  int dtype_size; // eax
  int v23; // eax

  v3 = (int)a2;
  v4 = 40LL * (int)a2;
  v5 = (unsigned __int8 *)(a1 + v4 + 64);
  v6 = a1;
  switch ( *(_BYTE *)(a1 + v4 + 65) )
  {
    case 1:
      v13 = *(_DWORD **)(a1 + 832);
      v14 = *(unsigned __int16 *)(v6 + 40LL * (int)a2 + 70);
      v15 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v13 + 168LL);
      if ( v15 == sub_3E59C0 )
        return sub_3E59C0(v13, v14);
      else
        return v15(v13, v14);
    case 2:
    case 7:
      v7 = *(_QWORD *)(a1 + 832);
      v8 = *(_QWORD *)(v7 + 4464);
      if ( !v8 )
        goto LABEL_20;
      v9 = *(_DWORD *)(*(_QWORD *)(v7 + 4456) + 4 * v8 - 4);
      *(_QWORD *)(v7 + 4464) = v8 - 1;
      v10 = 2;
      v11 = *(_QWORD *)(a1 + 40LL * (int)a2 + 80);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) != 8 )
        goto LABEL_4;
      goto LABEL_10;
    case 4:
      a1 = *(_QWORD *)(a1 + 832);
      v18 = 2;
      if ( *(_DWORD *)(a1 + 84) == 8 )
        v18 = 7;
      a2 = *(unsigned __int16 *)(v6 + 40LL * (int)a2 + 70);
      v19 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)a1 + 168LL);
      if ( v19 == sub_3E59C0 )
      {
        v20 = sub_3E59C0((_DWORD *)a1, a2);
      }
      else
      {
        v23 = v19((_DWORD *)a1, a2);
        a1 = *(_QWORD *)(v6 + 832);
        v20 = v23;
      }
      v21 = *(_QWORD *)(a1 + 4464);
      if ( !v21 )
        goto LABEL_20;
      v9 = *(_DWORD *)(*(_QWORD *)(a1 + 4456) + 4 * v21 - 4);
      *(_QWORD *)(a1 + 4464) = v21 - 1;
      sub_3E9DD0(v6, v5, v18, *(_QWORD *)(v6 + 40 * v3 + 80), v9);
      dtype_size = get_dtype_size(v18);
      sub_1D2710(v6, 0xCu, dtype_size, v20, v9, v9, 0);
      return (unsigned int)v9;
    case 5:
      v16 = *(_QWORD *)(a1 + 832);
      v17 = *(_QWORD *)(v16 + 4464);
      if ( !v17 )
LABEL_20:
        sub_3E6800(a3, a1, a2);
      v9 = *(_DWORD *)(*(_QWORD *)(v16 + 4456) + 4 * v17 - 4);
      *(_QWORD *)(v16 + 4464) = v17 - 1;
      v10 = 2;
      v11 = *(_QWORD *)(a1 + 40LL * (int)a2 + 72);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
LABEL_10:
        v10 = 7;
LABEL_4:
      sub_3E9DD0(a1, v5, v10, v11, v9);
      break;
    default:
      v9 = -1;
      break;
  }
  return (unsigned int)v9;
}
