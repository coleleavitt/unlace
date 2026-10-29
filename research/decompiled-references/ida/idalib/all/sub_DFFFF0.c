__int64 __fastcall sub_DFFFF0(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rdi
  __int64 (__fastcall *v4)(__int64); // rax
  _QWORD *v5; // rdi
  __int64 (*v6)(void); // rdx
  _QWORD *v7; // rdi
  _QWORD **v8; // rdi
  char v9; // al
  unsigned int v10; // edx
  __int64 v11; // r12
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  int *v14; // rdx
  _BYTE *v15; // rbx
  unsigned int v17; // [rsp+Ch] [rbp-5Ch] BYREF
  __m128 v18[5]; // [rsp+10h] [rbp-58h] BYREF

  v3 = (_QWORD *)a1[3];
  v4 = *(__int64 (__fastcall **)(__int64))(*v3 + 24LL);
  if ( v4 == sub_CF0250 )
  {
    v5 = (_QWORD *)v3[3];
    v6 = *(__int64 (**)(void))(*v5 + 24LL);
    if ( (char *)v6 != (char *)v4 )
    {
LABEL_11:
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
      goto LABEL_11;
    }
  }
  v9 = ((__int64 (*)(void))v4)();
LABEL_6:
  v10 = 0;
  if ( !v9 )
  {
    v11 = a1[22];
    v17 = a2;
    v12 = a1[50];
    v13 = sub_D88C20(v12 + 176, (int *)&v17);
    v14 = (int *)(*(_QWORD *)(v12 + 176) + 16LL * *(unsigned int *)(v12 + 192));
    sub_D88B90(v18, v14, v14, v12 + 176, 1);
    if ( v18[0].m128_u64[0] == v13 )
    {
      v15 = (_BYTE *)(*(_QWORD *)(v12 + 152) + v17 - (unsigned __int64)*(unsigned int *)(v12 + 144));
    }
    else
    {
      sub_E23170(v18, *(_QWORD *)(v13 + 8));
      v15 = (_BYTE *)sub_D0C7E0((__int64)v18);
      sub_E232A0(v18);
    }
    *(_BYTE *)sub_E216C0(v11, 8) = *v15;
    return 1;
  }
  return v10;
}
