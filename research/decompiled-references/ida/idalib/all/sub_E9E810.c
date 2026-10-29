void __fastcall sub_E9E810(
        _QWORD *a1,
        _DWORD *a2,
        __int64 a3,
        _BYTE *a4,
        signed __int64 a5,
        __int64 a6,
        _BYTE *a7,
        __int64 a8)
{
  unsigned int v11; // r12d
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdx
  unsigned int v14; // r12d
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rdx
  unsigned int v17; // r13d
  unsigned __int64 v18; // rax
  _DWORD *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned int v23; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v24; // [rsp+18h] [rbp-B0h]
  __int64 v25; // [rsp+20h] [rbp-A8h]
  unsigned int v26; // [rsp+20h] [rbp-A8h]
  __int64 v27; // [rsp+20h] [rbp-A8h]
  __int64 v28; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v29; // [rsp+34h] [rbp-94h] BYREF
  char v30; // [rsp+3Ch] [rbp-8Ch]
  unsigned __int8 *v31[17]; // [rsp+40h] [rbp-88h] BYREF

  v11 = a2[4];
  if ( v11 )
  {
    v28 = a6;
    v26 = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 16LL))(*(_QWORD *)a2);
    a6 = v28;
    v13 = v26;
    v11 = v18;
    v24 = HIDWORD(v18);
  }
  else
  {
    v12 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( (unsigned int)v12 - 58 > 4 )
    {
      if ( v12 == 20 )
      {
        v13 = *(unsigned int *)(a3 + 80);
        LODWORD(v24) = 0;
      }
      else
      {
        v27 = a6;
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
        LODWORD(v24) = 0;
        a6 = v27;
        v13 = HIDWORD(v21);
      }
    }
    else
    {
      LODWORD(v24) = 0;
      v13 = *(unsigned int *)(a3 + 116);
    }
  }
  v25 = a6;
  sub_FC70B0(v31, *a1, v13, 2334);
  sub_E98080(v31, a3);
  sub_E97E40(v31, a5 == 0);
  sub_AEC220(v31, a4, a5);
  v29 = __PAIR64__(v24, v11);
  v30 = 1;
  sub_AEC610((__int64 *)v31, (__int64 *)&v29);
  sub_E97E40(v31, (int)a2[4]);
  sub_AEA040((__int64)v31);
  v14 = a2[5];
  if ( v14 )
  {
    v19 = *((_DWORD **)a2 + 1);
    v23 = v19[6];
    v20 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 16LL))(v19);
    v16 = v23;
    v14 = v20;
    v17 = HIDWORD(v20);
  }
  else
  {
    v15 = *(_BYTE *)(v25 + 28) & 0x7F;
    if ( (unsigned int)v15 - 58 > 4 )
    {
      if ( v15 == 20 )
      {
        v16 = *(unsigned int *)(v25 + 80);
        v17 = 0;
      }
      else
      {
        v17 = 0;
        v16 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25) >> 32;
      }
    }
    else
    {
      v16 = *(unsigned int *)(v25 + 116);
      v17 = 0;
    }
  }
  sub_FC70B0(v31, *a1, v16, 2516);
  sub_E97E40(v31, a8 == 0);
  sub_AEC220(v31, a7, a8);
  v29 = __PAIR64__(v17, v14);
  v30 = 1;
  sub_AEC610((__int64 *)v31, (__int64 *)&v29);
  sub_E97E40(v31, (int)a2[5]);
  sub_AEA040((__int64)v31);
}
