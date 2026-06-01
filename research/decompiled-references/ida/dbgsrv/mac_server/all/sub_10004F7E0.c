/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004F7E0
// Address: 0x000000010004F7E0

//----- (000000010004F7E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_10004F7E0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, __int64 a6)
{
  _QWORD *v6; // r12
  __int64 v7; // rax
  int v8; // r14d
  char *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 result; // rax
  _QWORD *v18; // [rsp+10h] [rbp-30h]

  *(_QWORD *)a1 = off_1000A9280;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 4144) = -1;
  *(_QWORD *)(a1 + 4152) = a1 + 4152;
  *(_QWORD *)(a1 + 4160) = a1 + 4152;
  *(_QWORD *)(a1 + 4168) = 0;
  *(_QWORD *)(a1 + 4176) = -1;
  v18 = (_QWORD *)(a1 + 4184);
  v6 = (_QWORD *)(a1 + 4208);
  *(_OWORD *)(a1 + 4184) = 0;
  *(_OWORD *)(a1 + 4200) = 0;
  *(_OWORD *)(a1 + 4216) = 0;
  if ( a4[1] )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v11 = *a4;
      v12 = 80 * v7;
      if ( *(_QWORD *)(v11 + v12 + 8) )
      {
        if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && !*(_QWORD *)(v12 + v11 + 32) )
        {
          v15 = *(char **)(a1 + 4184);
          v16 = *(_QWORD *)(a1 + 4192);
          if ( *(_QWORD *)(a1 + 4200) < (unsigned __int64)(v16 + 1) )
          {
            v15 = (char *)qvector_reserve((__int64)v18, v15, v16 + 1, 4u);
            *v18 = v15;
            v16 = *(_QWORD *)(a1 + 4192);
          }
          v9 = &v15[4 * v16];
          v10 = (_QWORD *)(a1 + 4192);
        }
        else
        {
          v13 = *(char **)(a1 + 4208);
          v14 = *(_QWORD *)(a1 + 4216);
          if ( *(_QWORD *)(a1 + 4224) < (unsigned __int64)(v14 + 1) )
          {
            v13 = (char *)qvector_reserve((__int64)v6, v13, v14 + 1, 4u);
            *v6 = v13;
            v14 = *(_QWORD *)(a1 + 4216);
          }
          v9 = &v13[4 * v14];
          v10 = (_QWORD *)(a1 + 4216);
        }
        *(_DWORD *)v9 = v8;
        ++*v10;
      }
      v7 = ++v8;
      a4 = *(__int64 **)(a1 + 24);
    }
    while ( a4[1] > (unsigned __int64)v8 );
  }
  __bzero(a1 + 48, 4096);
  result = (unsigned __int64)qtime64() >> 32;
  *(_DWORD *)(a1 + 4232) = result;
  return result;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000A9280: using guessed type void (__fastcall __noreturn *off_1000A9280[2])();
