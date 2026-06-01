__int64 __fastcall sub_48AE40(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 (__fastcall *v11)(__int64); // rax
  int v12; // [rsp+Ch] [rbp-1Ch]

  if ( (*(_BYTE *)(a2 + 120) & 1) != 0 )
  {
    LODWORD(v7) = *(_DWORD *)(a3 + 80);
  }
  else
  {
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL);
    if ( v11 == folder_data_t__::vfunc_3 )
    {
      v7 = *(_QWORD *)(a3 + 16);
    }
    else
    {
      v12 = a5;
      LODWORD(v7) = v11(a3);
      a5 = v12;
    }
  }
  if ( a4 < 0 || (int)v7 <= a4 )
  {
    *(_QWORD *)a1 = -1;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    return a1;
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 56);
    v9 = a4;
    if ( v8 != -1 )
      v9 = *(unsigned int *)(*(_QWORD *)(a3 + 32) + 8LL * a4);
    *(_DWORD *)a1 = a4;
    *(_DWORD *)(a1 + 4) = a5;
    *(_QWORD *)(a1 + 8) = v9 | (v8 << 32);
    *(_QWORD *)(a1 + 16) = a2;
    return a1;
  }
}
