__int64 __fastcall sub_77A180(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  char v4; // bp
  unsigned __int8 v5; // r15
  char v6; // r13
  __int64 *v7; // r12
  __int64 v8; // rbx
  char v9; // al
  _QWORD *v10; // rax
  unsigned __int8 v12; // al
  unsigned __int8 v13; // di
  unsigned __int8 v14; // si
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // al
  __int64 v17; // rax
  __int64 v18; // r10
  unsigned __int8 v19; // di
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al
  unsigned __int8 v22; // si
  unsigned __int8 v23; // dl
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  unsigned __int8 v27; // r10
  unsigned __int8 v28; // di
  unsigned __int8 v29; // si
  unsigned __int8 v30; // al
  char v31; // al
  char v32; // dl
  bool v33; // si
  char v34; // al
  __int64 v36; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+10h] [rbp-58h]
  unsigned __int8 v39; // [rsp+1Fh] [rbp-49h]
  unsigned __int8 v40[57]; // [rsp+2Fh] [rbp-39h] BYREF

  v3 = a2 + (unsigned int)(8 * *(_DWORD *)(a2 + 20)) + 24;
  if ( 8 * *(_DWORD *)(a2 + 20) )
  {
    v4 = 0;
    v5 = 2;
    v6 = 6;
    v7 = (__int64 *)(a2 + 24);
    while ( 1 )
    {
      v8 = *v7;
      v9 = *(_BYTE *)(*v7 + 28) & 0x7F;
      if ( v9 != 65 )
      {
        if ( v9 != 45 )
        {
          if ( (*(_BYTE *)(v8 + 80) & 4) == 0 )
          {
            v12 = sub_77A180(a1, *(_QWORD *)(v8 + 56), a3);
            v13 = v6;
            v14 = v12 & 7;
            v15 = (v12 >> 3) & 3;
            if ( (v12 & 7) == 4 )
            {
              v14 = v6;
            }
            else if ( v6 != 4 )
            {
              goto LABEL_12;
            }
            v6 = 1;
            if ( (unsigned __int8)(v14 - 2) > 1u )
            {
              v13 = 4;
LABEL_12:
              if ( v14 <= v13 )
                v13 = v14;
              v6 = v13 & 7;
            }
            if ( v5 >= v15 )
            {
              v16 = v12 & 0x20;
              if ( v5 != v15 || (v5 = v15, v16) )
              {
                v5 = v15;
                v4 = v16 >> 5;
              }
            }
            goto LABEL_7;
          }
          v17 = *(unsigned int *)(v8 + 84);
          if ( !(_DWORD)v17 )
            goto LABEL_7;
          v18 = v8 + 8 * v17;
          while ( 2 )
          {
            v36 = v18;
            v21 = sub_77A180(a1, *(_QWORD *)(v8 + 88), a3);
            v18 = v36;
            v19 = v6;
            v22 = v21 & 7;
            v23 = (v21 >> 3) & 3;
            if ( (v21 & 7) == 4 )
            {
              v22 = v6;
LABEL_31:
              v6 = 1;
              if ( (unsigned __int8)(v22 - 2) > 1u )
              {
                v19 = 4;
                goto LABEL_21;
              }
            }
            else
            {
              if ( v6 == 4 )
                goto LABEL_31;
LABEL_21:
              if ( v22 <= v19 )
                v19 = v22;
              v6 = v19 & 7;
            }
            if ( v5 >= v23 )
            {
              v20 = v21 & 0x20;
              if ( v5 != v23 || (v5 = v23, v20) )
              {
                v5 = v23;
                v4 = v20 >> 5;
              }
            }
            v8 += 8;
            if ( v8 == v36 )
              goto LABEL_7;
            continue;
          }
        }
        if ( !*(_BYTE *)(v8 + 81) )
        {
          v10 = (_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(*v10 + 17LL) & 4) == 0 )
          {
            if ( (a3 & 4) != 0 )
            {
              v34 = sub_B15EF0(*v10);
              v33 = 1;
              v32 = 2;
              v31 = v34 & 7;
            }
            else
            {
              v39 = sub_B16640(a1);
              v31 = v39 & 7;
              v32 = (v39 >> 3) & 3;
              v33 = (v39 & 0x20) != 0;
            }
            v39 = v39 & 0xC0 | ((32 * v33) | v31 | (8 * v32)) & 0x3F;
            v40[0] = (32 * (v4 & 1)) | (8 * (v5 & 3)) & 0xDF | v6 & 7 | v40[0] & 0xC0;
            sub_779E00(v40, v39);
            v6 = v40[0] & 7;
            v4 = (v40[0] & 0x20) != 0;
            v5 = (v40[0] >> 3) & 3;
          }
          goto LABEL_7;
        }
        v24 = *(unsigned int *)(v8 + 84);
        if ( (_DWORD)v24 )
        {
          v25 = v8 + 16 * v24;
          while ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 88) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
          {
LABEL_38:
            v8 += 16;
            if ( v25 == v8 )
              goto LABEL_7;
          }
          v37 = v25;
          v26 = sub_B16640(a1);
          v25 = v37;
          v27 = v6;
          v28 = v26 & 7;
          v29 = (v26 >> 3) & 3;
          if ( (v26 & 7) == 4 )
          {
            v28 = v6;
          }
          else if ( v6 != 4 )
          {
            goto LABEL_42;
          }
          v6 = 1;
          if ( (unsigned __int8)(v28 - 2) > 1u )
          {
            v27 = 4;
LABEL_42:
            if ( v28 <= v27 )
              v27 = v28;
            v6 = v27 & 7;
          }
          if ( v5 >= v29 )
          {
            v30 = v26 & 0x20;
            if ( v5 != v29 || (v5 = v29, v30) )
            {
              v5 = v29;
              v4 = v30 >> 5;
            }
          }
          goto LABEL_38;
        }
      }
LABEL_7:
      if ( (__int64 *)v3 == ++v7 )
        return v40[0] & 0xC0 | ((unsigned __int8)(32 * v4) | (unsigned __int8)(v6 | (8 * v5))) & 0x3Fu;
    }
  }
  v4 = 0;
  v5 = 2;
  v6 = 6;
  return v40[0] & 0xC0 | ((unsigned __int8)(32 * v4) | (unsigned __int8)(v6 | (8 * v5))) & 0x3Fu;
}

