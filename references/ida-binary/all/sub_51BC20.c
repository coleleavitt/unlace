__int64 __fastcall target_quick_filter_column_ah_t__::vfunc_0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rbp
  int v5; // ecx
  _BYTE *v6; // rax
  unsigned int v7; // ecx
  int v8; // edi
  int v9; // edx
  __int64 v10; // rax
  void *v11; // rdi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbp
  _BYTE *v15; // rdi
  int v16; // r12d
  unsigned __int64 v17; // rax
  void *v18; // rdi
  char v19; // r12
  unsigned __int64 v20; // rbp
  _BYTE *v21; // rdi
  int v22; // r12d
  __int64 v23; // rax

  result = 0;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v3 + 1120) )
  {
    v4 = *(_QWORD **)(v3 + 1112);
    if ( v4 )
    {
      v5 = *(_DWORD *)(a1 + 24);
      switch ( v5 )
      {
        case -2:
          sub_4DF7B0((__int64 *)v3);
          v3 = *(_QWORD *)(a1 + 16);
          goto LABEL_13;
        case -1:
          v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 248LL))(v3, 0, 0);
          v11 = (void *)v4[14];
          v12 = v10;
          v13 = (unsigned __int64)(v10 + 7) >> 3;
          if ( v4[16] < v13 )
          {
            v23 = qvector_reserve(v4 + 14, v4[14], v13, 1);
            v4[14] = v23;
            v11 = (void *)v23;
          }
          v4[15] = v13;
          v14 = v12 >> 3;
          v15 = memset(v11, 255, v12 >> 3);
          v16 = v12 & 7;
          if ( v16 )
          {
            v15[v14] |= (1 << v16) - 1;
            v3 = *(_QWORD *)(a1 + 16);
            goto LABEL_13;
          }
          break;
        case -3:
          v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 248LL))(v3, 0, 0);
          v18 = (void *)v4[14];
          v19 = v17;
          v20 = v17 >> 3;
          v21 = memset(v18, 0, v17 >> 3);
          v22 = v19 & 7;
          if ( v22 )
          {
            v21[v20] &= -(char)(1 << v22);
            v3 = *(_QWORD *)(a1 + 16);
            goto LABEL_13;
          }
          break;
        default:
          if ( v5 >= (unsigned __int64)(8LL * v4[15]) )
          {
LABEL_13:
            sub_4E4A00(v3);
            return 1;
          }
          v6 = (_BYTE *)(v4[14] + ((unsigned __int64)v5 >> 3));
          v7 = *(_DWORD *)(a1 + 24) & 7;
          v8 = (unsigned __int8)*v6;
          v9 = 1 << v7;
          if ( !_bittest(&v8, v7) )
          {
            *v6 |= v9;
            v3 = *(_QWORD *)(a1 + 16);
            goto LABEL_13;
          }
          *v6 = v8 & ~(_BYTE)v9;
          break;
      }
      v3 = *(_QWORD *)(a1 + 16);
      goto LABEL_13;
    }
  }
  return result;
}
