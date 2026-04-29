unsigned __int64 __fastcall sub_2A48E0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v8; // rsi
  bool v9; // zf
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  _QWORD v23[2]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v24[2]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v25[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v26[4]; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+40h] [rbp-38h]
  unsigned __int64 v28; // [rsp+48h] [rbp-30h]

  v8 = *(_QWORD *)a1;
  v9 = *(_DWORD *)(a2 + 8) == 61;
  v28 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(v8 + 112);
  if ( v9 )
  {
    v21 = sub_250E30(*(__int64 **)(a2 + 24), (_QWORD *)(a2 + 48));
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 24LL) + 16LL) < v21 || !(unsigned __int8)is_mapped(v21) )
      return v28 - __readfsqword(0x28u);
    v8 = *(_QWORD *)a1;
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
  }
  if ( *(_DWORD *)(a3 + 8) != 61 )
  {
LABEL_3:
    v24[1] = a3;
    v24[0] = 6;
    sub_29B460((__int64)v24, v8, a3, a4, a5, a6);
    v12 = *(_QWORD *)a1;
    v23[0] = 6;
    v23[1] = a2;
    sub_29B460((__int64)v23, v12, v13, v14, v15, v16);
    v25[0] = 0;
    sub_29AB70((__int64)v25, (unsigned int *)v23);
    v26[0] = 0;
    sub_29AB70((__int64)v26, (unsigned int *)v24);
    v27 = 3;
    sub_2A3710(a1, (__int64)v25, 0, v17, v18, v19);
    v27 = -1;
    sub_29A030((__int64)v26);
    sub_29A030((__int64)v25);
    sub_29A030((__int64)v23);
    sub_29A030((__int64)v24);
    return v28 - __readfsqword(0x28u);
  }
  v22 = sub_250E30(*(__int64 **)(a3 + 24), (_QWORD *)(a3 + 48));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 24LL) + 16LL) >= v22 && (unsigned __int8)is_mapped(v22) )
  {
    v8 = *(_QWORD *)a1;
    goto LABEL_3;
  }
  return v28 - __readfsqword(0x28u);
}
