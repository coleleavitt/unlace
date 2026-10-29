void __fastcall sub_F09BD0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v5; // rdi
  _BYTE *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  _BYTE *v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rdi
  char *v15; // rsi
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  char v17[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v18; // [rsp+30h] [rbp-28h]

  v5 = *a1;
  v6 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(v5 + 24) )
  {
    sub_227BA10(v5, 40);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v6 + 1;
    *v6 = 40;
  }
  v7 = *a1;
  v16 = *(_QWORD *)(a2 + 8);
  v18 = 257;
  sub_F74830(&v16, v7, a1 + 3, v17, 0);
  v11 = *a1;
  v12 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(*a1 + 24) )
  {
    sub_227BA10(v11, 41);
    v15 = *(char **)(a2 + 32);
    v14 = a1;
    if ( v15 )
      goto LABEL_5;
  }
  else
  {
    v13 = (__int64)(v12 + 1);
    *(_QWORD *)(v11 + 32) = v12 + 1;
    v14 = a1;
    *v12 = 41;
    v15 = *(char **)(a2 + 32);
    if ( v15 )
    {
LABEL_5:
      sub_F05430(v14, v15, v13, v8, v9, v10, a3);
      return;
    }
  }
  sub_F049C0(v14);
}
