__int64 __fastcall sub_11E88F0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+8h] [rbp-60h]
  _QWORD v11[4]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v12; // [rsp+30h] [rbp-38h]

  v4 = sub_11E83E0(*(_QWORD *)(a1 + 24), a2);
  v5 = *(unsigned int *)(a3 + 8);
  v7 = v6;
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v5 + 1, 8);
    v5 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "-arch";
  ++*(_DWORD *)(a3 + 8);
  v12 = 261;
  v11[0] = v4;
  v11[1] = v7;
  result = sub_10DA6C0(a2, (__int64)v11);
  v9 = *(unsigned int *)(a3 + 8);
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v10 = result;
    sub_2237220(a3, a3 + 16, v9 + 1, 8);
    v9 = *(unsigned int *)(a3 + 8);
    result = v10;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v9) = result;
  ++*(_DWORD *)(a3 + 8);
  if ( v7 == 3 && *(_WORD *)v4 == 29281 && v4[2] == 109 )
    return sub_10DC5D0(a3, (__int64)"-force_cpusubtype_ALL");
  return result;
}
