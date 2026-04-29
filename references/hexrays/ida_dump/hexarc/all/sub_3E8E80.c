__int64 __fastcall sub_3E8E80(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char v8; // al
  unsigned __int16 v10; // ax
  int v11; // eax
  unsigned __int8 v12; // si
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // r12d
  char v26; // [rsp+Fh] [rbp-69h]
  __int64 v27; // [rsp+10h] [rbp-68h] BYREF
  int v28; // [rsp+18h] [rbp-60h]
  _QWORD v29[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = *(_BYTE *)(a1 + 384);
  v29[3] = __readfsqword(0x28u);
  v26 = v8;
  if ( a2 )
  {
    sub_3E8DC0((_QWORD *)(a1 + 24), (char *)(a1 + 424));
    *(_BYTE *)(a1 + 384) = netnode_charval(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 104LL), *(_QWORD *)(a1 + 40), 256);
  }
  v10 = *(_WORD *)(a1 + 48);
  if ( v10 <= 4u
    || v10 == 43
    || (v11 = *(_DWORD *)(a1 + 52),
        v12 = v11 & 0x1F,
        a3 = (v11 & 0x1Fu) - 1,
        (unsigned __int8)((*(_BYTE *)(a1 + 52) & 0x1F) - 1) > 0xEu) )
  {
    v24 = sub_3E7480(a1, 0, a7, a3, a4, a5, a6);
    if ( !a2 )
      return v24;
LABEL_11:
    sub_3E8DC0((_QWORD *)(a1 + 24), (char *)(a1 + 424));
    *(_BYTE *)(a1 + 384) = v26;
    return v24;
  }
  if ( (v11 & 0x10) != 0 )
    v12 = 16;
  v13 = sub_3E6620(a1, v12, 1);
  v14 = *(_QWORD *)(a1 + 40);
  v15 = *(_QWORD *)(a1 + 8);
  v27 = 0x100000001LL;
  v28 = v13;
  v16 = sub_61A50(v15, v14, 2);
  v17 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 440), 2);
  v18 = *(_DWORD *)(v17 + 72);
  v29[0] = 0xFFFFFFFF00000007LL;
  v29[1] = v18;
  sub_1CF350(a1, 42, (unsigned __int8 *)&v27, nullptr, (unsigned __int8 *)v29);
  *(_QWORD *)(a1 + 16) = v16;
  *(_DWORD *)(v16 + 24) |= 0x4000u;
  v23 = sub_3E7480(a1, 0, a7, v19, v20, v21, v22);
  *(_QWORD *)(a1 + 16) = v17;
  v24 = v23;
  sub_1166E0((__int64)v29);
  sub_1166E0((__int64)&v27);
  if ( a2 )
    goto LABEL_11;
  return v24;
}
