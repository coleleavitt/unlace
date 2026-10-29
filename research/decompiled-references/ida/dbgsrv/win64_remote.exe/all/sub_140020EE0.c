/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020EE0
// Address: 0x0000000140020EE0

//----- (0000000140020EE0) ----------------------------------------------------
void __fastcall sub_140020EE0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  void *v11; // r14
  size_t v12; // rbp
  void *v13; // rax
  __int64 **v14; // rcx
  __int64 *j; // rax
  __int64 *k; // rcx
  __int128 v17; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18; // [rsp+50h] [rbp-58h]
  _BYTE v19[80]; // [rsp+58h] [rbp-50h] BYREF
  __int64 i; // [rsp+B0h] [rbp+8h]

  if ( a2 != a3 )
  {
    v4 = a2;
    v6 = *a1;
    for ( i = *a1; ; v6 = i )
    {
      v7 = sub_140020B70((__int64)a1, (__int64)v19, v6, (const char **)v4 + 4);
      v17 = *(_OWORD *)v7;
      v18 = *(_QWORD *)(v7 + 16);
      if ( !(_BYTE)v18 )
      {
        if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
          unknown_libname_1(v9, v8);
        v10 = *a1;
        v11 = operator new(0x58u);
        *((_QWORD *)v11 + 4) = 0;
        *((_QWORD *)v11 + 5) = 0;
        *((_QWORD *)v11 + 6) = 0;
        v12 = v4[5];
        if ( v12 )
        {
          v13 = sub_14005AAA0(v4[5]);
          *((_QWORD *)v11 + 4) = v13;
          *((_QWORD *)v11 + 6) = v12;
          memcpy(v13, (const void *)v4[4], v12);
          *((_QWORD *)v11 + 5) = v12;
        }
        *((_BYTE *)v11 + 56) = 2;
        *((_OWORD *)v11 + 4) = 0;
        *((_QWORD *)v11 + 10) = 0;
        sub_140028E70((char *)v11 + 56, (char *)v4 + 56);
        *(_QWORD *)v11 = v10;
        *((_QWORD *)v11 + 1) = v10;
        *((_QWORD *)v11 + 2) = v10;
        *((_WORD *)v11 + 12) = 0;
        sub_140003FC0(a1, (__int64)&v17, (__int64)v11);
      }
      v14 = (__int64 **)v4[2];
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( j = (__int64 *)v4[1]; !*((_BYTE *)j + 25); j = (__int64 *)j[1] )
        {
          if ( v4 != (__int64 *)j[2] )
            break;
          v4 = j;
        }
        v4 = j;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        for ( k = *v14; !*((_BYTE *)k + 25); k = (__int64 *)*k )
          v4 = k;
      }
      if ( v4 == a3 )
        break;
    }
  }
}
// 140021099: variable 'v9' is possibly undefined
// 140021099: variable 'v8' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
