__int64 __fastcall sub_2194680(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r15
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // r12
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned __int64 v26; // [rsp+8h] [rbp-B0h]
  __int64 v27; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+20h] [rbp-98h] BYREF
  char v29; // [rsp+28h] [rbp-90h]
  _BYTE v30[32]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v31[4]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v32; // [rsp+70h] [rbp-48h]

  v6 = (__int64 *)(a2 + 56);
  v26 = HIDWORD(a3);
  sub_216F6A0((__int64)&v28, (__int64 *)(a2 + 56), a3, a4, a5, a6);
  if ( (v29 & 1) != 0 )
    goto LABEL_9;
  v9 = v28;
  sub_216F7A0(&v28);
  if ( *(_DWORD *)(v9 + 4) == 0x4000000 )
  {
    v22 = *(_DWORD *)(sub_2194250(a2, a3, v10, v11, v12, v13) + 8);
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = (int)_byteswap_ulong(v22);
    return a1;
  }
  v14 = a2 + 56;
  sub_216F6A0((__int64)&v28, v6, (unsigned int)a3, v11, v12, v13);
  if ( (v29 & 1) != 0 )
  {
LABEL_9:
    v23 = v28;
    v28 = 0;
    v27 = v23;
    v24 = sub_2220DB0(&v27);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v25 + 32LL))(v30, v25, v24);
    v32 = 260;
    v31[0] = v30;
    sub_2221AD0(v31, 1);
  }
  v15 = v28;
  sub_216F7A0(&v28);
  if ( *(_DWORD *)(v15 + 4) == 335544384 )
  {
    v18 = *(int *)(*(_QWORD *)(*(_QWORD *)(a2 + 144) + 16LL * (unsigned int)a3) + 16 * v26 + 12);
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v18;
  }
  else
  {
    v31[0] = "Relocation section does not have addends";
    v32 = 259;
    v20 = sub_2195B10(&v28, v14, v16, v17);
    v21 = operator new(0x40u);
    sub_2220590(v21, v31, 3, v20);
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v21;
  }
  return a1;
}
