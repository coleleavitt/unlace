__int64 __fastcall sub_29B8E0(_QWORD *a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  const char *v7; // r13
  int v8; // eax
  unsigned __int64 v9; // rbx
  int v10; // ebp
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  __int64 i; // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // edx
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // si
  unsigned __int8 v25; // si
  unsigned __int8 v26; // si
  __int64 v27; // rax
  __int64 v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v30[9]; // [rsp+20h] [rbp-48h] BYREF

  v30[1] = __readfsqword(0x28u);
  v3 = a1[9];
  v29 = 0;
  v4 = ea2node(v3);
  v5 = netnode_getblob(v4, 0, &v29, 0x8000, 83);
  if ( v5 )
  {
    v30[0] = v5;
    v6 = v5;
    v7 = (const char *)(v5 + v29);
    v8 = unpack_dd(v30, v5 + v29);
    v9 = v8;
    v10 = v8;
    if ( a1[14] < (unsigned __int64)v8 )
    {
      v11 = (unsigned int)v8;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 184LL))(a1, (unsigned int)v8);
      v12 = a1[13];
      if ( v12 )
      {
        a1[14] = 0;
        a2 = qfree(v12, (const char *)(unsigned int)v9);
        v13 = a1[14];
        a1[13] = 0;
        a1[15] = 0;
        if ( v13 >= v9 )
          goto LABEL_5;
      }
      else
      {
        v13 = a1[14];
        if ( v13 >= v9 )
        {
LABEL_5:
          if ( v9 != v13 )
            a1[14] = v9;
LABEL_7:
          v28 = a1[20];
          if ( v10 <= 0 )
          {
            if ( v10 <= (int)v28 )
            {
LABEL_29:
              qfree(v6, (const char *)v11, a2);
              sub_29AD80(a1);
              return 1;
            }
          }
          else
          {
            v14 = (unsigned int)v10;
            for ( i = 0; i != v10; ++i )
            {
              v11 = (unsigned __int64)v7;
              v16 = i + unpack_dd(v30, v7);
              if ( v16 != 0x7FFFFFFF && v16 != (_DWORD)i )
              {
                v11 = (unsigned int)v28;
                if ( (v16 & 0x7FFFFFFFu) >= (unsigned int)v28 )
                {
                  *(_DWORD *)(a1[10] + 4 * i) = v16;
                  v17 = *(_DWORD *)(a1[10] + 4 * i);
                  if ( v17 != 0x7FFFFFFF )
                  {
                    v18 = v17 & 0x7FFFFFFF;
                    if ( (_DWORD)i != (_DWORD)v18 )
                      *(_BYTE *)(a1[13] + v18) |= 1u;
                  }
                }
              }
            }
            if ( v10 <= (int)v28 )
              goto LABEL_22;
          }
          v19 = (int)v28;
          do
          {
            if ( (*(_BYTE *)(a1[13] + v19) & 1) == 0 )
              *(_DWORD *)(a1[10] + 4 * v19) = 0x7FFFFFFF;
            ++v19;
          }
          while ( v10 > (int)v19 );
          v14 = (unsigned int)v10;
          if ( v10 > 0 )
          {
LABEL_22:
            v20 = 0;
            v21 = 0;
            v22 = 0;
            while ( 1 )
            {
              if ( v21 )
                goto LABEL_34;
              if ( v30[0] >= (unsigned __int64)v7 )
                break;
              v23 = *(_BYTE *)v30[0]++;
              v21 = 7;
              v22 = v23 >> 1;
              v11 = v23 & 1;
              if ( (_DWORD)v11 )
                goto LABEL_26;
              if ( ++v20 == v14 )
                goto LABEL_29;
              v26 = v22;
              v21 = 6;
              v22 >>= 1;
              v11 = v26 & 1;
              if ( (_BYTE)v11 )
              {
LABEL_26:
                v11 = a1[13];
                if ( (*(_BYTE *)(v11 + v20) & 1) != 0 )
                {
                  v11 = a1[10];
                  *(_DWORD *)(v11 + 4 * v20) |= 0x80000000;
                }
              }
LABEL_28:
              if ( v14 == ++v20 )
                goto LABEL_29;
            }
            if ( v20 + 1 == v14 )
              goto LABEL_29;
            v20 += 2;
            if ( v20 == v14 )
              goto LABEL_29;
            v22 = 0;
            v21 = 6;
LABEL_34:
            v25 = v22;
            --v21;
            v22 >>= 1;
            v11 = v25 & 1;
            if ( (_BYTE)v11 )
              goto LABEL_26;
            goto LABEL_28;
          }
          goto LABEL_29;
        }
        if ( a1[15] >= v9 )
        {
LABEL_41:
          v11 = 0;
          memset((void *)(v13 + v12), 0, v9 - v13);
          a1[14] = v9;
          goto LABEL_7;
        }
      }
      v27 = qvector_reserve(a1 + 13, 0, v9, 1);
      a1[13] = v27;
      v12 = v27;
      v13 = a1[14];
      goto LABEL_41;
    }
  }
  return 0;
}
