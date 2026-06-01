__int64 __fastcall sub_1C3F9A0(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v8; // rax
  __m128i *v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // [rsp+0h] [rbp-E8h]
  __int64 v38; // [rsp+0h] [rbp-E8h]
  int v39; // [rsp+0h] [rbp-E8h]
  __int64 v40; // [rsp+8h] [rbp-E0h]
  __int64 v41; // [rsp+8h] [rbp-E0h]
  __int64 v42; // [rsp+8h] [rbp-E0h]
  __int64 v43; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v44[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v46; // [rsp+40h] [rbp-A8h] BYREF
  char v47; // [rsp+98h] [rbp-50h]
  unsigned int v48; // [rsp+A0h] [rbp-48h]
  char v49; // [rsp+A4h] [rbp-44h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL) )
  {
    if ( a4 == 2 )
    {
      v25 = sub_15F1640(a1, 1);
      if ( v25 )
      {
        v38 = v25;
        if ( (unsigned __int8)sub_B7B300(v25, 1, v26, v27) )
        {
          v39 = 0;
        }
        else
        {
          v41 = v38;
          v29 = sub_B7B430(v38, 1, v38, v28);
          v39 = 1;
          if ( !v29 )
          {
            if ( !sub_B7B700(v41, 1, v41, v30) )
              goto LABEL_3;
            v39 = 2;
          }
        }
        sub_168B9F0((__int64)v44, (__int64 *)(a1 + 8), a2, 0x1383u, 0);
        if ( v47 )
        {
          sub_1C2FE50(&v46, v39);
        }
        else if ( v49 )
        {
          v31 = sub_168B9E0(v44);
          v35 = v45;
          if ( v45 )
          {
            v42 = v31;
            v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
            v31 = v42;
          }
          v43 = v35;
          v36 = sub_1587BC0(v31, &v43, v31, v32, v33, v34);
          sub_1C2FE50((unsigned __int8 **)(*v36 + 32LL * v48 + 8), v39);
        }
        sub_15F7200(v44);
      }
    }
  }
LABEL_3:
  v44[0] = 0;
  v8 = sub_1C37A20((_QWORD *)a1, v44, a2, a5);
  v9 = (__m128i *)v44[0];
  v10 = v8;
  if ( v44[0] )
    v9 = (__m128i *)(v44[0] + 40);
  v40 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), "__context", 9u);
  v37 = *(_QWORD *)(a1 + 248);
  v14 = sub_A7AC20(v37, v10, v37, v11, v12, v13);
  v15 = sub_A70010(v37, v14);
  v16 = sub_B799D0(*(_QWORD *)(a1 + 248), (__int64)v9, a2, v40, v15, 4);
  sub_B94AD0(v9, v16, v17, v18, v19, v20);
  v21 = v44[0];
  *(_DWORD *)(v44[0] + 76) = 0;
  *(_QWORD *)(v21 + 88) = v16;
  sub_15F2CA0(a1, a3, v21, v10, a4, 0);
  if ( a3 )
  {
    v22 = v44[0];
    if ( v44[0] )
      v22 = v44[0] + 40;
    sub_17A2E00(a1, a3, v22);
  }
  else
  {
    v24 = v44[0];
    if ( v44[0] )
      v24 = v44[0] + 40;
    *(_QWORD *)(a1 + 544) = v24;
  }
  sub_18C74E0(a1, 6, 0, 4);
  result = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624);
  *(_BYTE *)(result - 42) = 0;
  return result;
}
