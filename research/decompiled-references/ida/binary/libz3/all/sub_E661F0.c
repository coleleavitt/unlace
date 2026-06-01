__int64 __fastcall sub_E661F0(int a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // r15
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int16 v8; // ax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbp
  char *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v19; // rdx
  int v20; // [rsp+0h] [rbp-118h]
  int v21; // [rsp+8h] [rbp-110h]
  int v22; // [rsp+Ch] [rbp-10Ch]
  int v23[2]; // [rsp+10h] [rbp-108h] BYREF
  int v24; // [rsp+18h] [rbp-100h]
  int v25[2]; // [rsp+20h] [rbp-F8h]
  void *v26; // [rsp+28h] [rbp-F0h]
  int v27; // [rsp+30h] [rbp-E8h]
  int v28[2]; // [rsp+38h] [rbp-E0h]
  void *v29; // [rsp+40h] [rbp-D8h]
  void *v30; // [rsp+48h] [rbp-D0h]
  void *v31; // [rsp+50h] [rbp-C8h]
  __int64 v32; // [rsp+58h] [rbp-C0h]
  _QWORD v33[23]; // [rsp+60h] [rbp-B8h] BYREF

  v22 = a1;
  if ( !*(_WORD *)(a2 + 4) && (*(_BYTE *)(a2 + 30) & 1) != 0 )
    return 0;
  v33[0] = a2;
  v31 = v33;
  v32 = 0x1000000001LL;
  *(_QWORD *)v25 = 0;
  v26 = nullptr;
  *(_QWORD *)v28 = 0;
  v29 = nullptr;
  *(_QWORD *)v23 = &off_1C62200;
  v2 = 1;
LABEL_4:
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *((_QWORD *)v31 + v2 - 1);
      LODWORD(v32) = v2 - 1;
      if ( (unsigned __int8)sub_15D37A0(v23, v3) )
        goto LABEL_25;
      sub_15D0A90(v23, v3, 1);
      v8 = *(_WORD *)(v3 + 4);
      if ( !v8 )
      {
        v2 = v32;
        if ( (*(_BYTE *)(v3 + 30) & 1) == 0 )
        {
          v9 = *(unsigned int *)(v3 + 24);
          if ( (_DWORD)v9 )
          {
            LODWORD(v10) = HIDWORD(v32);
            v11 = v3 + 8 * v9;
            do
            {
              if ( v2 < (unsigned int)v10 )
              {
                v12 = (char *)v31;
              }
              else
              {
                v10 = (unsigned int)(2 * v10);
                v12 = (char *)sub_186B270(8 * v10);
                v2 = v32;
                v15 = v31;
                if ( (_DWORD)v32 )
                {
                  if ( (unsigned int)(v32 - 1) <= 2 || v12 == (char *)v31 + 8 )
                  {
                    v19 = 0;
                    do
                    {
                      *(_QWORD *)&v12[v19 * 8] = v15[v19];
                      ++v19;
                    }
                    while ( v19 != v2 );
                  }
                  else
                  {
                    v16 = 0;
                    do
                    {
                      *(__m128i *)&v12[v16 * 8] = _mm_loadu_si128((const __m128i *)&v15[v16]);
                      v16 += 2;
                    }
                    while ( v16 != 2LL * (v2 >> 1) );
                    if ( (v2 & 1) != 0 )
                      *(_QWORD *)&v12[8 * (v2 & 0xFFFFFFFE)] = v15[v2 & 0xFFFFFFFE];
                  }
                }
                if ( v15 != v33 )
                {
                  if ( v15 )
                  {
                    sub_186B220(v15);
                    v2 = v32;
                  }
                }
                v31 = v12;
                HIDWORD(v32) = v10;
              }
              v13 = *(_QWORD *)(v3 + 32);
              v14 = v2;
              v3 += 8;
              ++v2;
              *(_QWORD *)&v12[8 * v14] = v13;
              LODWORD(v32) = v2;
            }
            while ( v11 != v3 );
          }
        }
        goto LABEL_4;
      }
      if ( v8 == 1 )
        break;
      if ( v8 != 2 )
        goto LABEL_25;
      if ( (unsigned __int8)sub_E661F0(
                              *(_DWORD *)(v3 + 20) + v22,
                              *(_QWORD *)(v3 + 24),
                              v4,
                              v5,
                              v6,
                              v7,
                              v20,
                              v21,
                              v23[0],
                              v24,
                              v25[0],
                              (int)v26,
                              v27,
                              v28[0],
                              (int)v29,
                              v30) )
      {
LABEL_38:
        v17 = 1;
        goto LABEL_28;
      }
      v2 = v32;
LABEL_26:
      if ( !v2 )
        goto LABEL_27;
    }
    if ( v22 == *(_DWORD *)(v3 + 16) )
      goto LABEL_38;
LABEL_25:
    v2 = v32;
    goto LABEL_26;
  }
LABEL_27:
  v17 = 0;
LABEL_28:
  *(_QWORD *)v23 = &off_1C62200;
  if ( v29 )
    sub_186B220(v29);
  if ( v26 )
    sub_186B220(v26);
  if ( v31 != v33 && v31 )
    sub_186B220(v31);
  return v17;
}

