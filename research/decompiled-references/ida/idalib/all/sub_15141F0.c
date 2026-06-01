__int64 __fastcall sub_15141F0(__int64 a1, _BYTE *a2, size_t a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v7; // r13
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 *v13; // rcx
  __int64 v15; // rax
  unsigned int v16; // r8d
  __int64 *v17; // rcx
  __int64 v18; // r13
  unsigned int v19; // eax
  __int64 *v20; // [rsp+0h] [rbp-98h]
  unsigned int v21; // [rsp+0h] [rbp-98h]
  __int64 *v22; // [rsp+8h] [rbp-90h]
  __int64 *v23[17]; // [rsp+10h] [rbp-88h] BYREF

  v7 = a6;
  v10 = sub_2244B30(a2, a3);
  v11 = (unsigned int)sub_2244CB0(a5, a2, a3, v10);
  v13 = (__int64 *)(*(_QWORD *)a5 + 8 * v11);
  if ( *v13 )
  {
    if ( *v13 != -8 )
    {
      sub_12E03C0(v23, v13, 0);
      v20 = v23[0];
      sub_1564820(v23, a1, a4, 2163);
      sub_1503AF0((unsigned __int8 **)v23, v7);
      sub_AEC220((unsigned __int8 **)v23, a2, a3);
      sub_AEA040((__int64)v23);
      sub_1564820(v23, a1, *(unsigned int *)(*v20 + 8), 2048);
      sub_1503AF0((unsigned __int8 **)v23, v7);
      sub_AEC220((unsigned __int8 **)v23, a2, a3);
      sub_AEA040((__int64)v23);
      return 1;
    }
    --*(_DWORD *)(a5 + 16);
  }
  v22 = v13;
  v21 = v11;
  v15 = sub_22300B0(a3 + 17, 8, v11, v13, v11, v12);
  v16 = v21;
  v17 = v22;
  v18 = v15;
  if ( a3 )
  {
    memcpy((void *)(v15 + 16), a2, a3);
    v17 = v22;
    v16 = v21;
  }
  *(_BYTE *)(v18 + a3 + 16) = 0;
  *(_QWORD *)v18 = a3;
  *(_DWORD *)(v18 + 8) = a4;
  *v17 = v18;
  ++*(_DWORD *)(a5 + 12);
  v19 = sub_22450D0(a5, v16);
  sub_12E03C0(v23, (__int64 *)(*(_QWORD *)a5 + 8LL * v19), 0);
  return 0;
}
