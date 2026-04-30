void __fastcall dbgreg_place_t__::vfunc_6(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rbp
  _DWORD *v4; // r12
  __int64 v5; // r13
  _DWORD *v6; // rcx
  __int64 v7; // r11
  int v8; // eax
  int v9; // edi
  int v10; // esi
  unsigned __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // rax
  __int64 v16; // rax

  v2 = (_DWORD *)a2[1];
  v4 = (_DWORD *)*a2;
  if ( (_DWORD *)*a2 == v2 )
  {
    *(_QWORD *)(a1 + 12) = -1;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 12);
    v6 = sub_1E0240((__int64)a2, v5);
    if ( v2 == v6 )
    {
      v15 = sub_1E04A0(v7, v5);
      if ( v2 == v15 )
        v15 = v4;
      v16 = *(_QWORD *)v15;
      *(_DWORD *)(a1 + 20) = 0;
      *(_QWORD *)(a1 + 12) = v16;
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 20);
      v9 = v6[2];
      if ( v8 >= 0 )
        v8 /= (int)v6[11];
      v10 = v8 + v9;
      if ( v8 + v9 < 0 )
      {
        if ( v9 <= 0 )
          *(_DWORD *)(a1 + 20) = -(v6[11] * v9);
        else
          *(_DWORD *)(a1 + 20) = -v9;
      }
      else
      {
        v11 = (int)v6[11];
        v12 = v9 + (v11 + *((_QWORD *)v6 + 3) - 1) / v11;
        if ( v10 >= v12 )
        {
          v13 = v12 - 1;
          v14 = v13 - v9;
          if ( v13 >= v9 )
            v14 *= (_DWORD)v11;
          *(_DWORD *)(a1 + 20) = v14;
        }
      }
    }
  }
}
