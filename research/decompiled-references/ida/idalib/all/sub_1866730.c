void __fastcall sub_1866730(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __m128 a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r13
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // r14
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31[2]; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v32; // [rsp+10h] [rbp-D8h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v34[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v36; // [rsp+40h] [rbp-A8h] BYREF
  char v37; // [rsp+98h] [rbp-50h]
  unsigned int v38; // [rsp+A0h] [rbp-48h]
  char v39; // [rsp+A4h] [rbp-44h]

  v31[0] = a2;
  v31[1] = a3;
  v6 = sub_F6C7E0(a2, a3);
  if ( v6 )
  {
    sub_1866A00(a1, v6, v7, a4);
    return;
  }
  if ( a4 == -1 )
    return;
  v32 = v31[0];
  v8 = (_QWORD *)*a1;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(v9 + 16) - 2) <= 4u )
  {
    v32 = sub_A71450(*(_QWORD *)(*v8 + 248LL), v31[0]);
    v8 = (_QWORD *)*a1;
    if ( (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
        & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*a1 + 16LL) )
      return;
    v10 = a1[1];
LABEL_8:
    sub_168B9F0((__int64)v34, (__int64 *)(*v8 + 8LL), *(_DWORD *)(v10 + 24), 0xC08u, 0);
    v11 = sub_1605D30((__int64)v34, (__int64 *)&v32);
    v12 = sub_F6CE20(v31);
    v33 = __PAIR64__(v12, sub_F6CCB0(v31, a5));
    sub_1587DB0(v11, (__int64 *)&v33);
    sub_15F7200(v34);
    goto LABEL_9;
  }
  if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) != v8[2] )
    return;
  v10 = a1[1];
  if ( a4 == 6 )
    goto LABEL_8;
  sub_168B9F0((__int64)v34, (__int64 *)(*v8 + 8LL), *(_DWORD *)(v10 + 24), 0xB38u, 0);
  if ( v37 )
  {
    sub_AE9DF0(&v36, (int)a4, 2u);
  }
  else if ( v39 )
  {
    v28 = sub_168B9E0(v34);
    v29 = v35;
    if ( v35 )
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
    v33 = v29;
    v30 = sub_1587BC0(v28, (__int64 *)&v33, v24, v25, v26, v27);
    sub_AE9DF0((unsigned __int8 **)(*v30 + 32LL * v38 + 8), (int)a4, 2u);
  }
  v22 = sub_1605D30((__int64)v34, (__int64 *)&v32);
  v23 = sub_F6CE20(v31);
  v33 = __PAIR64__(v23, sub_F6CCB0(v31, a5));
  sub_1587DB0(v22, (__int64 *)&v33);
  sub_15F7200(v34);
LABEL_9:
  v17 = *a1;
  if ( !*(_BYTE *)(*a1 + 24LL) )
  {
    v18 = *(_QWORD *)v17;
    v19 = *(_QWORD *)(v17 + 8);
    v20 = *(_QWORD *)(*(_QWORD *)v17 + 4096LL);
    if ( v20 )
    {
      if ( *(_BYTE *)(v20 + 20) )
      {
        v21 = *(_QWORD **)v20;
        v13 = *(_QWORD *)v20 + 8LL * *(unsigned int *)(v20 + 12);
        if ( *(_QWORD *)v20 != v13 )
        {
          while ( v19 != *v21 )
          {
            if ( (_QWORD *)v13 == ++v21 )
              goto LABEL_18;
          }
          goto LABEL_16;
        }
      }
      else if ( sub_2236570(v20, *(_QWORD *)(v17 + 8)) )
      {
LABEL_16:
        *(_BYTE *)(v17 + 24) = 1;
        return;
      }
    }
LABEL_18:
    if ( *(_DWORD *)(*(_QWORD *)(v18 + 264) + 204LL) )
      sub_1866110(v18, v19, v13, v14, v15, v16);
    goto LABEL_16;
  }
}
