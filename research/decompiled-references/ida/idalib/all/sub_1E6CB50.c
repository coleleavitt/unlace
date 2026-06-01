__int64 *__fastcall sub_1E6CB50(__int64 a1, _DWORD *a2, unsigned int *a3, __int64 a4, int a5, unsigned int a6)
{
  int v8; // eax
  int *v9; // rbp
  int v10; // eax
  int v11; // eax
  __int64 *result; // rax
  int v13; // ebx
  char *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned int v24; // [rsp+2Ch] [rbp-14Ch]
  unsigned __int64 v25; // [rsp+30h] [rbp-148h]
  char *v26; // [rsp+38h] [rbp-140h]
  __int64 v27; // [rsp+38h] [rbp-140h]
  __int64 v28; // [rsp+40h] [rbp-138h]
  __int64 v29; // [rsp+48h] [rbp-130h] BYREF
  _DWORD v30[8]; // [rsp+50h] [rbp-128h] BYREF
  __int64 v31; // [rsp+70h] [rbp-108h] BYREF
  char v32; // [rsp+78h] [rbp-100h]
  __int64 v33; // [rsp+7Ch] [rbp-FCh]
  char v34; // [rsp+84h] [rbp-F4h]
  void *v35; // [rsp+88h] [rbp-F0h]
  __int64 v36; // [rsp+90h] [rbp-E8h]
  _BYTE v37[24]; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v38[2]; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD *v39; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v40; // [rsp+D0h] [rbp-A8h] BYREF
  char v41; // [rsp+128h] [rbp-50h]
  unsigned int v42; // [rsp+130h] [rbp-48h]
  char v43; // [rsp+134h] [rbp-44h]

  v8 = a2[55];
  v29 = a4;
  v9 = v30;
  v30[1] = v8;
  v30[3] = a2[56];
  v10 = a2[57];
  v30[0] = 1;
  v30[5] = v10;
  v11 = a2[58];
  v30[2] = 2;
  v30[7] = v11;
  result = &v31;
  v30[4] = 4;
  v30[6] = 16;
  do
  {
    v13 = *v9;
    if ( (a5 & *v9) != 0 )
    {
      result = (__int64 *)*a3;
      if ( *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596) && ((unsigned int)result & v13) != 0 )
      {
        v24 = v9[1];
        v25 = ((unsigned __int64)v24 << 32) | (unsigned int)v25;
        sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), HIDWORD(v25), a6, 0);
        v14 = sub_15ACE60(v13);
        if ( v41 )
        {
          sub_AE9DF0(&v40, (__int64)v14, 1u);
        }
        else if ( v43 )
        {
          v26 = v14;
          v16 = sub_168B9E0(v38);
          v19 = (__int64)v26;
          v20 = v16;
          v21 = (__int64)v39;
          if ( v39 )
          {
            v28 = v20;
            v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, char *))(*v39 + 32LL))(v39, *v39, v20, v26);
            v20 = v28;
            v19 = (__int64)v26;
          }
          v27 = v19;
          v31 = v21;
          v22 = sub_1587BC0(v20, &v31, v20, v19, v17, v18);
          sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v42 + 8), v27, 1u);
        }
        v15 = sub_1605D30((__int64)v38, &v29);
        v33 = 0;
        v34 = 0;
        LODWORD(v31) = v24;
        HIDWORD(v31) = v24;
        v35 = v37;
        v36 = 0;
        v37[0] = 0;
        v37[16] = 0;
        v32 = 1;
        sub_1589170(v15, &v31);
        if ( v35 != v37 )
          operator delete(v35);
        sub_15F7200(v38);
        result = (__int64 *)*a3;
      }
      *a3 = (unsigned int)result & ~v13;
    }
    v9 += 2;
  }
  while ( v9 != (int *)&v31 );
  return result;
}
