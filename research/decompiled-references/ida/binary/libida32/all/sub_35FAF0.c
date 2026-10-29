__int64 __fastcall sub_35FAF0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // r12d
  __int64 v9; // r13
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  char v12; // r12
  char v13; // al
  char v14; // dl
  unsigned int v15; // eax
  unsigned int v17; // r8d
  int v18; // r13d
  unsigned int v19; // r12d
  int v20; // eax
  int v21; // r13d
  __int64 v22; // rdi
  __int64 encoding_name; // rax
  __int64 v24; // rcx
  unsigned int v25; // r12d
  __int64 v26; // rsi
  __int64 v27; // [rsp+40h] [rbp-E0h]
  unsigned int v28; // [rsp+54h] [rbp-CCh]
  __int64 v29; // [rsp+58h] [rbp-C8h]
  signed int v30; // [rsp+60h] [rbp-C0h]
  unsigned int v32; // [rsp+74h] [rbp-ACh] BYREF
  _QWORD v33[4]; // [rsp+78h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+98h] [rbp-88h] BYREF
  int v35; // [rsp+A0h] [rbp-80h]
  unsigned int v36; // [rsp+C0h] [rbp-60h]
  char v37[8]; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+E0h] [rbp-40h]

  v5 = *(_DWORD *)(a2 + 76);
  v38 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 88);
  v28 = v5;
  v7 = *(_DWORD *)(a2 + 40) & 3;
  if ( v7 == 1 )
  {
    v8 = 2;
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 88LL);
    goto LABEL_31;
  }
  v8 = 1;
  if ( v7 == 2 )
  {
    v8 = 4;
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 96LL);
LABEL_31:
    if ( v29 )
      goto LABEL_6;
  }
  v9 = **(_QWORD **)(a1 + 88);
  v29 = *(_QWORD *)(v9 + 984);
  if ( (unsigned int)nbits(v6) != 8 && *(_DWORD *)(v9 + 780) == 8 )
    v29 = *(_QWORD *)(v9 + 992);
LABEL_6:
  v30 = ((int)nbits(v6) >> 3) / v8;
  if ( v6 >= v28 )
    goto LABEL_7;
  v18 = *(_DWORD *)(a2 + 40);
  v27 = **(_QWORD **)(a1 + 88);
  sub_3565B0((__int64)&v34, v27, v6, v28, 0);
  v19 = (unsigned __int8)getinf_flag(3, 32);
  v20 = v18 >> 24;
  if ( !HIBYTE(v18) )
  {
    v21 = v18 & 3;
    v22 = 2;
    if ( v21 != 1 )
      v22 = 3 * (unsigned int)(v21 == 2) + 1;
    LOBYTE(v20) = get_default_encoding_idx(v22);
  }
  encoding_name = get_encoding_name((unsigned __int8)v20);
  v24 = v19;
  v25 = v6;
  sub_894230(v33, &v34, encoding_name, v24, 0);
  while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v33[0] + 16LL))(v33[0]) )
  {
    sub_894330(v33, v37, &v32);
    if ( v32 != -1 )
    {
      if ( sub_358F10(v27 + 904, v32) )
        break;
    }
    v25 = v36;
  }
  v10 = v25 - v6;
  if ( v25 == v6 )
LABEL_7:
    v10 = v28 - v6;
  v11 = *(_DWORD *)(a2 + 88);
  v34 = 1;
  v35 = -1;
  v12 = *(_BYTE *)(a2 + 45);
  if ( get_array_parameters(&v34, v11) <= 0 )
  {
    v26 = *(unsigned int *)(a1 + 16);
    if ( v11 != (_DWORD)v26 )
      get_array_parameters(&v34, v26);
  }
  if ( v12 )
    LODWORD(v34) = v34 & 0xFFFFFFFE;
  if ( *(_BYTE *)(a2 + 45) )
  {
    v17 = 1;
    if ( v30 > 0 )
      v17 = v30;
    v15 = sub_35F8A0((__int64 *)a1, v6, v10, 0, v17, 1u, (int *)&v34, 0, a3, 0, 0);
    *(_DWORD *)(a2 + 88) = v15;
    return v15 < *(_DWORD *)(a2 + 76);
  }
  v13 = sub_35EA80(a1, v6, v10, 0, v29, v30, 0, v34, v35, 2u, nullptr, nullptr, nullptr);
  *(_QWORD *)(a1 + 32) = 0;
  v14 = v13;
  v15 = v6 + v10;
  *(_DWORD *)(a2 + 88) = v6 + v10;
  if ( !v14 )
    return v15 < *(_DWORD *)(a2 + 76);
  return 0xFFFFFFFFLL;
}

