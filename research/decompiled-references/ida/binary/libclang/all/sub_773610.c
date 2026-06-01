__int64 __fastcall sub_773610(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  _DWORD *v6; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // edx

  v3 = a1[13];
  v4 = *(_QWORD *)(v3 + 96);
  v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v4 & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_5;
  }
  else
  {
    if ( v5 <= 3 || (v4 & 2) == 0 )
      goto LABEL_5;
    v8 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    v9 = v8[2275];
    if ( !v9 )
    {
      *(_QWORD *)(v3 + 96) = v3 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_5;
    }
    v10 = v8[274];
    v8[284] += 24LL;
    v5 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8[275] >= v5 + 24 && v10 )
      v8[274] = v5 + 24;
    else
      v5 = sub_76D810((__int64)(v8 + 274), 24, 3);
    *(_QWORD *)v5 = v9;
    *(_DWORD *)(v5 + 8) = 0;
    v4 = v5 | 5;
    *(_QWORD *)(v5 + 16) = v3;
    *(_QWORD *)(v3 + 96) = v5 | 5;
    LOBYTE(v5) = v5 & 0xFA | 4;
  }
  if ( (v5 & 4) != 0 )
  {
    v6 = (_DWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v6 )
    {
      v11 = *(_QWORD *)v6;
      v12 = *(_DWORD *)(*(_QWORD *)v6 + 12LL);
      if ( v6[2] != v12 )
      {
        v6[2] = v12;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 144LL))(v11, v3);
      }
    }
  }
LABEL_5:
  if ( *(_DWORD *)(a1[16] + 20LL) )
    return sub_773360(a1, a2);
  else
    return 0;
}

