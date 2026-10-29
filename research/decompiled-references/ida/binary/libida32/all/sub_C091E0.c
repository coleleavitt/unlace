__int64 __fastcall sub_C091E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v15; // [rsp+20h] [rbp-B8h] BYREF
  char v16; // [rsp+24h] [rbp-B4h]
  __int64 v17; // [rsp+28h] [rbp-B0h]
  int v18[14]; // [rsp+60h] [rbp-78h] BYREF
  char v19; // [rsp+98h] [rbp-40h]

  v5 = *(_QWORD *)(a3 + 40);
  v6 = *(_QWORD *)(*a2 + 16);
  if ( (*(_BYTE *)(a3 + 19) & 2) != 0 )
  {
    v7 = *(_DWORD *)(v5 + 8);
    if ( v7 <= 0x40 )
    {
      v5 = *(_QWORD *)v5;
    }
    else
    {
      if ( v7 - (unsigned int)sub_21E2A40(v5) > 0x40 )
      {
        v5 = -1;
        v8 = sub_A8AC40(v6, *(_QWORD *)(a3 + 32));
        v15 = 0;
        v9 = v8;
        v16 &= ~1u;
        sub_A2D6C0((__int64)&v15, -1, -1);
        goto LABEL_7;
      }
      v5 = **(_QWORD **)v5;
    }
  }
  v11 = sub_A8AC40(v6, *(_QWORD *)(a3 + 32));
  v16 &= ~1u;
  v9 = v11;
  v15 = 0;
  sub_A2D6C0((__int64)&v15, v5, v5);
  if ( !v5 )
  {
LABEL_14:
    sub_A2BB60(a1, (__int64)&v15);
    *(_BYTE *)(a1 + 56) = 1;
    goto LABEL_15;
  }
LABEL_7:
  v12 = 0;
  while ( 1 )
  {
    sub_C08890((__int64)v18, a2, *(_QWORD *)(a3 + 32), a4 + v9 * v12, v10);
    if ( !v19 )
      break;
    sub_A2BFE0(v17 + 56LL * (unsigned int)v12, (__int64)v18);
    if ( v19 && v18[0] > 1u )
      sub_A2BBA0(v18);
    if ( ++v12 == v5 )
      goto LABEL_14;
  }
  *(_BYTE *)(a1 + 56) = 0;
LABEL_15:
  if ( v15 > 1 )
    sub_A2BBA0((int *)&v15);
  return a1;
}

