/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000F060
// Address: 0x000000014000F060

//----- (000000014000F060) ----------------------------------------------------
__int64 __fastcall sub_14000F060(__int64 a1, void **a2, unsigned int a3, unsigned __int64 a4, unsigned int a5)
{
  int v9; // ebx
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // rax
  int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-98h]
  __int128 v22; // [rsp+40h] [rbp-88h] BYREF
  __int128 v23; // [rsp+50h] [rbp-78h]
  __int128 v24; // [rsp+68h] [rbp-60h]
  __int128 v25; // [rsp+78h] [rbp-50h] BYREF
  __int64 v26; // [rsp+88h] [rbp-40h]

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  v9 = a5;
  if ( a3 == 4 )
  {
    if ( (int)a5 <= 0 )
      v9 = *(_DWORD *)(a1 + 392);
    if ( a2 && (int)sub_140044240((_BYTE *)a1, a2, a4, v9) < 0 )
      return 4294967294LL;
    *(_QWORD *)&v25 = a4;
    LOBYTE(v26) = v9;
    HIDWORD(v26) = 0;
    if ( (unsigned __int8)v9 >= 8u )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(1796);
    }
    if ( (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *, _QWORD, _QWORD))(*(_QWORD *)a1 + 280LL))(
           a1,
           a4,
           (char *)&v25 + 8,
           v9,
           0) )
    {
      v11 = *(int *)(a1 + 392);
      if ( (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
             a1,
             a4,
             *(_QWORD *)(a1 + 384),
             v11,
             0) == v11 )
      {
        v13 = v25;
        v24 = v25;
        v14 = v26;
        v21 = v26;
        v15 = (__int64 *)(a1 + 408);
        v16 = *v15;
        v17 = *(_QWORD *)(*v15 + 8);
        *(_QWORD *)&v23 = v17;
        for ( DWORD2(v23) = 0; !*(_BYTE *)(v17 + 25); v17 = *(_QWORD *)v17 )
        {
          *(_QWORD *)&v23 = v17;
          if ( *(_QWORD *)(v17 + 32) >= a4 )
          {
            DWORD2(v23) = 1;
            v16 = v17;
          }
          else
          {
            DWORD2(v23) = 0;
            v17 += 16;
          }
        }
        if ( *(_BYTE *)(v16 + 25) || a4 < *(_QWORD *)(v16 + 32) )
        {
          if ( v15[1] == 0x3FFFFFFFFFFFFFFLL )
            unknown_libname_1(v16, v12);
          v18 = *v15;
          v19 = (__int64 *)operator new(0x40u);
          v19[4] = a4;
          v19[5] = -1;
          *((_BYTE *)v19 + 56) = 0;
          *((_DWORD *)v19 + 15) = 0;
          *v19 = v18;
          v19[1] = v18;
          v19[2] = v18;
          *((_WORD *)v19 + 12) = 0;
          v22 = v23;
          v16 = sub_140003FC0(v15, (__int64)&v22, (__int64)v19);
          v13 = v24;
          v14 = v21;
        }
        *(_OWORD *)(v16 + 40) = v13;
        *(_QWORD *)(v16 + 56) = v14;
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 4294967294LL;
    }
  }
  else
  {
    if ( a3 > 8 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 328LL))(
               a1,
               a3,
               a4,
               a5);
    v20 = 266;
    if ( !_bittest(&v20, a3) || a5 != 1 && (a3 == 8 || ((a5 - 2) & 0xFFFFFFF9) != 0 || a5 == 6) )
      return (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 328LL))(
               a1,
               a3,
               a4,
               a5);
    if ( ((int)(a5 - 1) & a4) != 0 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 328LL))(
               a1,
               a3,
               a4,
               a5);
    result = (unsigned __int8)sub_140051EA0((__int64 *)a1, a3, a4, a5);
    if ( !(_BYTE)result )
      return (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 328LL))(
               a1,
               a3,
               a4,
               a5);
  }
  return result;
}
// 14000F2D9: variable 'v12' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
// 1400CB61C: using guessed type char byte_1400CB61C;
