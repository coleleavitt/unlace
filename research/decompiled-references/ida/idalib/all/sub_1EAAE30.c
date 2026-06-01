__int64 __fastcall sub_1EAAE30(__int64 a1, __int64 a2, void *a3, size_t a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rsi
  __int64 v11; // r13
  size_t v14; // rax
  __int64 v15; // r8
  size_t v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  const void *v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // rax
  size_t v23; // rdx
  __int64 v24; // rax
  void *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  __int64 v30; // [rsp+8h] [rbp-100h]
  _QWORD v31[4]; // [rsp+10h] [rbp-F8h] BYREF
  __int16 v32; // [rsp+30h] [rbp-D8h]
  _QWORD v33[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v34; // [rsp+60h] [rbp-A8h]
  _BYTE v35[32]; // [rsp+70h] [rbp-98h] BYREF
  __int16 v36; // [rsp+90h] [rbp-78h]
  void *ptr; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B8h] [rbp-50h] BYREF
  __int16 v40; // [rsp+C0h] [rbp-48h]

  if ( a6
    && a4
    && (v40 = 261, ptr = a3, *(_QWORD *)&v38 = a4, !(unsigned __int8)sub_228B020(&ptr, 0))
    && ((v14 = j__strlen("<built-in>"), v15 = a5, v14 != a4) || (v27 = memcmp(a3, "<built-in>", a4), v15 = a5, v27))
    && ((v30 = v15, v16 = j__strlen("<command line>"), v17 = v30, v16 != a4)
     || (v28 = memcmp(a3, "<command line>", a4), v17 = v30, v28)) )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v34 = 261;
    v36 = 257;
    v32 = 261;
    v31[0] = v17;
    v40 = 257;
    v33[1] = a4;
    v33[0] = a3;
    v31[1] = a6;
    sub_228A3B0(a2, v31, v33, v35, &ptr);
    v18 = *(_QWORD *)(a2 + 8);
    v19 = *(const void **)a2;
    *(_OWORD *)(a1 + 32) = 0;
    v10 = a1 + 48;
    v20 = a1 + 24;
    *(_QWORD *)(a1 + 8) = v18;
    *(_QWORD *)a1 = v19;
    v11 = *(_QWORD *)(a2 + 8);
    ptr = &v39;
    v38 = 0;
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a1 + 48;
    if ( !v11 || a2 == v20 )
      goto LABEL_4;
  }
  else
  {
    *(_QWORD *)a1 = a3;
    v10 = a1 + 48;
    *(_QWORD *)(a1 + 8) = a4;
    *(_OWORD *)(a1 + 32) = 0;
    v11 = *(_QWORD *)(a2 + 8);
    ptr = &v39;
    v38 = 0;
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a1 + 48;
    if ( !v11 )
      goto LABEL_4;
    v20 = a1 + 24;
    if ( a1 + 24 == a2 )
      goto LABEL_4;
  }
  v21 = a2 + 24;
  if ( *(_QWORD *)a2 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)a2;
    v22 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 32) = v11;
    *(_QWORD *)(a1 + 40) = v22;
    *(_QWORD *)a2 = v21;
    *(_QWORD *)(a2 + 16) = 0;
LABEL_4:
    *(_QWORD *)(a2 + 8) = 0;
    return a1;
  }
  sub_2236E10(v20, v10, v11, 1);
  v23 = *(_QWORD *)(a2 + 8);
  if ( v23 )
    memcpy(*(void **)(a1 + 24), *(const void **)a2, v23);
  v24 = v38;
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a2 + 8) = 0;
  if ( v24 )
  {
    if ( v21 != *(_QWORD *)a2 )
    {
      free(*(void **)a2);
      v24 = v38;
    }
    v25 = ptr;
    *(_QWORD *)(a2 + 8) = v24;
    v26 = *((_QWORD *)&v38 + 1);
    *(_QWORD *)a2 = v25;
    *(_QWORD *)(a2 + 16) = v26;
  }
  else if ( ptr != &v39 )
  {
    free(ptr);
  }
  return a1;
}
