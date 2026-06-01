__int64 __fastcall sub_1409280(__int64 a1, __int64 a2, int a3)
{
  _BYTE *v3; // r14
  int v4; // r8d
  __int64 v7; // r14
  __int64 v8; // r15
  void **v9; // rbp
  void **v10; // rbx
  _BYTE *v11; // r15
  char v12; // bp
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rbx
  _BYTE *v20; // rdx
  unsigned __int64 v21; // rbx
  int v22; // eax
  _BYTE *v23; // r13
  __int64 v24; // r8
  void **v25; // rbp
  void **v26; // rbx
  _BYTE *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // [rsp+8h] [rbp-140h]
  _BYTE *v30; // [rsp+10h] [rbp-138h]
  __int64 v31; // [rsp+18h] [rbp-130h]
  _BYTE *v32; // [rsp+20h] [rbp-128h] BYREF
  __int64 v33; // [rsp+28h] [rbp-120h]
  _BYTE v34[280]; // [rsp+30h] [rbp-118h] BYREF

  LODWORD(v3) = 0;
  v4 = *(_DWORD *)(a2 + 1072);
  v32 = v34;
  v33 = 0x200000000LL;
  if ( v4 )
  {
    v29 = a1;
    LODWORD(v30) = a3;
    v31 = a2 + 1064;
    sub_1408F10((__int64)&v32, (__int64 *)(a2 + 1064));
    v7 = *(_QWORD *)(a2 + 1064);
    v8 = v7 + 112LL * *(unsigned int *)(a2 + 1072);
    if ( v7 == v8 )
    {
      v3 = v32;
      v11 = &v32[112 * (unsigned int)v33];
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v8 -= 112;
          v9 = *(void ***)(v8 + 8);
          v10 = &v9[5 * *(unsigned int *)(v8 + 16)];
          if ( v9 != v10 )
          {
            do
            {
              while ( 1 )
              {
                v10 -= 5;
                if ( *v10 == v10 + 2 )
                  break;
                operator delete(*v10);
                if ( v9 == v10 )
                  goto LABEL_7;
              }
            }
            while ( v9 != v10 );
LABEL_7:
            v9 = *(void ***)(v8 + 8);
          }
          if ( v9 == (void **)(v8 + 24) )
            break;
          free(v9);
          if ( v7 == v8 )
            goto LABEL_10;
        }
      }
      while ( v7 != v8 );
LABEL_10:
      v3 = v32;
      v11 = &v32[112 * (unsigned int)v33];
    }
    *(_DWORD *)(a2 + 1072) = 0;
    if ( v3 == v11 )
    {
      LODWORD(v3) = 0;
    }
    else
    {
      v12 = (char)v30;
      do
      {
        while ( 1 )
        {
          v14 = 4;
          if ( !*((_DWORD *)v3 + 4) )
            break;
          v15 = sub_13F8D90(v29, (__int64 **)v3 + 1, (__int64 *)a2, v12);
          if ( v15 )
          {
            v14 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (unsigned __int8)v3[104]);
            if ( (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFF8LL
               | (unsigned __int16)(4 * (unsigned __int8)v3[104]) & 0xFFF8
              || v14 >> 2 )
            {
              break;
            }
          }
          v16 = *(unsigned int *)(a2 + 1072);
          v17 = *(_QWORD *)(a2 + 1064);
          v18 = v16 + 1;
          v19 = 7 * v16;
          v20 = v3;
          v21 = v17 + 16 * v19;
          if ( v18 > *(unsigned int *)(a2 + 1076) )
          {
            if ( v17 > (unsigned __int64)v3 || v21 <= (unsigned __int64)v3 )
            {
              sub_1408BF0(v31, v18);
              v20 = v3;
              v21 = *(_QWORD *)(a2 + 1064) + 112LL * *(unsigned int *)(a2 + 1072);
            }
            else
            {
              v27 = &v3[-v17];
              sub_1408BF0(v31, v18);
              v28 = *(_QWORD *)(a2 + 1064);
              v20 = &v27[v28];
              v21 = v28 + 112LL * *(unsigned int *)(a2 + 1072);
            }
          }
          *(_DWORD *)v21 = *(_DWORD *)v20;
          *(_QWORD *)(v21 + 8) = v21 + 24;
          *(_QWORD *)(v21 + 16) = 0x200000000LL;
          if ( *((_DWORD *)v20 + 4) )
          {
            v30 = v20;
            sub_13FA600(v21 + 8, (__int64)(v20 + 8));
            v20 = v30;
          }
          v3 += 112;
          *(_BYTE *)(v21 + 104) = v20[104];
          ++*(_DWORD *)(a2 + 1072);
          if ( v3 == v11 )
            goto LABEL_24;
        }
        v13 = *(unsigned int *)(a2 + 1040);
        if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 1044) )
        {
          sub_2237220(a2 + 1032, a2 + 1048, v13 + 1, 8);
          v13 = *(unsigned int *)(a2 + 1040);
        }
        v3 += 112;
        *(_QWORD *)(*(_QWORD *)(a2 + 1032) + 8 * v13) = v14;
        ++*(_DWORD *)(a2 + 1040);
      }
      while ( v3 != v11 );
LABEL_24:
      v22 = *(_DWORD *)(a2 + 1072);
      v23 = v32;
      LOBYTE(v3) = v22 != 0;
      v24 = 112LL * (unsigned int)v33;
      v11 = &v32[v24];
      if ( v32 != &v32[v24] )
      {
        do
        {
          while ( 1 )
          {
            v11 -= 112;
            v25 = *((void ***)v11 + 1);
            v26 = &v25[5 * *((unsigned int *)v11 + 4)];
            if ( v25 != v26 )
            {
              do
              {
                while ( 1 )
                {
                  v26 -= 5;
                  if ( *v26 == v26 + 2 )
                    break;
                  operator delete(*v26);
                  if ( v25 == v26 )
                    goto LABEL_28;
                }
              }
              while ( v25 != v26 );
LABEL_28:
              v25 = *((void ***)v11 + 1);
            }
            if ( v25 == (void **)(v11 + 24) )
              break;
            free(v25);
            if ( v23 == v11 )
              goto LABEL_31;
          }
        }
        while ( v23 != v11 );
LABEL_31:
        v11 = v32;
      }
    }
    if ( v11 != v34 )
      free(v11);
  }
  return (unsigned int)v3;
}
