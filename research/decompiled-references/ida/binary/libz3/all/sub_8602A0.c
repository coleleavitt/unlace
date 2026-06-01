__int64 __fastcall sub_8602A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // r9d
  __int64 result; // rax
  unsigned __int8 v12; // [rsp+Fh] [rbp-49h]
  unsigned int *v13; // [rsp+10h] [rbp-48h] BYREF
  int v14[2]; // [rsp+18h] [rbp-40h] BYREF

  ++*(_DWORD *)(a1 + 172);
  v13 = nullptr;
  if ( !(unsigned __int8)sub_16842C0(a1 + 112, a2, &v13) )
  {
    sub_1872CE0("");
    sub_1873130(114, 386);
  }
  *(_QWORD *)v14 = a2;
  v2 = *(_QWORD *)(a1 + 72);
  v3 = (unsigned int *)sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)v14, 0);
  if ( v3 )
    ++v3[2];
  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 464);
  v6 = sub_7E5940(a1, v3);
  v7 = sub_7E4F00(a1, v13);
  result = sub_7CA650(v4, v7, v6, v5, v8, v9);
  if ( v3 )
  {
    if ( v3[2]-- == 1 )
    {
      v12 = result;
      sub_15D7BC0(v2, v3);
      return v12;
    }
  }
  return result;
}

