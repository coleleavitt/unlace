void __fastcall sub_565AB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax

  v6 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 68) = v6;
  LODWORD(v6) = *(_DWORD *)(a1 + 64);
  *(_WORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 76) = v6;
  LODWORD(v6) = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 180) = 0;
  if ( *(_DWORD *)(a1 + 164) == (_DWORD)v6 )
    return;
  if ( *(_DWORD *)(a1 + 172)
    || (v9 = *(unsigned int *)(a1 + 56),
        v10 = *(_QWORD *)(a1 + 60),
        *(_DWORD *)(a1 + 168) = v9,
        v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(a1 + 120))(
                *(_QWORD *)(a1 + 112),
                v9,
                v10,
                a1 + 172),
        a4 = *(unsigned int *)(a1 + 172),
        *(_QWORD *)(a1 + 104) = v11,
        (_DWORD)a4) )
  {
    v8 = *(unsigned int *)(a1 + 176);
    if ( !(_DWORD)v8 )
      goto LABEL_9;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 160);
    v8 = *(unsigned int *)(a1 + 176);
    *(_QWORD *)(a1 + 104) = 0;
    *(_DWORD *)(a1 + 164) = v12;
    if ( !(_DWORD)v8 )
    {
LABEL_9:
      sub_55D080((unsigned int *)a1);
      if ( *(_DWORD *)(a1 + 56) )
        return;
      goto LABEL_5;
    }
  }
  if ( *(_DWORD *)(a1 + 56) )
    return;
LABEL_5:
  if ( *(_DWORD *)a1 == 65279 )
    sub_55DFE0((unsigned int *)a1, 1, v8, a4, v7, a6);
  *(_BYTE *)(a1 + 188) = 1;
  *(_DWORD *)(a1 + 184) = 0;
}
