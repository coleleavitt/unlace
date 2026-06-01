__int64 __fastcall sub_3FEFF0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned int v12; // [rsp+0h] [rbp-58h]
  unsigned __int8 v13; // [rsp+7h] [rbp-51h]
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  __int64 v15; // [rsp+18h] [rbp-40h]

  v4 = a1[1];
  v14 = 0;
  v15 = v4;
  v13 = sub_13608A0(a2 + 128);
  sub_1360B80(a2 + 128, 0);
  v5 = (__int64 *)a1[27];
  if ( !v5 || (v6 = &v5[*((unsigned int *)v5 - 1)], v6 == v5) )
  {
LABEL_10:
    sub_1872CE0("");
    sub_1873130(114, 851);
  }
  v12 = a3 + 1;
  while ( 1 )
  {
    v7 = *v5;
    sub_43D1D0(*a1 + 8LL, *(_QWORD *)(*v5 + 48), 0, v12, &v14, 1);
    if ( (unsigned __int8)sub_13742D0(a2, v14) )
      break;
    if ( v6 == ++v5 )
      goto LABEL_10;
  }
  sub_1360B80(a2 + 128, v13);
  v8 = v14;
  if ( v14 )
  {
    v9 = v15;
    if ( (*(_DWORD *)(v14 + 8))-- == 1 )
      sub_15D7BC0(v9, v8);
  }
  return v7;
}

