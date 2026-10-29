__int64 __fastcall sub_4058E0(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v6; // rsi
  _DWORD *v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // [rsp+Ch] [rbp-13Ch] BYREF
  _BYTE v18[264]; // [rsp+10h] [rbp-138h] BYREF

  v6 = *(_QWORD *)(a1 + 32);
  v17 = -1;
  v8 = sub_4053F0((_QWORD *)a1, v6);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = sub_47BE30(a2);
  sub_46FBF0(0, v8, v10);
  v11 = sub_47BD00(a3);
  sub_46FBF0(0, v8, v11);
  sub_48AF00(v9, v18);
  if ( (unsigned int)sub_40BBC0(v9, v8, 393216) || (v15 = sub_48B5D0(v9), (unsigned int)sub_47C180(0, v15, &v17)) )
  {
    sub_48B4B0(v9, v18);
    v12 = *v8 - 1;
    v13 = *v8 == 1;
    *v8 = v12;
    if ( v12 < 0 || v13 )
      goto LABEL_7;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 8);
    sub_48B4B0(v9, v18);
    v16 = *v8 - 1;
    v13 = *v8 == 1;
    *v8 = v16;
    if ( v16 < 0 || v13 )
    {
LABEL_7:
      sub_47B120(v8);
      result = (unsigned int)v17;
      if ( v17 < 0 )
        goto LABEL_8;
      return result;
    }
  }
  result = (unsigned int)v17;
  if ( v17 < 0 )
LABEL_8:
    *a4 = 9;
  return result;
}

