__int64 __fastcall sub_A601B0(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdx
  unsigned int v15; // eax
  int v16; // ecx
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdi
  int v20[8]; // [rsp+0h] [rbp-78h] BYREF
  char v21[88]; // [rsp+20h] [rbp-58h] BYREF

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
  v8 = sub_993DB0(a1, a2);
  v9 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v8);
  sub_894960((__int64)v20, a3);
  v10 = sub_186B270(0x58u);
  *(_DWORD *)(v10 + 8) = v9;
  v11 = v10;
  *(_QWORD *)v10 = &off_1C56158;
  sub_91F480(v10 + 16, (__int64)v20);
  *(_BYTE *)(v11 + 80) &= 0xFCu;
  v12 = sub_186B270(0x58u);
  *(_QWORD *)v12 = &off_1C56158;
  v13 = v12;
  *(_DWORD *)(v12 + 8) = v9;
  sub_91F480(v12 + 16, (__int64)v20);
  *(_BYTE *)(v13 + 80) = *(_BYTE *)(v13 + 80) & 0xFC | 1;
  sub_A60140(a1, v11, 0);
  sub_A60140(a1, v13, 1u);
  v14 = *(_QWORD *)(a1 + 1056);
  if ( !v14 || (v15 = *(_DWORD *)(v14 - 4), v16 = *(_DWORD *)(v14 - 8), v15 == v16) )
  {
    sub_A10CB0((unsigned int **)(a1 + 1056));
    v14 = *(_QWORD *)(a1 + 1056);
    v15 = *(_DWORD *)(v14 - 4);
    v16 = *(_DWORD *)(v14 - 8);
  }
  v17 = v15;
  v18 = v15 + 1;
  *(_QWORD *)(v14 + 8 * v17) = v11;
  *(_DWORD *)(v14 - 4) = v18;
  if ( v18 == v16 )
  {
    sub_A10CB0((unsigned int **)(a1 + 1056));
    v14 = *(_QWORD *)(a1 + 1056);
    v18 = *(_DWORD *)(v14 - 4);
  }
  *(_QWORD *)(v14 + 8LL * v18) = v13;
  v19 = *(_QWORD *)(a1 + 664) + ((unsigned __int64)v9 << 6);
  *(_DWORD *)(v14 - 4) = v18 + 1;
  sub_98B520(v19, v20);
  sub_25A130(v21);
  sub_25A130((char *)v20);
  return v9;
}

