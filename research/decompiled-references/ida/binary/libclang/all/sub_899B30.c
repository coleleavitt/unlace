__int64 __fastcall sub_899B30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v6; // rdx
  char *v7; // rax
  char v8; // r14
  unsigned int v9; // eax
  __int64 result; // rax
  _DWORD *v11; // rsi
  __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned __int16 *v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  if ( *(char *)(v3 + 28) < 0 )
    return 0;
  v6 = *(_QWORD *)(sub_79A2E0(v3 + 72) + 16);
  v7 = (char *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v6 & 4) != 0 )
    v7 = *(char **)v7;
  if ( !v7 )
    BUG();
  if ( *(v7 - 36) < 0 )
    return 0;
  v8 = *(_BYTE *)(a2 + 2);
  v9 = sub_8124E0(a2);
  result = sub_8359E0(*(_QWORD *)a1, v9, v3, v8 < 0);
  if ( (_BYTE)result )
  {
    v11 = *(_DWORD **)(a1 + 16);
    if ( *v11 <= 1u )
    {
      if ( v8 < 0 )
        return sub_88DE20((__int64 *)a1, a2, a3);
      else
        return sub_8312C0(a3, (__int64)v11);
    }
    return result;
  }
  v21[0] = 0;
  v12 = sub_78BC30((_QWORD *)v3, v21);
  v13 = sub_8124E0(a2);
  if ( !(unsigned __int8)sub_837DA0(*(_QWORD *)a1, v13, (char *)v3, v21[0], v12) )
    return 0;
  if ( (*(_BYTE *)(a2 + 2) & 8) == 0 )
  {
    if ( v8 >= 0 )
      goto LABEL_23;
    goto LABEL_10;
  }
  if ( v8 < 0 )
  {
LABEL_10:
    if ( !(unsigned __int8)sub_88DE20((__int64 *)a1, a2, a3) )
      return 0;
LABEL_23:
    v19 = *(unsigned int *)(a2 + 32);
    if ( (*(_WORD *)a2 & 0x1FF) == 0x73 )
    {
LABEL_24:
      v20 = a2 + 48;
      return sub_8999A0(
               (_DWORD *)a2,
               *(const __m128i **)(a1 + 8),
               v20,
               v19,
               v21[0],
               *(_QWORD *)a1,
               *(_QWORD *)(a1 + 16));
    }
LABEL_28:
    v20 = a2 + 40;
    return sub_8999A0((_DWORD *)a2, *(const __m128i **)(a1 + 8), v20, v19, v21[0], *(_QWORD *)a1, *(_QWORD *)(a1 + 16));
  }
  if ( (*(_WORD *)a2 & 0x1FF) != 0x73 )
  {
    v15 = *(unsigned __int16 **)(a2 + 40);
    v16 = (__int64 *)*v15;
    LOWORD(v16) = (unsigned __int16)v16 & 0x1FF;
    if ( (_WORD)v16 == 49 )
      goto LABEL_18;
    v19 = *(unsigned int *)(a2 + 32);
    goto LABEL_28;
  }
  v15 = *(unsigned __int16 **)(a2 + 48);
  v16 = (__int64 *)*v15;
  LOWORD(v16) = (unsigned __int16)v16 & 0x1FF;
  if ( (_WORD)v16 != 49 )
  {
    v19 = *(unsigned int *)(a2 + 32);
    goto LABEL_24;
  }
LABEL_18:
  v17 = *((_QWORD *)v15 + 2);
  v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v17 & 4) != 0 )
    v18 = *(_QWORD *)(v18 + 40);
  return sub_887F40((__int64 *)a1, v18, v16, v14);
}

