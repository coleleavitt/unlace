__int64 __fastcall sub_A9D000(_QWORD *a1, double a2, __m128 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int **v11; // rbx
  __int64 v13; // rax
  _BYTE v14[8]; // [rsp+8h] [rbp-29B0h] BYREF
  int *v15; // [rsp+10h] [rbp-29A8h] BYREF
  int v16; // [rsp+18h] [rbp-29A0h]
  __int128 v17; // [rsp+20h] [rbp-2998h]
  __int128 v18; // [rsp+30h] [rbp-2988h]
  __int64 v19; // [rsp+40h] [rbp-2978h]
  __int16 v20; // [rsp+48h] [rbp-2970h]
  __int64 v21; // [rsp+50h] [rbp-2968h]
  int v22[2646]; // [rsp+60h] [rbp-2958h] BYREF

  v3 = *(_QWORD *)(*a1 + 16LL);
  v4 = *(_QWORD *)(v3 + 112);
  if ( *(_DWORD *)(v4 + 252) != 6 )
  {
    LODWORD(v11) = 1;
    return (unsigned int)v11;
  }
  v5 = a1[106];
  if ( !v5 || !*(_DWORD *)(v5 - 4) )
  {
    v13 = a1[107];
    if ( !v13 || !*(_DWORD *)(v13 - 4) )
    {
      sub_1872CE0("");
      sub_1873130(114, 3817);
    }
  }
  v6 = a1[1];
  *(_DWORD *)(v4 + 252) = 2;
  sub_8FBD90((__int64)v22, v6, v4, v3 + 120);
  sub_A7B150(a1, (__int64)v22);
  v7 = a1[1];
  v11 = &v15;
  v20 = 0;
  v16 = 0;
  v15 = &off_1C4C9C8;
  v19 = 0;
  v21 = v7;
  v17 = 0;
  v18 = 0;
  sub_18561B0((unsigned int)v14, 1000, (unsigned int)&v15, v8, v9, v10);
  LOBYTE(v11) = (unsigned int)sub_8FD5F0((__int64)v22, 0, nullptr, 1u, (__m128i)0LL, a3) != 1;
  sub_1856400(v14);
  v15 = &off_1C4C9C8;
  if ( (_BYTE)v20 )
  {
    sub_18296D0(v21);
    if ( !HIBYTE(v20) )
      goto LABEL_6;
LABEL_13:
    sub_1829760(v21);
  }
  if ( HIBYTE(v20) )
    goto LABEL_13;
LABEL_6:
  sub_8EFC90((__int64)v22);
  *(_DWORD *)(v4 + 252) = 6;
  return (unsigned int)v11;
}

