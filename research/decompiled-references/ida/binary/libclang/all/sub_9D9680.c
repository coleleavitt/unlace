__int64 __fastcall sub_9D9680(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  unsigned int v6; // ebp
  __int64 *v8; // rax
  __int64 v9; // rax
  _WORD *v10; // rax
  __int64 v11; // rbp
  unsigned __int64 v14; // rax
  unsigned __int8 **v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !*(_DWORD *)(a3 + 48)
    && (v4 = *(_QWORD *)(a3 + 24), *(_BYTE *)(v4 + 20))
    && *(_BYTE *)(v4 + 24)
    && (v8 = *(__int64 **)(v4 + 32), *((_BYTE *)v8 + 50))
    && (v9 = *v8, (v9 & 2) != 0)
    && (v10 = (_WORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL), (v11 = (__int64)v10) != 0)
    && (*v10 & 0x1FF) == 0x31
    && (v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24)),
        v6 = sub_8C7570(v11, v14),
        !(_BYTE)v6)
    && *(_DWORD *)(*(_QWORD *)(a1 + 192) + 32LL) != **(_DWORD **)(a3 + 24) )
  {
    v19[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v15 = (unsigned __int8 **)sub_A2E0C0(a1, v19, 2170, 1);
    if ( v15 )
      sub_9B5410(v15, a4);
    v16 = *(_DWORD *)(a3 + 48);
    if ( v16 == 1 )
    {
      v17 = *(_QWORD *)(a3 + 24);
    }
    else if ( (unsigned int)(v16 - 2) <= 1 )
    {
      v17 = 0;
    }
    else
    {
      v17 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL);
    }
    v18 = sub_BEE210(v17);
    sub_A2DD70(a1, v18, 2285);
  }
  else
  {
    return 1;
  }
  return v6;
}

