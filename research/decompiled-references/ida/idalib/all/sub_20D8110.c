__int64 __fastcall sub_20D8110(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 *i; // r15
  _BYTE *v11; // rdx
  _BYTE *v12; // rdi
  int v13; // eax
  int v14; // ebp
  size_t v15; // rax
  size_t v16; // rax
  const char *v17; // rdx
  size_t v18; // rsi
  void (*v19)(); // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  char v24; // bp
  __int64 v25; // rax
  __int64 v26; // rdx
  size_t v27; // rax
  size_t v28; // rax
  size_t v29; // rax
  size_t v30; // rax
  size_t v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  size_t v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // [rsp+0h] [rbp-68h]
  __int64 v44; // [rsp+0h] [rbp-68h]
  __int64 v45; // [rsp+0h] [rbp-68h]
  __int64 v46; // [rsp+0h] [rbp-68h]
  char v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  char v50[88]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a2[2];
  sub_20CFD70((__int64)a2);
  v4 = a2[2];
  v5 = a2[1];
  a2[2] = v4 + 1;
  *(_BYTE *)(v5 + v4) = 34;
  v6 = *(__int64 **)a1;
  v7 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
  if ( v7 == *(_QWORD *)a1 )
  {
LABEL_36:
    sub_20CFD70((__int64)a2);
    v39 = a2[2];
    v40 = a2[1];
    a2[2] = v39 + 1;
    *(_BYTE *)(v40 + v39) = 34;
    return 1;
  }
  else
  {
    v8 = *v6;
    v9 = 0;
    for ( i = v6 + 1; *(_BYTE *)(v8 + 8) == 77; ++i )
    {
      v11 = *(_BYTE **)(v8 + 40);
      v12 = &v11[*(_QWORD *)(v8 + 32)];
      if ( v11 == v12 )
      {
        v14 = 0;
LABEL_24:
        v45 = v7;
        strcpy(v50, "0123456789ABCDEF");
        sub_20CFD70((__int64)a2);
        v21 = a2[2];
        v22 = v45;
        v23 = a2[1];
        a2[2] = v21 + 1;
        *(_BYTE *)(v23 + v21) = 92;
        if ( v14 > 7 )
        {
          sub_20CFD70((__int64)a2);
          v35 = a2[2];
          v22 = v45;
          v36 = a2[1];
          a2[2] = v35 + 1;
          *(_BYTE *)(v36 + v35) = 120;
          if ( v14 > 15 )
          {
            v48 = v45;
            v47 = v50[v14 >> 4];
            sub_20CFD70((__int64)a2);
            v37 = a2[2];
            v38 = a2[1];
            v22 = v48;
            a2[2] = v37 + 1;
            *(_BYTE *)(v38 + v37) = v47;
          }
        }
        v46 = v22;
        v24 = v50[v14 & 0xF];
        sub_20CFD70((__int64)a2);
        v25 = a2[2];
        v26 = a2[1];
        v9 = 1;
        v7 = v46;
        a2[2] = v25 + 1;
        *(_BYTE *)(v26 + v25) = v24;
      }
      else
      {
        v13 = (char)*v11;
        if ( (unsigned __int8)(*v11 - 48) > 9u )
          break;
        v14 = 0;
        while ( 1 )
        {
          ++v11;
          v14 = v13 + 10 * v14 - 48;
          if ( v11 == v12 )
            break;
          v13 = (char)*v11;
          if ( (unsigned __int8)(*v11 - 48) > 9u || v14 > 25 )
            goto LABEL_20;
        }
        if ( v14 > 255 )
          break;
        if ( (_BYTE)v9
          && ((unsigned int)(v14 - 48) <= 9 || (unsigned int)(v14 - 97) <= 5 || (unsigned int)(v14 - 65) <= 5) )
        {
          v43 = v7;
          v15 = j__strlen("\"\"");
          sub_20D1ED0(a2, v15, "\"\"");
          v7 = v43;
        }
        switch ( v14 )
        {
          case 7:
            v44 = v7;
            v27 = j__strlen("\\a");
            v17 = "\\a";
            v18 = v27;
            goto LABEL_17;
          case 8:
            v44 = v7;
            v28 = j__strlen("\\b");
            v17 = "\\b";
            v18 = v28;
            goto LABEL_17;
          case 9:
            v44 = v7;
            v29 = j__strlen("\\t");
            v17 = "\\t";
            v18 = v29;
            goto LABEL_17;
          case 10:
            v44 = v7;
            v30 = j__strlen("\\n");
            v17 = "\\n";
            v18 = v30;
            goto LABEL_17;
          case 11:
            v44 = v7;
            v31 = j__strlen("\\v");
            v17 = "\\v";
            v18 = v31;
            goto LABEL_17;
          case 12:
            v44 = v7;
            v32 = j__strlen("\\f");
            v17 = "\\f";
            v18 = v32;
            goto LABEL_17;
          case 13:
            v44 = v7;
            v33 = j__strlen("\\r");
            v17 = "\\r";
            v18 = v33;
            goto LABEL_17;
          case 34:
            v44 = v7;
            v34 = j__strlen("\\\"");
            v17 = "\\\"";
            v18 = v34;
            goto LABEL_17;
          case 92:
            v44 = v7;
            v16 = j__strlen("\\\\");
            v17 = "\\\\";
            v18 = v16;
LABEL_17:
            sub_20D1ED0(a2, v18, v17);
            v7 = v44;
            v9 = 0;
            break;
          default:
            if ( v14 == 127 || v14 <= 31 )
              goto LABEL_24;
            v49 = v7;
            sub_20CFD70((__int64)a2);
            v41 = a2[2];
            v42 = a2[1];
            v7 = v49;
            v9 = 0;
            a2[2] = v41 + 1;
            *(_BYTE *)(v42 + v41) = v14;
            break;
        }
      }
      if ( (__int64 *)v7 == i )
        goto LABEL_36;
      v8 = *i;
    }
LABEL_20:
    v19 = *(void (**)())(*a2 + 40LL);
    if ( v19 != nullsub_1307 )
      ((void (__fastcall *)(_QWORD *, _QWORD, __int64, __int64, _UNKNOWN *__ptr32 *, __int64))v19)(
        a2,
        a2[2],
        v3,
        v7,
        jpt_20D824B,
        v9);
    a2[2] = v3;
    return 0;
  }
}
