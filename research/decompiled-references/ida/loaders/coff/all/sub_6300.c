__int64 __fastcall sub_6300(__int64 a1, unsigned __int16 *a2, __int64 a3, int a4, char a5)
{
  int v6; // ebp
  unsigned __int64 v7; // rax
  int v8; // ebx
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // esi
  __int16 v14; // r8
  __int16 v15; // di
  __int64 *v16; // rdx
  unsigned __int8 v17; // si
  __int16 v18; // cx
  __int64 v19; // r9
  char v20; // di
  int v21; // r8d
  __int64 v22; // rdx
  unsigned int v23; // ecx
  unsigned int v24; // esi
  __int16 v25; // di
  unsigned int v26; // r8d
  __int64 v27; // rdx
  unsigned int v28; // ecx
  unsigned int v29; // esi
  unsigned int v30; // r8d
  __int16 v31; // di
  int *v32; // rdx
  unsigned int v33; // ecx
  int v34; // esi
  unsigned __int16 v35; // di
  void *v36; // rdx
  __int64 *v37; // r13
  __int64 v38; // rbp
  __int64 v39; // rdi
  char v40; // r12
  unsigned int v41; // r15d
  __int16 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned int v45; // esi
  unsigned __int16 v46; // cx
  __int16 v47; // r8
  __int16 v48; // di
  __int64 v49; // rdx
  __int64 v50; // rsi
  unsigned int v51; // ecx
  char v52; // cl
  __int64 v53; // rcx
  unsigned int *v54; // rdx
  unsigned int v55; // ecx
  __int16 v56; // di
  unsigned int v57; // esi

  v6 = a4 - 1;
  v7 = *a2;
  if ( (((_WORD)v7 - 387) & 0xFFFD) != 0 )
  {
    v8 = a4 - 1;
    if ( (_WORD)v7 == 21020 )
    {
      result = lread(a1, a3, 10LL * a4);
      if ( v6 >= 0 )
      {
        v32 = (int *)(a3 + 10LL * v6);
        result = a3 + 22LL * v6;
        do
        {
          v33 = *v32;
          v34 = v32[1];
          v35 = *((_WORD *)v32 + 4);
          --v8;
          *(_WORD *)(result + 16) = 0;
          v32 = (int *)((char *)v32 - 10);
          *(_DWORD *)(result + 8) = v34;
          result -= 22;
          *(_DWORD *)(result + 40) = 0;
          *(_DWORD *)(result + 34) = v35;
          *(_QWORD *)(result + 22) = v33;
        }
        while ( v8 != -1 );
      }
    }
    else if ( (_WORD)v7 == 2560 )
    {
      result = lread(a1, a3, 14LL * a4);
      if ( v6 >= 0 )
      {
        v22 = a3 + 14LL * v6;
        result = a3 + 22LL * v6;
        do
        {
          v23 = *(_DWORD *)v22;
          v24 = *(_DWORD *)(v22 + 4);
          v25 = *(_WORD *)(v22 + 8);
          v26 = *(_DWORD *)(v22 + 10);
          if ( a5 )
          {
            v25 = __ROL2__(v25, 8);
            v23 = _byteswap_ulong(v23);
            v24 = _byteswap_ulong(v24);
            v26 = _byteswap_ulong(v26);
          }
          *(_DWORD *)(result + 8) = v24;
          --v8;
          *(_DWORD *)(result + 18) = v26;
          v22 -= 14;
          result -= 22;
          *(_WORD *)(result + 38) = 0;
          *(_BYTE *)(result + 37) = 0;
          *(_BYTE *)(result + 36) = 0;
          *(_WORD *)(result + 34) = v25;
          *(_QWORD *)(result + 22) = v23;
        }
        while ( v8 != -1 );
      }
    }
    else if ( (v7 & 0x7FFF) == 0x500 || (_WORD)v7 == 1360 || (unsigned __int16)(v7 + 32000) <= 2u )
    {
      result = lread(a1, a3, 16LL * a4);
      if ( v6 >= 0 )
      {
        v27 = a3 + 16LL * v6;
        result = a3 + 22LL * v6;
        do
        {
          v28 = *(_DWORD *)v27;
          v29 = *(_DWORD *)(v27 + 4);
          v30 = *(_DWORD *)(v27 + 8);
          v31 = *(_WORD *)(v27 + 12);
          if ( a5 )
          {
            v31 = __ROL2__(v31, 8);
            v28 = _byteswap_ulong(v28);
            v29 = _byteswap_ulong(v29);
            v30 = _byteswap_ulong(v30);
          }
          v27 -= 16;
          *(_DWORD *)(result + 18) = v30;
          *(_WORD *)(result + 16) = 0;
          result -= 22;
          *(_BYTE *)(result + 37) = 0;
          *(_BYTE *)(result + 36) = 0;
          *(_WORD *)(result + 34) = v31;
          *(_DWORD *)(result + 30) = v29;
          *(_QWORD *)(result + 22) = v28;
        }
        while ( a3 + 16LL * v6 - 16 - 16LL * (unsigned int)v6 != v27 );
      }
    }
    else if ( (_WORD)v7 == 147 )
    {
      result = lread(a1, a3, 10LL * a4);
      if ( v6 >= 0 )
      {
        v44 = a3 + 10LL * v6;
        result = a3 + 22LL * v6;
        do
        {
          v45 = *(_DWORD *)v44;
          v46 = *(_WORD *)(v44 + 4);
          v47 = *(_WORD *)(v44 + 6);
          v48 = *(_WORD *)(v44 + 8);
          if ( a5 )
          {
            v46 = __ROL2__(v46, 8);
            v47 = __ROL2__(v47, 8);
            v45 = _byteswap_ulong(v45);
            v48 = __ROL2__(v48, 8);
          }
          *(_WORD *)(result + 12) = v48;
          --v8;
          *(_DWORD *)(result + 18) = 0;
          v44 -= 10;
          result -= 22;
          *(_WORD *)(result + 38) = v47;
          *(_BYTE *)(result + 37) = 0;
          *(_BYTE *)(result + 36) = 0;
          *(_DWORD *)(result + 30) = v46;
          *(_QWORD *)(result + 22) = v45;
        }
        while ( v8 != -1 );
      }
    }
    else if ( (unsigned __int16)(v7 - 193) > 1u )
    {
      if ( a5 || (unsigned __int16)(v7 - 352) > 1u )
      {
        LOWORD(v7) = v7 - 487;
        if ( (unsigned __int16)v7 <= 0x10u && (v36 = &loc_10101, _bittest64((const __int64 *)&v36, v7)) )
        {
          result = lread(a1, a3, 14LL * a4);
          if ( v6 >= 0 )
          {
            v37 = (__int64 *)(a3 + 14LL * v6);
            v38 = a3 + 22LL * v6;
            do
            {
              v39 = *v37;
              v40 = *((_BYTE *)v37 + 12);
              --v8;
              v37 = (__int64 *)((char *)v37 - 14);
              v41 = *(_DWORD *)((char *)v37 + 22);
              v42 = *((char *)v37 + 27);
              v38 -= 22;
              v43 = swap64(v39);
              *(_DWORD *)(v38 + 40) = 0;
              *(_QWORD *)(v38 + 22) = v43;
              result = v40 & 0x3F;
              *(_DWORD *)(v38 + 30) = _byteswap_ulong(v41);
              *(_WORD *)(v38 + 34) = v42;
              *(_BYTE *)(v38 + 36) = result;
              *(_BYTE *)(v38 + 37) = v40 & 0x80;
              *(_WORD *)(v38 + 38) = 0;
            }
            while ( v8 != -1 );
          }
        }
        else
        {
          result = lread(a1, a3, 10LL * a4);
          if ( v6 >= 0 )
          {
            result = a3 + 10LL * v6;
            v49 = a3 + 22LL * v6;
            v50 = result - 10 - 10LL * (unsigned int)v6;
            do
            {
              if ( a5 )
              {
                v51 = *(_DWORD *)result;
                *(_WORD *)(result + 8) = __ROL2__(*(_WORD *)(result + 8), 8);
                *(_DWORD *)result = _byteswap_ulong(v51);
                *(_DWORD *)(result + 4) = _byteswap_ulong(*(_DWORD *)(result + 4));
              }
              v52 = *(_BYTE *)(result + 9);
              result -= 10;
              v49 -= 22;
              *(_BYTE *)(v49 + 36) = v52 & 0x3F;
              *(_BYTE *)(v49 + 37) = *(_BYTE *)(result + 19) >> 7;
              *(_WORD *)(v49 + 34) = *(unsigned __int8 *)(result + 18);
              *(_DWORD *)(v49 + 30) = *(_DWORD *)(result + 14);
              v53 = *(int *)(result + 10);
              *(_DWORD *)(v49 + 40) = 0;
              *(_QWORD *)(v49 + 22) = v53;
              *(_WORD *)(v49 + 38) = 0;
            }
            while ( result != v50 );
          }
        }
      }
      else
      {
        result = lread(a1, a3, 12LL * a4);
        if ( v6 >= 0 )
        {
          v54 = (unsigned int *)(a3 + 12LL * v6);
          result = a3 + 22LL * v6;
          do
          {
            v55 = *v54;
            v56 = *((_WORD *)v54 + 4);
            v57 = v54[1];
            --v8;
            *(_WORD *)(result + 16) = 0;
            v54 -= 3;
            *(_WORD *)(result + 12) = v56;
            result -= 22;
            *(_DWORD *)(result + 40) = 0;
            *(_WORD *)(result + 36) = 0;
            *(_DWORD *)(result + 30) = v57;
            *(_QWORD *)(result + 22) = v55;
          }
          while ( v8 != -1 );
        }
      }
    }
    else
    {
      result = lread(a1, a3, 12LL * a4);
      if ( v6 >= 0 )
      {
        v11 = a3 + 12LL * v6;
        result = a3 + 22LL * v6;
        do
        {
          v12 = *(_DWORD *)v11;
          v13 = *(_DWORD *)(v11 + 4);
          v14 = *(_WORD *)(v11 + 8);
          v15 = *(_WORD *)(v11 + 10);
          if ( a5 )
          {
            v14 = __ROL2__(v14, 8);
            v15 = __ROL2__(v15, 8);
            v12 = _byteswap_ulong(v12);
            v13 = _byteswap_ulong(v13);
          }
          *(_DWORD *)(result + 8) = v13;
          --v8;
          v11 -= 12;
          *(_DWORD *)(result + 18) = 0;
          result -= 22;
          *(_WORD *)(result + 38) = v14;
          *(_BYTE *)(result + 37) = 0;
          *(_BYTE *)(result + 36) = 0;
          *(_WORD *)(result + 34) = v15;
          *(_QWORD *)(result + 22) = v12;
        }
        while ( v8 != -1 );
      }
    }
  }
  else
  {
    result = lread(a1, a3, 16LL * a4);
    if ( v6 >= 0 )
    {
      v16 = (__int64 *)(a3 + 16LL * v6);
      result = a3 + 22LL * v6;
      do
      {
        v17 = *((_BYTE *)v16 + 13);
        v18 = *((unsigned __int8 *)v16 + 12);
        v19 = *v16;
        v20 = *((_BYTE *)v16 + 15) >> 2;
        v21 = *((_DWORD *)v16 + 2);
        *(_WORD *)(result + 16) = 0;
        *(_BYTE *)(result + 14) = v20;
        *(_WORD *)(result + 12) = v18;
        *(_BYTE *)(result + 15) = v17 & 1;
        *(_DWORD *)(result + 18) = (v17 >> 1) & 0x3F;
        *(_DWORD *)(result + 8) = v21;
        *(_QWORD *)result = v19;
        if ( (unsigned __int16)(v18 - 5) <= 1u )
        {
          *(_BYTE *)(result + 14) = v21;
          *(_DWORD *)(result + 8) = 14;
        }
        v16 -= 2;
        result -= 22;
      }
      while ( v16 != (__int64 *)(a3 + 16LL * v6 - 16 - 16LL * (unsigned int)v6) );
    }
  }
  return result;
}

