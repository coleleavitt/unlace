void __fastcall sub_137DFB0(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, __int64); // rax
  unsigned int v10; // eax
  int v11; // eax
  __int64 *v12; // rsi
  __int64 *v13; // r14
  char v14; // al
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdi
  _QWORD v19[4]; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v20; // [rsp+30h] [rbp-A8h]
  char *v21; // [rsp+40h] [rbp-98h] BYREF
  __int16 v22; // [rsp+60h] [rbp-78h]
  __int64 *v23; // [rsp+70h] [rbp-68h] BYREF
  __int64 v24; // [rsp+78h] [rbp-60h]
  __int64 v25; // [rsp+80h] [rbp-58h]
  __int64 v26; // [rsp+88h] [rbp-50h]
  __int64 v27; // [rsp+90h] [rbp-48h]

  v7 = *a1;
  v8 = a1[1];
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 528LL);
  if ( v9 != sub_FF8820 )
  {
    v14 = v9(v7, v8, a2, a3);
LABEL_6:
    if ( v14 )
    {
      if ( a4 <= (unsigned int)sub_FEAA90(a1[2]) )
      {
        v19[0] = a2;
        v22 = 259;
        LOWORD(v27) = 257;
        v17 = (__int64 *)a1[3];
        v21 = "1";
        v20 = 261;
        v19[1] = a3;
        sub_1039E30(v17, (__int64)v19, (__int64)&v21, 261, v15, v16, (char)v23, v24, v25, v26, 1u);
      }
    }
    return;
  }
  v10 = sub_2244B30(a2, a3);
  v11 = sub_2244E60(v8, a2, a3, v10);
  if ( v11 == -1 )
    v12 = (__int64 *)(*(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8));
  else
    v12 = (__int64 *)(*(_QWORD *)v8 + 8LL * v11);
  sub_EC0F90(&v23, v12, 1);
  v13 = v23;
  sub_EC0F90(&v23, (__int64 *)(*(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8)), 1);
  if ( v23 != v13 )
  {
    v14 = *(_BYTE *)(*v13 + 8);
    goto LABEL_6;
  }
}
