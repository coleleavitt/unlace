void __fastcall sub_EF4DD0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r13d
  __int64 v6; // rsi
  unsigned __int8 v7; // al
  void *v8; // rdx
  void (__fastcall *v9)(__int64 *, void *); // rbx
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rsi
  char v13; // bl
  void *v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-40h]
  char v16; // [rsp+Ch] [rbp-3Ch]
  void *v17; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-30h]

  v3 = a1[1];
  v4 = *(unsigned int *)(v3 + 8);
  v5 = *(_DWORD *)a2 & 0x7FFFFFFF;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
  {
    sub_22134E0(a1[1], v3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(v3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v3 + 4 * v4) = v5;
  ++*(_DWORD *)(v3 + 8);
  switch ( *(_DWORD *)a2 & 0x7FFFFFFF )
  {
    case 1:
    case 3:
      (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, *(_QWORD *)(a2 + 8));
      break;
    case 2:
      (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, *(_QWORD *)(a2 + 8));
      (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 24))(a1, *(_QWORD *)(a2 + 16));
      break;
    case 4:
      (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, *(_QWORD *)(a2 + 16));
      v6 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
      if ( (unsigned int)v6 > 0x40 )
      {
        v13 = *(_BYTE *)(a2 + 7) >> 7;
        sub_21E18C0(&v17, v6, *(_QWORD *)(a2 + 8), ((unsigned __int64)(unsigned int)v6 + 63) >> 6);
        v16 = v13;
        v15 = v18;
        v14 = v17;
      }
      else
      {
        v7 = *(_BYTE *)(a2 + 7);
        v8 = *(void **)(a2 + 8);
        v15 = v6;
        v14 = v8;
        v16 = v7 >> 7;
      }
      sub_21E8930(&v14, a1[1]);
      if ( v15 > 0x40 )
      {
        if ( v14 )
          operator delete[](v14);
      }
      break;
    case 5:
      (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, *(_QWORD *)(a2 + 16));
      sub_A2C1C0(*(unsigned int **)(a2 + 8), a1[1]);
      break;
    case 6:
    case 7:
      v9 = *(void (__fastcall **)(__int64 *, void *))(*a1 + 64);
      sub_EFED50(&v17, *(_QWORD *)(a2 + 8));
      v9(a1, v17);
      break;
    case 8:
      sub_EEF680((__int64)a1, *(_QWORD *)(a2 + 8));
      break;
    case 9:
      v10 = *(_QWORD *)(a2 + 8);
      v11 = v10 + 24LL * *(unsigned int *)(a2 + 4);
      while ( v11 != v10 )
      {
        v12 = v10;
        v10 += 24;
        sub_EF4DD0(a1, v12);
      }
      break;
    default:
      return;
  }
}

