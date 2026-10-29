__int64 __fastcall sub_8391A0(__int64 *a1, char *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  char *v4; // r14
  size_t v5; // rdx
  int utf8_char; // eax
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // r10d
  char v12; // r15
  __int16 v13; // r11
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  char v19; // r10
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  char v22; // r11
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  char v36; // r14
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  char v39; // r15
  __int64 v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  char v50; // [rsp+8h] [rbp-60h]
  char v51; // [rsp+8h] [rbp-60h]
  char v52; // [rsp+Ch] [rbp-5Ch]
  _QWORD v53[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (unsigned __int64)&a2[a3];
  v53[1] = __readfsqword(0x28u);
  v53[0] = a2;
  if ( a2 >= &a2[a3] )
    return 0;
  v4 = a2;
  while ( 1 )
  {
    utf8_char = get_utf8_char(v53);
    if ( utf8_char == -1 )
      break;
    if ( utf8_char )
    {
      v5 = v53[0] - (_QWORD)v4;
      if ( v53[0] - (_QWORD)v4 > 3u )
      {
        v8 = utf8_char - 0x10000;
        v9 = a1[1];
        v10 = *a1;
        v11 = v8 >> 10;
        v12 = v8;
        v13 = ((v8 >> 10) & 0x3FF) - 10240;
        if ( a1[2] < (unsigned __int64)(v9 + 1) )
        {
          v43 = qvector_reserve(a1, v10, v9 + 1, 1);
          v11 = v8 >> 10;
          LOBYTE(v13) = v8 >> 10;
          *a1 = v43;
          v10 = v43;
          v9 = a1[1];
        }
        *(_BYTE *)(v10 + v9) = -19;
        v14 = a1[1];
        v15 = a1[2];
        v16 = *a1;
        v17 = v14 + 1;
        v18 = v14 + 2;
        a1[1] = v17;
        v19 = (((((unsigned __int16)v11 >> 6) & 0xF) + 96) & 0x3F) + 0x80;
        if ( v15 < v18 )
        {
          v52 = v19;
          v51 = v13;
          v48 = qvector_reserve(a1, v16, v18, 1);
          v17 = a1[1];
          v19 = v52;
          *a1 = v48;
          LOBYTE(v13) = v51;
          v16 = v48;
        }
        *(_BYTE *)(v16 + v17) = v19;
        v20 = a1[1];
        v21 = a1[2];
        v22 = (v13 & 0x3F) + 0x80;
        v23 = *a1;
        v24 = v20 + 1;
        v25 = v20 + 2;
        a1[1] = v24;
        if ( v21 < v25 )
        {
          v50 = v22;
          v47 = qvector_reserve(a1, v23, v25, 1);
          v22 = v50;
          *a1 = v47;
          v23 = v47;
          v24 = a1[1];
        }
        *(_BYTE *)(v23 + v24) = v22;
        v26 = a1[1];
        v27 = a1[2];
        v28 = *a1;
        v29 = v26 + 1;
        v30 = v26 + 2;
        a1[1] = v29;
        if ( v27 < v30 )
        {
          v46 = qvector_reserve(a1, v28, v30, 1);
          *a1 = v46;
          v28 = v46;
          v29 = a1[1];
        }
        *(_BYTE *)(v28 + v29) = -19;
        v31 = a1[1];
        v32 = a1[2];
        v33 = *a1;
        v34 = v31 + 1;
        v35 = v31 + 2;
        a1[1] = v34;
        v36 = (((((unsigned __int16)v8 >> 6) & 0xF) + 112) & 0x3F) + 0x80;
        if ( v32 < v35 )
        {
          v45 = qvector_reserve(a1, v33, v35, 1);
          *a1 = v45;
          v33 = v45;
          v34 = a1[1];
        }
        *(_BYTE *)(v33 + v34) = v36;
        v37 = a1[1];
        v38 = a1[2];
        v39 = (v12 & 0x3F) + 0x80;
        v40 = *a1;
        v41 = v37 + 1;
        v42 = v37 + 2;
        a1[1] = v41;
        if ( v38 < v42 )
        {
          v44 = qvector_reserve(a1, v40, v42, 1);
          *a1 = v44;
          v40 = v44;
          v41 = a1[1];
        }
        *(_BYTE *)(v40 + v41) = v39;
        v4 = (char *)v53[0];
        ++a1[1];
      }
      else
      {
        if ( v5 )
          sub_838E80(a1, v4, v5);
        v4 = (char *)v53[0];
      }
      if ( (unsigned __int64)v4 >= v3 )
        return v4 - a2;
    }
    else
    {
      sub_838E80(a1, &unk_23BDAB0, 2u);
      v4 = (char *)v53[0];
      if ( v53[0] >= v3 )
        return v4 - a2;
    }
  }
  *__errno_location() = 84;
  return -1;
}
