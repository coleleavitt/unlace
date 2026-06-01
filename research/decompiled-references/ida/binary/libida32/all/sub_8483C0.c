__int64 __fastcall sub_8483C0(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v4; // r13d
  unsigned __int64 v5; // rbx
  unsigned int *v6; // r14
  unsigned __int8 *v7; // r10
  __int64 v8; // r15
  unsigned __int64 v9; // r15
  __int64 v10; // r10
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // cl
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r9
  bool v16; // zf
  unsigned __int16 v17; // cx
  int v18; // ebp
  int v19; // edx
  _BYTE *v20; // rax
  int v21; // ebp
  __int64 v23; // r9
  unsigned __int16 v24; // cx
  int v25; // ebp
  int v26; // edx
  _BYTE *v27; // rax
  int v28; // ebp
  int v30; // [rsp+8h] [rbp-50h]
  __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  int v33; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+10h] [rbp-48h]
  int v36; // [rsp+18h] [rbp-40h]
  __int64 v37; // [rsp+18h] [rbp-40h]
  __int64 v38; // [rsp+18h] [rbp-40h]

  v4 = 8 * a4;
  v5 = (unsigned __int64)a2;
  v6 = *(unsigned int **)a1;
  memset(*(void **)(a1 + 48), 0, *(unsigned int *)(a1 + 136));
  v7 = a3;
  if ( !a3 )
  {
    v7 = a2;
    do
      v7 += (unsigned __int16)__ROL2__(*(_WORD *)(v7 + 1), 8);
    while ( *v7 == 121 );
    if ( *a2 != 0x8C && *a2 != 0x91 )
      v5 = sub_845640(a2);
  }
  v8 = v4;
  if ( v5 >= (unsigned __int64)v7 )
    return sub_847F60(v6, 32, 140, v8, 127, 0);
  v36 = 0;
  v30 = 0;
  v9 = (unsigned __int64)v7;
  v33 = 0;
  v10 = v4;
  while ( 1 )
  {
    v11 = *(_BYTE *)v5;
    if ( *(_BYTE *)v5 == 3 )
      break;
LABEL_5:
    v12 = v11 - 118;
    if ( v12 > 0x2Eu )
    {
LABEL_37:
      v5 = sub_845640((unsigned __int8 *)v5);
      if ( v5 >= v9 )
        goto LABEL_24;
    }
    else
    {
      v13 = 1LL << v12;
      if ( ((1LL << v12) & 0xC600000) != 0 )
      {
        v23 = *(int *)(a1 + 116);
        if ( (_DWORD)v23 && !v36 )
        {
          v37 = v10;
          sub_847F60(v6, 32, 1, 0, 142, v23);
          sub_847F60(v6, 32, 140, v37, 127, -*(_DWORD *)(a1 + 116));
          sub_847F60(v6, 32, 140, v4 - 8, 1, 0);
          v4 -= 16;
          v36 = 1;
          v10 = v4;
        }
        v24 = __ROL2__(*(_WORD *)(v5 + 3), 8);
        v25 = v24;
        v26 = 1 << (v24 & 7);
        v27 = (_BYTE *)(*(_QWORD *)(a1 + 48) + ((int)v24 >> 3));
        LOBYTE(v24) = *v27;
        *v27 |= v26;
        if ( ((unsigned __int8)v26 & (unsigned __int8)v24) == 0 )
        {
          v28 = 16 * v25;
          sub_847F60(v6, 32, 140, v10, 127, v28 + *(_DWORD *)(a1 + 76));
          sub_847F60(v6, 32, 1, 0, 142, v28 + *(_DWORD *)(a1 + 76));
          sub_847F60(v6, 32, 4, 0, 142, v28 + *(_DWORD *)(a1 + 76) + 8);
          sub_847F60(v6, 32, 140, v4 - 8, 1, 0);
          sub_847F60(v6, 32, 140, v4 - 16, 4, 0);
          v4 -= 24;
          v10 = v4;
        }
        v5 += 5LL;
        if ( v5 >= v9 )
          goto LABEL_24;
      }
      else if ( (v13 & 0x514000000000LL) != 0 )
      {
        if ( !v30 )
        {
          v31 = v10;
          sub_847F60(v6, 32, 1, 0, 142, *(int *)(a1 + 104));
          sub_847F60(v6, 32, 140, v31, 127, -*(_DWORD *)(a1 + 104));
          sub_847F60(v6, 32, 140, v4 - 8, 1, 0);
          v4 -= 16;
          v10 = v4;
        }
        v30 = 1;
        v5 += *(unsigned __int8 *)(v5 + 1) + 3LL;
        if ( v5 >= v9 )
          goto LABEL_24;
      }
      else
      {
        if ( (v13 & 1) == 0 )
          goto LABEL_37;
        if ( *(_DWORD *)(a1 + 180) && !v33 )
        {
          v35 = v10;
          sub_847F60(v6, 32, 1, 0, 142, *(int *)(a1 + 76));
          sub_847F60(v6, 32, 140, v35, 127, -*(_DWORD *)(a1 + 76));
          sub_847F60(v6, 32, 140, v4 - 8, 1, 0);
          v4 -= 16;
          v33 = 1;
          v10 = v4;
        }
        v14 = *(int *)(a1 + 104);
        if ( (_DWORD)v14 && !v30 )
        {
          v32 = v10;
          sub_847F60(v6, 32, 1, 0, 142, v14);
          sub_847F60(v6, 32, 140, v32, 127, -*(_DWORD *)(a1 + 104));
          sub_847F60(v6, 32, 140, v4 - 8, 1, 0);
          v4 -= 16;
          v30 = 1;
          v10 = v4;
        }
        v15 = *(int *)(a1 + 116);
        if ( (_DWORD)v15 && !v36 )
        {
          v38 = v10;
          sub_847F60(v6, 32, 1, 0, 142, v15);
          sub_847F60(v6, 32, 140, v38, 127, -*(_DWORD *)(a1 + 116));
          sub_847F60(v6, 32, 140, v4 - 8, 1, 0);
          v4 -= 16;
          v36 = 1;
          v10 = v4;
        }
        v16 = *(_BYTE *)(v5 + 3) == 0x93;
        v5 += 3LL;
        if ( v16 )
        {
          do
          {
            while ( 1 )
            {
              v17 = __ROL2__(*(_WORD *)(v5 + 1), 8);
              v18 = v17;
              v19 = 1 << (v17 & 7);
              v20 = (_BYTE *)(*(_QWORD *)(a1 + 48) + ((int)v17 >> 3));
              LOBYTE(v17) = *v20;
              *v20 |= v19;
              if ( ((unsigned __int8)v19 & (unsigned __int8)v17) == 0 )
                break;
              v5 += 3LL;
              if ( *(_BYTE *)v5 != 0x93 )
                goto LABEL_23;
            }
            v21 = 16 * v18;
            v5 += 3LL;
            sub_847F60(v6, 32, 140, v10, 127, v21 + *(_DWORD *)(a1 + 76));
            sub_847F60(v6, 32, 1, 0, 142, v21 + *(_DWORD *)(a1 + 76));
            sub_847F60(v6, 32, 4, 0, 142, v21 + *(_DWORD *)(a1 + 76) + 8);
            sub_847F60(v6, 32, 140, v4 - 8, 1, 0);
            sub_847F60(v6, 32, 140, v4 - 16, 4, 0);
            v4 -= 24;
            v10 = v4;
          }
          while ( *(_BYTE *)v5 == 0x93 );
        }
LABEL_23:
        if ( v5 >= v9 )
          goto LABEL_24;
      }
    }
  }
  if ( !v33 )
  {
    v34 = v10;
    sub_847F60(v6, 32, 1, 0, 142, *(int *)(a1 + 76));
    sub_847F60(v6, 32, 140, v34, 127, -*(_DWORD *)(a1 + 76));
    sub_847F60(v6, 32, 140, v4 - 8, 1, 0);
    v4 -= 16;
    v10 = v4;
  }
  while ( ++v5 < v9 )
  {
    v11 = *(_BYTE *)v5;
    if ( *(_BYTE *)v5 != 3 )
    {
      v33 = 1;
      goto LABEL_5;
    }
  }
LABEL_24:
  v8 = v10;
  return sub_847F60(v6, 32, 140, v8, 127, 0);
}

