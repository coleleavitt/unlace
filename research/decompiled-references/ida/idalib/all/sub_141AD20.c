__int64 __fastcall sub_141AD20(__int64 a1, int a2, char **a3)
{
  char *v4; // rcx
  char v5; // al
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ecx
  _BYTE v12[104]; // [rsp+10h] [rbp-68h] BYREF

  v4 = *a3;
  v5 = **a3;
  if ( v5 == 60 )
  {
    v6 = (unsigned __int64)a3[1];
    result = 1;
    v8 = v6 - 1;
    if ( v4[v6 - 1] != 62 )
    {
      sub_FC70B0((__int64)v12, *(_QWORD *)(a1 + 48), a2, 1127);
      sub_AEA040((__int64)v12);
      *a3 = nullptr;
      a3[1] = nullptr;
      return 1;
    }
  }
  else if ( v5 != 34 || (v6 = (unsigned __int64)a3[1], result = 0, v8 = v6 - 1, v4[v6 - 1] != 34) )
  {
    v10 = *(_QWORD *)(a1 + 48);
    v11 = 1127;
LABEL_9:
    sub_FC70B0((__int64)v12, v10, a2, v11);
    sub_AEA040((__int64)v12);
    *a3 = nullptr;
    a3[1] = nullptr;
    return 1;
  }
  if ( v6 <= 2 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    v11 = 1115;
    goto LABEL_9;
  }
  v9 = v6 - 2;
  *a3 = v4 + 1;
  if ( v9 > v8 )
    v9 = v8;
  a3[1] = (char *)v9;
  return result;
}
