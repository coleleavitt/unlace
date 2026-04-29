unsigned __int64 __fastcall sub_3ECE80(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  int v5; // r12d
  unsigned __int16 v6; // ax
  int v7; // ebp
  char v10; // r10
  __int64 v11; // rax
  int v12; // r12d
  int v13; // r15d
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  char v20; // [rsp+Fh] [rbp-79h]
  _DWORD v21[4]; // [rsp+10h] [rbp-78h] BYREF
  _DWORD v22[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+38h] [rbp-50h]
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]

  v5 = *(unsigned __int16 *)(a1 + 842);
  v25 = __readfsqword(0x28u);
  if ( (((_WORD)v5 - 2) & 0xFFFD) != 0 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEF3u, a2, a5);
    goto LABEL_25;
  }
  v6 = *(_WORD *)(a1 + 48);
  v7 = a2;
  if ( v6 != 86 )
  {
    if ( v6 <= 0x56u )
    {
      if ( (unsigned __int16)(v6 - 34) <= 1u )
        goto LABEL_5;
    }
    else if ( v6 == 87 )
    {
LABEL_5:
      v10 = 0;
      goto LABEL_6;
    }
    if ( !under_debugger )
      sub_37CFE0(0xCEF4u, a2, a5);
LABEL_25:
    BUG();
  }
  v10 = 1;
LABEL_6:
  v11 = *(_QWORD *)(a1 + 832);
  v12 = 2 * v5;
  v13 = a2;
  if ( **(_DWORD **)(v11 + 528) != (_DWORD)a2 )
  {
    v14 = *(_QWORD *)(v11 + 584);
    if ( !v14 )
      goto LABEL_22;
    v20 = v10;
    v13 = *(_DWORD *)(*(_QWORD *)(v11 + 576) + 4 * v14 - 4);
    v15 = a2;
    *(_QWORD *)(v11 + 584) = v14 - 1;
    a2 = *(unsigned __int16 *)(a1 + 842);
    sub_3EC660(a1, a2, v12, v15, v13, v10 & 1, a5);
    v11 = *(_QWORD *)(a1 + 832);
    v10 = v20;
    v7 = **(_DWORD **)(v11 + 528);
  }
  if ( a3 == v7 )
    goto LABEL_12;
  v16 = *(_QWORD *)(v11 + 584);
  if ( !v16 )
LABEL_22:
    sub_3E4140(a5, a1, a2);
  v7 = *(_DWORD *)(*(_QWORD *)(v11 + 576) + 4 * v16 - 4);
  *(_QWORD *)(v11 + 584) = v16 - 1;
  sub_3EC660(a1, *(unsigned __int16 *)(a1 + 842), v12, a3, v7, v10 & 1, a5);
LABEL_12:
  sub_3E8420(a1, 0xEu, v12, v13, v7, v7, 0);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v13);
  v17 = *(unsigned __int16 *)(a1 + 842);
  v21[2] = v7;
  v21[0] = 1;
  v21[1] = v12;
  if ( (_WORD)v17 == 2 )
  {
    v24 = a4;
    v23 = 0x400000001LL;
    sub_3EBC10(a1, 4, (unsigned __int8 *)v21, nullptr, (unsigned __int8 *)&v23);
    sub_1181E0((__int64)&v23);
  }
  else if ( a3 == a4 )
  {
    v24 = a3;
    LODWORD(v23) = 1;
    HIDWORD(v23) = v17;
    sub_3EBC10(a1, 11, (unsigned __int8 *)v21, nullptr, (unsigned __int8 *)&v23);
    sub_1181E0((__int64)&v23);
  }
  else
  {
    v22[2] = a3;
    v22[0] = 1;
    v22[1] = v17;
    sub_3EBC10(a1, 10, (unsigned __int8 *)v21, nullptr, (unsigned __int8 *)v22);
    v18 = *(unsigned __int16 *)(a1 + 842);
    v24 = a4;
    LODWORD(v23) = 1;
    HIDWORD(v23) = v18;
    sub_3EBC10(a1, 11, (unsigned __int8 *)v21, nullptr, (unsigned __int8 *)&v23);
    sub_1181E0((__int64)&v23);
    sub_1181E0((__int64)v22);
  }
  sub_3E62F0(*(_QWORD *)(a1 + 832), v7);
  sub_1181E0((__int64)v21);
  return v25 - __readfsqword(0x28u);
}
