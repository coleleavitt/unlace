void __fastcall sub_11F07E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+8h] [rbp-50h]
  __int64 v8[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]

  if ( *(_BYTE *)(a1 + 4104) )
  {
    v4 = *(unsigned int *)(a3 + 8);
    if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v4 + 1, 8);
      v4 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v4) = "-darwin-target-variant-triple";
    ++*(_DWORD *)(a3 + 8);
    v9 = 260;
    v8[0] = a1 + 4048;
    v5 = sub_10DA6C0(a2, (__int64)v8);
    v6 = *(unsigned int *)(a3 + 8);
    if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v7 = v5;
      sub_2237220(a3, a3 + 16, v6 + 1, 8);
      v6 = *(unsigned int *)(a3 + 8);
      v5 = v7;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v6) = v5;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( *(_BYTE *)(a1 + 4040) )
    sub_11EFF80(a1, a2, a3);
}
