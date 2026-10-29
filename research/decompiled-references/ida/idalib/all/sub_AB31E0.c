__int64 __fastcall sub_AB31E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  unsigned int v8; // esi
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 *v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rbp
  __int64 result; // rax
  int v15; // r10d
  __int64 *v16; // r11
  int v17; // edx
  __int64 v18; // r8
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v23[4]; // [rsp+18h] [rbp-20h] BYREF

  v6 = (__int64 *)(a1 + 2024);
  v22 = a2;
  v8 = *(_DWORD *)(a1 + 2040);
  if ( !v8 )
  {
    v23[0] = 0;
LABEL_26:
    sub_AB2FE0((__int64)v6, 2 * v8, a3, a4, a5, a6);
LABEL_27:
    sub_A6F2B0(v6, &v22, v23);
    a4 = v22;
    LODWORD(a3) = *(_DWORD *)(a1 + 2032) + 1;
    v11 = (__int64 *)v23[0];
    goto LABEL_8;
  }
  a4 = v22;
  a6 = v8 - 1;
  v9 = *(_QWORD *)(a1 + 2024);
  v10 = a6 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
  v11 = (__int64 *)(v9 + 16LL * v10);
  v12 = *v11;
  if ( v22 == *v11 )
    goto LABEL_3;
  v15 = 1;
  v16 = nullptr;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v16 )
        v16 = v11;
      v10 = a6 & (v15 + v10);
      v11 = (__int64 *)(v9 + 16LL * v10);
      v12 = *v11;
      if ( v22 == *v11 )
        break;
      if ( v12 == -4096 )
      {
        if ( v16 )
          v11 = v16;
        goto LABEL_6;
      }
      ++v15;
    }
LABEL_3:
    v13 = v11 + 1;
    result = v11[1];
    if ( result )
      return result;
    goto LABEL_11;
  }
LABEL_6:
  v17 = *(_DWORD *)(a1 + 2032);
  v23[0] = v11;
  a3 = (unsigned int)(v17 + 1);
  a5 = (unsigned int)(4 * a3);
  if ( (unsigned int)a5 >= 3 * v8 )
    goto LABEL_26;
  v18 = v8 >> 3;
  if ( v8 - *(_DWORD *)(a1 + 2036) - (unsigned int)a3 <= (unsigned int)v18 )
  {
    sub_AB2FE0((__int64)v6, v8, a3, v22, v18, a6);
    goto LABEL_27;
  }
LABEL_8:
  v19 = *v11 == -4096;
  *(_DWORD *)(a1 + 2032) = a3;
  if ( !v19 )
    --*(_DWORD *)(a1 + 2036);
  *v11 = a4;
  v13 = v11 + 1;
  v11[1] = 0;
LABEL_11:
  (*(void (__fastcall **)(_QWORD *))(**(_QWORD **)(a1 + 17432) + 40LL))(v23);
  v20 = v23[0];
  v23[0] = 0;
  v21 = *v13;
  *v13 = v20;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  if ( v23[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 8LL))(v23[0]);
  return *v13;
}
