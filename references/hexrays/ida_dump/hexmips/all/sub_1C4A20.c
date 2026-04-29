__int64 __fastcall sub_1C4A20(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned int tinfo_details; // r12d
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r9
  unsigned __int64 v14; // r15
  _QWORD *v15; // r14
  _QWORD *v16; // r9
  char tinfo_property; // al
  __int64 v18; // r13
  __int64 v19; // rbp
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // [rsp+0h] [rbp-88h]
  unsigned __int64 v28; // [rsp+8h] [rbp-80h]
  __int64 v29; // [rsp+10h] [rbp-78h] BYREF
  __int128 v30; // [rsp+18h] [rbp-70h]
  __int128 v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  int v33; // [rsp+40h] [rbp-48h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v6 = *a2;
  v34 = __readfsqword(0x28u);
  if ( (get_tinfo_property(v6, 2) & 0x2F) != 0xD )
  {
    v24 = (unsigned __int64)(a3 + 7) >> 3;
    sub_5FF90((__int64 *)(a1 + 16), a4);
    sub_5FF90((__int64 *)(a1 + 16), a4 + v24);
    v29 = a4;
    *(_QWORD *)&v30 = v24;
    sub_312E50(a1 + 32, &v29);
    return 1;
  }
  v8 = *a2;
  v29 = 0;
  v32 = 0;
  v33 = 1;
  v30 = 0;
  v31 = 0;
  tinfo_details = get_tinfo_details(v8, 13, &v29);
  if ( !(_BYTE)tinfo_details )
  {
LABEL_14:
    tinfo_details = 0;
    goto LABEL_15;
  }
  v11 = v29;
  v12 = v30;
  v13 = v29;
  if ( !(_QWORD)v30 )
  {
    if ( v29 )
    {
LABEL_23:
      *(_QWORD *)&v30 = 0;
      qfree(v11);
      return tinfo_details;
    }
    return 1;
  }
  if ( !HIBYTE(v33) )
  {
    v14 = 0;
    v15 = nullptr;
    v28 = v30 - 1;
    while ( 1 )
    {
      v16 = (_QWORD *)(144 * v14 + v13);
      if ( !v15 )
        v15 = v16;
      if ( v14 >= v28 )
        break;
LABEL_9:
      v27 = v16;
      tinfo_property = get_tinfo_property(v16[8], 2);
      v16 = v27;
      if ( (tinfo_property & 0xF) != 0xE )
        break;
      if ( ++v14 == v12 )
        goto LABEL_15;
      v13 = v29;
    }
    while ( (unsigned __int8)sub_1C4A20(a1, v15 + 8, v16[1] + *v16 - *v15, a4 + (*v15 >> 3), v9, v16) )
    {
      if ( v12 == ++v14 )
        goto LABEL_15;
      v15 = (_QWORD *)(v29 + 144 * v14);
      v16 = v15;
      if ( v14 < v28 )
        goto LABEL_9;
    }
    goto LABEL_14;
  }
  v25 = *(_QWORD *)(v29 + 8);
  v26 = v29 + 144;
  if ( 144LL * (_QWORD)v30 != 144 )
  {
    do
    {
      if ( v25 < *(_QWORD *)(v26 + 8) )
      {
        v25 = *(_QWORD *)(v26 + 8);
        v11 = v26;
      }
      v26 += 144;
    }
    while ( v26 != v29 + 144LL * (_QWORD)v30 );
  }
  tinfo_details = sub_1C4A20(a1, v11 + 64, v25, a4, v9, v29);
LABEL_15:
  v11 = v29;
  if ( v29 )
  {
    v18 = v30;
    if ( (_QWORD)v30 )
    {
      v19 = 0;
      do
      {
        v20 = (_QWORD *)(v11 + 144 * v19);
        clear_tinfo_t(v20 + 8);
        v21 = v20[5];
        if ( v21 )
        {
          v20[6] = 0;
          qfree(v21);
        }
        v22 = v20[2];
        if ( v22 )
        {
          v20[3] = 0;
          qfree(v22);
        }
        ++v19;
        v11 = v29;
      }
      while ( v18 != v19 );
    }
    goto LABEL_23;
  }
  return tinfo_details;
}
