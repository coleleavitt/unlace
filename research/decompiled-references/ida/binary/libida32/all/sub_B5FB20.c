__int64 __fastcall sub_B5FB20(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 v4; // r12
  int v6; // eax
  char v7; // cl
  int v8; // edx
  unsigned __int8 v11; // al
  char v12; // dl
  char v13; // r12
  unsigned __int8 v14; // r14
  unsigned __int64 v15; // rax
  char v16; // dl
  unsigned __int8 v17; // al
  unsigned __int8 v18; // cl
  char v19; // al
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // r14
  unsigned __int8 v24; // cl
  int v25; // eax
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  _QWORD *v30; // rdi
  __int64 v31; // rax
  unsigned __int8 v32; // al
  unsigned __int8 v33; // r8
  char v34; // dl
  bool v35; // cl
  unsigned __int8 v36; // si
  char v37; // al
  unsigned __int64 v38; // rax
  unsigned __int8 v39; // al
  unsigned __int8 v40; // al
  unsigned __int64 v41; // [rsp+0h] [rbp-48h]

  v4 = a3 & 1;
  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v6 - 34) <= 5 )
  {
    if ( (!(unsigned __int8)sub_B69430(a2) || (unsigned __int8)sub_B50F80(*(_QWORD *)(a2 + 112)))
      && *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 81) >> 5 != 2 )
    {
      if ( (a3 & 2) != 0 || (v21 = sub_B5A830(a2, v4, 0), (v7 = BYTE4(v21)) == 0) || (int)v21 > 2 )
      {
        v7 = 0;
        v8 = 2;
      }
      else
      {
        v8 = v21 & 3;
      }
      return (32 * (v7 & 1)) | (unsigned int)(8 * v8 + 6);
    }
    return 18;
  }
  if ( (unsigned int)(v6 - 40) > 6 )
    goto LABEL_27;
  v11 = *(_BYTE *)(a2 + 96);
  v12 = v11 & 7;
  if ( (v11 & 5) != 1 )
  {
    if ( v12 != 2 && (v12 || ((v11 >> 3) & 3) != 2) || sub_A3AE50(a2) )
      return 17;
LABEL_27:
    v20 = sub_B685F0(a2);
    if ( (*(_BYTE *)(*(_QWORD *)(v20 + 2320) + 1LL) & 8) == 0 )
      return 17;
    v22 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v22 = *(_QWORD *)v22;
    v23 = 0;
    v24 = *(_BYTE *)(v22 + 8) & 0x7F;
    v25 = v24;
    if ( !v24 )
      return 17;
    do
    {
      if ( (unsigned int)(v25 - 34) <= 5 || v24 == 8 )
      {
        v41 = v22;
        v28 = sub_B68470(v22);
        v22 = v41;
        v23 = v28;
      }
      v26 = *(_QWORD *)(sub_B68470(v22) + 16);
      if ( (v26 & 4) != 0 )
        v22 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v22 = v26 & 0xFFFFFFFFFFFFFFF8LL;
      v24 = *(_BYTE *)(v22 + 8) & 0x7F;
      v25 = v24;
    }
    while ( v24 );
    if ( !v23 || *(char *)(v23 + 28) < 0 )
      return 17;
    if ( (*(_BYTE *)(v23 + 28) & 0x7F) == 8 )
    {
      if ( !*(_DWORD *)(v23 + 116) )
        return 17;
      v29 = *(_QWORD *)(v23 + 120);
      v30 = (_QWORD *)(*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v23 + 16) & 4) != 0 )
        v30 = (_QWORD *)*v30;
      v31 = sub_B6AD60(v30);
      v32 = sub_B60320(a1, v31, v29, a3);
      v33 = v32 & 7;
      v34 = (v32 >> 3) & 3;
      v35 = (v32 & 0x20) != 0;
    }
    else
    {
      if ( (*(_BYTE *)(v23 + 82) & 1) == 0 && (sub_B53FE0(v23) & 0xFFFFFFFD) == 0 )
        return 17;
      v36 = sub_B5D9A0(a1, v23, a3);
      v33 = v36 & 7;
      v34 = (v36 >> 3) & 3;
      v35 = (v36 & 0x20) != 0;
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6 )
      {
        v37 = sub_B5BB20(v23);
        v34 = (v36 >> 3) & 3;
        v33 = v36 & 7;
        v35 = (v36 & 0x20) != 0;
        if ( v37 )
        {
          if ( (v36 & 0x20) == 0 && (*(_BYTE *)(*(_QWORD *)(v20 + 2320) + 105LL) & 8) == 0 )
          {
            if ( (*(_BYTE *)(v23 + 28) & 0x7Fu) - 35 <= 3 )
            {
              v38 = sub_B4E950(v23 + 72);
              if ( v38 )
                v38 -= 64LL;
              v39 = sub_B5D9A0(a1, v38, a3);
              v33 = v39 & 7;
              v34 = (v39 >> 3) & 3;
              v35 = (v39 & 0x20) != 0;
            }
            if ( ((32 * v35) & 0x20) == 0 )
            {
              v40 = *(_BYTE *)(*(_QWORD *)(v20 + 2320) + 209LL);
              if ( !v4 )
                v40 >>= 3;
              return 8 * (v40 & 3u) + 4;
            }
          }
        }
      }
    }
    if ( !v33 )
      goto LABEL_74;
    if ( v33 > 3u )
    {
      if ( v33 <= 6u )
        return (32 * v35) | (8 * (v34 & 3u) + 4);
LABEL_74:
      BUG();
    }
    return 17;
  }
  if ( (unsigned __int8)sub_B69430(a2) && !(unsigned __int8)sub_B4F840(*(_QWORD *)(a2 + 80)) )
    return 18;
  if ( (*(_BYTE *)(a2 + 96) & 7) == 3 )
  {
    v13 = 1;
    v14 = 0;
  }
  else if ( (a3 & 2) != 0 || (v27 = sub_B5A830(a2, v4, 0), (v13 = BYTE4(v27)) == 0) || (int)v27 > 2 )
  {
    v13 = 0;
    v14 = 2;
  }
  else
  {
    v14 = v27 & 3;
  }
  v15 = sub_AC7080((__int64 *)(a2 + 72));
  v16 = 6;
  if ( v15 )
  {
    v17 = sub_B5D9A0(a1, v15, a3);
    v18 = (v17 >> 3) & 3;
    v16 = v17 & 7;
    if ( (v17 & 7) == 0 )
      v16 = 6;
    if ( v14 >= v18 )
    {
      v19 = v17 & 0x20;
      if ( v14 != v18 || (v14 = v18, v19) )
      {
        v14 = v18;
        v13 = v19 != 0;
      }
    }
  }
  return (32 * (v13 & 1)) | (8 * (v14 & 3)) | v16 & 7u;
}

