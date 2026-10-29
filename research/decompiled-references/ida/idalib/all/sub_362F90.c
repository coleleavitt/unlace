__int64 __fastcall sub_362F90(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  unsigned __int64 v6; // rbx
  int v7; // eax
  int v8; // r12d
  __int64 v9; // r13
  int v10; // eax
  unsigned __int64 v11; // rcx
  int v12; // r13d
  __int64 v13; // r15
  char v14; // r12
  __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  char v17; // al
  int v19; // ecx
  int v20; // r13d
  unsigned int v21; // r12d
  int v22; // eax
  int v23; // r13d
  __int64 v24; // rdi
  __int64 encoding_name; // rax
  __int64 v26; // rcx
  int v27; // r12d
  __int64 v28; // rsi
  __int64 v29; // [rsp+40h] [rbp-F0h]
  __int64 v30; // [rsp+50h] [rbp-E0h]
  int v31; // [rsp+5Ch] [rbp-D4h]
  int v32; // [rsp+60h] [rbp-D0h]
  unsigned int v34; // [rsp+74h] [rbp-BCh] BYREF
  _QWORD v35[4]; // [rsp+78h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+98h] [rbp-98h] BYREF
  int v37; // [rsp+A0h] [rbp-90h]
  __int64 v38; // [rsp+C8h] [rbp-68h]
  _BYTE v39[8]; // [rsp+E8h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+F0h] [rbp-40h]

  v5 = *(_DWORD *)(a2 + 80);
  v40 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 96);
  v31 = v5 - v6;
  v7 = *(_DWORD *)(a2 + 40) & 3;
  if ( v7 == 1 )
  {
    v8 = 2;
    v30 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 88LL);
    goto LABEL_31;
  }
  v8 = 1;
  if ( v7 == 2 )
  {
    v8 = 4;
    v30 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 96LL);
LABEL_31:
    if ( v30 )
      goto LABEL_6;
  }
  v9 = **(_QWORD **)(a1 + 88);
  v30 = *(_QWORD *)(v9 + 1152);
  if ( (unsigned int)nbits(v6) != 8 && *(_DWORD *)(v9 + 948) == 8 )
    v30 = *(_QWORD *)(v9 + 1160);
LABEL_6:
  v10 = nbits(v6);
  v11 = v6 + v31;
  v32 = (v10 >> 3) / v8;
  if ( v6 >= v11 )
    goto LABEL_7;
  v20 = *(_DWORD *)(a2 + 40);
  v29 = **(_QWORD **)(a1 + 88);
  sub_359970((__int64)&v36, v29, v6, v11, 0);
  v21 = (unsigned __int8)getinf_flag(3, 32);
  v22 = v20 >> 24;
  if ( !HIBYTE(v20) )
  {
    v23 = v20 & 3;
    v24 = 2;
    if ( v23 != 1 )
      v24 = 3 * (unsigned int)(v23 == 2) + 1;
    LOBYTE(v22) = get_default_encoding_idx(v24);
  }
  encoding_name = get_encoding_name((unsigned __int8)v22);
  v26 = v21;
  v27 = v6;
  sub_8B7BF0(v35, &v36, encoding_name, v26, 0);
  while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v35[0] + 16LL))(v35[0]) )
  {
    sub_8B7CF0(v35, v39, &v34);
    if ( v34 != -1 )
    {
      if ( sub_35C340(v29 + 1072, v34) )
        break;
    }
    v27 = v38;
  }
  v12 = v27 - v6;
  if ( v27 == (_DWORD)v6 )
LABEL_7:
    v12 = v31;
  v13 = *(_QWORD *)(a2 + 96);
  v36 = 1;
  v37 = -1;
  v14 = *(_BYTE *)(a2 + 45);
  if ( get_array_parameters(&v36, v13) <= 0 )
  {
    v28 = *(_QWORD *)(a1 + 16);
    if ( v13 != v28 )
      get_array_parameters(&v36, v28);
  }
  if ( v14 )
    LODWORD(v36) = v36 & 0xFFFFFFFE;
  if ( *(_BYTE *)(a2 + 45) )
  {
    v19 = v32;
    if ( v32 <= 0 )
      v19 = 1;
    v16 = (int)(sub_362D20((_QWORD *)a1, v6, v12, 0, v19, 1u, (int *)&v36, 0, a3, 0, 0) - v6) + v6;
    *(_QWORD *)(a2 + 96) = v16;
    return v16 < *(_QWORD *)(a2 + 80);
  }
  v15 = v6;
  v16 = v12 + v6;
  v17 = sub_361EB0(a1, v15, v12, 0, v30, v32, 0, v36, v37, 2u, nullptr, nullptr, nullptr);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a2 + 96) = v16;
  if ( !v17 )
    return v16 < *(_QWORD *)(a2 + 80);
  return 0xFFFFFFFFLL;
}
