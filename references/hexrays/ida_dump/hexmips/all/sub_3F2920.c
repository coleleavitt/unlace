__int64 __fastcall sub_3F2920(__int64 a1, unsigned __int64 a2, __m128 a3)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  int v15; // eax
  unsigned int v16; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v17[3] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v3 + 40);
  v17[0] = -1;
  sub_CBD70(0xBC6u, v17, v4);
  *(_QWORD *)(v3 + 1352) = v17[0];
  v5 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v5 + 112) & 0x10) != 0 )
  {
    *(_DWORD *)(v5 + 1184) = **(_DWORD **)(*(_QWORD *)(a1 + 832) + 720LL);
    v5 = *(_QWORD *)(a1 + 8);
  }
  v6 = *(_QWORD *)(v5 + 920);
  v7 = sub_CBD70(0xBC2u);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = v7;
  v17[0] = off_4CA168;
  v17[1] = v6 + 64;
  if ( (unsigned __int8)sub_1CB200((__int64)v17, &v16, v8, a2) )
  {
    sub_3F2660(v6, *(_QWORD **)(a1 + 8), a3);
    if ( v9 != 1 )
      return 0;
    v15 = *(_DWORD *)(v6 + 128);
    if ( (*(_BYTE *)(v6 + 64) & 1) != 0 )
    {
      *(_DWORD *)(v6 + 128) = v15 | 4;
      return 0;
    }
LABEL_12:
    if ( (v15 & 4) == 0 )
    {
      sub_3F24C0(v6, *(_QWORD *)(a1 + 8), v10, v11, v12, v13);
      return 0;
    }
    return 0;
  }
  result = v16;
  if ( v16 )
    return result;
  if ( v9 == 1 )
  {
    v15 = *(_DWORD *)(v6 + 128);
    goto LABEL_12;
  }
  return 0;
}
