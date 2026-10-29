__int64 __fastcall sub_19E180(_QWORD *a1, __int64 a2)
{
  const char *v2; // r12
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx
  int v11; // eax
  char *v12; // rdi

  v2 = *(const char **)(a2 + 8);
  if ( v2 && *v2 && (sub_19BAE0(a1, *(const char **)(a2 + 8)) || sub_19DBA0(a1, v2)) )
    return 0;
  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application
                                                                                                 + 136LL)
                                                                                     + 88LL))(TProgram::application + 136LL);
  v4 = (**v3)(v3, a2);
  v5 = v4;
  if ( !v4 )
    return 0;
  v6 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(v4 + 128) )
  {
    sub_8F740((__int64)"Coherency check failed: _handler == nullptr\n");
    v7 = *(_QWORD *)(v5 + 128);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
  }
  *(_QWORD *)(v5 + 128) = v6;
  v8 = 0;
  if ( (*(_DWORD *)(a2 + 60) & 0xCu) <= 8 )
    v8 = dword_1D88E0[*(_DWORD *)(a2 + 60) & 0xC];
  v9 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(v5 + 152) = v8;
  *(_QWORD *)(v5 + 144) = v9;
  if ( !*(_QWORD *)(a2 + 32) || (v10 = *(_DWORD *)(a2 + 60), (v10 & 1) != 0) )
  {
    *(_BYTE *)(v5 + 156) = 1;
    v10 = *(_DWORD *)(a2 + 60);
  }
  v11 = *(_DWORD *)(v5 + 112);
  if ( (v10 & 2) != 0 )
    v11 = *(_DWORD *)(v5 + 112) | 0x40000;
  if ( (v10 & 0x20) != 0 )
    v11 |= 0x100000u;
  if ( (v10 & 0x40) != 0 )
    v11 |= 0x200000u;
  if ( (v10 & 0x80u) != 0 )
    v11 |= 0x400000u;
  if ( (v10 & 0x100) != 0 )
    v11 |= 0x1000000u;
  *(_DWORD *)(v5 + 112) = v11;
  if ( v2 && *v2 )
    sub_19B3C0(v5, v2);
  v12 = *(char **)(a2 + 40);
  *(_WORD *)(v5 + 170) = 0;
  if ( !v12 || !*v12 )
    return v5;
  *(_WORD *)(v5 + 170) = sub_19CA40(v12);
  return v5;
}

