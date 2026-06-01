__int64 __fastcall sub_D2F1D0(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v8; // rbx
  __int64 (*v9)(void); // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // sf
  __int64 v15; // rdx
  unsigned __int8 **v16; // r14
  __int64 v17; // [rsp+8h] [rbp-A0h] BYREF
  void *v18; // [rsp+10h] [rbp-98h] BYREF
  signed __int64 v19; // [rsp+18h] [rbp-90h]
  _BYTE v20[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+30h] [rbp-78h] BYREF
  int v22; // [rsp+38h] [rbp-70h]
  __int128 v23; // [rsp+40h] [rbp-68h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  char v25; // [rsp+58h] [rbp-50h]
  int v26; // [rsp+5Ch] [rbp-4Ch]
  void **v27; // [rsp+60h] [rbp-48h]

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
    if ( (__int64)*a3 <= 0xFFFFFFCF / a4 )
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
  v13 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v14 = (*a3 & 0x8000000000000000LL) != 0LL;
  v17 = v13;
  v15 = 2448;
  if ( !v14 )
    v15 = 2452;
  v16 = (unsigned __int8 **)sub_E33BA0(a1, &v17, v15, 0);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v18 = v20;
  v23 = 0;
  v20[0] = 0;
  v19 = 0;
  v22 = 0;
  v25 = 0;
  v26 = 1;
  v24 = 0;
  v21 = &off_2BEBE68;
  v27 = &v18;
  sub_227B8B0(&v21, 0, 0, 0);
  sub_227B930(&v21, *a3);
  v21 = &off_2BEBE68;
  sub_227B7A0(&v21);
  if ( v16 )
    sub_AEC220(v16, v18, v19);
  if ( v18 != v20 )
    operator delete(v18);
  return a5;
}
