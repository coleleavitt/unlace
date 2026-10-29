__int64 __fastcall sub_1E72620(__int64 a1, _DWORD *a2, _BYTE *a3, signed __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  bool v14; // dl
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned int v24; // [rsp+0h] [rbp-100h]
  __int64 v25; // [rsp+0h] [rbp-100h]
  int v26; // [rsp+Ch] [rbp-F4h] BYREF
  __int64 v27; // [rsp+10h] [rbp-F0h] BYREF
  __int64 v28; // [rsp+18h] [rbp-E8h] BYREF
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  char v30; // [rsp+28h] [rbp-D8h]
  _QWORD v31[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *v33; // [rsp+58h] [rbp-A8h] BYREF
  char v34; // [rsp+B0h] [rbp-50h]
  unsigned int v35; // [rsp+B8h] [rbp-48h]
  char v36; // [rsp+BCh] [rbp-44h]

  if ( ((*a2 >> 14) & 0xC) != 0 )
    return 259;
  sub_C3EB00((__int64)&v28, (unsigned __int64)a2, *(_QWORD *)(a1 + 248), nullptr, a5, a6);
  if ( v30 )
  {
    v13 = v29;
    if ( v29 <= 0x40 )
      v14 = v28 == 0;
    else
      v14 = v13 == (unsigned int)sub_2206780(&v28);
    v15 = (unsigned __int8)(!v14 + 1);
    BYTE1(v15) = 1;
  }
  else
  {
    v16 = sub_C00A40((unsigned __int64)a2, (__int64)a2, v10, v11, v12);
    sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), v16, 0xC57u, 0);
    if ( v34 )
    {
      sub_AEC220(&v33, a3, a4);
    }
    else if ( v36 )
    {
      v18 = sub_168B9E0(v31);
      v22 = v32;
      if ( v32 )
      {
        v25 = v18;
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
        v18 = v25;
      }
      v27 = v22;
      v23 = sub_1587BC0(v18, &v27, v18, v19, v20, v21);
      sub_AEC220((unsigned __int8 **)(*v23 + 32LL * v35 + 8), a3, a4);
    }
    v26 = 1;
    v17 = sub_180A710((__int64)v31, &v26);
    v27 = sub_EEC8C0((unsigned __int64)a2, (__int64)&v26, a7);
    sub_1587DB0(v17, &v27);
    sub_15F7200(v31);
    v15 = 0;
  }
  v24 = v15;
  sub_98E4B0((__int64)&v28);
  return v24;
}
