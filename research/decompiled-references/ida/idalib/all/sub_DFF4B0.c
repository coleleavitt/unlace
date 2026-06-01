__int64 __fastcall sub_DFF4B0(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rdi
  __int64 (__fastcall *v4)(__int64); // rax
  _QWORD *v5; // rdi
  __int64 (*v6)(void); // rdx
  _QWORD *v7; // rdi
  _QWORD **v8; // rdi
  char v9; // al
  unsigned int v10; // edx
  __int64 v11; // r13
  __int64 v12; // rbp
  unsigned __int64 v13; // r14
  int *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rbp
  unsigned int v17; // eax
  unsigned int v19; // [rsp+Ch] [rbp-5Ch] BYREF
  __m128 v20[5]; // [rsp+10h] [rbp-58h] BYREF

  v3 = (_QWORD *)a1[3];
  v4 = *(__int64 (__fastcall **)(__int64))(*v3 + 24LL);
  if ( v4 == sub_CF0250 )
  {
    v5 = (_QWORD *)v3[3];
    v6 = *(__int64 (**)(void))(*v5 + 24LL);
    if ( (char *)v6 != (char *)v4 )
    {
LABEL_13:
      v9 = v6();
      goto LABEL_6;
    }
    v7 = (_QWORD *)v5[3];
    v4 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
    if ( (char *)v4 == (char *)v6 )
    {
      v8 = (_QWORD **)v7[3];
      v6 = (__int64 (*)(void))(*v8)[3];
      if ( (char *)v6 == (char *)v4 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v8[3] + 24LL))(v8[3]);
        goto LABEL_6;
      }
      goto LABEL_13;
    }
  }
  v9 = ((__int64 (*)(void))v4)();
LABEL_6:
  v10 = 0;
  if ( !v9 )
  {
    v11 = a1[50];
    v19 = a2;
    v12 = a1[22];
    v13 = sub_D88C20(v11 + 176, (int *)&v19);
    v14 = (int *)(*(_QWORD *)(v11 + 176) + 16LL * *(unsigned int *)(v11 + 192));
    sub_D88B90(v20, v14, v14, v11 + 176, 1);
    if ( v20[0].m128_u64[0] == v13 )
    {
      v15 = *(_QWORD *)(v11 + 152) + v19 - (unsigned __int64)*(unsigned int *)(v11 + 144);
    }
    else
    {
      sub_E23170(v20, *(_QWORD *)(v13 + 8));
      v15 = sub_D0F1C0((__int64)v20);
      sub_E232A0(v20);
    }
    v16 = sub_E216C0(v12, 24);
    v17 = *(_DWORD *)(v15 + 8);
    *(_DWORD *)(v16 + 8) = v17;
    if ( v17 > 0x40 )
      sub_2205510(v16);
    else
      *(_QWORD *)v16 = *(_QWORD *)v15;
    v10 = 1;
    *(_BYTE *)(v16 + 12) = *(_BYTE *)(v15 + 12);
    *(_DWORD *)(v16 + 16) = *(_DWORD *)(v15 + 16);
  }
  return v10;
}
