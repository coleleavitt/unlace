__int64 __fastcall sub_877F00(__int64 a1, _BYTE *a2, int *a3)
{
  int v3; // eax
  _BYTE *v5; // r12
  unsigned __int8 *v6; // rbp
  unsigned int v7; // r14d
  unsigned __int64 v8; // rax
  unsigned int v10; // eax
  unsigned int v11; // esi
  unsigned __int8 v12; // al
  unsigned __int8 v13; // cl
  unsigned int v14; // eax
  unsigned __int8 v15; // cl
  int v16; // eax
  unsigned __int8 *v17; // rcx
  unsigned int v18; // eax
  unsigned __int8 *i5; // rdx
  bool v20; // cc
  __int64 i4; // rax
  unsigned __int8 v22; // cl
  unsigned int *v23; // rdx
  unsigned int v24; // ecx
  unsigned int *jj; // rax
  __int64 v26; // rcx
  __int64 k; // rax
  __int64 v28; // rcx
  __int64 m; // rax
  __int64 v30; // rcx
  __int64 n; // rax
  __int64 v32; // rcx
  __int64 ii; // rax
  __int64 v34; // rcx
  __int64 i; // rax
  __int64 v36; // rcx
  __int64 j; // rax
  unsigned __int8 *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 kk; // rax
  __int64 v42; // rcx
  __int64 i3; // rax
  __int64 v44; // rcx
  __int64 mm; // rax
  __int64 v46; // rcx
  __int64 nn; // rax
  __int64 v48; // rcx
  __int64 i1; // rax
  __int64 v50; // rcx
  __int64 i2; // rax

  v3 = *a3 + 1;
  *a3 = v3;
  if ( v3 > 1000 )
    return 4;
  v5 = a2;
  if ( (unsigned __int8)(*a2 + 112) > 1u && (unsigned __int8)(*a2 + 117) > 1u )
  {
    v7 = 1;
LABEL_24:
    v6 = v5 + 3;
  }
  else
  {
    v6 = a2 + 5;
    v7 = 1;
  }
  v8 = *v6;
LABEL_6:
  while ( 2 )
  {
    switch ( v8 )
    {
      case 0uLL:
      case 1uLL:
      case 2uLL:
      case 3uLL:
      case 0xCuLL:
      case 0xDuLL:
      case 0xEuLL:
      case 0xFuLL:
      case 0x12uLL:
      case 0x14uLL:
      case 0x16uLL:
      case 0x17uLL:
      case 0x18uLL:
      case 0x19uLL:
      case 0x1AuLL:
      case 0x1CuLL:
      case 0x1FuLL:
      case 0x20uLL:
      case 0x3BuLL:
      case 0x3CuLL:
      case 0x3DuLL:
      case 0x3EuLL:
      case 0x3FuLL:
      case 0x40uLL:
      case 0x41uLL:
      case 0x42uLL:
      case 0x43uLL:
      case 0x44uLL:
      case 0x45uLL:
      case 0x46uLL:
      case 0x47uLL:
      case 0x48uLL:
      case 0x49uLL:
      case 0x4AuLL:
      case 0x4BuLL:
      case 0x4CuLL:
      case 0x4DuLL:
      case 0x4EuLL:
      case 0x4FuLL:
      case 0x50uLL:
      case 0x51uLL:
      case 0x52uLL:
      case 0x53uLL:
      case 0x54uLL:
      case 0x72uLL:
      case 0x73uLL:
      case 0x74uLL:
      case 0x75uLL:
      case 0x76uLL:
      case 0x7EuLL:
      case 0x7FuLL:
      case 0x8DuLL:
      case 0x92uLL:
      case 0x93uLL:
      case 0x94uLL:
      case 0x95uLL:
      case 0x96uLL:
      case 0x97uLL:
      case 0x98uLL:
      case 0x9CuLL:
      case 0x9DuLL:
      case 0x9EuLL:
      case 0x9FuLL:
      case 0xA0uLL:
      case 0xA1uLL:
      case 0xA2uLL:
      case 0xA3uLL:
      case 0xA4uLL:
      case 0xA5uLL:
      case 0xA6uLL:
      case 0xA7uLL:
      case 0xA8uLL:
        return 0;
      case 4uLL:
      case 5uLL:
      case 0x57uLL:
      case 0x58uLL:
      case 0x5FuLL:
      case 0xABuLL:
      case 0xACuLL:
        v8 = *++v6;
        continue;
      case 6uLL:
        v34 = *(_QWORD *)(a1 + 24);
        for ( i = 0; i != 32; ++i )
          *(_BYTE *)(a1 + i + 40) |= ~*(_BYTE *)(v34 + i + 576);
        goto LABEL_23;
      case 7uLL:
        v36 = *(_QWORD *)(a1 + 24);
        for ( j = 0; j != 32; ++j )
          *(_BYTE *)(a1 + j + 40) |= *(_BYTE *)(v36 + j + 576);
        goto LABEL_23;
      case 8uLL:
        v26 = *(_QWORD *)(a1 + 24);
        for ( k = 0; k != 32; ++k )
          *(_BYTE *)(a1 + k + 40) |= ~*(_BYTE *)(v26 + k + 512);
        goto LABEL_23;
      case 9uLL:
        v28 = *(_QWORD *)(a1 + 24);
        for ( m = 0; m != 32; ++m )
          *(_BYTE *)(a1 + m + 40) |= *(_BYTE *)(v28 + m + 512);
        goto LABEL_23;
      case 0xAuLL:
        v30 = *(_QWORD *)(a1 + 24);
        for ( n = 0; n != 32; ++n )
          *(_BYTE *)(a1 + n + 40) |= ~*(_BYTE *)(v30 + n + 672);
        goto LABEL_23;
      case 0xBuLL:
        v32 = *(_QWORD *)(a1 + 24);
        for ( ii = 0; ii != 32; ++ii )
          *(_BYTE *)(a1 + ii + 40) |= *(_BYTE *)(v32 + ii + 672);
        goto LABEL_23;
      case 0x10uLL:
        if ( v6[1] != 9 )
          return 0;
        v23 = (unsigned int *)((char *)&unk_239FA70 + 4 * v6[2]);
        v24 = *v23;
        for ( jj = v23 + 1; v24 != -1; ++jj )
        {
          if ( v24 > 0xFF )
            *(_BYTE *)(a1 + 71) |= 0x80u;
          else
            *(_BYTE *)(a1 + (v24 >> 3) + 40) |= 1 << (v24 & 7);
          v24 = *jj;
        }
        goto LABEL_23;
      case 0x11uLL:
      case 0x15uLL:
        *(_BYTE *)(a1 + 41) |= 0x3Cu;
        *(_BYTE *)(a1 + 56) |= 0x20u;
        goto LABEL_23;
      case 0x13uLL:
        *(_BYTE *)(a1 + 41) |= 2u;
        *(_BYTE *)(a1 + 44) |= 1u;
        *(_BYTE *)(a1 + 60) |= 1u;
        goto LABEL_23;
      case 0x1BuLL:
        v6 += byte_239F9C0[27];
        v8 = *v6;
        continue;
      case 0x1DuLL:
      case 0x23uLL:
      case 0x24uLL:
      case 0x2BuLL:
        goto LABEL_26;
      case 0x1EuLL:
      case 0x30uLL:
      case 0x31uLL:
      case 0x38uLL:
        goto LABEL_22;
      case 0x21uLL:
      case 0x22uLL:
      case 0x25uLL:
      case 0x26uLL:
      case 0x2AuLL:
      case 0x2CuLL:
        v13 = v6[1];
        v6 += 2;
        *(_BYTE *)(a1 + (v13 >> 3) + 40) |= 1 << (v13 & 7);
        v8 = *v6;
        continue;
      case 0x27uLL:
      case 0x28uLL:
      case 0x2DuLL:
        v15 = v6[3];
        v6 += 4;
        *(_BYTE *)(a1 + (v15 >> 3) + 40) |= 1 << (v15 & 7);
        v8 = *v6;
        continue;
      case 0x29uLL:
        v6 += 2;
LABEL_26:
        *(_BYTE *)(a1 + (v6[1] >> 3) + 40) |= 1 << (v6[1] & 7);
        goto LABEL_23;
      case 0x2EuLL:
      case 0x2FuLL:
      case 0x32uLL:
      case 0x33uLL:
      case 0x37uLL:
      case 0x39uLL:
        v14 = v6[1];
        v6 += 2;
        *(_BYTE *)(a1 + (v14 >> 3) + 40) |= 1 << (v14 & 7);
        LOBYTE(v14) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + v14 + 256);
        *(_BYTE *)(a1 + ((unsigned __int8)v14 >> 3) + 40) |= 1 << (v14 & 7);
        v8 = *v6;
        continue;
      case 0x34uLL:
      case 0x35uLL:
      case 0x3AuLL:
        v18 = v6[3];
        v6 += 4;
        *(_BYTE *)(a1 + (v18 >> 3) + 40) |= 1 << (v18 & 7);
        LOBYTE(v18) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + v18 + 256);
        *(_BYTE *)(a1 + ((unsigned __int8)v18 >> 3) + 40) |= 1 << (v18 & 7);
        v8 = *v6;
        continue;
      case 0x36uLL:
        v6 += 2;
LABEL_22:
        v11 = v6[1];
        *(_BYTE *)(a1 + (v11 >> 3) + 40) |= 1 << (v6[1] & 7);
        v12 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + v11 + 256);
        *(_BYTE *)(a1 + (v12 >> 3) + 40) |= 1 << (v12 & 7);
        goto LABEL_23;
      case 0x55uLL:
      case 0x56uLL:
      case 0x59uLL:
      case 0x5AuLL:
      case 0x5EuLL:
      case 0x60uLL:
        goto LABEL_20;
      case 0x5BuLL:
      case 0x5CuLL:
      case 0x61uLL:
        v6 += 2;
LABEL_20:
        switch ( v6[1] )
        {
          case 6u:
            v40 = *(_QWORD *)(a1 + 24);
            for ( kk = 0; kk != 32; ++kk )
              *(_BYTE *)(a1 + kk + 40) |= ~*(_BYTE *)(v40 + kk + 576);
            break;
          case 7u:
            v44 = *(_QWORD *)(a1 + 24);
            for ( mm = 0; mm != 32; ++mm )
              *(_BYTE *)(a1 + mm + 40) |= *(_BYTE *)(v44 + mm + 576);
            break;
          case 8u:
            v46 = *(_QWORD *)(a1 + 24);
            for ( nn = 0; nn != 32; ++nn )
              *(_BYTE *)(a1 + nn + 40) |= ~*(_BYTE *)(v46 + nn + 512);
            break;
          case 9u:
            v48 = *(_QWORD *)(a1 + 24);
            for ( i1 = 0; i1 != 32; ++i1 )
              *(_BYTE *)(a1 + i1 + 40) |= *(_BYTE *)(v48 + i1 + 512);
            break;
          case 0xAu:
            v50 = *(_QWORD *)(a1 + 24);
            for ( i2 = 0; i2 != 32; ++i2 )
              *(_BYTE *)(a1 + i2 + 40) |= ~*(_BYTE *)(v50 + i2 + 672);
            break;
          case 0xBu:
            v42 = *(_QWORD *)(a1 + 24);
            for ( i3 = 0; i3 != 32; ++i3 )
              *(_BYTE *)(a1 + i3 + 40) |= *(_BYTE *)(v42 + i3 + 672);
            break;
          case 0x11u:
          case 0x15u:
            *(_BYTE *)(a1 + 41) |= 0x3Cu;
            *(_BYTE *)(a1 + 56) |= 0x20u;
            break;
          case 0x13u:
            *(_BYTE *)(a1 + 41) |= 2u;
            *(_BYTE *)(a1 + 44) |= 1u;
            *(_BYTE *)(a1 + 60) |= 1u;
            break;
          default:
            return 0;
        }
        v8 = v6[2];
        v6 += 2;
        continue;
      case 0x5DuLL:
        goto LABEL_10;
      case 0x6EuLL:
      case 0x6FuLL:
        for ( i4 = 1; i4 != 33; ++i4 )
          *(_BYTE *)(a1 + i4 + 39) |= v6[i4];
        v22 = v6[33] - 98;
        if ( v22 > 0xBu )
          goto LABEL_23;
        if ( ((1LL << v22) & 0x533) != 0 )
        {
          v8 = v6[34];
          v6 += 34;
          continue;
        }
        if ( ((1LL << v22) & 0x8C0) != 0 && !*((_WORD *)v6 + 17) )
        {
          v8 = v6[38];
          v6 += 38;
          continue;
        }
LABEL_23:
        v5 += (unsigned __int16)__ROL2__(*(_WORD *)(v5 + 1), 8);
        if ( *v5 != 121 )
          return v7;
        goto LABEL_24;
      case 0x77uLL:
        v6 += byte_239F9C0[119];
        v8 = *v6;
        continue;
      case 0x78uLL:
        v6 += (unsigned __int16)__ROL2__(*(_WORD *)(v6 + 5), 8);
        v8 = *v6;
        continue;
      case 0x79uLL:
        v7 = 2;
        goto LABEL_23;
      case 0x7AuLL:
      case 0x7BuLL:
      case 0x7CuLL:
      case 0x7DuLL:
        return 2;
      case 0x80uLL:
      case 0x84uLL:
        for ( i5 = &v6[(unsigned __int16)__ROL2__(*(_WORD *)(v6 + 1), 8)];
              *i5 == 121;
              i5 += (unsigned __int16)__ROL2__(*(_WORD *)(i5 + 1), 8) )
        {
          ;
        }
LABEL_39:
        i5 += 3;
        while ( 2 )
        {
          v8 = *i5;
          v20 = (unsigned __int8)v8 <= 0x78u;
          if ( (_BYTE)v8 == 120 )
            goto LABEL_45;
LABEL_41:
          if ( v20 )
          {
            if ( (unsigned __int8)v8 <= 5u )
            {
              if ( (unsigned __int8)v8 > 3u )
              {
LABEL_92:
                ++i5;
                continue;
              }
            }
            else
            {
              if ( (_BYTE)v8 == 119 )
              {
                i5 += byte_239F9C0[119];
                v8 = *i5;
                v20 = (unsigned __int8)v8 <= 0x78u;
                if ( (_BYTE)v8 == 120 )
                {
LABEL_45:
                  i5 += (unsigned __int16)__ROL2__(*(_WORD *)(i5 + 5), 8);
                  continue;
                }
                goto LABEL_41;
              }
              if ( (unsigned __int8)v8 <= 0x38u )
              {
                v39 = 0x1430A18602A0FC0LL;
                if ( _bittest64(&v39, v8) )
                {
                  v6 = i5;
                  goto LABEL_6;
                }
                if ( (_BYTE)v8 == 16 && i5[1] == 9 )
                {
                  v6 = i5;
                  goto LABEL_6;
                }
              }
            }
          }
          else if ( (unsigned __int8)v8 > 0x86u )
          {
            if ( (unsigned __int8)(v8 + 85) <= 1u )
              goto LABEL_92;
          }
          else if ( (v8 & 0x80u) != 0LL )
          {
            do
              i5 += (unsigned __int16)__ROL2__(*(_WORD *)(i5 + 1), 8);
            while ( *i5 == 121 );
            goto LABEL_39;
          }
          break;
        }
LABEL_14:
        v10 = sub_877F00(a1, v6, a3);
        if ( v10 == 1 )
          goto LABEL_23;
        if ( v10 != 2 )
          return v10;
        do
          v6 += (unsigned __int16)__ROL2__(*(_WORD *)(v6 + 1), 8);
        while ( *v6 == 121 );
        v8 = v6[3];
        v6 += 3;
LABEL_11:
        if ( (unsigned __int8)v8 > 0xACu )
          return 3;
        continue;
      case 0x81uLL:
      case 0x82uLL:
      case 0x83uLL:
      case 0x85uLL:
      case 0x86uLL:
        do
          v6 += (unsigned __int16)__ROL2__(*(_WORD *)(v6 + 1), 8);
        while ( *v6 == 121 );
LABEL_10:
        v8 = v6[3];
        v6 += 3;
        goto LABEL_11;
      case 0x87uLL:
      case 0x88uLL:
      case 0x89uLL:
      case 0x8AuLL:
      case 0x8BuLL:
      case 0x8CuLL:
      case 0x8EuLL:
      case 0x8FuLL:
      case 0x90uLL:
      case 0x91uLL:
        goto LABEL_14;
      case 0x99uLL:
      case 0x9AuLL:
      case 0x9BuLL:
        v16 = sub_877F00(a1, v6 + 1, a3);
        if ( v16 == 3 )
          return 3;
        if ( v16 == 4 )
          return 4;
        v17 = v6 + 1;
        if ( v16 )
        {
          do
            v17 += (unsigned __int16)__ROL2__(*(_WORD *)(v17 + 1), 8);
          while ( *v17 == 121 );
          v8 = v17[3];
          v6 = v17 + 3;
          continue;
        }
        return 0;
      case 0xA9uLL:
        v38 = v6 + 1;
        do
          v38 += (unsigned __int16)__ROL2__(*(_WORD *)(v38 + 1), 8);
        while ( *v38 == 121 );
        v8 = v38[3];
        v6 = v38 + 3;
        continue;
      default:
        return 3;
    }
  }
}

