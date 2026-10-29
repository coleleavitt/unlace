__int64 __fastcall sub_7AA190(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // r13
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _DWORD *v8; // rdi
  _QWORD *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // edx

  v4 = *(_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(v4 + 96);
  v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v6 & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_5;
  }
  else
  {
    if ( v7 <= 3 || (v6 & 2) == 0 )
      goto LABEL_5;
    v10 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    v11 = v10[2275];
    if ( !v11 )
    {
      *(_QWORD *)(v4 + 96) = v4 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_5;
    }
    v12 = v10[274];
    v10[284] += 24LL;
    v7 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10[275] >= v7 + 24 && v12 )
      v10[274] = v7 + 24;
    else
      v7 = sub_7A1DE0((__int64)(v10 + 274), 24, 3);
    *(_QWORD *)v7 = v11;
    *(_DWORD *)(v7 + 8) = 0;
    v6 = v7 | 5;
    *(_QWORD *)(v7 + 16) = v4;
    *(_QWORD *)(v4 + 96) = v7 | 5;
    LOBYTE(v7) = v7 & 0xFA | 4;
  }
  if ( (v7 & 4) != 0 )
  {
    v8 = (_DWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 )
    {
      v13 = *(_QWORD *)v8;
      v14 = *(_DWORD *)(*(_QWORD *)v8 + 12LL);
      if ( v8[2] != v14 )
      {
        v8[2] = v14;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 144LL))(v13, v4);
      }
    }
  }
LABEL_5:
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 128) + 16LL) )
    return sub_7A9A40(a1, a2, a3);
  else
    return 0;
}

