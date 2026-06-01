__int64 __fastcall Z3_fixedpoint_query_relations(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  unsigned int v13; // [rsp+18h] [rbp-A0h]
  int v14; // [rsp+1Ch] [rbp-9Ch]
  __int64 v15; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v16[8]; // [rsp+28h] [rbp-90h] BYREF
  int *v17; // [rsp+30h] [rbp-88h] BYREF
  int v18; // [rsp+38h] [rbp-80h]
  __int128 v19; // [rsp+40h] [rbp-78h]
  __int128 v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+60h] [rbp-58h]
  __int16 v22; // [rsp+68h] [rbp-50h]
  __int64 v23; // [rsp+70h] [rbp-48h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29FE60(a1, a2, a3, a4);
  v5 = *(unsigned int *)(a1 + 100);
  *(_DWORD *)(a1 + 1520) = 0;
  v14 = sub_1859960(a2 + 32, "timeout", v5);
  v6 = *(_QWORD *)(a1 + 232);
  v18 = 0;
  v23 = v6;
  v17 = &off_1C4C9C8;
  v21 = 0;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  sub_24FD10(&v15, a1, (__int64)&v17);
  sub_18561B0((unsigned int)v16, v14, (unsigned int)&v17, v7, v8, v9);
  v13 = sub_654540(*(_QWORD *)(a2 + 24) + 48LL, a3, a4);
  sub_64C5F0(*(_QWORD *)(a2 + 24) + 48LL);
  sub_1856400(v16);
  sub_24E910(&v15);
  v17 = &off_1C4C9C8;
  if ( !(_BYTE)v22 )
  {
    if ( !HIBYTE(v22) )
      goto LABEL_5;
LABEL_9:
    sub_1829760(v23);
  }
  sub_18296D0(v23);
  if ( HIBYTE(v22) )
    goto LABEL_9;
LABEL_5:
  if ( v4 )
    byte_1C7EBA0 = 1;
  return v13;
}

