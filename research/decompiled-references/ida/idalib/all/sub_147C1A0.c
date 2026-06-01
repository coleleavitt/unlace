__int64 __fastcall sub_147C1A0(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r12
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  int v6; // r13d
  __int16 v7; // ax
  int v8; // r12d
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rbx
  __int64 *v18; // rdi
  unsigned int v19; // ebp
  unsigned __int8 *v20; // r13
  unsigned __int8 *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int8 *v29; // r15
  unsigned __int16 v30; // r13
  unsigned int v31; // r12d
  __int64 v32; // rbp
  __int64 v33; // r14
  __int64 v34; // rbx
  void *v35; // rdi
  int v36; // [rsp+8h] [rbp-C0h]
  unsigned int v37; // [rsp+Ch] [rbp-BCh]
  __int64 v38; // [rsp+10h] [rbp-B8h]
  __int64 v39; // [rsp+10h] [rbp-B8h]
  __int64 v40; // [rsp+10h] [rbp-B8h]
  int *v41; // [rsp+18h] [rbp-B0h]
  __int64 v42; // [rsp+38h] [rbp-90h]
  unsigned __int8 *v43; // [rsp+40h] [rbp-88h] BYREF
  __int64 v44; // [rsp+48h] [rbp-80h]

  v41 = (int *)(a1 + 16);
  v2 = *(_WORD *)(a1 + 32);
  result = (unsigned int)v2 - 380;
  if ( (unsigned int)result <= 3 )
  {
    v4 = a1;
    v5 = a2;
    do
    {
      v17 = 0;
      if ( (unsigned __int16)(v2 - 7) > 0xCu && v2 != 1 )
        v17 = *(_QWORD *)(v4 + 24);
      v18 = *(__int64 **)(v4 + 8);
      *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
      sub_14634E0(v18, v41);
      v19 = *(_DWORD *)(v4 + 40);
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 56LL) + 2LL) & 4) == 0 )
      {
        sub_1564820(&v43, v4, v19, 2012);
        v20 = v43;
        if ( !v43 )
        {
          v23 = v44;
          v24 = *(_DWORD *)(v44 + 14976);
          if ( v24 )
          {
            v25 = (unsigned int)(v24 - 1);
            *(_DWORD *)(v44 + 14976) = v25;
            v20 = *(unsigned __int8 **)(v23 + 8 * v25 + 14848);
            v26 = *((unsigned int *)v20 + 134);
            *v20 = 0;
            v27 = *((_QWORD *)v20 + 66);
            *((_DWORD *)v20 + 106) = 0;
            v28 = v27 + (v26 << 6);
            if ( v27 != v28 )
            {
              v40 = v4;
              v29 = v20;
              v30 = v2;
              v31 = v19;
              v42 = v5;
              v32 = v27;
              v33 = v17;
              v34 = v28;
              do
              {
                while ( 1 )
                {
                  v34 -= 64;
                  v35 = *(void **)(v34 + 24);
                  if ( v35 == (void *)(v34 + 40) )
                    break;
                  operator delete(v35);
                  if ( v32 == v34 )
                    goto LABEL_23;
                }
              }
              while ( v32 != v34 );
LABEL_23:
              v19 = v31;
              v17 = v33;
              v2 = v30;
              v5 = v42;
              v20 = v29;
              v4 = v40;
            }
            *((_DWORD *)v20 + 134) = 0;
          }
          else
          {
            v20 = (unsigned __int8 *)operator new(0x3A0u);
            *v20 = 0;
            *((_QWORD *)v20 + 12) = v20 + 112;
            *((_QWORD *)v20 + 16) = v20 + 144;
            *((_QWORD *)v20 + 20) = v20 + 176;
            *((_QWORD *)v20 + 24) = v20 + 208;
            *((_QWORD *)v20 + 28) = v20 + 240;
            *((_QWORD *)v20 + 32) = v20 + 272;
            *((_QWORD *)v20 + 36) = v20 + 304;
            *((_QWORD *)v20 + 40) = v20 + 336;
            *((_QWORD *)v20 + 44) = v20 + 368;
            *((_QWORD *)v20 + 48) = v20 + 400;
            *((_QWORD *)v20 + 52) = v20 + 432;
            *((_QWORD *)v20 + 13) = 0;
            v20[112] = 0;
            *((_QWORD *)v20 + 17) = 0;
            v20[144] = 0;
            *((_QWORD *)v20 + 21) = 0;
            v20[176] = 0;
            *((_QWORD *)v20 + 25) = 0;
            v20[208] = 0;
            *((_QWORD *)v20 + 29) = 0;
            v20[240] = 0;
            *((_QWORD *)v20 + 33) = 0;
            v20[272] = 0;
            *((_QWORD *)v20 + 37) = 0;
            v20[304] = 0;
            *((_QWORD *)v20 + 41) = 0;
            v20[336] = 0;
            *((_QWORD *)v20 + 45) = 0;
            v20[368] = 0;
            *((_QWORD *)v20 + 49) = 0;
            v20[400] = 0;
            *((_QWORD *)v20 + 53) = 0x800000000LL;
            *((_QWORD *)v20 + 66) = v20 + 544;
            *((_QWORD *)v20 + 67) = 0x600000000LL;
          }
          v43 = v20;
        }
        v20[*v20 + 1] = 5;
        v21 = v43;
        v22 = *v43;
        *v43 = v22 + 1;
        *(_QWORD *)&v21[8 * v22 + 16] = v17;
        sub_AEA040((__int64)&v43);
      }
      v38 = sub_15D92D0(*(_QWORD *)(v5 + 40), 80);
      v6 = (v2 == 158) << 8;
      v7 = sub_F963B0(v17, 0, 6);
      v8 = ((unsigned __int16)(v2 - 406) <= 8u) << 9;
      *(_DWORD *)(v38 + 24) = v19;
      *(_DWORD *)(v38 + 28) = v19;
      *(_QWORD *)v38 = v17;
      v9 = v36;
      *(_WORD *)(v38 + 32) = v7;
      BYTE1(v9) = BYTE1(v36) & 0xFC;
      *(_QWORD *)(v38 + 56) &= 0x7F800000uLL;
      *(_QWORD *)(v38 + 8) = 0;
      v37 = v8 | v6 | v37 & 0xFFFFFCFF;
      LOBYTE(v7) = *(_BYTE *)(v38 + 35);
      *(_QWORD *)(v38 + 16) = 0;
      v36 = v8 | v6 | v9;
      *(_BYTE *)(v38 + 34) = -10;
      *(_QWORD *)(v38 + 40) = 0;
      *(_QWORD *)(v38 + 48) = 0;
      *(_BYTE *)(v38 + 35) = (2 * ((v36 & 0x200) != 0)) | BYTE1(v37) & 1 | v7 & 0xFC;
      v10 = sub_15D7D80(v38);
      v11 = v38;
      v12 = *(unsigned int *)(v5 + 60);
      *(_QWORD *)(v38 + 72) = v10;
      v13 = *(unsigned int *)(v5 + 56);
      if ( v13 + 1 > v12 )
      {
        sub_2237220(a2 + 48, v5 + 64, v13 + 1, 8);
        v13 = *(unsigned int *)(v5 + 56);
        v11 = v38;
      }
      *(_QWORD *)(*(_QWORD *)(v5 + 48) + 8 * v13) = v11;
      v14 = *(unsigned int *)(v5 + 16);
      v15 = *(unsigned int *)(v5 + 20);
      ++*(_DWORD *)(v5 + 56);
      if ( v14 + 1 > v15 )
      {
        v39 = v11;
        sub_2237220(a2 + 8, v5 + 24, v14 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8LL * *(unsigned int *)(v5 + 16)) = v39;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * v14) = v11;
      }
      v16 = *(unsigned __int16 *)(v4 + 32);
      ++*(_DWORD *)(v5 + 16);
      v2 = v16;
      result = (unsigned int)(v16 - 380);
    }
    while ( (unsigned int)result <= 3 );
  }
  return result;
}
