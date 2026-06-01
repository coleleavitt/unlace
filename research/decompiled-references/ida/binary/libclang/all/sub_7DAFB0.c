unsigned __int64 __fastcall sub_7DAFB0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 result; // rax
  _DWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  int v10; // edx

  v3 = *a1;
  result = v3 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v3 & 1) != 0 )
  {
    if ( !result )
      return result;
  }
  else
  {
    if ( result <= 3 || (v3 & 2) == 0 )
      return result;
    v6 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v7 = v6[2275];
    if ( !v7 )
    {
      *a1 = a2 & 0xFFFFFFFFFFFFFFFALL | 1;
      return result;
    }
    v8 = v6[274];
    v6[284] += 24LL;
    v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v6[275] >= v9 + 24 && v8 )
      v6[274] = v9 + 24;
    else
      v9 = sub_7DAE50((__int64)(v6 + 274), 24, 3);
    *(_QWORD *)v9 = v7;
    *(_DWORD *)(v9 + 8) = 0;
    v3 = v9 | 5;
    *(_QWORD *)(v9 + 16) = a2;
    *a1 = v9 | 5;
    result = v9 & 0xFFFFFFFFFFFFFFFALL | 4;
  }
  if ( (result & 4) != 0 )
  {
    v5 = (_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v5 )
    {
      result = *(_QWORD *)v5;
      v10 = *(_DWORD *)(*(_QWORD *)v5 + 12LL);
      if ( v5[2] != v10 )
      {
        v5[2] = v10;
        return (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)result + 144LL))(result, a2);
      }
    }
  }
  return result;
}

