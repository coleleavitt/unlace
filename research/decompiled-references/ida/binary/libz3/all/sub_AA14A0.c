__int64 __fastcall sub_AA14A0(unsigned int **a1, int a2, double a3, __m128 a4)
{
  int **v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v9; // rsi
  unsigned int *v10; // rax
  int v11; // ebp
  __int64 v12; // rdx
  unsigned int *v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  char v17[8]; // [rsp+8h] [rbp-29B0h] BYREF
  int *v18; // [rsp+10h] [rbp-29A8h] BYREF
  int v19; // [rsp+18h] [rbp-29A0h]
  __int128 v20; // [rsp+20h] [rbp-2998h]
  __int128 v21; // [rsp+30h] [rbp-2988h]
  __int64 v22; // [rsp+40h] [rbp-2978h]
  __int16 v23; // [rsp+48h] [rbp-2970h]
  unsigned int *v24; // [rsp+50h] [rbp-2968h]
  int v25[2646]; // [rsp+60h] [rbp-2958h] BYREF

  LODWORD(v4) = 1;
  v5 = *((_QWORD *)*a1 + 2);
  v6 = *(_QWORD *)(v5 + 112);
  if ( *(_DWORD *)(v6 + 252) == 6 )
  {
    v9 = (__int64)a1[1];
    *(_DWORD *)(v6 + 252) = 2;
    sub_8FBD90((__int64)v25, v9, v6, v5 + 120);
    v10 = a1[106];
    v11 = a2 ^ 1;
    if ( !v10 || (v12 = *(v10 - 1), (_DWORD)v12 == *(v10 - 2)) )
    {
      sub_692C60(a1 + 106);
      v10 = a1[106];
      v12 = *(v10 - 1);
    }
    v10[v12] = v11;
    ++*(v10 - 1);
    sub_A7B150(a1, (__int64)v25);
    v4 = &v18;
    --*(a1[106] - 1);
    v13 = a1[1];
    v23 = 0;
    v19 = 0;
    v18 = &off_1C4C9C8;
    v22 = 0;
    v24 = v13;
    v20 = 0;
    v21 = 0;
    sub_18561B0((unsigned int)v17, 1000, (unsigned int)&v18, v14, v15, v16);
    LOBYTE(v4) = (unsigned int)sub_8FD5F0((__int64)v25, 0, nullptr, 1u, (__m128i)0LL, a4) != 1;
    sub_1856400(v17);
    v18 = &off_1C4C9C8;
    if ( (_BYTE)v23 )
      sub_18296D0(v24);
    if ( HIBYTE(v23) )
      sub_1829760(v24);
    sub_8EFC90((__int64)v25);
    *(_DWORD *)(v6 + 252) = 6;
  }
  return (unsigned int)v4;
}

