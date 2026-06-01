__int64 __fastcall sub_845A00(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4, _DWORD *a5)
{
  unsigned __int8 *v9; // rbx
  int v10; // edx
  int v11; // edi
  int v12; // r9d
  int v13; // r8d
  unsigned __int8 *v14; // rdi
  __int64 v15; // rbx
  int v16; // r11d
  int v17; // r12d
  unsigned __int64 v18; // r10
  int v19; // ebp
  __int64 v20; // rcx
  int v21; // eax
  char v22; // cl
  __int64 result; // rax
  bool v24; // zf
  unsigned __int16 v25; // ax
  char v26; // cl
  unsigned __int8 *v27; // rax
  int v28; // edx
  unsigned __int8 v29; // cl
  unsigned __int16 v30; // ax
  char v31; // cl
  unsigned __int8 *v32; // rax
  int v33; // edx
  unsigned __int8 v34; // cl
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  int v38; // [rsp+Ch] [rbp-3Ch]

  v9 = a2;
  *a5 = 0;
  memset(*(void **)(a1 + 48), 0, *(unsigned int *)(a1 + 136));
  if ( !a3 )
  {
    a3 = a2;
    do
      a3 += (unsigned __int16)__ROL2__(*(_WORD *)(a3 + 1), 8);
    while ( *a3 == 121 );
    v37 = sub_845640(a2);
    if ( a4 )
    {
      v9 = (unsigned __int8 *)v37;
      v10 = 0;
      v11 = 0;
      if ( v37 < (unsigned __int64)a3 )
        goto LABEL_3;
    }
    else if ( *a2 == 0x8C || *a2 == 0x91 )
    {
      if ( *(_DWORD *)(a1 + 116) )
      {
        if ( v37 < (unsigned __int64)a3 )
        {
          v9 = (unsigned __int8 *)v37;
          v10 = 1;
          v11 = 5;
          goto LABEL_3;
        }
      }
      else
      {
        v9 = (unsigned __int8 *)v37;
        v10 = 1;
        v11 = 3;
        if ( v37 < (unsigned __int64)a3 )
          goto LABEL_3;
      }
    }
    else
    {
      v10 = 0;
      v11 = 0;
      v9 = (unsigned __int8 *)v37;
      if ( v37 < (unsigned __int64)a3 )
        goto LABEL_3;
    }
    return 4294967294LL;
  }
  v10 = 0;
  v11 = 0;
  if ( a2 >= a3 )
    return 4294967294LL;
LABEL_3:
  v38 = v11;
  v12 = v11;
  v13 = a4;
  v14 = v9;
  v15 = a1;
  v16 = 1;
  v17 = 0;
  v18 = (unsigned __int64)a3;
  v19 = v10;
  do
  {
    while ( 1 )
    {
      v21 = *v14;
      if ( (unsigned __int8)v21 <= 0x91u )
      {
        if ( (unsigned __int8)v21 <= 0x5Cu )
        {
          if ( (_BYTE)v21 == 3 )
          {
            v24 = a4 == 0;
            a4 = 1;
            v17 = 1;
            if ( v24 )
              v12 += 2;
            ++v14;
            goto LABEL_10;
          }
          if ( (unsigned __int8)v21 > 2u )
          {
            if ( (unsigned __int8)v21 <= 0x20u )
              goto LABEL_9;
            v35 = (unsigned int)(v21 - 41);
            if ( (unsigned __int8)v35 <= 0x2Bu )
            {
              v36 = 0xF807C03E01FLL;
              v17 |= !_bittest64(&v36, v35);
              goto LABEL_9;
            }
          }
        }
        else
        {
          v20 = 1LL << ((unsigned __int8)v21 - 93);
          if ( (v20 & 0xC1E001F) != 0 )
            goto LABEL_9;
          if ( (v20 & 0x18C00000000000LL) != 0 )
          {
            if ( *(_DWORD *)(v15 + 116) && !v19 )
            {
              v12 += 2;
              v19 = 1;
            }
            v17 = 1;
            v30 = __ROL2__(*(_WORD *)(v14 + 3), 8);
            v31 = v30;
            v32 = (unsigned __int8 *)(*(_QWORD *)(v15 + 48) + ((unsigned __int64)v30 >> 3));
            v33 = v16 << (v31 & 7);
            v34 = *v32;
            *v32 |= v33;
            if ( ((unsigned __int8)v33 & v34) == 0 )
              v12 += 3;
            v14 += 5;
            goto LABEL_10;
          }
          if ( (_BYTE)v21 == 118 )
          {
            if ( *(_DWORD *)(v15 + 180) && !a4 )
            {
              v12 += 2;
              a4 = 1;
            }
            if ( *(_DWORD *)(v15 + 104) && !v13 )
            {
              v12 += 2;
              v13 = 1;
            }
            if ( *(_DWORD *)(v15 + 116) && !v19 )
            {
              v12 += 2;
              v19 = 1;
            }
            v24 = v14[3] == 0x93;
            v14 += 3;
            if ( v24 )
            {
              do
              {
                v25 = __ROL2__(*(_WORD *)(v14 + 1), 8);
                v26 = v25;
                v27 = (unsigned __int8 *)(*(_QWORD *)(v15 + 48) + ((unsigned __int64)v25 >> 3));
                v28 = v16 << (v26 & 7);
                v29 = *v27;
                *v27 |= v28;
                if ( ((unsigned __int8)v28 & v29) == 0 )
                  v12 += 3;
                v14 += 3;
              }
              while ( *v14 == 0x93 );
            }
            v17 = 1;
            goto LABEL_10;
          }
        }
LABEL_8:
        v17 = 1;
        goto LABEL_9;
      }
      v22 = v21 + 100;
      if ( (unsigned __int8)(v21 + 100) > 0x10u )
        goto LABEL_8;
      if ( ((1LL << v22) & 0x145) != 0 )
      {
        if ( !v13 )
          v12 += 2;
        if ( *(_DWORD *)(v15 + 108) )
          *a5 = 1;
        v13 = 1;
        v17 = 1;
        v14 += v14[1] + 3;
        goto LABEL_10;
      }
      if ( ((1LL << v22) & 0x18000) == 0 )
        break;
LABEL_9:
      v14 = (unsigned __int8 *)sub_845640(v14);
LABEL_10:
      if ( (unsigned __int64)v14 >= v18 )
        goto LABEL_19;
    }
    if ( (_BYTE)v21 != 0xA1 )
      goto LABEL_8;
    if ( *(_DWORD *)(v15 + 108) )
      *a5 = 1;
    ++v14;
    v17 = 1;
  }
  while ( (unsigned __int64)v14 < v18 );
LABEL_19:
  if ( v12 == v38 )
    return (unsigned int)(v17 - 2);
  result = (unsigned int)(v12 + 1);
  if ( v12 <= 0 )
    return (unsigned int)(v17 - 2);
  return result;
}

