__int64 __fastcall sub_19C0A70(__int64 a1, __int64 *a2, unsigned int a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int8 v12; // al
  char v13; // di
  unsigned __int8 v14; // si
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  char v18; // cl
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  int v22; // eax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // cl

  if ( !a4 )
    goto LABEL_17;
  v10 = sub_BFB9F0((__int64)a4);
  if ( (*(_WORD *)v10 & 0x1FF) != 0x47 )
    goto LABEL_17;
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(_BYTE *)(v11 + 28) & 0x7F;
  if ( (unsigned int)v12 - 40 > 6 )
    goto LABEL_17;
  v13 = *(_BYTE *)(v11 + 96);
  v14 = v13 & 7;
  if ( (v13 & 7) != 0 )
  {
    if ( v14 != 5 )
      goto LABEL_6;
    if ( v12 == 46 || v12 == 40 )
    {
      v24 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
        v24 = *(_QWORD *)(v24 + 8);
      if ( v24 )
      {
        v25 = *(_BYTE *)(sub_B8EAA0(v24) + 8) & 0x7F;
        if ( v25 > 0x12u )
        {
          if ( ((v25 + 94) & 0x7Fu) > 5 )
          {
LABEL_42:
            if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x2B )
              goto LABEL_17;
          }
        }
        else if ( ((1LL << v25) & 0x40182) == 0 )
        {
          goto LABEL_42;
        }
        v14 = *(_BYTE *)(v11 + 96) & 7;
LABEL_6:
        if ( v14 <= 3u )
          goto LABEL_17;
        goto LABEL_7;
      }
    }
    if ( v12 != 43 )
      goto LABEL_17;
LABEL_7:
    v15 = *(_QWORD *)(v11 + 48);
    if ( (v15 & 4) == 0 && (byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
    {
      while ( a2 )
      {
        if ( *((_BYTE *)a2 + 100) )
        {
          v16 = (_QWORD *)a2[10];
          v17 = &v16[*((unsigned int *)a2 + 23)];
          if ( v16 != v17 )
          {
            while ( v11 != *v16 )
            {
              if ( v17 == ++v16 )
                goto LABEL_33;
            }
LABEL_15:
            v18 = 1;
            return sub_19C0480(a1, a3, a4, v18, a5, a6);
          }
        }
        else if ( sub_2236570(a2 + 10, v11) )
        {
          goto LABEL_15;
        }
LABEL_33:
        if ( (a2[1] & 0x2861) != 0 )
          goto LABEL_17;
        a2 = (__int64 *)*a2;
      }
    }
    goto LABEL_17;
  }
  v20 = *(_QWORD *)&byte_8[*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v20 & 8) == 0
    || (*(_DWORD *)((char *)&qword_18 + (v20 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v20 & 7)) >> 9 != 3 )
  {
    if ( ((v12 + 85) & 0x7D) != 0 )
    {
      v21 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
        v21 = *(_QWORD *)(v21 + 8);
      v22 = *(_BYTE *)(sub_B8EAA0(v21) + 8) & 0x7F;
      if ( !v22 || v22 == 24 )
        goto LABEL_17;
      if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x2B )
      {
        v23 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
          v23 = *(_QWORD *)v23;
        if ( ((*(_BYTE *)(v23 + 8) + 70) & 0x7Fu) <= 3 )
          goto LABEL_17;
      }
      v13 = *(_BYTE *)(v11 + 96);
    }
    if ( (v13 & 0x18) == 0 )
      goto LABEL_7;
  }
LABEL_17:
  v18 = 0;
  return sub_19C0480(a1, a3, a4, v18, a5, a6);
}
