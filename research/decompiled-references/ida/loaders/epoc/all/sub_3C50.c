__int64 __fastcall sub_3C50(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // r13
  _DWORD *v5; // rsi
  int v6; // r12d
  int v7; // eax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = a3 + 1;
  v5 = (_DWORD *)*a3;
  if ( (unsigned __int64)a2 < *a3 )
  {
    v9 = sub_3C50(a1, a2, a3 + 1);
    v10 = sub_3C50(v9, &a2[~(((int)a1 - (int)v9) >> 2)], v3);
    *(_DWORD *)(v10 - 4) = (v9 - v10 + 4) | 0x40000;
    return v10 - 4;
  }
  else
  {
    v6 = HIWORD(*a2);
    if ( v5 == a2 )
    {
      v11 = sub_3C50(a1, v5 - 1, a3 + 1);
      *(_DWORD *)(v11 - 4) = v6 | 0x40000;
      return v11 - 4;
    }
    else
    {
      v7 = *(a2 - 1);
      LOWORD(v7) = 0;
      *(_DWORD *)(a1 - 4) = v6 | v7;
      return a1 - 4;
    }
  }
}

