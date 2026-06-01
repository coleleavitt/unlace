__int64 __fastcall sub_F09460(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rsi

  v8 = (char *)a2[2];
  if ( v8 )
    sub_F05430(a1, v8, a3, a4, a5, a6, a7);
  else
    sub_F049C0(a1);
  sub_995540(*a1, "[");
  v13 = (char *)a2[3];
  if ( v13 )
    sub_F05430(a1, v13, v9, v10, v11, v12, a7);
  else
    sub_F049C0(a1);
  sub_995540(*a1, "]");
  sub_995540(*a1, "[");
  v18 = (char *)a2[4];
  if ( v18 )
    sub_F05430(a1, v18, v14, v15, v16, v17, a7);
  else
    sub_F049C0(a1);
  return sub_995540(*a1, "]");
}
