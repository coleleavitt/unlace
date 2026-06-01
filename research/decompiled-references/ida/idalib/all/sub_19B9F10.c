unsigned __int64 __fastcall sub_19B9F10(
        __m128 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  char v8; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v26; // rbp
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  __int64 v36; // rax
  _QWORD *v37; // rax
  unsigned int v38[3]; // [rsp+Ch] [rbp-DCh] BYREF
  __int64 v39; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v40[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v42; // [rsp+40h] [rbp-A8h] BYREF
  char v43; // [rsp+98h] [rbp-50h]
  unsigned int v44; // [rsp+A0h] [rbp-48h]
  char v45; // [rsp+A4h] [rbp-44h]

  v8 = a6;
  v38[0] = a3;
  v10 = sub_183B880((__int64)a1, a4, a5, a4, (__int64)a5, a6);
  v11 = v10 + 64;
  v12 = v10;
  if ( (unsigned __int8)sub_B8E180(v10 + 64) == 1 && !v8 )
  {
    v29 = *((_QWORD *)a5 + 1);
    if ( v29 )
      return sub_AB77C0((_QWORD *)a1[15].m128_u64[1], 6, v29, a2);
    v13 = *a5;
    if ( !(_DWORD)v13 || !a5[1] )
      goto LABEL_9;
  }
  else if ( !*a5 || (v14 = a5[1], !(_DWORD)v14) )
  {
    if ( !*((_QWORD *)a5 + 1) )
      goto LABEL_9;
  }
  v17 = 0;
  if ( v12 )
    v17 = v11;
  if ( (unsigned __int8)sub_169F990((__int64)a1, (__int64)a5, v17) )
    return 0;
LABEL_9:
  v18 = sub_B94670(v11, a2, v13, v14, v15, v16);
  if ( !v18 )
  {
LABEL_15:
    if ( *(char *)(v12 + 28) >= 0 )
    {
      v30 = sub_15AB9A0((__int64)a5);
      sub_168B9F0((__int64)v40, &a1->m128_i64[1], v30, 0xF7Cu, 0);
      if ( v43 )
      {
        sub_AE9DF0(&v42, v12, 0xAu);
      }
      else if ( v45 )
      {
        v35 = sub_168B9E0(v40);
        v36 = v41;
        if ( v41 )
          v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41);
        v39 = v36;
        v37 = sub_1587BC0(v35, &v39, v31, v32, v33, v34);
        sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v44 + 8), v12, 0xAu);
      }
      v39 = *(_QWORD *)a5;
      sub_1587DB0((__int64)v40, &v39);
      sub_15F7200(v40);
    }
    return 0;
  }
  while ( 1 )
  {
    v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    v20 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v18 & 4) == 0 )
      break;
    if ( !v19 )
      goto LABEL_15;
    v20 = *(_QWORD *)v19;
    if ( (*(_BYTE *)(*(_QWORD *)v19 + 28LL) & 0x7Fu) - 59 <= 2 && sub_B97450(*(_QWORD *)v19) )
      goto LABEL_19;
    v18 = *(_QWORD *)(v19 + 8);
    if ( !v18 )
      goto LABEL_15;
  }
  if ( (*(_BYTE *)(v19 + 28) & 0x7Fu) - 59 > 2 || !sub_B97450(v19) )
    goto LABEL_15;
LABEL_19:
  v26 = *(_QWORD *)(v20 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !*(_QWORD *)(v20 + 48) )
    v26 = sub_A7AA70(a1[15].m128_i64[1], v20, v21, v22, v23, v24);
  sub_18F5260((__int64)a1, v20, (int *)v38, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0);
  sub_19116A0(a1, v38[0], v20, 0, v27, v28, a7, a8);
  return v26;
}
