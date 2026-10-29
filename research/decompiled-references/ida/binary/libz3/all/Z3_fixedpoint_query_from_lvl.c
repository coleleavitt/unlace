__int64 __fastcall Z3_fixedpoint_query_from_lvl(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v4; // r12
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  unsigned int v13; // [rsp+8h] [rbp-B0h]
  __int64 v14; // [rsp+10h] [rbp-A8h]
  int v16; // [rsp+1Ch] [rbp-9Ch]
  __int64 v17; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v18[8]; // [rsp+28h] [rbp-90h] BYREF
  int *v19; // [rsp+30h] [rbp-88h] BYREF
  int v20; // [rsp+38h] [rbp-80h]
  __int128 v21; // [rsp+40h] [rbp-78h]
  __int128 v22; // [rsp+50h] [rbp-68h]
  __int64 v23; // [rsp+60h] [rbp-58h]
  __int16 v24; // [rsp+68h] [rbp-50h]
  __int64 v25; // [rsp+70h] [rbp-48h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_2A1E00(a1, a2, a3, a4);
  v5 = *(unsigned int *)(a1 + 100);
  *(_DWORD *)(a1 + 1520) = 0;
  v16 = sub_1859960(a2 + 32, "timeout", v5);
  v6 = sub_1859960(a2 + 32, "rlimit", *(unsigned int *)(a1 + 96));
  v14 = *(_QWORD *)(a1 + 232);
  sub_1829790(v14, v6);
  v7 = *(_QWORD *)(a1 + 232);
  v20 = 0;
  v25 = v7;
  v19 = &off_1C4C9C8;
  v23 = 0;
  v24 = 0;
  v21 = 0;
  v22 = 0;
  sub_24FD10(&v17, a1, (__int64)&v19);
  sub_18561B0((unsigned int)v18, v16, (unsigned int)&v19, v8, v9, v10);
  v13 = sub_6550E0(*(_QWORD *)(a2 + 24) + 48LL, a3, a4);
  sub_64C5F0(*(_QWORD *)(a2 + 24) + 48LL);
  sub_1856400(v18);
  sub_24E910(&v17);
  v19 = &off_1C4C9C8;
  if ( !(_BYTE)v24 )
  {
    if ( !HIBYTE(v24) )
      goto LABEL_5;
LABEL_9:
    sub_1829760(v25);
  }
  sub_18296D0(v25);
  if ( HIBYTE(v24) )
    goto LABEL_9;
LABEL_5:
  sub_1829100(v14);
  if ( v4 )
    byte_1C7EBA0 = 1;
  return v13;
}

