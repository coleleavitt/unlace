/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F17C
// Address: 0x000000000006F17C

//----- (000000000006F17C) ----------------------------------------------------
void __fastcall sub_6F17C(__int64 a1, unsigned __int8 *a2)
{
  int v2; // w8
  int v3; // w25
  __int64 v6; // x0
  __int64 v7; // x23
  __int64 v8; // x8
  unsigned int v9; // w23
  int owner; // w26
  __int64 align; // x0
  int v12; // w8
  _QWORD v13[3]; // [xsp+0h] [xbp-F0h] BYREF
  pthread_mutex_t v14; // [xsp+18h] [xbp-D8h] BYREF
  pthread_mutex_t v15; // [xsp+48h] [xbp-A8h] BYREF
  __int64 v16; // [xsp+98h] [xbp-58h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_DWORD *)(a1 + 24) - 1;
  *(_DWORD *)(a1 + 24) = v2;
  if ( !v2 )
  {
    v3 = *(_DWORD *)(a1 + 28);
    if ( v3 )
    {
      do
      {
        while ( 1 )
        {
          v6 = sub_6A1B0(v3);
          v3 = *(_DWORD *)(v6 + 24);
          if ( *(_DWORD *)(v6 + 64) == -1 )
            break;
          v7 = v6;
          *(_DWORD *)(a1 + 24) += 32;
          sub_7461C(v13, 0, 1);
          v8 = *(&v15.__align + 1);
          v9 = *(_DWORD *)(v7 + 64);
          owner = v14.__owner;
          if ( *(&v15.__align + 2) >= (unsigned __int64)(*(&v15.__align + 1) + 1) )
          {
            align = v15.__align;
          }
          else
          {
            align = (__int64)qvector_reserve(&v15, (void *)v15.__align, *(&v15.__align + 1) + 1, 4u);
            v8 = *(&v15.__align + 1);
            v15.__align = align;
          }
          *(_DWORD *)(align + 4 * v8) = owner;
          ++*(&v15.__align + 1);
          sub_65CA4(&v14, a2);
          sub_73704(v13, 0, 0, v9);
          sub_74848((__int64)v13);
          v12 = *(_DWORD *)(a1 + 24) - 32;
          *(_DWORD *)(a1 + 24) = v12;
          if ( !v3 || v12 )
          {
            if ( !v12 )
              goto LABEL_13;
            return;
          }
        }
      }
      while ( v3 );
      if ( *(_DWORD *)(a1 + 24) )
        return;
    }
LABEL_13:
    sub_6BDF8(a1, *(_QWORD **)(a1 + 8));
    operator delete((void *)a1);
  }
}
// 7461C: using guessed type __int64 __fastcall sub_7461C(_QWORD, _QWORD, _QWORD);
