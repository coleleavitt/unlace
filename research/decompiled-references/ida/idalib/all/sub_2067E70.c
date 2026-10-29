__int64 __fastcall sub_2067E70(__int64 a1, __int64 a2, char a3)
{
  char v4; // bp
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // r13d
  unsigned int v8; // r10d
  __int64 v9; // r8
  _DWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int *v19; // rcx
  __int64 result; // rax
  _DWORD *v21; // rdi
  unsigned int v22; // edx
  _DWORD *v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int *v27; // rsi
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // rax
  _DWORD *v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int *v35; // rsi
  unsigned int v36; // esi
  __int64 v37; // r8
  _DWORD *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int *v41; // rcx
  unsigned __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // r14
  char v46; // r13
  _DWORD *v47; // r8
  unsigned int v48; // esi
  _DWORD *v49; // rdi
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int *v53; // rcx
  __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rdx
  _DWORD *v57; // r8
  unsigned int v58; // esi
  _DWORD *v59; // rdi
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned int *v63; // rcx
  __int64 v64; // rbp
  __int64 v65; // r13
  char v66; // bp

  while ( 2 )
  {
    v4 = a3;
    v5 = a2;
    v6 = *(unsigned __int8 *)(a2 + 8);
    switch ( *(_BYTE *)(a2 + 8) )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        while ( 2 )
        {
          switch ( v6 )
          {
            case 0LL:
            case 1LL:
              v36 = 16;
              goto LABEL_56;
            case 2LL:
              v36 = 32;
              goto LABEL_56;
            case 3LL:
              v36 = 64;
              goto LABEL_56;
            case 4LL:
              v36 = 80;
              goto LABEL_56;
            case 5LL:
            case 6LL:
              v36 = 128;
              goto LABEL_56;
            case 7LL:
            case 9LL:
            case 11LL:
            case 13LL:
            case 19LL:
            case 20LL:
              v5 = sub_20C5D00(v5);
              v6 = *(unsigned __int8 *)(v5 + 8);
              continue;
            case 8LL:
              v36 = *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4LL);
              goto LABEL_56;
            case 10LL:
              v36 = 0x2000;
              goto LABEL_56;
            case 12LL:
              v36 = *(_DWORD *)(v5 + 8) >> 8;
              goto LABEL_56;
            case 14LL:
              v47 = *(_DWORD **)(a1 + 272);
              v48 = *(_DWORD *)(v5 + 8) >> 8;
              if ( !v48 )
                goto LABEL_81;
              v49 = *(_DWORD **)(a1 + 272);
              v50 = 5LL * *(unsigned int *)(a1 + 280);
              v51 = *(unsigned int *)(a1 + 280);
              if ( !(v50 * 4) )
                goto LABEL_78;
              break;
            case 15LL:
              v36 = 8 * *(_QWORD *)sub_2069970(a1, v5);
              goto LABEL_56;
            case 16LL:
              v45 = *(_QWORD *)(v5 + 24);
              v46 = sub_2067E70(a1, v45, 1);
              v36 = 8
                  * *(_DWORD *)(v5 + 32)
                  * (((1LL << v46) + ((unsigned __int64)(sub_200E290(a1, v45) + 7) >> 3) - 1) >> v46 << v46);
              goto LABEL_56;
            case 17LL:
            case 18LL:
              sub_200E290(a1, *(_QWORD *)(v5 + 24));
              JUMPOUT(0x20683C4);
          }
          break;
        }
        do
        {
          while ( 1 )
          {
            v52 = v51 >> 1;
            v53 = &v49[5 * (v51 >> 1)];
            if ( v48 <= *v53 )
              break;
            v49 = v53 + 5;
            v51 = v51 - v52 - 1;
            if ( v51 <= 0 )
              goto LABEL_78;
          }
          v51 >>= 1;
        }
        while ( v52 );
LABEL_78:
        if ( v49 != &v47[v50] && v48 == *v49 )
          v47 = v49;
LABEL_81:
        v36 = v47[1];
LABEL_56:
        v37 = 8LL * *(unsigned int *)(a1 + 136);
        v38 = *(_DWORD **)(a1 + 128);
        v39 = v37 >> 3;
        if ( v37 )
        {
          do
          {
            while ( 1 )
            {
              v40 = v39 >> 1;
              v41 = &v38[2 * (v39 >> 1)];
              if ( *v41 >= v36 )
                break;
              v38 = v41 + 2;
              v39 = v39 - v40 - 1;
              if ( v39 <= 0 )
                goto LABEL_59;
            }
            v39 >>= 1;
          }
          while ( v40 );
        }
LABEL_59:
        if ( v38 != (_DWORD *)(*(_QWORD *)(a1 + 128) + v37) && *v38 == v36 )
        {
          if ( v4 )
            return *((unsigned __int8 *)v38 + 4);
          else
            return *((unsigned __int8 *)v38 + 5);
        }
        else
        {
          result = 0xFFFFFFFFLL;
          if ( v36 > 7 )
          {
            result = 0;
            v42 = (v36 >> 3) - 1LL;
            if ( v42 )
            {
              _BitScanReverse64((unsigned __int64 *)&v43, v42);
              goto LABEL_64;
            }
          }
        }
        return result;
      case 7:
      case 9:
      case 0xB:
      case 0xD:
      case 0x13:
      case 0x14:
        v14 = sub_20C5D00(a2);
        a3 = v4;
        a2 = v14;
        continue;
      case 8:
        v30 = *(_QWORD *)(a1 + 272);
        if ( a3 )
          return *(unsigned __int8 *)(v30 + 8);
        else
          return *(unsigned __int8 *)(v30 + 9);
      case 0xA:
        return 6;
      case 0xC:
        v15 = 8LL * *(unsigned int *)(a1 + 72);
        v16 = *(_DWORD *)(a2 + 8) >> 8;
        v10 = *(_DWORD **)(a1 + 64);
        v17 = (8LL * *(unsigned int *)(a1 + 72)) >> 3;
        if ( !v15 )
          goto LABEL_15;
        do
        {
          while ( 1 )
          {
            v18 = v17 >> 1;
            v19 = &v10[2 * (v17 >> 1)];
            if ( v16 <= *v19 )
              break;
            v10 = v19 + 2;
            v17 = v17 - v18 - 1;
            if ( v17 <= 0 )
              goto LABEL_15;
          }
          v17 >>= 1;
        }
        while ( v18 );
LABEL_15:
        if ( v10 == (_DWORD *)(*(_QWORD *)(a1 + 64) + v15) )
          v10 -= 2;
        if ( v4 )
          return *((unsigned __int8 *)v10 + 4);
        return *((unsigned __int8 *)v10 + 5);
      case 0xE:
        v21 = *(_DWORD **)(a1 + 272);
        v22 = *(_DWORD *)(a2 + 8) >> 8;
        if ( v4 )
        {
          if ( v22 )
          {
            v23 = v21;
            v24 = 5LL * *(unsigned int *)(a1 + 280);
            v25 = *(unsigned int *)(a1 + 280);
            if ( v24 * 4 )
            {
              do
              {
                while ( 1 )
                {
                  v26 = v25 >> 1;
                  v27 = &v23[5 * (v25 >> 1)];
                  if ( v22 <= *v27 )
                    break;
                  v23 = v27 + 5;
                  v25 = v25 - v26 - 1;
                  if ( v25 <= 0 )
                    goto LABEL_24;
                }
                v25 >>= 1;
              }
              while ( v26 );
            }
LABEL_24:
            if ( v23 != &v21[v24] && v22 == *v23 )
              v21 = v23;
          }
          return *((unsigned __int8 *)v21 + 8);
        }
        if ( !v22 )
          return *((unsigned __int8 *)v21 + 9);
        v31 = v21;
        v32 = 5LL * *(unsigned int *)(a1 + 280);
        v33 = *(unsigned int *)(a1 + 280);
        if ( !(v32 * 4) )
          goto LABEL_50;
        do
        {
          while ( 1 )
          {
            v34 = v33 >> 1;
            v35 = &v31[5 * (v33 >> 1)];
            if ( v22 <= *v35 )
              break;
            v31 = v35 + 5;
            v33 = v33 - v34 - 1;
            if ( v33 <= 0 )
              goto LABEL_50;
          }
          v33 >>= 1;
        }
        while ( v34 );
LABEL_50:
        if ( v31 != &v21[v32] && v22 == *v31 )
          v21 = v31;
        return *((unsigned __int8 *)v21 + 9);
      case 0xF:
        if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
        {
          result = 0;
          if ( a3 )
            return result;
          v28 = sub_2069970(a1, a2);
          goto LABEL_31;
        }
        v28 = sub_2069970(a1, a2);
        if ( !v4 )
        {
LABEL_31:
          v29 = *(unsigned __int8 *)(a1 + 481);
          goto LABEL_32;
        }
        v29 = *(unsigned __int8 *)(a1 + 480);
LABEL_32:
        result = *(unsigned __int8 *)(v28 + 16);
        if ( (unsigned __int8)result <= (unsigned __int8)v29 )
          return v29;
        return result;
      case 0x10:
        a2 = *(_QWORD *)(a2 + 24);
        continue;
      case 0x11:
      case 0x12:
        v7 = *(_DWORD *)(a2 + 32);
        v8 = v7 * sub_200E290(a1, *(_QWORD *)(a2 + 24));
        v9 = 8LL * *(unsigned int *)(a1 + 184);
        v10 = *(_DWORD **)(a1 + 176);
        v11 = v9 >> 3;
        if ( !v9 )
          goto LABEL_6;
        do
        {
          while ( 1 )
          {
            v12 = v11 >> 1;
            v13 = &v10[2 * (v11 >> 1)];
            if ( v8 <= *v13 )
              break;
            v10 = v13 + 2;
            v11 = v11 - v12 - 1;
            if ( v11 <= 0 )
              goto LABEL_6;
          }
          v11 >>= 1;
        }
        while ( v12 );
LABEL_6:
        if ( v10 != (_DWORD *)(*(_QWORD *)(a1 + 176) + v9) && *v10 == v8 )
        {
          if ( v4 )
            return *((unsigned __int8 *)v10 + 4);
          else
            return *((unsigned __int8 *)v10 + 5);
        }
        else
        {
          while ( 2 )
          {
            switch ( *(_BYTE *)(v5 + 8) )
            {
              case 0:
              case 1:
                v56 = 1;
                goto LABEL_89;
              case 2:
                v56 = 3;
                goto LABEL_89;
              case 3:
                v56 = 7;
                goto LABEL_89;
              case 4:
                v56 = 9;
                goto LABEL_89;
              case 5:
              case 6:
                v56 = 15;
                goto LABEL_89;
              case 8:
                v54 = *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4LL);
                goto LABEL_87;
              case 0xA:
                v56 = 1023;
                goto LABEL_89;
              case 0xC:
                v54 = *(_DWORD *)(v5 + 8) >> 8;
                goto LABEL_87;
              case 0xE:
                v57 = *(_DWORD **)(a1 + 272);
                v58 = *(_DWORD *)(v5 + 8) >> 8;
                if ( !v58 )
                  goto LABEL_103;
                v59 = *(_DWORD **)(a1 + 272);
                v60 = 5LL * *(unsigned int *)(a1 + 280);
                v61 = *(unsigned int *)(a1 + 280);
                if ( !(v60 * 4) )
                  goto LABEL_100;
                break;
              case 0xF:
                v54 = 8LL * *(_QWORD *)sub_2069970(a1, v5);
                goto LABEL_87;
              case 0x10:
                v65 = *(_QWORD *)(v5 + 24);
                v66 = sub_2067E70(a1, v65, 1);
                v54 = 8
                    * *(_QWORD *)(v5 + 32)
                    * (((1LL << v66) + ((unsigned __int64)(sub_200E290(a1, v65) + 7) >> 3) - 1) >> v66 << v66);
                goto LABEL_87;
              case 0x11:
              case 0x12:
                v64 = *(unsigned int *)(v5 + 32);
                v54 = v64 * sub_200E290(a1, *(_QWORD *)(v5 + 24));
                goto LABEL_87;
              case 0x14:
                v5 = sub_20C5D00(v5);
                continue;
              default:
                ++*(_DWORD *)(v5 + 8);
                BUG();
            }
            break;
          }
          do
          {
            while ( 1 )
            {
              v62 = v61 >> 1;
              v63 = &v59[5 * (v61 >> 1)];
              if ( v58 <= *v63 )
                break;
              v59 = v63 + 5;
              v61 = v61 - v62 - 1;
              if ( v61 <= 0 )
                goto LABEL_100;
            }
            v61 >>= 1;
          }
          while ( v62 );
LABEL_100:
          if ( v59 != &v57[v60] && v58 == *v59 )
            v57 = v59;
LABEL_103:
          v54 = (unsigned int)v57[1];
LABEL_87:
          result = 0xFFFFFFFFLL;
          v55 = (unsigned __int64)(v54 + 7) >> 3;
          if ( v55 )
          {
            result = 0;
            v56 = v55 - 1;
            if ( v56 )
            {
LABEL_89:
              _BitScanReverse64((unsigned __int64 *)&v43, v56);
LABEL_64:
              _BitScanReverse64(&v44, 1LL << (64 - ((unsigned __int8)v43 ^ 0x3Fu)));
              return 63 - ((unsigned int)v44 ^ 0x3F);
            }
          }
        }
        return result;
    }
  }
}
