__int64 __fastcall sub_1088850(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char ***a6)
{
  int v10; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rcx
  __int64 *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // [rsp+4h] [rbp-54h]
  unsigned int v29; // [rsp+4h] [rbp-54h]
  __int64 *v30; // [rsp+8h] [rbp-50h]
  __int64 *v31; // [rsp+8h] [rbp-50h]
  __int64 *v32[8]; // [rsp+18h] [rbp-40h] BYREF

  v10 = *(_DWORD *)(a1 + 248);
  if ( v10 == 14 )
  {
    v12 = sub_2244B30("64bit", 5);
    v13 = (unsigned int)sub_2244CB0(a2, "64bit", 5, v12);
    v16 = (__int64 *)(*(_QWORD *)a2 + 8 * v13);
    if ( *v16 )
    {
      if ( *v16 != -8 )
      {
        sub_10298F0(v32, v16, 0);
        v17 = v32[0];
        goto LABEL_7;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v30 = v16;
    v28 = v13;
    v24 = sub_22300B0(22, 8, v13, v16, v14, v15);
    *(_DWORD *)(v24 + 16) = 1768043574;
    *(_BYTE *)(v24 + 20) = 116;
    *(_BYTE *)(v24 + 21) = 0;
    *(_QWORD *)v24 = 5;
    *(_BYTE *)(v24 + 8) = 0;
    *v30 = v24;
    ++*(_DWORD *)(a2 + 12);
    v25 = sub_22450D0(a2, v28);
    sub_10298F0(v32, (__int64 *)(*(_QWORD *)a2 + 8LL * v25), 0);
    v17 = v32[0];
LABEL_7:
    *(_BYTE *)(*v17 + 8) = 1;
    if ( *(_DWORD *)(a1 + 248) != 13 )
      return sub_102FFA0(a1, a2, a3, a4, a5, a6);
LABEL_8:
    v18 = sub_2244B30("32bit", 5);
    v19 = (unsigned int)sub_2244CB0(a2, "32bit", 5, v18);
    v22 = (__int64 *)(*(_QWORD *)a2 + 8 * v19);
    if ( *v22 )
    {
      if ( *v22 != -8 )
      {
        sub_10298F0(v32, v22, 0);
        v23 = v32[0];
LABEL_11:
        *(_BYTE *)(*v23 + 8) = 1;
        return sub_102FFA0(a1, a2, a3, a4, a5, a6);
      }
      --*(_DWORD *)(a2 + 16);
    }
    v31 = v22;
    v29 = v19;
    v26 = sub_22300B0(22, 8, v19, v22, v20, v21);
    *(_DWORD *)(v26 + 16) = 1768043059;
    *(_BYTE *)(v26 + 20) = 116;
    *(_BYTE *)(v26 + 21) = 0;
    *(_QWORD *)v26 = 5;
    *(_BYTE *)(v26 + 8) = 0;
    *v31 = v26;
    ++*(_DWORD *)(a2 + 12);
    v27 = sub_22450D0(a2, v29);
    sub_10298F0(v32, (__int64 *)(*(_QWORD *)a2 + 8LL * v27), 0);
    v23 = v32[0];
    goto LABEL_11;
  }
  if ( v10 == 13 )
    goto LABEL_8;
  return sub_102FFA0(a1, a2, a3, a4, a5, a6);
}
