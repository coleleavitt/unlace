__int64 __fastcall sub_F09D40(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // r12
  const char *v5; // rax
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rsi
  __int64 v15; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v16[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v17; // [rsp+30h] [rbp-28h]

  v4 = *a1;
  v5 = sub_C947B0((_WORD *)a2);
  v6 = sub_995540(v4, v5);
  v7 = *(_BYTE **)(v6 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v6 + 24) )
  {
    sub_227BA10(v6, 60);
  }
  else
  {
    *(_QWORD *)(v6 + 32) = v7 + 1;
    *v7 = 60;
  }
  v8 = *a1;
  v15 = **(_QWORD **)(a2 + 24);
  v17 = 257;
  sub_F74830(&v15, v8, a1 + 3, v16, 0);
  sub_995540(*a1, ">(");
  v13 = *(char **)(a2 + 16);
  if ( v13 )
    sub_F05430(a1, v13, v9, v10, v11, v12, a3);
  else
    sub_F049C0(a1);
  return sub_995540(*a1, ")");
}
