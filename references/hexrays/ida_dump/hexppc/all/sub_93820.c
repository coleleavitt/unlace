__int64 __fastcall sub_93820(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r12
  unsigned int v3; // r15d
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // [rsp+0h] [rbp-A8h]
  _DWORD *v8; // [rsp+18h] [rbp-90h]
  _DWORD *v9; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v12; // [rsp+50h] [rbp-58h]
  __int128 v13; // [rsp+58h] [rbp-50h]
  unsigned __int64 v14; // [rsp+68h] [rbp-40h]

  v2 = a2 + 8;
  v14 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_122120(a2 + 8, a2 + 16, 0)
    && (v9 = a2, v5 = sub_125A00(a1, v2, &v9, 0), (v6 = v5) != 0)
    && *(_DWORD *)v5 == 5
    && *(_BYTE *)(v5 + 32) == 4
    && **(_DWORD **)(v5 + 40) == 9
    && (v7 = v5 + 64, (unsigned __int8)sub_12C7B0(a1, a2, v2, v9, v5 + 64))
    && (v8 = a2 + 12, v3 = sub_12D180(a1, v9, *(_QWORD *)(v6 + 40) + 32LL, a2, a2 + 12, 0), (_BYTE)v3) )
  {
    sub_120000(v10, *(_QWORD *)(v6 + 40) + 32LL);
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0;
    v13 = 0;
    sub_120460(a1, v11, v10, 1, 4294901760LL);
    sub_120460(a1, v11, v7, 1, 4294901760LL);
    if ( sub_A6060(a1, v11, *(_QWORD *)(v6 + 8), a2, 1) )
    {
      v3 = 0;
    }
    else
    {
      sub_1537B0(a1, v6, v10, a2, v8, 0);
      *a2 = 5;
      sub_118FD0(v2, v10);
      sub_119360(v8);
      sub_121740(a2 + 16);
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
    qfree(v11[0]);
    sub_119360(v10);
  }
  else
  {
    return 0;
  }
  return v3;
}
