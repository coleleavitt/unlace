__int64 __fastcall sub_2D84A0(int *a1, const char *a2, __int64 a3, __int64 a4, double a5, __int64 a6, int a7)
{
  int v8; // ebx
  __int64 v9; // rdi
  __int64 *v10; // rbp
  int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  const char *v17; // r15
  char *v18; // r14
  __int64 v19; // r12
  bool v20; // cf
  char *v21; // r12
  unsigned int v22; // edi
  char *v23; // rdx
  char *v24; // rcx
  int v25; // eax
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 i; // r12
  __int64 *v32; // rax
  __int64 v33; // rdi
  bool v34; // zf
  __int64 v35; // r14
  __int64 (__fastcall *v36)(__int64, _QWORD, _QWORD); // r12
  __int64 v37; // rax
  size_t v38; // r9
  char *v39; // r15
  char *v40; // rdi
  int v41; // ecx
  int v42; // edx
  unsigned __int64 v43; // rax
  char *v44; // [rsp+0h] [rbp-78h]
  int v45; // [rsp+0h] [rbp-78h]
  double v46; // [rsp+0h] [rbp-78h]
  unsigned int v47; // [rsp+Ch] [rbp-6Ch]
  __int64 *v48; // [rsp+10h] [rbp-68h]
  __int64 v49; // [rsp+18h] [rbp-60h]
  char *s; // [rsp+20h] [rbp-58h] BYREF
  __int128 v51; // [rsp+28h] [rbp-50h]
  unsigned __int64 v52; // [rsp+38h] [rbp-40h]

  v47 = (unsigned int)a2;
  v52 = __readfsqword(0x28u);
  v8 = a4;
  if ( (debug & 0x80000) != 0 && (::a6[0] & 0x20) != 0 )
  {
    v41 = a3;
    v42 = (int)a2;
    a2 = "IDADisasmCursor::movePosition(): op=%d, mode=%d, n=%d\n";
    sub_4F7CB0(32, (unsigned int)"IDADisasmCursor::movePosition(): op=%d, mode=%d, n=%d\n", v42, v41, v8, a7);
  }
  v9 = *(_QWORD *)a1;
  if ( (v47 & 0xFFFFFFFD) == 1 )
  {
    v27 = sub_1EB5B0(v9, (__int64)a2, a3, a4, a5);
    v49 = v27;
    if ( *(_BYTE *)(v27 + 68) )
    {
      v8 = 1;
      v48 = (__int64 *)(v27 + 40);
      goto LABEL_8;
    }
    v8 = 1;
  }
  else
  {
    v49 = sub_1EB5B0(v9, (__int64)a2, a3, a4, a5);
    v10 = (__int64 *)(v49 + 40);
    if ( *(_BYTE *)(v49 + 68) )
    {
LABEL_6:
      v48 = v10;
      goto LABEL_7;
    }
  }
  v10 = (__int64 *)(v49 + 40);
  v48 = (__int64 *)(v49 + 40);
  a2 = (const char *)(v49 + 40);
  v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 520LL))(v49, v49 + 40);
  *(_BYTE *)(v49 + 68) = v28;
  if ( v28 )
    goto LABEL_6;
  v29 = *(_QWORD *)(v49 + 40);
  if ( !v29 )
  {
    *(_DWORD *)(v49 + 64) = -1;
    return 0;
  }
  v30 = *(_QWORD *)(v49 + 48);
  if ( v30 )
  {
    for ( i = 0; i != v30; ++i )
    {
      v32 = (__int64 *)(v29 + 24 * i);
      v33 = *v32;
      if ( *v32 )
      {
        v32[1] = 0;
        qfree(v33, a2);
        v29 = *(_QWORD *)(v49 + 40);
      }
    }
  }
  *(_QWORD *)(v49 + 48) = 0;
  a5 = qfree(v29, a2);
  v34 = *(_BYTE *)(v49 + 68) == 0;
  *(_QWORD *)(v49 + 40) = 0;
  *(_QWORD *)(v49 + 56) = 0;
  *(_DWORD *)(v49 + 64) = -1;
  if ( v34 )
    return 0;
LABEL_7:
  if ( v8 > 0 )
  {
LABEL_8:
    v11 = -1;
    while ( 1 )
    {
      switch ( v47 )
      {
        case 1u:
          do
          {
            s = (char *)sub_176860(v48, a1[2]);
            WORD2(s) = 0;
            v11 = sub_176780(v48, (__int64)&s);
            --v8;
          }
          while ( v8 );
          goto LABEL_28;
        case 2u:
        case 4u:
          v12 = *(_QWORD *)a1;
          s = nullptr;
          v51 = 0;
          if ( (unsigned int)sub_1EB590(v12, (__int64)a2, v47, v47, a5) == 1 && *(_QWORD *)(v12 + 888) )
          {
            v35 = *(_QWORD *)(*(_QWORD *)a1 + 888LL);
            v36 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v35 + 184LL);
            v46 = (double)*(__int16 *)(sub_1EA6A0(*(_QWORD *)a1 + 384LL, (__int64)a2, v13, v14, a5) + 30);
            sub_2856C0(v35);
            a5 = a5 * v46 + 1.0;
            v37 = v36(v35, 0, (unsigned int)(int)a5);
            a2 = &s1;
            if ( *(_QWORD *)(v37 + 16) )
              a2 = *(const char **)(v37 + 8);
            tag_remove(&s, a2, 0);
          }
          else
          {
            v15 = *(_QWORD *)(v49 + 40);
            if ( (char **)v15 != &s )
            {
              v16 = *(_QWORD *)(v15 + 8);
              if ( !v16 || (v38 = v16 - 1, v16 == 1) )
              {
                *(_QWORD *)&v51 = 0;
LABEL_14:
                v17 = &s1;
                v18 = (char *)&s1;
                goto LABEL_15;
              }
              v39 = *(char **)v15;
              v40 = s;
              if ( *((_QWORD *)&v51 + 1) < v16 )
              {
                s = (char *)qvector_reserve(&s, s, *(_QWORD *)(v15 + 8), 1);
                v38 = v16 - 1;
                v40 = s;
              }
              a2 = v39;
              *(_QWORD *)&v51 = v16;
              memmove(v40, v39, v38);
              s[v16 - 1] = 0;
            }
          }
          if ( !(_QWORD)v51 )
            goto LABEL_14;
          v18 = s;
          v17 = &v18[strlen(s)];
LABEL_15:
          v19 = *(__int16 *)(sub_1EA6A0(*(_QWORD *)a1 + 384LL, (__int64)a2, v13, v14, a5) + 28);
          v20 = __CFADD__(v18, v19);
          v21 = &v18[v19];
          v44 = v21;
          if ( v20 || v21 >= v17 )
          {
            if ( s )
            {
              *(_QWORD *)&v51 = 0;
              qfree(s, a2);
              return 0;
            }
            return 0;
          }
          while ( 1 )
          {
            v22 = *v21;
            if ( v22 <= 0x7F )
            {
              if ( isspace(v22) )
                break;
            }
            v21 = &v21[(v47 != 2 ? 2 : 0) - 1];
            if ( v21 < v18 || v21 >= v17 )
              goto LABEL_21;
          }
          if ( v44 != v21 )
            v21 += -(v47 != 2) + 1;
LABEL_21:
          v23 = v18;
          v24 = v44;
          if ( v21 >= v18 )
            v23 = v21;
          v25 = (int)v23;
          if ( v17 <= v23 )
            v25 = (int)v17;
          v11 = a1[2] + v25 - (_DWORD)v44;
          if ( s )
          {
            v45 = v11;
            *(_QWORD *)&v51 = 0;
            a5 = qfree(s, a2, v23, v24);
            v11 = v45;
          }
LABEL_27:
          if ( !--v8 )
            goto LABEL_28;
          break;
        case 3u:
          do
          {
            v43 = sub_176860(v48, a1[2]);
            LODWORD(s) = v43;
            WORD2(s) = 0;
            HIWORD(s) = HIWORD(v43) + 1;
            v11 = sub_176780(v48, (__int64)&s);
            --v8;
          }
          while ( v8 );
          goto LABEL_28;
        case 5u:
          v11 = a1[2] + 1;
          goto LABEL_28;
        default:
          goto LABEL_27;
      }
    }
  }
  v11 = -1;
LABEL_28:
  if ( *(_DWORD *)(v49 + 64) <= v11 )
    v11 = *(_DWORD *)(v49 + 64);
  if ( v11 < 0 )
    v11 = 0;
  a1[2] = v11;
  return 1;
}
