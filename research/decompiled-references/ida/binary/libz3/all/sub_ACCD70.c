__int64 __fastcall sub_ACCD70(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5, _BYTE *a6)
{
  __int16 v9; // ax
  __int16 v10; // dx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  __int64 v18; // [rsp+18h] [rbp-40h]

  v9 = *(_WORD *)(a2 + 4);
  v10 = *(_WORD *)(a3 + 4);
  *a6 = 0;
  if ( v9 == 1 )
  {
    if ( !v10 && (*(_BYTE *)(a3 + 30) & 1) != 0 )
    {
      *a4 = a2;
      v14 = *a5;
      ++*(_DWORD *)(a3 + 8);
      sub_AC6F60(v14, a5[1]);
      *a5 = a3;
      return 1;
    }
  }
  else if ( !v9 && v10 == 1 && (*(_BYTE *)(a2 + 30) & 1) != 0 )
  {
    *a4 = a3;
    v15 = *a5;
    ++*(_DWORD *)(a2 + 8);
    sub_AC6F60(v15, a5[1]);
    *a5 = a2;
    return 1;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = a1 + 16;
  v17 = 0;
  v18 = v11;
  if ( (unsigned __int8)sub_13926A0(a1 + 16, a2, a6, a4, &v17) && !*(_WORD *)(a3 + 4) && (*(_BYTE *)(a3 + 30) & 1) != 0 )
  {
    if ( *a6 )
      sub_13928E0(v12, v17, a3, a5);
    else
      sub_13928E0(v12, a3, v17, a5);
  }
  else
  {
    if ( !(unsigned __int8)sub_13926A0(v12, a3, a6, a4, &v17) || *(_WORD *)(a2 + 4) || (*(_BYTE *)(a2 + 30) & 1) == 0 )
    {
      sub_AC6F60(v17, v18);
      return 0;
    }
    if ( *a6 )
      sub_13928E0(v12, v17, a2, a5);
    else
      sub_13928E0(v12, a2, v17, a5);
  }
  sub_AC6F60(v17, v18);
  return 1;
}

