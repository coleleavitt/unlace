__int64 __fastcall sub_78E850(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int8 v5; // r13
  int v7; // eax
  unsigned __int64 v8; // r13
  unsigned __int8 v9; // bl
  char v10; // dl
  unsigned __int8 v13; // al
  unsigned __int8 v14; // dl
  _QWORD *v15; // rax
  unsigned __int8 v16; // al
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // al
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // dl
  int v23; // eax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  _QWORD *v28; // rdi
  __int64 v29; // rax
  unsigned __int8 v30; // al
  unsigned __int8 v31; // r8
  bool v32; // si
  unsigned __int8 v33; // dl
  bool v34; // al
  __int64 v35; // rax
  _QWORD *v36; // rsi
  unsigned __int8 v37; // al
  char v38; // bl
  __int64 v39; // [rsp+0h] [rbp-68h]
  unsigned __int8 v40; // [rsp+Eh] [rbp-5Ah]
  unsigned __int8 v41; // [rsp+Fh] [rbp-59h]

  v4 = a2;
  v5 = a3 & 1;
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v7 - 32) <= 5 )
  {
    if ( (!(unsigned __int8)sub_79A980(a2) || (unsigned __int8)sub_77E260(*(_QWORD *)(a2 + 112)))
      && *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 81) >> 5 != 2 )
    {
      if ( (a3 & 2) != 0 || (v20 = sub_786650(a2, v5, 0), v8 = HIDWORD(v20), !BYTE4(v20)) || (int)v20 > 2 )
      {
        LOBYTE(v8) = 0;
        v9 = 2;
      }
      else
      {
        v9 = v20 & 3;
      }
      v10 = 6;
      return ((unsigned __int8)(32 * v8) | (unsigned __int8)(v10 | (8 * v9))) & 0x3F;
    }
LABEL_9:
    v10 = 2;
    v9 = 2;
    LOBYTE(v8) = 0;
    return ((unsigned __int8)(32 * v8) | (unsigned __int8)(v10 | (8 * v9))) & 0x3F;
  }
  if ( (unsigned int)(v7 - 38) > 6 )
  {
LABEL_27:
    v19 = sub_798D40(v4);
    if ( (*(_BYTE *)(*(_QWORD *)(v19 + 2160) + 1LL) & 8) != 0 )
    {
      v21 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
        v21 = *(_QWORD *)v21;
      v39 = 0;
      v22 = *(_BYTE *)(v21 + 8) & 0x7F;
      v23 = v22;
      if ( v22 )
      {
        do
        {
          if ( (unsigned int)(v23 - 32) <= 5 || v22 == 8 )
            v39 = sub_79A2E0(v21);
          v24 = *(_QWORD *)(sub_79A2E0(v21) + 16);
          v21 = v24 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v24 & 4) != 0 )
            v21 = *(_QWORD *)v21;
          v22 = *(_BYTE *)(v21 + 8) & 0x7F;
          v23 = v22;
        }
        while ( v22 );
        if ( v39 && *(char *)(v39 + 28) >= 0 )
        {
          if ( (*(_BYTE *)(v39 + 28) & 0x7F) == 8 )
          {
            v26 = *(unsigned int *)(v39 + 116);
            if ( (_DWORD)v26 )
            {
              v27 = *(_QWORD *)(v39 + 120);
              v28 = (_QWORD *)(*(_QWORD *)(v39 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v39 + 16) & 4) != 0 )
                v28 = (_QWORD *)*v28;
              v29 = sub_79C2A0(v28, a2, v26, v39);
              v30 = sub_78F100(a1, v29, v27, a3);
              v31 = v30 & 7;
              v9 = (v30 >> 3) & 3;
              v32 = (v30 & 0x20) != 0;
LABEL_54:
              if ( v31 > 3u )
              {
                v10 = 4;
                LOBYTE(v8) = v32;
                return ((unsigned __int8)(32 * v8) | (unsigned __int8)(v10 | (8 * v9))) & 0x3F;
              }
            }
          }
          else if ( (*(_BYTE *)(v39 + 82) & 1) != 0 || (sub_781200(v39) & 0xFFFFFFFD) != 0 )
          {
            v33 = sub_78C840(a1, v39, a3);
            v31 = v33 & 7;
            v9 = (v33 >> 3) & 3;
            v32 = (v33 & 0x20) != 0;
            if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 38 <= 6 )
            {
              v40 = v33 & 7;
              v41 = v33;
              v34 = sub_78BDA0(v39);
              v31 = v40;
              if ( v34 && (v41 & 0x20) == 0 && (*(_BYTE *)(*(_QWORD *)(v19 + 2160) + 105LL) & 8) == 0 )
              {
                if ( (*(_BYTE *)(v39 + 28) & 0x7Fu) - 33 <= 3 )
                {
                  v35 = *(_QWORD *)(sub_79A2E0(v39 + 72) + 16);
                  v36 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( (v35 & 4) != 0 )
                    v36 = (_QWORD *)*v36;
                  if ( v36 )
                    v36 -= 8;
                  v37 = sub_78C840(a1, (__int64)v36, a3);
                  v31 = v37 & 7;
                  v9 = (v37 >> 3) & 3;
                  v32 = (v37 & 0x20) != 0;
                }
                if ( !(32 * v32) )
                {
                  v10 = 4;
                  v38 = (*(_BYTE *)(*(_QWORD *)(v19 + 2160) + 201LL) >> 3) & 7;
                  if ( v5 )
                    v38 = *(_BYTE *)(*(_QWORD *)(v19 + 2160) + 201LL) & 7;
                  LOBYTE(v8) = 0;
                  v9 = v38 & 3;
                  return ((unsigned __int8)(32 * v8) | (unsigned __int8)(v10 | (8 * v9))) & 0x3F;
                }
              }
            }
            goto LABEL_54;
          }
        }
      }
    }
LABEL_28:
    v10 = 1;
    v9 = 2;
    LOBYTE(v8) = 0;
    return ((unsigned __int8)(32 * v8) | (unsigned __int8)(v10 | (8 * v9))) & 0x3F;
  }
  v13 = *(_BYTE *)(a2 + 96);
  a2 = v13 & 5;
  v14 = v13 & 7;
  if ( (_BYTE)a2 != 1 )
  {
    if ( v14 != 2 && (v14 || ((v13 >> 3) & 3) != 2) || sub_779FD0(v4, a2, v14, a4) )
      goto LABEL_28;
    goto LABEL_27;
  }
  if ( (unsigned __int8)sub_79A980(v4) && !(unsigned __int8)sub_77B5F0(*(_QWORD *)(v4 + 80)) )
    goto LABEL_9;
  if ( (*(_BYTE *)(v4 + 96) & 7) == 3 )
  {
    LOBYTE(v8) = 1;
    v9 = 0;
  }
  else if ( (a3 & 2) != 0 || (v25 = sub_786650(v4, v5, 0), v8 = HIDWORD(v25), !BYTE4(v25)) || (int)v25 > 2 )
  {
    LOBYTE(v8) = 0;
    v9 = 2;
  }
  else
  {
    v9 = v25 & 3;
  }
  v15 = sub_789930((__int64 *)(v4 + 72));
  v10 = 6;
  if ( v15 )
  {
    v16 = sub_78C840(a1, (__int64)v15, a3);
    v17 = (v16 >> 3) & 3;
    v10 = v16 & 7;
    if ( (v16 & 7) == 0 )
      v10 = 6;
    if ( v9 >= v17 )
    {
      v18 = v16 & 0x20;
      if ( v9 != v17 || (v9 = v17, v18) )
      {
        v9 = v17;
        LOBYTE(v8) = v18 >> 5;
      }
    }
  }
  return ((unsigned __int8)(32 * v8) | (unsigned __int8)(v10 | (8 * v9))) & 0x3F;
}

