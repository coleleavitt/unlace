_WORD *__fastcall sub_ED16B0(__int64 a1, char a2)
{
  _WORD *v3; // rax
  _WORD *v4; // r15
  _QWORD *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 *v10; // r14
  __int64 v11; // r12
  __int16 v12; // ax
  _WORD *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // edi
  __int64 *v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  int v23; // edi
  char *v24; // rsi
  unsigned __int64 v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 *v29; // rcx
  __int64 *v30; // rsi
  __int64 v31; // rdi
  char *v32; // rsi
  int v33; // edx
  int v34; // r15d
  int v35; // [rsp+10h] [rbp-A8h]
  int v36; // [rsp+10h] [rbp-A8h]
  _WORD *v37; // [rsp+10h] [rbp-A8h]
  int v38; // [rsp+18h] [rbp-A0h]
  void *v39; // [rsp+20h] [rbp-98h] BYREF
  __int64 v40; // [rsp+28h] [rbp-90h]
  _QWORD v41[4]; // [rsp+30h] [rbp-88h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int64 v43; // [rsp+58h] [rbp-60h]
  _BYTE v44[88]; // [rsp+60h] [rbp-58h] BYREF

  v3 = (_WORD *)sub_EC6020(a1, 0);
  v4 = v3;
  if ( a2 && (*v3 & 0x1FF) == 0xF9 )
  {
    v41[0] = v3;
    v40 = 0x400000001LL;
    v5 = v41;
    v6 = 1;
    v39 = v41;
    ptr = v44;
    v43 = 0x400000000LL;
LABEL_4:
    v4 = nullptr;
    while ( v6 )
    {
      v7 = v6--;
      v8 = v5[v7 - 1];
      if ( !v8 )
      {
        v19 = &v5[v6 - 1];
        while ( v6 )
        {
          v8 = *v19;
          --v6;
          --v19;
          if ( v8 )
            goto LABEL_7;
        }
        LODWORD(v40) = 0;
        break;
      }
LABEL_7:
      LODWORD(v40) = v6;
      v9 = v8 + 8LL * *(unsigned int *)(v8 + 4) + 16;
      v10 = (__int64 *)(v8 + 16);
      if ( (__int64 *)v9 != v10 )
      {
        do
        {
          v11 = *v10;
          if ( *v10 )
          {
            v12 = *(_WORD *)v11 & 0x1FF;
            if ( v12 == 237 )
            {
              v11 = *(_QWORD *)(v11 + 8);
              v12 = *(_WORD *)v11 & 0x1FF;
            }
            if ( v12 == 252
              || v12 == 243
              || ((v12 + 351) & 0x1FFu) <= 0x4B
              && (unsigned __int8)def_FDA061(*(unsigned int *)(v11 + 8))
              && !(unsigned __int8)sub_ED1560((_WORD *)v11) )
            {
              if ( v4 )
              {
                v6 = v40;
                v4 = (_WORD *)a1;
                goto LABEL_37;
              }
              v4 = (_WORD *)v11;
            }
            else
            {
              v13 = (_WORD *)sub_EC6020(v11, 0);
              if ( v13 && (*v13 & 0x1FF) == 0xF9 )
              {
                v14 = (unsigned int)v43;
                v15 = (unsigned int)v43 + 1LL;
                if ( v15 > HIDWORD(v43) )
                {
                  v37 = v13;
                  sub_22134E0(&ptr, v44, v15, 8);
                  v14 = (unsigned int)v43;
                  v13 = v37;
                }
                *((_QWORD *)ptr + v14) = v13;
                LODWORD(v43) = v43 + 1;
              }
            }
          }
          ++v10;
        }
        while ( (__int64 *)v9 != v10 );
        v6 = v40;
        if ( (_DWORD)v40 )
          goto LABEL_38;
LABEL_21:
        if ( v4 )
          goto LABEL_28;
        v16 = v39;
        v17 = HIDWORD(v40);
        if ( v39 == v41 || (v5 = ptr, ptr == v44) )
        {
          v20 = (unsigned int)v43;
          v21 = 0;
          v22 = 0;
          if ( HIDWORD(v40) >= (unsigned int)v43 )
            goto LABEL_44;
          sub_22134E0(&v39, v41, (unsigned int)v43, 8);
          v25 = (unsigned int)v40;
          v6 = v40;
          if ( HIDWORD(v43) < (unsigned int)v40 )
          {
            sub_22134E0(&ptr, v44, (unsigned int)v40, 8);
            v25 = (unsigned int)v40;
            v6 = v40;
          }
          v20 = (unsigned int)v43;
          v16 = v39;
          v21 = v25;
          v22 = (unsigned int)v43;
          if ( v25 <= (unsigned int)v43 )
            v22 = v25;
          if ( v22 )
          {
            v26 = ptr;
            v27 = *(_QWORD *)v39;
            *(_QWORD *)v39 = *(_QWORD *)ptr;
            *v26 = v27;
            v28 = 8;
            if ( v22 != 1 )
            {
              do
              {
                v29 = (__int64 *)((char *)ptr + v28);
                v30 = (__int64 *)((char *)v39 + v28);
                v28 += 8;
                v31 = *v30;
                *v30 = *v29;
                *v29 = v31;
              }
              while ( 8 * v22 != v28 );
            }
            v16 = v39;
          }
          if ( v25 <= v20 )
          {
LABEL_44:
            v5 = v16;
            if ( v20 > v21 )
            {
              v23 = v21;
              v24 = (char *)ptr + 8 * v22;
              if ( v24 != (char *)ptr + 8 * v20 )
              {
                v38 = v22;
                v35 = v21;
                memcpy(&v16[v21], v24, 8 * v20 - 8 * v22);
                v23 = v40;
                v5 = v39;
                LODWORD(v22) = v38;
                LODWORD(v21) = v35;
              }
              LODWORD(v43) = v22;
              v6 = v23 + v20 - v21;
              LODWORD(v40) = v6;
            }
          }
          else
          {
            v32 = (char *)&v16[v22];
            if ( v32 == (char *)&v16[v25] )
            {
              v5 = v16;
              v33 = v20;
            }
            else
            {
              v36 = v22;
              memcpy((char *)ptr + 8 * v20, v32, 8 * v25 - 8 * v22);
              v33 = v43;
              v5 = v39;
              LODWORD(v22) = v36;
            }
            LODWORD(v40) = v22;
            v34 = v33 + v25 - v20;
            v6 = v22;
            LODWORD(v43) = v34;
          }
        }
        else
        {
          v39 = ptr;
          ptr = v16;
          v6 = v43;
          v40 = v43;
          LODWORD(v43) = 0;
          HIDWORD(v43) = v17;
        }
        goto LABEL_4;
      }
LABEL_37:
      if ( !v6 )
        goto LABEL_21;
LABEL_38:
      v5 = v39;
    }
    if ( !v4 )
      v4 = (_WORD *)a1;
LABEL_28:
    if ( ptr != v44 )
      free(ptr);
    if ( v39 != v41 )
      free(v39);
  }
  return v4;
}

