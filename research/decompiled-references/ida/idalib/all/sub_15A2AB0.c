__int64 __fastcall sub_15A2AB0(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 *v3; // r15
  __int64 v4; // r12
  __int64 (__fastcall ***v5)(); // r8
  const void *v6; // rsi
  size_t v7; // rax
  size_t v8; // r9
  char *v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v12; // rax
  _WORD *v13; // rsi
  __int64 (__fastcall ***v14)(); // r8
  const void *v15; // rsi
  size_t v16; // rax
  size_t v17; // r9
  char *v18; // rdi
  unsigned __int64 v19; // rax
  const char *v20; // rsi
  size_t v21; // r8
  __int64 (__fastcall **v22)(); // rax
  __int64 (__fastcall **v23)(); // rax
  __int64 (__fastcall ***src)(); // [rsp+8h] [rbp-A8h]
  const char *srca; // [rsp+8h] [rbp-A8h]
  char *srcb; // [rsp+8h] [rbp-A8h]
  void *srcc; // [rsp+8h] [rbp-A8h]
  char *srcd; // [rsp+8h] [rbp-A8h]
  __int64 (__fastcall ***v29)(); // [rsp+10h] [rbp-A0h]
  __int64 (__fastcall ***v30)(); // [rsp+10h] [rbp-A0h]
  void *v31[2]; // [rsp+18h] [rbp-98h] BYREF
  __int64 v32; // [rsp+28h] [rbp-88h] BYREF
  __int64 (__fastcall **v33)(); // [rsp+38h] [rbp-78h] BYREF
  int v34; // [rsp+40h] [rbp-70h]
  __int128 v35; // [rsp+48h] [rbp-68h]
  void *dest; // [rsp+58h] [rbp-58h]
  char v37; // [rsp+60h] [rbp-50h]
  int v38; // [rsp+64h] [rbp-4Ch]
  __int64 v39; // [rsp+68h] [rbp-48h]

  v3 = a2 + 16;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v39 = a1;
  v33 = &off_2BEBE68;
  v34 = 0;
  v37 = 0;
  v38 = 1;
  dest = nullptr;
  v35 = 0;
  sub_227B8B0(&v33, 0, 0, 0);
  v4 = (__int64)&a2[8 * *a2 + 16];
  if ( (unsigned __int16 *)v4 != a2 + 16 )
  {
    while ( 1 )
    {
      switch ( *(_DWORD *)v3 )
      {
        case 2:
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)dest > 1u )
          {
            src = &v33;
            *(_WORD *)dest = 9083;
            dest = (char *)dest + 2;
          }
          else
          {
            src = (__int64 (__fastcall ***)())sub_227BF10(&v33, "{#", 2);
          }
          sub_15A2AB0(v31, *((_QWORD *)v3 + 1));
          v12 = sub_227BF10(src, v31[0], v31[1]);
          v13 = *(_WORD **)(v12 + 32);
          if ( *(_QWORD *)(v12 + 24) - (_QWORD)v13 > 1u )
          {
            *v13 = 32035;
            *(_QWORD *)(v12 + 32) += 2LL;
          }
          else
          {
            sub_227BF10(v12, "#}", 2);
          }
          if ( v31[0] == &v32 )
            goto LABEL_11;
          operator delete(v31[0]);
          v3 += 8;
          if ( (unsigned __int16 *)v4 != v3 )
            continue;
          goto LABEL_12;
        case 3:
        case 6:
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)dest > 1u )
          {
            v5 = &v33;
            *(_WORD *)dest = 9020;
            dest = (char *)dest + 2;
          }
          else
          {
            v5 = (__int64 (__fastcall ***)())sub_227BF10(&v33, "<#", 2);
          }
          v6 = *((const void **)v3 + 1);
          if ( !v6 )
            goto LABEL_8;
          v29 = v5;
          v7 = strlen(*((const char **)v3 + 1));
          v5 = v29;
          v8 = v7;
          v9 = (char *)v29[4];
          v10 = (char *)v29[3] - v9;
          if ( v8 > v10 )
          {
            v5 = (__int64 (__fastcall ***)())sub_227BF10(v29, v6, v8);
LABEL_8:
            v9 = (char *)v5[4];
            v10 = (char *)v5[3] - v9;
LABEL_9:
            if ( v10 <= 1 )
              goto LABEL_10;
            goto LABEL_35;
          }
          if ( !v8 )
            goto LABEL_9;
          srcb = (char *)v8;
          memcpy(v9, v6, v8);
          v5 = v29;
          v22 = v29[3];
          v9 = &srcb[(_QWORD)v29[4]];
          v29[4] = (__int64 (__fastcall **)())v9;
          if ( (unsigned __int64)((char *)v22 - v9) <= 1 )
          {
LABEL_10:
            sub_227BF10(v5, "#>", 2);
            goto LABEL_11;
          }
LABEL_35:
          v3 += 8;
          *(_WORD *)v9 = 15907;
          v5[4] = (__int64 (__fastcall **)())((char *)v5[4] + 2);
          if ( (unsigned __int16 *)v4 == v3 )
            goto LABEL_12;
          continue;
        case 4:
        case 5:
          if ( *((_QWORD *)&v35 + 1) - (_QWORD)dest > 1u )
          {
            v14 = &v33;
            *(_WORD *)dest = 9051;
            dest = (char *)dest + 2;
          }
          else
          {
            v14 = (__int64 (__fastcall ***)())sub_227BF10(&v33, "[#", 2);
          }
          v15 = *((const void **)v3 + 1);
          if ( !v15 )
            goto LABEL_25;
          v30 = v14;
          v16 = strlen(*((const char **)v3 + 1));
          v14 = v30;
          v17 = v16;
          v18 = (char *)v30[4];
          v19 = (char *)v30[3] - v18;
          if ( v17 <= v19 )
          {
            if ( v17 )
            {
              srcd = (char *)v17;
              memcpy(v18, v15, v17);
              v14 = v30;
              v23 = v30[3];
              v18 = &srcd[(_QWORD)v30[4]];
              v30[4] = (__int64 (__fastcall **)())v18;
              v19 = (char *)v23 - v18;
            }
          }
          else
          {
            v14 = (__int64 (__fastcall ***)())sub_227BF10(v30, v15, v17);
LABEL_25:
            v18 = (char *)v14[4];
            v19 = (char *)v14[3] - v18;
          }
          if ( v19 > 1 )
          {
            v3 += 8;
            *(_WORD *)v18 = 23843;
            v14[4] = (__int64 (__fastcall **)())((char *)v14[4] + 2);
            if ( (unsigned __int16 *)v4 == v3 )
              goto LABEL_12;
          }
          else
          {
            v3 += 8;
            sub_227BF10(v14, "#]", 2);
            if ( (unsigned __int16 *)v4 == v3 )
              goto LABEL_12;
          }
          continue;
        default:
          if ( !*((_QWORD *)v3 + 1) )
            goto LABEL_11;
          srca = *((const char **)v3 + 1);
          v20 = srca;
          v21 = strlen(srca);
          if ( v21 <= *((_QWORD *)&v35 + 1) - (_QWORD)dest )
          {
            if ( v21 )
            {
              v3 += 8;
              srcc = (void *)v21;
              memcpy(dest, v20, v21);
              dest = (char *)dest + (_QWORD)srcc;
              if ( (unsigned __int16 *)v4 == v3 )
                goto LABEL_12;
            }
            else
            {
LABEL_11:
              v3 += 8;
              if ( (unsigned __int16 *)v4 == v3 )
                goto LABEL_12;
            }
          }
          else
          {
            v3 += 8;
            sub_227BF10(&v33, srca, v21);
            if ( (unsigned __int16 *)v4 == v3 )
              goto LABEL_12;
          }
          break;
      }
    }
  }
LABEL_12:
  v33 = &off_2BEBE68;
  sub_227B7A0(&v33);
  return a1;
}
