__int64 __fastcall sub_1AFD830(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // r10d
  __int64 v10; // rax
  unsigned int v11; // ecx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned int v15; // ebp
  __int64 v16; // rdx
  void **v17; // rdx
  __int64 v19; // r14
  _QWORD *v20; // rdx
  void *v21; // rdi
  int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-A0h] BYREF
  double v24[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v25; // [rsp+20h] [rbp-88h]
  int v26; // [rsp+2Ch] [rbp-7Ch]
  __int64 v27; // [rsp+38h] [rbp-70h] BYREF
  _OWORD v28[2]; // [rsp+40h] [rbp-68h] BYREF
  int v29; // [rsp+60h] [rbp-48h]

  v7 = a2;
  v23 = a1;
  *(_QWORD *)&v24[0] = a5;
  v10 = *(unsigned int *)(a7 + 8);
  v11 = *(_DWORD *)(a7 + 8);
  *(_QWORD *)&v24[1] = a6;
  if ( *(_DWORD *)(a7 + 12) <= v11 )
  {
    LODWORD(v25) = a2;
    v19 = sub_2237400(a7, a7 + 16, 0, 16, v28);
    v20 = (_QWORD *)(v19 + 16LL * *(unsigned int *)(a7 + 8));
    v20[1] = 0;
    *v20 = v20 + 2;
    sub_1AFD6E0((__int64 *)a7, v19);
    v21 = *(void **)a7;
    v22 = v28[0];
    v7 = v25;
    if ( a7 + 16 != *(_QWORD *)a7 )
    {
      v26 = v25;
      v25 = *(_QWORD *)&v28[0];
      free(v21);
      v7 = v26;
      v22 = v25;
    }
    *(_QWORD *)a7 = v19;
    *(_DWORD *)(a7 + 12) = v22;
    ++*(_DWORD *)(a7 + 8);
  }
  else
  {
    v12 = (_QWORD *)(*(_QWORD *)a7 + 16 * v10);
    v12[1] = 0;
    *v12 = v12 + 2;
    ++*(_DWORD *)(a7 + 8);
  }
  v29 = v7;
  v23 = a7;
  v27 = a7;
  v28[0] = _mm_loadh_ps(v24);
  v28[1] = _mm_loadh_ps((const double *)&v23);
  v13 = sub_EE9D60(a3, 0);
  v15 = sub_EF5A40(
          v13,
          0,
          a4,
          (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))sub_1B0E630,
          (__int64)v28,
          v14,
          (void (__fastcall *)(__int64, __int64))sub_1AEC910,
          (__int64)&v27);
  v16 = (unsigned int)(*(_DWORD *)(a7 + 8) - 1);
  *(_DWORD *)(a7 + 8) = v16;
  v17 = (void **)(*(_QWORD *)a7 + 16 * v16);
  if ( *v17 != v17 + 2 )
    free(*v17);
  return v15;
}
