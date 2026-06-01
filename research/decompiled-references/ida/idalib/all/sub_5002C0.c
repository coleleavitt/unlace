__int64 __fastcall sub_5002C0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int32 a4, __int64 a5)
{
  __int64 v6; // rbx
  void *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rsi
  void *v18; // r13
  __int64 v19; // rax
  size_t v20; // rbp
  void *v21; // r12
  _QWORD *v22; // rax
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64, __int64, __int64, __int64); // rax
  int v26; // ebx
  __int64 v27; // r12
  int v28; // ebp
  char *v29; // rax
  __int64 v30; // [rsp+0h] [rbp-1D8h]
  unsigned __int32 v31; // [rsp+Ch] [rbp-1CCh] BYREF
  void *v32; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v33; // [rsp+18h] [rbp-1C0h]
  char v34; // [rsp+28h] [rbp-1B0h]
  __int128 v35; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-198h]
  __int64 v37; // [rsp+48h] [rbp-190h]
  __int64 v38; // [rsp+50h] [rbp-188h]
  _BYTE v39[320]; // [rsp+58h] [rbp-180h] BYREF
  _QWORD v40[8]; // [rsp+198h] [rbp-40h] BYREF

  v6 = a3;
  v31 = a4;
  v40[0] = __readfsqword(0x28u);
  sub_5001E0((__int64)&v32, a1, a2, a3, a4, 0, 0);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  v8 = (void *)a2;
  v9 = *(_QWORD *)(a1 + 200);
  if ( v6 != -1 )
    v8 = (void *)v6;
  v10 = *(_QWORD *)(a1 + 200);
  v32 = v8;
  LODWORD(v33) = v31;
  v11 = sub_4F90B0(v10, (__int64 *)&v32);
  v13 = v11;
  if ( v11 == v9 + 8 )
    goto LABEL_18;
  v14 = *(_QWORD *)(v11 + 48);
  if ( v14 != a5 )
  {
    v15 = **(_QWORD **)(a1 + 192);
    v16 = v15 + 48 * a5;
    v17 = *(_QWORD *)(v16 + 8);
    if ( v17 )
    {
      v30 = v13;
      v21 = (void *)qalloc_or_throw(24 * v17);
      memcpy(v21, *(const void **)v16, 24 * v17);
      if ( (unsigned __int8)(*(_BYTE *)(v16 + 24) - 1) > 1u )
      {
        LODWORD(v6) = 1;
LABEL_13:
        if ( v21 )
          qfree(v21);
        return (unsigned int)v6;
      }
      v6 = **(_QWORD **)(a1 + 192) + 48LL * *(_QWORD *)(v30 + 48);
      v19 = *(_QWORD *)(v6 + 8);
      if ( v19 )
      {
        v18 = v21;
        goto LABEL_10;
      }
      if ( v21 )
      {
        qfree(v21);
        LOBYTE(v6) = (unsigned __int8)(*(_BYTE *)(v6 + 24) - 1) > 1u;
        return (unsigned int)v6;
      }
LABEL_30:
      LOBYTE(v6) = (unsigned __int8)(*(_BYTE *)(v6 + 24) - 1) > 1u;
      return (unsigned int)v6;
    }
    if ( (unsigned __int8)(*(_BYTE *)(v16 + 24) - 1) <= 1u )
    {
      v18 = nullptr;
      v6 = v15 + 48 * v14;
      v19 = *(_QWORD *)(v6 + 8);
      if ( v19 )
      {
LABEL_10:
        v20 = 24 * v19;
        v21 = (void *)qalloc_or_throw(24 * v19);
        memcpy(v21, *(const void **)v6, v20);
        if ( v18 )
          qfree(v18);
        LOBYTE(v6) = (unsigned __int8)(*(_BYTE *)(v6 + 24) - 1) > 1u;
        goto LABEL_13;
      }
      goto LABEL_30;
    }
LABEL_18:
    LODWORD(v6) = 1;
    return (unsigned int)v6;
  }
  v36 = -1;
  v22 = v39;
  v37 = 0;
  v38 = 0;
  v35 = -1;
  do
  {
    *(_WORD *)v22 = 0;
    v22 += 5;
    *((_WORD *)v22 - 19) = 0;
    *((_WORD *)v22 - 18) = 0;
    *((_DWORD *)v22 - 2) = 0;
    *((_WORD *)v22 - 17) = 0;
    *((_OWORD *)v22 - 2) = 0;
    *(v22 - 2) = 0;
  }
  while ( v22 != v40 );
  if ( !(unsigned int)decode_insn(&v35, a2, v40, 0, 0, v12, 0.0) )
    goto LABEL_18;
  v24 = *(_QWORD *)a1;
  v32 = nullptr;
  v34 = 0;
  v33 = 0;
  v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v24 + 80);
  if ( v25 == sub_4F4F20 )
  {
    v26 = 0;
    v34 = 4;
    v27 = v36;
    v28 = (unsigned __int16)v37;
    if ( v39[41] == 5 )
      v26 = v39[81] == 0;
    v32 = (void *)qvector_reserve(&v32, 0, 1, 24);
    v29 = (char *)v32 + 24 * v33;
    *(_QWORD *)v29 = -1;
    *((_QWORD *)v29 + 1) = v27;
    *((_DWORD *)v29 + 4) = v28 | (v26 << 16);
    LODWORD(v6) = 1;
  }
  else
  {
    LODWORD(v6) = ((__int64 (__fastcall *)(__int64, void **, unsigned __int32 *, __int128 *, unsigned __int64, __int64))v25)(
                    a1,
                    &v32,
                    &v31,
                    &v35,
                    a2,
                    v6);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  return (unsigned int)v6;
}
