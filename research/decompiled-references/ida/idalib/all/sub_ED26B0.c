__int64 __fastcall sub_ED26B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE *v14; // rax
  void *v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 *v17; // r8
  _BYTE *v18; // r9
  __int64 v19; // rbx
  char *v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // r13
  _QWORD *v23; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v29; // [rsp+28h] [rbp-280h]
  _BYTE v30[64]; // [rsp+30h] [rbp-278h] BYREF
  void *v31; // [rsp+70h] [rbp-238h]
  __int64 v32; // [rsp+88h] [rbp-220h] BYREF
  _BYTE v33[48]; // [rsp+A0h] [rbp-208h] BYREF
  void *v34; // [rsp+D0h] [rbp-1D8h]
  int v35; // [rsp+D8h] [rbp-1D0h]
  int v36; // [rsp+DCh] [rbp-1CCh]
  void *v37; // [rsp+F8h] [rbp-1B0h]
  __int64 v38; // [rsp+108h] [rbp-1A0h] BYREF
  __m128 v39[4]; // [rsp+150h] [rbp-158h] BYREF
  void *ptr; // [rsp+198h] [rbp-110h]
  __int64 v41; // [rsp+1A8h] [rbp-100h] BYREF

  if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
  {
    v25 = sub_ED1E50((_DWORD *)a1, *(_QWORD *)(a2 + 2312), a3, a4, a5, a6);
    *(_BYTE *)(a1 + 32) |= 1u;
    *(_QWORD *)(a1 + 8) = v25;
    *(_QWORD *)(a1 + 16) = v26;
  }
  v6 = *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)a1;
  v29 = *(_QWORD *)(a1 + 8);
  v8 = sub_A62AC0(a2);
  sub_B41480((__int64)v30, a2 + 2352, v8, a2 + 18568, v7, v29, v6, 1);
  v9 = sub_A62AC0(a2);
  sub_B4D310((__int64)v33, a2 + 2352, *(_QWORD *)(a2 + 2312), v9, a2 + 18568, a3);
  sub_B54990((__int64)v33, a4, v10, v11, v12, v13);
  v14 = (_BYTE *)sub_A62AC0(a2);
  sub_B437B0(v39, (__int64)v30, v33, a2 + 2352, *(unsigned __int8 **)(a2 + 2312), v14, a2 + 18568);
  v19 = sub_B4CC60((__int64)v39, (__int64)v30, v15, v16, v17, v18);
  if ( ptr != &v41 )
    free(ptr);
  if ( v37 != &v38 )
    free(v37);
  v20 = (char *)v34;
  if ( v36 && v35 )
  {
    v21 = 0;
    v22 = 8LL * (unsigned int)(v35 - 1) + 8;
    do
    {
      v23 = *(_QWORD **)&v20[v21];
      if ( v23 && v23 != (_QWORD *)-8LL )
      {
        operator delete(*(_QWORD *)&v20[v21], *v23 + 17LL, 8);
        v20 = (char *)v34;
      }
      v21 += 8;
    }
    while ( v22 != v21 );
  }
  free(v20);
  if ( v31 != &v32 )
    free(v31);
  return v19;
}
