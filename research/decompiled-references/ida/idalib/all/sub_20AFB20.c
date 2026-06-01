_QWORD *__fastcall sub_20AFB20(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rbp
  bool v3; // zf
  __int64 v4; // r9
  __int64 *v5; // rax
  _QWORD *v6; // rbp
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // esi
  __int64 v13; // rdx
  _BYTE *v14; // r12
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _BYTE *v22; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v23; // [rsp+10h] [rbp-28h] BYREF
  __int64 *v24; // [rsp+18h] [rbp-20h] BYREF

  v22 = (_BYTE *)a1;
  v1 = *(_QWORD *)sub_20CB0D0(a1);
  v2 = (__int64 *)(v1 + 496);
  v3 = (unsigned __int8)sub_20A14E0((__int64 *)(v1 + 496), (__int64 *)&v22, &v23) == 0;
  v5 = v23;
  if ( v3 )
  {
    v8 = *(_DWORD *)(v1 + 504);
    v24 = v23;
    v9 = (unsigned int)(v8 + 1);
    v10 = *(unsigned int *)(v1 + 512);
    v11 = (unsigned int)(4 * v9);
    v12 = 2 * v10;
    if ( (unsigned int)v11 < 3 * (int)v10 )
    {
      if ( (int)v10 - *(_DWORD *)(v1 + 508) - (int)v9 > (unsigned int)v10 >> 3 )
      {
LABEL_6:
        v3 = *v5 == -4096;
        *(_DWORD *)(v1 + 504) = v9;
        if ( !v3 )
          --*(_DWORD *)(v1 + 508);
        v13 = (__int64)v22;
        v5[1] = 0;
        v6 = v5 + 1;
        *v5 = v13;
        goto LABEL_9;
      }
      v12 = *(_DWORD *)(v1 + 512);
    }
    sub_20AF9A0((__int64)v2, v12, v9, v10, v11, v4);
    sub_20A14E0(v2, (__int64 *)&v22, &v24);
    LODWORD(v9) = *(_DWORD *)(v1 + 504) + 1;
    v5 = v24;
    goto LABEL_6;
  }
  v6 = v23 + 1;
  if ( v23[1] )
    return (_QWORD *)v23[1];
LABEL_9:
  v14 = v22;
  v22[7] |= 8u;
  if ( *v14 > 0x15u )
  {
    v19 = (_QWORD *)operator new(0x88u);
    v14 = v22;
    *v19 = 2;
    v16 = v19;
    v20 = sub_20CB0D0(v14);
    v16[2] = 0;
    v16[1] = v20;
    v21 = v16 + 4;
    for ( v16[3] = 1; v16 + 16 != v21; v21 += 3 )
      *v21 = -4096;
  }
  else
  {
    v15 = (_QWORD *)operator new(0x88u);
    *v15 = 1;
    v16 = v15;
    v17 = sub_20CB0D0(v14);
    v16[2] = 0;
    v16[1] = v17;
    v18 = v16 + 4;
    for ( v16[3] = 1; v16 + 16 != v18; v18 += 3 )
      *v18 = -4096;
  }
  v16[16] = v14;
  *v6 = v16;
  return v16;
}
