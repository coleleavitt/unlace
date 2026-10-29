__int64 __fastcall sub_D2F040(__int64 a1, __int64 a2, unsigned int *a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v8; // rbx
  __int64 (*v9)(void); // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  unsigned __int8 **v13; // r13
  __int64 v14; // [rsp+8h] [rbp-A0h] BYREF
  void *v15; // [rsp+10h] [rbp-98h] BYREF
  signed __int64 v16; // [rsp+18h] [rbp-90h]
  _BYTE v17[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+30h] [rbp-78h] BYREF
  int v19; // [rsp+38h] [rbp-70h]
  __int128 v20; // [rsp+40h] [rbp-68h]
  __int64 v21; // [rsp+50h] [rbp-58h]
  char v22; // [rsp+58h] [rbp-50h]
  int v23; // [rsp+5Ch] [rbp-4Ch]
  void **v24; // [rsp+60h] [rbp-48h]

  v8 = *a3;
  v9 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 24) + 104LL);
  if ( !*a3 )
  {
    v12 = v9();
    sub_F56FC0(v12);
    goto LABEL_6;
  }
  v10 = v9();
  _BitScanReverse64(&v8, v8);
  if ( (unsigned int)sub_F56FC0(v10) >= 64 - ((unsigned int)v8 ^ 0x3F) )
  {
LABEL_6:
    result = 1;
    if ( 0xFFFFFFCF / a4 >= *a3 )
      return result;
    result = 0;
    if ( (_BYTE)a5 )
      return result;
    goto LABEL_8;
  }
  result = 0;
  if ( (_BYTE)a5 )
    return result;
LABEL_8:
  v14 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v13 = (unsigned __int8 **)sub_E33BA0(a1, &v14, 2452, 0);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v15 = v17;
  v20 = 0;
  v17[0] = 0;
  v16 = 0;
  v19 = 0;
  v22 = 0;
  v23 = 1;
  v21 = 0;
  v18 = &off_2BEBE68;
  v24 = &v15;
  sub_227B8B0(&v18, 0, 0, 0);
  sub_227B910(&v18, *a3);
  v18 = &off_2BEBE68;
  sub_227B7A0(&v18);
  if ( v13 )
    sub_AEC220(v13, v15, v16);
  if ( v15 != v17 )
    operator delete(v15);
  return a5;
}
