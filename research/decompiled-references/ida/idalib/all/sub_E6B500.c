__int64 __fastcall sub_E6B500(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  size_t v3; // rax
  __int64 v4; // rbx
  size_t v5; // rax
  size_t v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  size_t v11; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v13; // [rsp+10h] [rbp-78h] BYREF
  __int64 v14; // [rsp+18h] [rbp-70h]
  int v15; // [rsp+20h] [rbp-68h]
  __int16 v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+40h] [rbp-48h]
  int v19; // [rsp+48h] [rbp-40h]

  v2 = j__strlen("Capture");
  sub_E59830((__int64)&v16, (__int64)"Capture", v2);
  v3 = j__strlen("kind");
  sub_222AB70(a1 + 1048, "kind", v3);
  sub_222CAC0(a1 + 1048, &v16);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v16);
  v4 = *a2;
  v5 = j__strlen("byref");
  sub_E59B90(a1, (__int64)"byref", v5, (v4 >> 1) & 1);
  LODWORD(v4) = *(_DWORD *)a2;
  v6 = j__strlen("nested");
  result = sub_E59B90(a1, (__int64)"nested", v6, (v4 & 4) != 0);
  v8 = *a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v8 )
  {
    sub_E673B0((__int64)&v13, a1, v8);
    v16 = 7;
    v9 = v13;
    v13 = 0;
    v17 = v9;
    v10 = v14;
    v14 = 0;
    v18 = v10;
    LODWORD(v10) = v15;
    v15 = 0;
    v19 = v10;
    v11 = j__strlen("var");
    v12[0] = &v16;
    v12[1] = a1 + 1048;
    sub_E585D0(a1 + 1048, (__int64)"var", v11, (__int64)sub_E58580, v12);
    sub_222B2A0(&v16);
    return sub_E5D2E0(&v13);
  }
  return result;
}
