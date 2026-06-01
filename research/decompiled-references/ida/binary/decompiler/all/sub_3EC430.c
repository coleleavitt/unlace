__int64 __fastcall sub_3EC430(__int64 a1)
{
  int v1; // eax
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdx

  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL) + 176LL) |= 0x40u;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 604LL) & 8) == 0 )
    return 0;
  v1 = *(_DWORD *)(a1 + 888);
  if ( (v1 & 4) != 0 )
    return 1;
  if ( (v1 & 8) != 0 )
    return 0;
  if ( sub_D3E80() <= 0 )
  {
    *(_DWORD *)(a1 + 888) |= 8u;
    return 0;
  }
  v4 = sub_3268E0(*(_QWORD *)(a1 + 800), 0, 0);
  v7 = *(_DWORD *)(a1 + 888);
  if ( !v4 )
  {
    *(_DWORD *)(a1 + 888) = v7 | 4;
    if ( (v7 & 1) == 0 )
    {
      v8 = *(_QWORD *)(a1 + 832);
      v9 = *(_QWORD *)(v8 + 3792);
      if ( !v9 )
      {
        v12 = (_QWORD *)operator new(0x18u);
        v13 = *(_QWORD *)(a1 + 800);
        *v12 = off_4E8A48;
        v12[1] = v13;
        v12[2] = *(_QWORD *)(v13 + 112);
        *(_QWORD *)(*(_QWORD *)(a1 + 832) + 3792LL) = v12;
        v8 = *(_QWORD *)(a1 + 832);
        v9 = *(_QWORD *)(v8 + 3792);
      }
      sub_14F350(v8, v9);
      *(_DWORD *)(a1 + 888) |= 1u;
    }
    return 1;
  }
  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 888) = v7 | 8;
  sub_32DD50(v11, v10, 37, v4, v5, v6);
  return 0;
}
