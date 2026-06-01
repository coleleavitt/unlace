void __fastcall sub_1A8A990(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  unsigned __int8 v8; // al
  char v9; // di
  unsigned __int8 v10; // si
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // r14
  __int64 v34; // rbp
  unsigned __int8 v35; // al
  __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  int v39; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v40[184]; // [rsp+10h] [rbp-B8h] BYREF

  v8 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v8 - 40 > 6 )
  {
    v17 = sub_B8DC30(a2, 1);
    if ( v17 )
    {
      if ( *(_BYTE *)(v17 + 16) != 26 )
        goto LABEL_22;
    }
    else
    {
      v28 = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( v28 != 18 && v28 != 8 )
        goto LABEL_22;
    }
    v29 = sub_B8DC30(a2, 1);
    if ( v29 )
    {
      v32 = *(unsigned __int16 *)(v29 + 22);
    }
    else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
    {
      v32 = *(_DWORD *)(a2 + 80);
    }
    else
    {
      v32 = *(_DWORD *)(a2 + 104);
    }
    if ( v32 )
    {
      v33 = 0;
      v34 = 8LL * (unsigned int)(v32 - 1) + 8;
      do
      {
        v35 = *(_BYTE *)(a2 + 28) & 0x7F;
        if ( (unsigned int)v35 - 34 > 5 )
        {
          if ( v35 == 18 )
          {
            v36 = *(_QWORD *)(*(_QWORD *)(a2 + 96) + v33);
          }
          else
          {
            if ( v35 != 8 )
              BUG();
            v36 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v33);
          }
        }
        else
        {
          v36 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + v33);
        }
        v37 = *(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(v36 + 48) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v37 & 8) == 0
          || (((*(__int64 *)((char *)&qword_18 + (v37 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v37 & 7)) >> 6) & 7) != 2 )
        {
          sub_1A8A840(*a1, v36, 0, v30, v31);
        }
        v33 += 8;
      }
      while ( v33 != v34 );
    }
    goto LABEL_22;
  }
  v9 = *(_BYTE *)(a2 + 96);
  v10 = v9 & 7;
  v11 = v9 & 7;
  if ( (v9 & 7) != 0 )
  {
    if ( (_DWORD)v11 != 5 )
      goto LABEL_4;
    if ( v8 == 40 || v8 == 46 )
    {
      v38 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v38 = *(_QWORD *)(v38 + 8);
      if ( v38 )
      {
        v11 = *(_BYTE *)(sub_B8EAA0(v38) + 8) & 0x7F;
        if ( (unsigned __int8)v11 > 0x12u )
        {
          v11 = ((_BYTE)v11 + 94) & 0x7F;
          if ( (unsigned __int8)v11 > 5u )
          {
LABEL_49:
            if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
              goto LABEL_19;
          }
        }
        else if ( ((1LL << v11) & 0x40182) == 0 )
        {
          goto LABEL_49;
        }
        v10 = *(_BYTE *)(a2 + 96) & 7;
LABEL_4:
        if ( v10 > 3u )
          goto LABEL_5;
        goto LABEL_19;
      }
    }
    if ( v8 != 43 )
      goto LABEL_19;
  }
  else
  {
    v12 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v12 & 8) != 0 )
    {
      v11 = v12 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_DWORD *)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v12 & 7)) >> 9 == 3 )
        goto LABEL_19;
    }
    if ( ((v8 + 85) & 0x7D) != 0 )
    {
      v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v13 = *(_QWORD *)(v13 + 8);
      v14 = *(_BYTE *)(sub_B8EAA0(v13) + 8) & 0x7F;
      if ( !v14 || v14 == 24 )
        goto LABEL_19;
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
      {
        v15 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v15 = *(_QWORD *)v15;
        if ( ((*(_BYTE *)(v15 + 8) + 70) & 0x7Fu) <= 3 )
          goto LABEL_19;
      }
      v9 = *(_BYTE *)(a2 + 96);
    }
    if ( (v9 & 0x18) != 0 )
    {
LABEL_19:
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      sub_168B9F0((__int64)v40, a1, v16, 0x1B45u, 0);
      v39 = 0;
      sub_1587D10((__int64)v40, &v39);
      sub_15F7200(v40);
      return;
    }
  }
LABEL_5:
  if ( (unsigned __int8)sub_1A8A840(*a1, a2, 1, v11, a5) )
  {
LABEL_22:
    v18 = sub_168B6C0((__int64)a1);
    v19 = sub_168B6C0((__int64)a1);
    v23 = (__m128i *)sub_1A88520((__int64 *)(v19 + 2352), 40, 3u, v20, v21, v22);
    sub_B16090(v23, v18, a3);
    sub_B8CC60(a2, (__int64)v23, v24, v25, v26, v27);
  }
}
