__int64 __fastcall sub_17A68F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _BYTE *v9; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  _QWORD v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v9 = *(_BYTE **)(a2 + 232);
  if ( (v9[21] & 2) == 0 && (char)v9[22] >= 0 )
    goto LABEL_3;
  if ( (v9[1] & 8) == 0 )
    goto LABEL_3;
  v11 = sub_1A3A250(a2);
  v12 = sub_1A5B7C0(a2, a3, a4, a5, 0, v11);
  if ( !v12 || (*(_BYTE *)(v12 + 28) & 0x7F) != 0x21 )
    goto LABEL_3;
  v13 = *(_QWORD *)(v12 + 16);
  v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v13 & 4) != 0 )
    v14 = (_QWORD *)*v14;
  if ( !v14 )
    BUG();
  if ( !*(v14 - 3) && !(unsigned __int8)sub_1E61520(a2, v14 - 8, v15, 0) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_WORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = v15[0];
  }
  else
  {
LABEL_3:
    *(_WORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
  }
  return a1;
}
