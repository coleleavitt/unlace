int __fastcall sub_67CE00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r12
  unsigned int v6; // ebx
  int v7; // r13d
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  bool v10; // al
  int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  char v18; // dl
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  _DWORD *v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  __int64 *v24; // r13
  __int64 v25; // rax
  __int64 *v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // r12
  __int64 *v29; // rdi
  __int64 v30; // rcx
  _DWORD *v31; // rax
  _DWORD *v32; // rdx
  __int64 *v33; // rdi
  __int64 v34; // rcx
  _DWORD *v35; // rax
  _DWORD *v36; // rcx
  __int64 *v37; // rdi
  __int64 v38; // rdx
  _DWORD *v39; // rax
  _DWORD *v40; // rdx
  _BYTE v42[57]; // [rsp+Fh] [rbp-39h] BYREF

  LODWORD(v2) = 1;
  if ( (_DWORD)a2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(v3 + 2152);
    if ( (int)a2 < 0 )
      LODWORD(a2) = sub_CADBE0(*(_QWORD *)(v3 + 2152), a2);
    v5 = *(int *)(v4 + 408);
    v6 = a2 & 0x7FFFFFFF;
    v7 = v5 + 1;
    if ( (unsigned int)(v5 + 1) <= 1 )
    {
      v8 = *(_DWORD **)(v4 + 184);
      if ( v6 < (*v8 & 0x7FFFFFFFu) )
        goto LABEL_21;
    }
    else
    {
      if ( (int)v5 < 0 )
      {
        v19 = (unsigned int)(-2 - v5);
        v20 = *(_QWORD *)(*(_QWORD *)(v4 + 256) + 8LL * ((unsigned int)(-2 - v5) >> 6));
        if ( _bittest64(&v20, v19) )
        {
          v26 = (__int64 *)(*(_QWORD *)(v4 + 208) + 8 * ((unsigned __int64)(int)v19 >> 5));
          v27 = *v26;
          if ( !*v26 )
          {
            v29 = (__int64 *)(*(_QWORD *)(v4 + 224) & 0xFFFFFFFFFFFFFFF8LL);
            v30 = *v29;
            v29[10] += 768;
            v31 = (_DWORD *)((v30 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v29[1] >= (unsigned __int64)(v31 + 192) && v30 )
              *v29 = (__int64)(v31 + 192);
            else
              v31 = (_DWORD *)sub_67A630((__int64)v29, 768, 3);
            *v26 = (__int64)v31;
            v32 = v31 + 192;
            do
            {
              *v31 = 0;
              v31 += 6;
              *((_OWORD *)v31 - 1) = 0;
            }
            while ( v31 != v32 );
            v27 = *v26;
          }
          v21 = (_DWORD *)(v27 + 24LL * ((-2 - (_BYTE)v5) & 0x1F));
        }
        else
        {
          v21 = (_DWORD *)sub_CA9380(v4, (unsigned int)v19, 0);
        }
        if ( v6 < (*v21 & 0x7FFFFFFFu) )
          goto LABEL_21;
        if ( (_DWORD)v5 == -2 )
        {
LABEL_11:
          v11 = *(_DWORD *)(v4 + 408);
          v42[0] = 0;
          if ( (unsigned int)(v11 + 1) <= 1 )
            goto LABEL_22;
          goto LABEL_12;
        }
        if ( *(_DWORD *)(v4 + 192) != v7 )
        {
          v22 = (unsigned int)(-2 - v7);
          v23 = *(_QWORD *)(*(_QWORD *)(v4 + 256) + 8LL * ((unsigned int)(-2 - v7) >> 6));
          if ( _bittest64(&v23, v22) )
          {
            v24 = (__int64 *)(*(_QWORD *)(v4 + 208) + 8 * ((unsigned __int64)(int)v22 >> 5));
            v25 = *v24;
            if ( !*v24 )
            {
              v37 = (__int64 *)(*(_QWORD *)(v4 + 224) & 0xFFFFFFFFFFFFFFF8LL);
              v38 = *v37;
              v37[10] += 768;
              v39 = (_DWORD *)((v38 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( v37[1] >= (unsigned __int64)(v39 + 192) && v38 )
                *v37 = (__int64)(v39 + 192);
              else
                v39 = (_DWORD *)sub_67A630((__int64)v37, 768, 3);
              *v24 = (__int64)v39;
              v40 = v39 + 192;
              do
              {
                *v39 = 0;
                v39 += 6;
                *((_OWORD *)v39 - 1) = 0;
              }
              while ( v40 != v39 );
              v25 = *v24;
            }
            v9 = (_DWORD *)(v25 + 24 * (v22 & 0x1F));
          }
          else
          {
            v9 = (_DWORD *)sub_CA9380(v4, (unsigned int)v22, 0);
          }
          goto LABEL_9;
        }
LABEL_25:
        v10 = v6 < *(_DWORD *)(v4 + 248);
LABEL_10:
        if ( v10 )
          goto LABEL_11;
LABEL_21:
        v11 = sub_CA9700(v4, v6);
        v42[0] = 0;
        if ( (unsigned int)(v11 + 1) <= 1 )
          goto LABEL_22;
LABEL_12:
        if ( v11 >= 0 )
        {
          v12 = *(_QWORD *)(v4 + 184) + 24LL * v11;
          goto LABEL_14;
        }
        v16 = (unsigned int)(-2 - v11);
        v17 = *(_QWORD *)(*(_QWORD *)(v4 + 256) + 8LL * ((unsigned int)(-2 - v11) >> 6));
        if ( _bittest64(&v17, v16) )
        {
          v28 = (_QWORD *)(*(_QWORD *)(v4 + 208) + 8 * ((unsigned __int64)(int)v16 >> 5));
          if ( *v28 )
          {
            v12 = *v28 + 24 * (v16 & 0x1F);
            goto LABEL_14;
          }
          v33 = (__int64 *)(*(_QWORD *)(v4 + 224) & 0xFFFFFFFFFFFFFFF8LL);
          v34 = *v33;
          v33[10] += 768;
          v35 = (_DWORD *)((v34 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v33[1] >= (unsigned __int64)(v35 + 192) && v34 )
          {
            *v33 = (__int64)(v35 + 192);
            v18 = 0;
          }
          else
          {
            v35 = (_DWORD *)sub_67A630((__int64)v33, 768, 3);
            v18 = v42[0];
          }
          *v28 = v35;
          v36 = v35 + 192;
          do
          {
            *v35 = 0;
            v35 += 6;
            *((_OWORD *)v35 - 1) = 0;
          }
          while ( v36 != v35 );
          v12 = *v28 + 24 * (v16 & 0x1F);
        }
        else
        {
          v12 = sub_CA9380(v4, (unsigned int)v16, v42);
          v18 = v42[0];
        }
        if ( !v18 && v12 )
        {
LABEL_14:
          if ( *(char *)(v12 + 3) >= 0 )
          {
            v13 = *(_QWORD *)((*(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
            if ( v13 )
            {
              while ( 1 )
              {
                v14 = *(_QWORD *)(v13 + 8);
                if ( !v14 )
                  break;
                v15 = v14;
                v13 = v14 & 0xFFFFFFFFFFFFFFF8LL;
                v2 = (v15 >> 2) & 1;
                if ( !(_DWORD)v2 )
                {
                  LODWORD(v2) = v13 == 0;
                  return v2;
                }
                if ( !v13 )
                  return v2;
              }
            }
          }
        }
LABEL_22:
        LODWORD(v2) = 1;
        return v2;
      }
      v8 = *(_DWORD **)(v4 + 184);
      if ( v6 < (v8[6 * v5] & 0x7FFFFFFFu) )
        goto LABEL_21;
    }
    if ( v7 != *(_DWORD *)(v4 + 192) )
    {
      v9 = &v8[6 * v7];
LABEL_9:
      v10 = v6 < (*v9 & 0x7FFFFFFFu);
      goto LABEL_10;
    }
    goto LABEL_25;
  }
  return v2;
}

