__int64 __fastcall sub_2157B60(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // dl
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // rsi
  __int64 v12; // rdx
  char *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-C8h] BYREF
  char v18; // [rsp+8h] [rbp-C0h]
  __int64 v19[2]; // [rsp+10h] [rbp-B8h] BYREF
  char v20; // [rsp+20h] [rbp-A8h]
  __m128i v21[2]; // [rsp+30h] [rbp-98h] BYREF
  char v22; // [rsp+50h] [rbp-78h]
  __m128i *v23; // [rsp+60h] [rbp-68h] BYREF
  char v24; // [rsp+68h] [rbp-60h]
  __int16 v25; // [rsp+80h] [rbp-48h]

  (*(void (__fastcall **)(__int64 *))(**(_QWORD **)(a2 + 8) + 96LL))(&v17);
  if ( (v18 & 1) != 0 )
  {
    v3 = v17;
    *(_BYTE *)(a1 + 16) |= 1u;
    v17 = 0;
    *(_QWORD *)a1 = v3;
    goto LABEL_3;
  }
  if ( !(_BYTE)v17 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 114LL) & 8) != 0 )
    {
      (*(void (__fastcall **)(__m128i **))(**(_QWORD **)(a2 + 8) + 72LL))(&v23);
      v7 = v24 & 1;
      if ( (v24 & 1) != 0 )
      {
        v8 = (__int64)v23;
        v23 = nullptr;
        *(_QWORD *)a1 = v8;
        goto LABEL_8;
      }
      v5 = *(unsigned __int16 *)(a2 + 32);
    }
    else
    {
      v5 = *(unsigned __int16 *)(a2 + 32);
      v6 = *(_QWORD *)(a2 + 24);
      v24 &= ~1u;
      v23 = (__m128i *)(v6 - v5);
    }
    v7 = 0;
    *(_QWORD *)a1 = *(_QWORD *)(a2 + 16) + v5;
    *(_QWORD *)(a1 + 8) = v23;
LABEL_8:
    *(_BYTE *)(a1 + 16) = v7 | *(_BYTE *)(a1 + 16) & 0xFE;
    sub_A0AE70((__int64 *)&v23);
    goto LABEL_3;
  }
  sub_21577D0(v21, a2);
  if ( (v22 & 1) != 0 )
  {
    v9 = v21[0].m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v21[0].m128i_i64[0] = 0;
    *(_QWORD *)a1 = v9;
  }
  else
  {
    v25 = 260;
    v23 = v21;
    sub_2230FD0(v19, &v23, 0, 1, 0, 0);
    if ( (v20 & 1) != 0 && LODWORD(v19[0]) )
    {
      sub_2220500(&v23, LODWORD(v19[0]), v19[1]);
      v16 = (__int64)v23;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v16;
    }
    else
    {
      v10 = *(_QWORD *)a2;
      v11 = *(char **)(*(_QWORD *)a2 + 128LL);
      if ( v11 == *(char **)(*(_QWORD *)a2 + 136LL) )
      {
        sub_111E3A0(v10 + 120, v11, v19);
        v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 128LL) - 8LL);
      }
      else
      {
        v12 = v19[0];
        v13 = v11 + 8;
        v19[0] = 0;
        *((_QWORD *)v13 - 1) = v12;
        *(_QWORD *)(v10 + 128) = v13;
      }
      v14 = *(_QWORD *)(v12 + 8);
      v15 = *(_QWORD *)(v12 + 16);
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a1 = v14;
      *(_QWORD *)(a1 + 8) = v15 - v14;
    }
    sub_FC2AF0(v19);
  }
  sub_111E030((__int64)v21);
LABEL_3:
  sub_12EBA60(&v17);
  return a1;
}
