__int64 __fastcall sub_73ED50(unsigned __int64 a1, unsigned __int16 *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx
  _WORD *v7; // rax
  bool v8; // zf
  __int64 v9; // rdx
  int v10; // r14d
  __int64 *v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r12
  _DWORD **v14; // rsi
  unsigned int *v16; // rbp
  int v17; // r12d
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  unsigned int v23; // [rsp+8h] [rbp-40h]
  unsigned int v24; // [rsp+Ch] [rbp-3Ch]

  if ( *(_BYTE *)(a1 + 5804) )
  {
    v3 = *(_DWORD *)(a1 + 1620);
    *(_BYTE *)(a1 + 5804) = 0;
    v23 = v3 & 4;
    if ( (v3 & 4) != 0 )
    {
      dword_2CCC638 = 19;
      sub_743100(19, 0, a3);
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      v4 = *(_DWORD *)(a1 + 28);
      *(_QWORD *)(a1 + 4232) = a2;
      v24 = v4;
      v5 = *a2;
      *(_DWORD *)(a1 + 4240) = v5;
      if ( v5 > 0x204 )
      {
        dword_2CCC638 = 18;
        sub_743100(18, 0, a3);
      }
      if ( *(_DWORD *)(a1 + 24) )
      {
        *(_BYTE *)(a1 + 4220) = 0;
        *(_QWORD *)(a1 + 48) = a3;
        unk_2CCC5C9 = 0;
        *(_DWORD *)(a1 + 1612) = 0;
        *(_WORD *)(a1 + 64) = 0;
        if ( a3 )
          *(_QWORD *)(a3 + 8) = 0;
        sub_744F90(a1, 1);
        v7 = *(_WORD **)(a1 + 4232);
        *(_WORD *)(a1 + 1634) = 0;
        v8 = *v7 == 0;
        byte_2CCC5CA = 0;
        if ( v8 )
        {
          v18 = *(unsigned int *)(a1 + 36);
          sub_73E250(a1, v18);
          if ( *(_DWORD *)(a1 + 24) )
            sub_743130(a1, v18, v19);
          *(_DWORD *)(a1 + 36) = 0;
          sub_73C020(a1, 1, v19, v20, v21, v22);
          sub_744F90(a1, 1);
          byte_2CCC5CA = 0;
          *(_WORD *)(a1 + 1634) = 0;
          v23 = v24;
        }
        else
        {
          if ( dword_2CCC638 == 21 )
            sub_743100(21, 0, v6);
          v9 = *(unsigned int *)(a1 + 36);
          v10 = 0;
          do
          {
            *(_QWORD *)(a1 + 2664) = a1 + 1640;
            *(_WORD *)(a1 + 1634) = 1;
            sub_745040(a1, a1 + 1640, v9);
            v11 = *(__int64 **)(*(_QWORD *)(a1 + 2664) + 8LL);
            if ( !v11 && *(__int16 *)(a1 + 1634) > 0 )
            {
              v16 = (unsigned int *)(a1 + 1640);
              v17 = 0;
              do
              {
                sub_745040(a1, v16, *v16);
                ++v17;
                v16 += 8;
              }
              while ( v17 < *(__int16 *)(a1 + 1634) );
              v11 = *(__int64 **)(*(_QWORD *)(a1 + 2664) + 8LL);
            }
            *(_QWORD *)(a1 + 40) = v11;
            v12 = *(_QWORD *)(a1 + 8);
            v13 = *v11;
            sub_7385E0(v12, *v11);
            v14 = *(_DWORD ***)(a1 + 40);
            if ( !**v14 )
            {
              sub_73D880(a1, (__int64)v14, 0, 0);
              *(_QWORD *)(a1 + 48) = 0;
              v14 = *(_DWORD ***)(a1 + 40);
              *(_DWORD *)(a1 + 1612) = 0;
              *(_WORD *)(a1 + 64) = 0;
            }
            v10 |= sub_73E380(a1, (__int64)v14, 0, 0);
            if ( unk_2CCC5C8 )
              sub_73CF10(a1, *(_DWORD *)(a1 + 5796), a1 + 4244, *(_DWORD *)(a1 + 5792));
            else
              sub_73A920(a1);
            sub_744F90(a1, 1);
            byte_2CCC5CA = 0;
            *(_WORD *)(a1 + 1634) = 0;
            sub_7385F0(v12, v13);
            if ( !byte_2CCC62D )
              break;
            v9 = *(unsigned int *)(a1 + 36);
          }
          while ( (_DWORD)v9 );
          *(_QWORD *)(a1 + 48) = 0;
          *(_DWORD *)(a1 + 1612) = 0;
          *(_WORD *)(a1 + 64) = 0;
          if ( (_BYTE)v10 )
            v23 = v24 - *(_DWORD *)(a1 + 28);
        }
      }
    }
    *(_BYTE *)(a1 + 5804) = 1;
  }
  else
  {
    return (unsigned int)-1;
  }
  return v23;
}
