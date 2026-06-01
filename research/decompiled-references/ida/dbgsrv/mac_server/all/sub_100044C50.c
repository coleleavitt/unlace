/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044C50
// Address: 0x0000000100044C50

//----- (0000000100044C50) ----------------------------------------------------
__int64 __fastcall sub_100044C50(__int64 a1, char **a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  char **v7; // rax
  __int64 i; // r12
  const char *v9; // r15
  size_t v10; // rax
  size_t v11; // r13
  char *v12; // r14
  size_t v13; // rbx
  char **v15; // [rsp+0h] [rbp-80h]
  __int64 v17; // [rsp+20h] [rbp-60h]
  _QWORD __dst[2]; // [rsp+28h] [rbp-58h] BYREF
  void *__p; // [rsp+38h] [rbp-48h]
  _QWORD *v20; // [rsp+48h] [rbp-38h] BYREF

  v5 = a1 + 88;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 77) = 0;
  *(_DWORD *)(a1 + 120) = 1065353216;
  *(_BYTE *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = a4;
  *(_QWORD *)(a1 + 200) = sub_100044F70;
  *(_QWORD *)(a1 + 208) = a1;
  *(_OWORD *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 288) = -1;
  *(_OWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 305) = 0;
  *(_OWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 340) = 1;
  *(_QWORD *)(a1 + 496) = 0;
  *(_BYTE *)(a1 + 504) = 0;
  *(_BYTE *)(a1 + 508) = 0;
  *(_DWORD *)(a1 + 512) = 0;
  *(_BYTE *)(a1 + 516) = 0;
  *(_OWORD *)(a1 + 520) = 0;
  *(_OWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_DWORD *)(a1 + 560) = 1065353216;
  *(_BYTE *)(a1 + 568) = 0;
  *(_DWORD *)(a1 + 572) = 5;
  v6 = 132;
  if ( a2 )
    v6 = a3;
  v17 = v6;
  if ( v6 )
  {
    v7 = off_1000A8DB0;
    if ( a2 )
      v7 = a2;
    v15 = v7;
    for ( i = 0; v17 != i; ++i )
    {
      v9 = v15[i];
      v10 = strlen(v9);
      if ( v10 >= 0xFFFFFFFFFFFFFFF8LL )
        sub_10004CF00();
      v11 = v10;
      if ( v10 >= 0x17 )
      {
        v13 = (v10 | 7) + 1;
        if ( (v10 | 7) == 0x17 )
          v13 = 26;
        v12 = (char *)operator new(v13);
        __p = v12;
        __dst[0] = v13 | 1;
        __dst[1] = v11;
        v5 = a1 + 88;
      }
      else
      {
        LOBYTE(__dst[0]) = 2 * v10;
        v12 = (char *)__dst + 1;
        if ( !v10 )
          goto LABEL_16;
      }
      memmove(v12, v9, v11);
LABEL_16:
      v12[v11] = 0;
      v20 = __dst;
      *((_WORD *)sub_10004CF90(v5, (unsigned __int8 *)__dst, (__int64)&byte_10009086F, (__int64 *)&v20) + 20) = i + 128;
      if ( (__dst[0] & 1) != 0 )
        operator delete(__p);
    }
  }
  sub_100045060(a1, 0, a5);
  return __stack_chk_guard;
}
// 10009086F: using guessed type char byte_10009086F;
// 1000A8DB0: using guessed type char *off_1000A8DB0[132];
