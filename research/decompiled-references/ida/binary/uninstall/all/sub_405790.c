__int64 __fastcall sub_405790(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  int *v7; // rax
  __int64 v8; // r13
  int *v9; // r12
  __int64 v10; // rax
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  int v14; // [rsp+Ch] [rbp-13Ch] BYREF
  _BYTE v15[264]; // [rsp+10h] [rbp-138h] BYREF

  v14 = -1;
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
  {
    v7 = sub_4053F0((_QWORD *)a1, *(_QWORD *)(a1 + 48));
    v8 = *(_QWORD *)(a1 + 16);
    v9 = v7;
    v10 = sub_40D3B0(a2, (unsigned int)a3);
    sub_46FBF0(0, v9, v10);
    sub_48AF00(v8, v15);
    if ( !(unsigned int)sub_40BBC0(v8, v9, 393216) )
    {
      v13 = sub_48B5D0(v8);
      if ( !(unsigned int)sub_47C180(0, v13, &v14) )
      {
        if ( v14 < 0 || v14 > a3 )
          v14 = -1;
        else
          *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
      }
    }
    sub_48B4B0(v8, v15);
    v11 = *v9 - 1;
    v12 = *v9 == 1;
    *v9 = v11;
    if ( v11 < 0 || v12 )
      sub_47B120(v9);
  }
  result = (unsigned int)v14;
  if ( v14 < 0 )
    *a4 = 9;
  return result;
}

