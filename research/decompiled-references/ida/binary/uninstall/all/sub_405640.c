__int64 __fastcall sub_405640(__int64 a1, void *a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  int *v7; // rax
  __int64 v8; // r12
  int *v9; // rbp
  __int64 v10; // rax
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  const void *v14; // rax
  int v15; // [rsp+Ch] [rbp-13Ch] BYREF
  _BYTE v16[264]; // [rsp+10h] [rbp-138h] BYREF

  v15 = -1;
  if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
  {
    v7 = sub_4053F0((_QWORD *)a1, *(_QWORD *)(a1 + 40));
    v8 = *(_QWORD *)(a1 + 16);
    v9 = v7;
    v10 = sub_47BD00((unsigned int)a3);
    sub_46FBF0(0, v9, v10);
    sub_48AF00(v8, v16);
    if ( !(unsigned int)sub_40BBC0(v8, v9, 393216) )
    {
      v13 = sub_48B5D0(v8);
      v14 = (const void *)sub_40D5E0(v13, &v15);
      if ( v15 < 0 || v15 > a3 )
      {
        v15 = -1;
      }
      else if ( v15 <= 0 )
      {
        *(_DWORD *)(a1 + 12) &= ~2u;
      }
      else
      {
        memcpy(a2, v14, v15);
      }
    }
    sub_48B4B0(v8, v16);
    v11 = *v9 - 1;
    v12 = *v9 == 1;
    *v9 = v11;
    if ( v11 < 0 || v12 )
      sub_47B120(v9);
  }
  result = (unsigned int)v15;
  if ( v15 < 0 )
    *a4 = 9;
  return result;
}

