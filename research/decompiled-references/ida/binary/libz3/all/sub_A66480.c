__int64 __fastcall sub_A66480(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdx
  unsigned int v15; // eax
  int v16; // ecx
  __int64 v17; // rsi
  unsigned int v18; // eax
  char v19[32]; // [rsp+0h] [rbp-D8h] BYREF
  char v20[32]; // [rsp+20h] [rbp-B8h] BYREF
  int v21[38]; // [rsp+40h] [rbp-98h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( v4 )
  {
    v5 = *a2;
    if ( (unsigned int)v5 < *(_DWORD *)(v4 - 4) )
    {
      v6 = *(_QWORD *)(v4 + 8 * v5);
      if ( v6 )
        return (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v6);
    }
  }
  v8 = sub_9A0C70(a1, a2);
  v9 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v8);
  sub_894960((__int64)v19, a3);
  sub_9D4F70((__int64)v21, (__int64)v19);
  sub_25A130(v20);
  sub_25A130(v19);
  v10 = sub_186B270(0x78u);
  *(_DWORD *)(v10 + 8) = v9;
  v11 = v10;
  *(_QWORD *)v10 = &off_1C563C8;
  sub_8A6550(v10 + 16, (__int64)v21);
  *(_BYTE *)(v11 + 112) &= 0xFCu;
  v12 = sub_186B270(0x78u);
  *(_QWORD *)v12 = &off_1C563C8;
  v13 = v12;
  *(_DWORD *)(v12 + 8) = v9;
  sub_8A6550(v12 + 16, (__int64)v21);
  *(_BYTE *)(v13 + 112) = *(_BYTE *)(v13 + 112) & 0xFC | 1;
  sub_A66410(a1, v11, 0);
  sub_A66410(a1, v13, 1u);
  v14 = *(_QWORD *)(a1 + 1152);
  if ( !v14 || (v15 = *(_DWORD *)(v14 - 4), v16 = *(_DWORD *)(v14 - 8), v15 == v16) )
  {
    sub_A52DB0((unsigned int **)(a1 + 1152));
    v14 = *(_QWORD *)(a1 + 1152);
    v15 = *(_DWORD *)(v14 - 4);
    v16 = *(_DWORD *)(v14 - 8);
  }
  v17 = v15;
  v18 = v15 + 1;
  *(_QWORD *)(v14 + 8 * v17) = v11;
  *(_DWORD *)(v14 - 4) = v18;
  if ( v18 == v16 )
  {
    sub_A52DB0((unsigned int **)(a1 + 1152));
    v14 = *(_QWORD *)(a1 + 1152);
    v18 = *(_DWORD *)(v14 - 4);
  }
  *(_QWORD *)(v14 + 8LL * v18) = v13;
  *(_DWORD *)(v14 - 4) = v18 + 1;
  sub_98B5F0(*(_QWORD *)(a1 + 728) + 96LL * v9, v21);
  sub_2A6060((__int64)v21);
  return v9;
}

