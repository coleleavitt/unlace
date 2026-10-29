__int64 __fastcall sub_D9D660(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  _WORD *v7; // rax
  __int64 v8; // rbp
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // rsi
  unsigned __int8 **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 *v21; // rdi
  unsigned int v22; // eax
  _QWORD v24[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !*(_DWORD *)(a3 + 24)
    && (v4 = *(_QWORD *)(a3 + 32), *(_BYTE *)(v4 + 20))
    && *(_BYTE *)(v4 + 24)
    && (v5 = *(__int64 **)(v4 + 32), *((_BYTE *)v5 + 58))
    && (v6 = *v5, (v6 & 2) != 0)
    && (v7 = (_WORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL), (v8 = (__int64)v7) != 0)
    && (*v7 & 0x1FF) == 0x30
    && (v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24)),
        v14 = sub_C720B0(v8, v13),
        !(_BYTE)v14)
    && **(_DWORD **)(a3 + 32) != *(_DWORD *)(*(_QWORD *)(a1 + 184) + 32LL) )
  {
    v15 = (__int64)v24;
    v24[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v16 = (unsigned __int8 **)sub_E0FE60(a1, v24, 2371, 1);
    if ( v16 )
    {
      v15 = a4;
      sub_AC60B0(v16, a4, 2u);
    }
    v20 = *(_DWORD *)(a3 + 24);
    if ( v20 == 1 )
    {
      v21 = *(__int64 **)(a3 + 32);
    }
    else if ( (unsigned int)(v20 - 2) <= 1 )
    {
      v21 = nullptr;
    }
    else
    {
      v21 = *(__int64 **)(*(_QWORD *)(a3 + 32) + 32LL);
    }
    v22 = sub_CCBBD0(v21, v15, v17, v18, v19);
    sub_E10070(a1, v22, 2487);
  }
  else
  {
    return 1;
  }
  return v14;
}

