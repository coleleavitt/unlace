__int64 __fastcall sub_3EA850(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rbx

  v2 = *(_QWORD *)(a2 + 920);
  v3 = operator new(0x198u);
  v4 = *(_QWORD *)(v2 + 176);
  v5 = v3;
  sub_198EB0(v3, a2);
  *(_QWORD *)(v5 + 376) = -1;
  *(_QWORD *)v5 = &off_4E8A78;
  *(_QWORD *)(v5 + 384) = -1;
  *(_QWORD *)(v5 + 392) = v4;
  *(_BYTE *)(v5 + 400) = 0;
  *(_OWORD *)(v5 + 360) = -1;
  return v5;
}
