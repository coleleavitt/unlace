__int64 __fastcall sub_6D1B0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rbp
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // al
  bool v7; // r13
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  bool v11; // cc
  bool v12; // al
  __int64 v13; // rax
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __m128i *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r13
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // [rsp+0h] [rbp-78h] BYREF
  __int128 v35; // [rsp+8h] [rbp-70h]
  unsigned __int64 *v36; // [rsp+20h] [rbp-58h] BYREF
  __int128 v37; // [rsp+28h] [rbp-50h]
  char v38; // [rsp+38h] [rbp-40h]
  unsigned __int64 v39; // [rsp+48h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  if ( (unsigned __int16)(*(_WORD *)(a1 + 40) - 511) > 1u )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 56,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v5 = *(_BYTE *)(v3 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v5 > 0xF9u && v6 >= v5 )
      goto LABEL_16;
  }
  else if ( v5 > 0xF9u || v6 >= v5 || v6 == 2 && *(_BYTE *)(a1 + 8) )
  {
    goto LABEL_16;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 == sub_6ACC0 )
    return 0;
  v9 = v8(a1, a1 + 56);
  v10 = v7 || v9 < v5;
  v11 = v9 <= 0xF9u;
  v12 = v7 && v9 < v5;
  if ( !v11 )
    v12 = v10;
  if ( v12 )
    return 0;
LABEL_16:
  v13 = 1LL << (*(_BYTE *)(a1 + 184) & 0xF);
  if ( (v13 & 0x2A08) != 0 )
  {
    v14 = 2;
  }
  else
  {
    v14 = 1;
    if ( (v13 & 0x1504) == 0 )
      return 0;
  }
  v15 = *(_QWORD *)(a1 + 32);
  v16 = *(unsigned __int16 *)(a1 + 40LL * v14 + 62);
  v17 = *(_QWORD *)(a1 + 888);
  v38 = 0;
  v36 = 0;
  v37 = 0;
  v18 = sub_81F70(v17, &v36, v15, v16, 0, 0);
  v19 = (__int64)v36;
  v1 = v18;
  if ( (_BYTE)v18 )
  {
    if ( (unsigned __int8)(v38 - 10) <= 1u )
    {
      v20 = *v36;
      if ( (_QWORD)v37 == 1 || (v21 = v36 + 3, 24LL * (_QWORD)v37 == 24) )
      {
LABEL_32:
        if ( v20 <= 0xFFFF )
        {
          if ( *(_WORD *)(a1 + 40) == 512 )
            LOWORD(v20) = v20 + 1;
          *(_WORD *)(a1 + 896) = v20;
          v22 = *(_QWORD *)(a1 + 888);
          v34 = 0;
          v35 = 0;
          sub_82740(v22, &v34, &v36);
          v23 = (__int64)v34;
          if ( (_QWORD)v35 )
          {
            v27 = *(_QWORD *)(a1 + 840);
            v28 = *(_QWORD *)(a1 + 848);
            v29 = *v34;
            v30 = (_QWORD *)(v27 + 8 * v28);
            if ( (_QWORD *)v27 == v30 )
              goto LABEL_49;
            v31 = *(_QWORD **)(a1 + 840);
            while ( v29 != *v31 )
            {
              if ( v30 == ++v31 )
                goto LABEL_49;
            }
            if ( v31 == v30 )
            {
LABEL_49:
              if ( *(_QWORD *)(a1 + 856) < (unsigned __int64)(v28 + 1) )
              {
                v32 = qvector_reserve(a1 + 840, v27, v28 + 1, 8);
                v33 = *(_QWORD *)(a1 + 848);
                *(_QWORD *)(a1 + 840) = v32;
                v30 = (_QWORD *)(v32 + 8 * v33);
              }
              *v30 = v29;
              v23 = (__int64)v34;
              ++*(_QWORD *)(a1 + 848);
            }
          }
          v24 = *(_QWORD *)(a1 + 184);
          if ( ((unsigned __int8)v24 & 0xFu) > 9 )
          {
            if ( (unsigned int)(v24 & 0xF) - 12 > 1 )
              goto LABEL_39;
          }
          else if ( (v24 & 8) == 0 )
          {
LABEL_39:
            v25 = *(__m128i **)(a1 + 864);
            v26 = a1 + 40LL * (3 - v14);
            *v25 = _mm_loadu_si128((const __m128i *)(v26 + 56));
            v25[1] = _mm_loadu_si128((const __m128i *)(v26 + 72));
            v25[2].m128i_i32[0] = *(_DWORD *)(v26 + 88);
            if ( v23 )
            {
              *(_QWORD *)&v35 = 0;
              qfree(v23);
            }
            v19 = (__int64)v36;
            goto LABEL_26;
          }
          *(_BYTE *)(a1 + 898) |= 1u;
          goto LABEL_39;
        }
      }
      else
      {
        while ( *v21 == v20 )
        {
          v21 += 3;
          if ( v21 == &v36[3 * (_QWORD)v37] )
            goto LABEL_32;
        }
      }
    }
    v1 = 0;
  }
LABEL_26:
  if ( v19 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v19);
  }
  return v1;
}
