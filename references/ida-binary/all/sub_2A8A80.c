__int64 __fastcall grida_model_data_t__::vfunc_4(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v7; // r15
  __int64 v8; // rsi
  __int64 v10; // rax
  char v11; // bp
  __int64 v12; // rax
  const char *v13; // rax
  const char *i; // rax
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // r10
  size_t v18; // r9
  __int64 v19; // r11
  __int64 v20; // rsi
  __int64 v21; // rdx
  const char *v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+14h] [rbp-D4h]
  __int64 v29; // [rsp+18h] [rbp-D0h]
  size_t v30; // [rsp+20h] [rbp-C8h]
  __int64 v31; // [rsp+28h] [rbp-C0h]
  __int64 v32; // [rsp+30h] [rbp-B8h]
  __int64 v33; // [rsp+38h] [rbp-B0h]
  int v34; // [rsp+44h] [rbp-A4h] BYREF
  const char *v35; // [rsp+48h] [rbp-A0h] BYREF
  __int64 *v36; // [rsp+50h] [rbp-98h] BYREF
  int v37; // [rsp+58h] [rbp-90h]
  __int64 v38; // [rsp+60h] [rbp-88h]
  __int64 v39; // [rsp+70h] [rbp-78h] BYREF
  __int64 v40; // [rsp+78h] [rbp-70h]
  int v41; // [rsp+80h] [rbp-68h]
  __int64 v42; // [rsp+88h] [rbp-60h]
  const char *v43; // [rsp+90h] [rbp-58h]
  __int128 v44; // [rsp+98h] [rbp-50h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-40h]

  v7 = *(_QWORD **)(a1 + 8);
  v28 = a3;
  v8 = v7[9];
  v45 = __readfsqword(0x28u);
  v36 = &idaplace_t___vtable;
  v33 = (int)a3;
  v10 = v7[13];
  v39 = 56;
  v40 = -1;
  v41 = 0;
  v42 = -1;
  v43 = nullptr;
  v37 = 0;
  v38 = -1;
  v44 = 0;
  v11 = *(_BYTE *)(v10 + (int)a3) & 1;
  if ( !(unsigned __int8)get_node_info(&v39, v8, a3, (int)a3, a5, a6) )
  {
    if ( v11 )
      goto LABEL_16;
    goto LABEL_22;
  }
  if ( v11 )
  {
    v12 = v42;
    goto LABEL_4;
  }
  if ( (unsigned __int64)v44 <= 1 )
  {
LABEL_22:
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64 *, _QWORD, _QWORD))(*v7 + 272LL))(
      v7,
      v28,
      a2,
      (unsigned __int8)byte_8CCA99,
      *(_QWORD *)(*(_QWORD *)(a4 + 16) + 728LL));
    goto LABEL_16;
  }
  v38 = v42;
  if ( v42 != -1 )
    goto LABEL_21;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v7 + 296LL))(v7, v28);
LABEL_4:
  v38 = v12;
  if ( !(_QWORD)v44 )
  {
    v13 = &s1;
    goto LABEL_6;
  }
LABEL_21:
  v13 = v43;
LABEL_6:
  v35 = v13;
  for ( i = sub_2A7F20(&v35, &v34); ; i = sub_2A7F20(&v35, &v34) )
  {
    v22 = i;
    if ( !i )
      break;
    v23 = a2[1];
    v24 = *a2;
    if ( a2[2] < (unsigned __int64)(v23 + 1) )
    {
      v25 = qvector_reserve(a2, v24, v23 + 1, 272);
      *a2 = v25;
      v23 = a2[1];
      v24 = v25;
    }
    v15 = v24 + 272 * v23;
    *(_QWORD *)(v15 + 32) = 0xFFFFFFFF00000001LL;
    *(_QWORD *)(v15 + 40) = 0;
    *(_QWORD *)(v15 + 48) = 0;
    *(_QWORD *)(v15 + 72) = 0;
    *(_QWORD *)(v15 + 128) = 0;
    *(_QWORD *)(v15 + 184) = 0;
    *(_QWORD *)(v15 + 208) = 0;
    *(_QWORD *)(v15 + 232) = 0;
    *(_QWORD *)(v15 + 256) = -1;
    *(_QWORD *)(v15 + 264) = 0;
    *(_OWORD *)v15 = 0;
    *(_OWORD *)(v15 + 16) = 0;
    *(_OWORD *)(v15 + 56) = 0;
    *(_OWORD *)(v15 + 80) = 0;
    *(_OWORD *)(v15 + 96) = 0;
    *(_OWORD *)(v15 + 112) = 0;
    *(_OWORD *)(v15 + 136) = 0;
    *(_OWORD *)(v15 + 152) = 0;
    *(_OWORD *)(v15 + 168) = 0;
    *(_OWORD *)(v15 + 192) = 0;
    *(_OWORD *)(v15 + 216) = 0;
    *(_OWORD *)(v15 + 240) = 0;
    ++a2[1];
    *(_QWORD *)v15 = idaplace_t__clone(&v36);
    v16 = v40;
    v17 = *(_QWORD *)(v15 + 16);
    *(_BYTE *)(v15 + 32) = -1;
    *(_DWORD *)(v15 + 36) = v16;
    LODWORD(v18) = v34 + 1;
    *(_BYTE *)(v15 + 40) = a2[1] == 1;
    v18 = (int)v18;
    v19 = (int)v18;
    if ( v17 )
    {
      --v17;
      v19 = (int)v18 + v17;
    }
    v20 = *(_QWORD *)(v15 + 8);
    v21 = v19 + 1;
    if ( *(_QWORD *)(v15 + 24) < (unsigned __int64)(v19 + 1) )
    {
      v32 = v19;
      v31 = v17;
      v30 = (int)v18;
      v29 = v19 + 1;
      v27 = qvector_reserve(v15 + 8, v20, v21, 1);
      *(_QWORD *)(v15 + 8) = v27;
      v19 = v32;
      v20 = v27;
      v17 = v31;
      v18 = v30;
      v21 = v29;
    }
    *(_QWORD *)(v15 + 16) = v21;
    *(_BYTE *)(v20 + v19) = 0;
    memmove((void *)(v17 + *(_QWORD *)(v15 + 8)), v22, v18);
    ++v37;
  }
LABEL_16:
  *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4 * v33) = sub_2A8960(a1, v28);
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43, (const char *)v28);
  }
  return 1;
}
