__int64 __fastcall sub_E64090(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  __int64 v8; // [rsp+0h] [rbp-78h] BYREF
  __int64 v9; // [rsp+8h] [rbp-70h]
  int v10; // [rsp+10h] [rbp-68h]
  __int16 v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]
  int v14; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL) != *(_QWORD *)(a2 + 8) )
  {
    sub_E63A60((__int64)&v8, a1, *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL), 1);
    v11 = 7;
    v3 = v8;
    v8 = 0;
    v12 = v3;
    v4 = v9;
    v9 = 0;
    v13 = v4;
    LODWORD(v4) = v10;
    v10 = 0;
    v14 = v4;
    v5 = j__strlen("typeAsWritten");
    sub_222AB70(a1 + 1048, "typeAsWritten", v5);
    sub_222CAC0(a1 + 1048, &v11);
    sub_2229BF0(a1 + 1048);
    sub_222B2A0(&v11);
    sub_E5D2E0(&v8);
    v2 = *(_QWORD *)(a2 + 16);
  }
  v6 = j__strlen("list");
  return sub_E59B90(a1, (__int64)"list", v6, (v2 >> 2) & 1);
}
