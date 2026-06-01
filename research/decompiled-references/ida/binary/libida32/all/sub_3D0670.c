unsigned __int64 __fastcall sub_3D0670(__int64 *a1, unsigned int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r12d
  unsigned __int64 v5; // r13
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  int *v10; // rax
  __int64 v11; // r11
  unsigned int v12; // eax
  unsigned int v13; // r10d
  unsigned int v14; // r14d
  unsigned int v15; // r12d
  __int64 v16; // r14
  int v17[2]; // [rsp+8h] [rbp-110h]
  int v18; // [rsp+14h] [rbp-104h]
  const __m128i *v19; // [rsp+18h] [rbp-100h]
  int v20; // [rsp+20h] [rbp-F8h]
  int v21[2]; // [rsp+20h] [rbp-F8h]
  unsigned int v22; // [rsp+20h] [rbp-F8h]
  int v23[2]; // [rsp+28h] [rbp-F0h]
  unsigned int v24; // [rsp+28h] [rbp-F0h]
  __int64 v25[2]; // [rsp+30h] [rbp-E8h] BYREF
  int v26[2]; // [rsp+40h] [rbp-D8h]
  int v27[2]; // [rsp+48h] [rbp-D0h]
  __int128 v28; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-B0h]
  int v30[2]; // [rsp+D8h] [rbp-40h]

  *(_QWORD *)v30 = __readfsqword(0x28u);
  if ( (sub_3B9AA0((__int64)a1, a2, 4) & 0x600) == 0x200 )
  {
    v3 = sub_3BD5D0((__int64)a1, a2);
    v4 = v3;
    if ( v3 != -1 && a2 != v3 )
    {
      v5 = sub_3B9AA0((__int64)a1, v3, 0);
      if ( (v5 & 0x600) == 0x400 )
      {
        v6 = sub_3C4370(a1, v4, v5, nullptr);
        v9 = get_item_end(v4, v4, v7, v8) - v4;
        v10 = sub_3C4190(a1, &v28, v4, 0, v5);
        v18 = -1;
        v19 = (const __m128i *)v10;
        if ( v10 )
          v18 = *v10;
        *(_QWORD *)v27 = 0;
        *(_OWORD *)v25 = 0;
        sub_3CB9E0(a1, v4, 4);
        if ( !v6 || v6 == v9 || v9 % v6 )
        {
          *(_QWORD *)v26 = 0;
          *(_QWORD *)v27 = 0;
          *(_OWORD *)v25 = 0;
          sub_3CE970(a1, v4, &elf_gnu_hash_indexes[43], v4 - a2, -1, (const __m128i *)v25);
          if ( *(_QWORD *)v26 )
            (*(void (__fastcall **)(__int64 *, __int64 *, __int64))v26)(v25, v25, 3);
          *(_OWORD *)v25 = 0;
          *(_QWORD *)v26 = 0;
          *(_QWORD *)v27 = 0;
          sub_3CE970(a1, a2, &elf_gnu_hash_indexes[43], v9 + a2 - v4, -1, (const __m128i *)v25);
          if ( *(_QWORD *)v26 )
            (*(void (__fastcall **)(__int64 *, __int64 *, __int64))v26)(v25, v25, 3);
        }
        else
        {
          v11 = v9 / v6;
          v12 = (a2 - v4) / v6;
          v13 = v12 * v6;
          v14 = v12;
          if ( a2 - v4 >= v6 )
          {
            *(_QWORD *)v23 = v11;
            *(_QWORD *)v26 = 0;
            *(_QWORD *)v27 = 0;
            v20 = v12 * v6;
            *(_OWORD *)v25 = 0;
            sub_3CE970(a1, v4, (void *)v5, v13, v18, (const __m128i *)v25);
            v13 = v20;
            v11 = *(_QWORD *)v23;
            if ( *(_QWORD *)v26 )
            {
              v24 = v20;
              *(_QWORD *)v21 = v11;
              (*(void (__fastcall **)(__int64 *, __int64 *, __int64))v26)(v25, v25, 3);
              v13 = v24;
              v11 = *(_QWORD *)v21;
            }
            if ( v19 )
            {
              v22 = v13;
              *(_QWORD *)v17 = v11;
              sub_3C5000(a1, v4, 0, v5, v19, 0);
              v13 = v22;
              v11 = *(_QWORD *)v17;
            }
          }
          v15 = v13 + v4;
          v16 = v11 - v14;
          if ( a2 != v15 )
          {
            *(_QWORD *)v26 = 0;
            *(_QWORD *)v27 = 0;
            *(_OWORD *)v25 = 0;
            sub_3CE970(a1, v15, &elf_gnu_hash_indexes[43], a2 - v15, -1, (const __m128i *)v25);
            if ( *(_QWORD *)v26 )
              (*(void (__fastcall **)(__int64 *, __int64 *, __int64))v26)(v25, v25, 3);
            *(_OWORD *)v25 = 0;
            *(_QWORD *)v26 = 0;
            *(_QWORD *)v27 = 0;
            sub_3CE970(a1, a2, &elf_gnu_hash_indexes[43], v15 + v6 - a2, -1, (const __m128i *)v25);
            if ( *(_QWORD *)v26 )
              (*(void (__fastcall **)(__int64 *, __int64 *, __int64))v26)(v25, v25, 3);
            v15 += v6;
            --v16;
          }
          if ( v16 )
          {
            *(_QWORD *)v26 = 0;
            *(_QWORD *)v27 = 0;
            *(_OWORD *)v25 = 0;
            sub_3CE970(a1, v15, (void *)v5, v16 * v6, v18, (const __m128i *)v25);
            if ( *(_QWORD *)v26 )
              (*(void (__fastcall **)(__int64 *, __int64 *, __int64))v26)(v25, v25, 3);
            if ( v19 )
              sub_3C5000(a1, v15, 0, v5, v19, 0);
          }
        }
      }
      else
      {
        v29 = 0;
        v28 = 0;
        sub_3CB9E0(a1, v4, 4);
      }
    }
  }
  return *(_QWORD *)v30 - __readfsqword(0x28u);
}

