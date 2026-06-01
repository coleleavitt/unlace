/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047080
// Address: 0x0000000100047080

//----- (0000000100047080) ----------------------------------------------------
__int64 __fastcall sub_100047080(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r12d
  __int64 result; // rax
  int v6; // r15d
  _BYTE *v7; // rcx
  unsigned __int8 *v8; // rax
  __int64 v9; // r14
  _BYTE *v10; // rax
  __int64 v11; // r14
  _BYTE *v12; // rax
  __int64 v13; // r14
  _BYTE *v14; // rax
  __int64 v15; // r14
  _BYTE *v16; // rax
  _QWORD *v17; // rdi
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int128 v21; // xmm0
  _BYTE *v22; // rax
  char *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned int v28; // ebx
  _BYTE *v29; // [rsp+0h] [rbp-70h]
  char v30; // [rsp+8h] [rbp-68h]
  _QWORD *v31; // [rsp+10h] [rbp-60h]
  int v32; // [rsp+1Ch] [rbp-54h]
  _OWORD v33[2]; // [rsp+20h] [rbp-50h] BYREF

  v31 = (_QWORD *)a2;
  memset(v33, 0, 24);
  v29 = (_BYTE *)a3;
  *(_BYTE *)a3 = 1;
  v30 = 0;
  while ( 1 )
  {
    v32 = 0;
    v4 = 0;
LABEL_4:
    result = sub_1000462B0(a1, a2, a3);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 34 )
        result = set_qerrno();
      goto LABEL_66;
    }
    v6 = v4;
    if ( (v30 & 1) != 0 )
      break;
    v22 = *(_BYTE **)(a1 + 8);
    if ( *v22 != 40 )
    {
      *v29 = 0;
      goto LABEL_65;
    }
    *(_QWORD *)(a1 + 8) = v22 + 1;
    v30 = 1;
    if ( v22[1] == 41 )
    {
      *(_QWORD *)(a1 + 8) = v22 + 2;
      goto LABEL_65;
    }
  }
LABEL_8:
  v7 = *(_BYTE **)(a1 + 8);
  while ( 2 )
  {
    a3 = (unsigned __int8)*v7++;
    a2 = 0;
    switch ( *(v7 - 1) )
    {
      case 0:
        goto LABEL_48;
      case 9:
      case 0xA:
      case 0x20:
        if ( (v6 & 1) != 0 )
        {
          *(_QWORD *)(a1 + 8) = v7;
          continue;
        }
        LOBYTE(a2) = 1;
LABEL_13:
        v8 = v7 - 1;
        v6 = a2;
        goto LABEL_44;
      case 0x22:
        v8 = v7 - 1;
        while ( 2 )
        {
          if ( (_BYTE)a3 )
          {
            *(_QWORD *)(a1 + 8) = v8 + 1;
            v4 = *v8;
            v9 = 0;
            if ( *((_QWORD *)&v33[0] + 1) )
              v9 = *((_QWORD *)&v33[0] + 1) - 1LL;
            v10 = *(_BYTE **)&v33[0];
            if ( *(_QWORD *)&v33[1] < (unsigned __int64)(v9 + 2) )
            {
              a2 = *(_QWORD *)&v33[0];
              v10 = qvector_reserve((__int64)v33, *(void **)&v33[0], v9 + 2, 1u);
              *(_QWORD *)&v33[0] = v10;
            }
            *((_QWORD *)&v33[0] + 1) = v9 + 2;
            v10[v9] = v4;
            *(_BYTE *)(*(_QWORD *)&v33[0] + v9 + 1) = 0;
            v8 = *(unsigned __int8 **)(a1 + 8);
            if ( (_BYTE)v4 == 92 )
            {
              v4 = *v8;
              if ( (_BYTE)v4 )
              {
                v11 = 0;
                if ( *((_QWORD *)&v33[0] + 1) )
                  v11 = *((_QWORD *)&v33[0] + 1) - 1LL;
                v12 = *(_BYTE **)&v33[0];
                if ( *(_QWORD *)&v33[1] < (unsigned __int64)(v11 + 2) )
                {
                  a2 = *(_QWORD *)&v33[0];
                  v12 = qvector_reserve((__int64)v33, *(void **)&v33[0], v11 + 2, 1u);
                  *(_QWORD *)&v33[0] = v12;
                }
                *((_QWORD *)&v33[0] + 1) = v11 + 2;
                v12[v11] = v4;
                *(_BYTE *)(*(_QWORD *)&v33[0] + v11 + 1) = 0;
                v8 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL);
                *(_QWORD *)(a1 + 8) = v8;
                goto LABEL_29;
              }
              a3 = 0;
            }
            else
            {
LABEL_29:
              a3 = *v8;
            }
            if ( (_BYTE)a3 == 34 )
              goto LABEL_44;
            continue;
          }
          break;
        }
LABEL_48:
        v15 = 0;
        if ( *((_QWORD *)&v33[0] + 1) )
          v15 = *((_QWORD *)&v33[0] + 1) - 1LL;
        v16 = *(_BYTE **)&v33[0];
        if ( *(_QWORD *)&v33[1] < (unsigned __int64)(v15 + 2) )
        {
          a2 = *(_QWORD *)&v33[0];
          v16 = qvector_reserve((__int64)v33, *(void **)&v33[0], v15 + 2, 1u);
          *(_QWORD *)&v33[0] = v16;
        }
        *((_QWORD *)&v33[0] + 1) = v15 + 2;
        v16[v15] = 32;
        *(_BYTE *)(*(_QWORD *)&v33[0] + v15 + 1) = 0;
        LOBYTE(v4) = 1;
        goto LABEL_4;
      case 0x28:
        if ( (*(_BYTE *)(a1 + 572) & 2) == 0 || *v7 != 42 )
        {
          ++v32;
          v8 = v7 - 1;
          goto LABEL_44;
        }
        v4 = v6;
        goto LABEL_4;
      case 0x29:
        if ( v32 )
        {
          --v32;
          v8 = v7 - 1;
LABEL_44:
          *(_QWORD *)(a1 + 8) = v8 + 1;
          v4 = *v8;
          v13 = 0;
          if ( *((_QWORD *)&v33[0] + 1) )
            v13 = *((_QWORD *)&v33[0] + 1) - 1LL;
          v14 = *(_BYTE **)&v33[0];
          if ( *(_QWORD *)&v33[1] < (unsigned __int64)(v13 + 2) )
          {
            v14 = qvector_reserve((__int64)v33, *(void **)&v33[0], v13 + 2, 1u);
            *(_QWORD *)&v33[0] = v14;
          }
          *((_QWORD *)&v33[0] + 1) = v13 + 2;
          v14[v13] = v4;
          *(_BYTE *)(*(_QWORD *)&v33[0] + v13 + 1) = 0;
          goto LABEL_8;
        }
        v23 = (char *)*v31;
        v24 = v31[1];
        if ( v31[2] < (unsigned __int64)(v24 + 1) )
        {
          v23 = (char *)qvector_reserve((__int64)v31, v23, v24 + 1, 0x18u);
          *v31 = v23;
          v24 = v31[1];
        }
        v25 = 3 * v24;
        *(_OWORD *)&v23[8 * v25] = 0;
        *(_QWORD *)&v23[8 * v25 + 16] = 0;
        ++v31[1];
        v26 = *(_QWORD *)&v23[8 * v25];
        v27 = *(_QWORD *)&v23[8 * v25 + 16];
        *(_OWORD *)&v23[8 * v25] = v33[0];
        *(_QWORD *)&v23[8 * v25 + 16] = *(_QWORD *)&v33[1];
        *(_QWORD *)&v33[0] = v26;
        *(_QWORD *)&v33[1] = v27;
        ++*(_QWORD *)(a1 + 8);
LABEL_65:
        result = 0;
LABEL_66:
        if ( *(_QWORD *)&v33[0] )
        {
          *((_QWORD *)&v33[0] + 1) = 0;
          v28 = result;
          qfree(*(void **)&v33[0]);
          return v28;
        }
        return result;
      case 0x2C:
        if ( v32 )
        {
          v8 = v7 - 1;
          goto LABEL_44;
        }
        v17 = v31;
        v18 = (char *)*v31;
        v19 = v31[1];
        if ( v31[2] < (unsigned __int64)(v19 + 1) )
        {
          v18 = (char *)qvector_reserve((__int64)v31, v18, v19 + 1, 0x18u);
          v17 = v31;
          *v31 = v18;
          v19 = v31[1];
        }
        v20 = 3 * v19;
        *(_OWORD *)&v18[8 * v20] = 0;
        *(_QWORD *)&v18[8 * v20 + 16] = 0;
        ++v17[1];
        a3 = *(_QWORD *)&v18[8 * v20];
        *(_QWORD *)&v18[8 * v20] = *(_QWORD *)&v33[0];
        v21 = *(_OWORD *)&v18[8 * v20 + 8];
        *(_QWORD *)&v18[8 * v20 + 8] = *((_QWORD *)&v33[0] + 1);
        a2 = *(_QWORD *)&v33[1];
        *(_QWORD *)&v18[8 * v20 + 16] = *(_QWORD *)&v33[1];
        *(_QWORD *)&v33[0] = a3;
        *(_OWORD *)((char *)v33 + 8) = v21;
        ++*(_QWORD *)(a1 + 8);
        v32 = 0;
        v4 = v6;
        goto LABEL_4;
      case 0x2F:
        a3 = *(unsigned int *)(a1 + 572);
        if ( (a3 & 1) != 0 && *v7 == 42 )
        {
          v4 = v6;
          goto LABEL_4;
        }
        v8 = v7 - 1;
        if ( (a3 & 4) != 0 )
        {
          v4 = v6;
          v6 = 0;
          if ( *v7 == 47 )
            goto LABEL_4;
        }
        else
        {
          v6 = 0;
        }
        goto LABEL_44;
      case 0x3B:
        v4 = v6;
        v8 = v7 - 1;
        v6 = 0;
        if ( (*(_BYTE *)(a1 + 572) & 8) != 0 )
          goto LABEL_4;
        goto LABEL_44;
      default:
        goto LABEL_13;
    }
  }
}
// 1000470E9: variable 'a3' is possibly undefined
