void __fastcall sub_137DE40(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, __int64, __int64); // rax
  unsigned int v9; // eax
  int v10; // eax
  __int64 *v11; // rsi
  __int64 *v12; // r15
  char v13; // al
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rdi
  _QWORD v17[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int16 v18; // [rsp+20h] [rbp-A8h]
  char *v19; // [rsp+30h] [rbp-98h] BYREF
  __int16 v20; // [rsp+50h] [rbp-78h]
  __int64 *v21; // [rsp+60h] [rbp-68h] BYREF
  __int64 v22; // [rsp+68h] [rbp-60h]
  __int64 v23; // [rsp+70h] [rbp-58h]
  __int64 v24; // [rsp+78h] [rbp-50h]
  __int64 v25; // [rsp+80h] [rbp-48h]

  v6 = *a1;
  v7 = a1[1];
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 528LL);
  if ( v8 != sub_FF8820 )
  {
    v13 = v8(v6, a1[1], a2, a3);
LABEL_6:
    if ( v13 )
    {
      if ( (unsigned int)sub_FEAA90(a1[2]) > 0x12B )
      {
        v17[0] = a2;
        v16 = (__int64 *)a1[3];
        v17[1] = a3;
        LOWORD(v25) = 257;
        v20 = 259;
        v19 = "1";
        v18 = 261;
        sub_1039E30(v16, (__int64)v17, (__int64)&v19, 261, v14, v15, (char)v21, v22, v23, v24, 1u);
      }
    }
    return;
  }
  v9 = sub_2244B30(a2, a3);
  v10 = sub_2244E60(v7, a2, a3, v9);
  if ( v10 == -1 )
    v11 = (__int64 *)(*(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8));
  else
    v11 = (__int64 *)(*(_QWORD *)v7 + 8LL * v10);
  sub_EC0F90(&v21, v11, 1);
  v12 = v21;
  sub_EC0F90(&v21, (__int64 *)(*(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8)), 1);
  if ( v21 != v12 )
  {
    v13 = *(_BYTE *)(*v12 + 8);
    goto LABEL_6;
  }
}
