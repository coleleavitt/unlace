__int64 __fastcall sub_BE46C0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rsi
  unsigned int v15; // r15d
  int v16; // ecx
  unsigned int v17; // r11d
  __int64 v18; // r10
  unsigned int v19; // r13d
  unsigned int v20; // eax
  char *v21; // r14
  __int64 v22; // rdi
  __int64 v23; // r12
  char *v24; // rdi
  __int64 v25; // r10
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v30; // r10
  __int64 v31; // r11
  __int64 v32; // [rsp+0h] [rbp-100h]
  int v33[2]; // [rsp+8h] [rbp-F8h]
  __int64 v34; // [rsp+10h] [rbp-F0h]
  unsigned int v36; // [rsp+28h] [rbp-D8h]
  unsigned int v37; // [rsp+2Ch] [rbp-D4h]
  __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  char v39; // [rsp+38h] [rbp-C8h]
  void *ptr; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+48h] [rbp-B8h]
  _BYTE v42[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = -1;
  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v33 = v6;
  v8 = *(_QWORD *)(v7 + 24);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
      v3 = *(_DWORD *)(v9 - 4) - 1;
  }
  v32 = sub_1346140(*(_QWORD *)v33, v7);
  v34 = sub_186B270(0x38u);
  sub_13478B0(v34, *(_QWORD *)v33, v3);
  sub_135F980(a2[9], v32, v34);
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 || *(_BYTE *)(a1 + 40) )
  {
    v15 = 0;
    sub_1349280(v34, v14, v10, v11, v12, v13);
  }
  else
  {
    v15 = 1;
    sub_1349280(v34, **(_QWORD **)(a3 + 8), v10, v11, v12, v13);
  }
  v16 = *(_DWORD *)(a1 + 24);
  v36 = 0;
  ptr = v42;
  v41 = 0x1000000000LL;
  if ( v16 )
  {
    do
    {
      v17 = *(_DWORD *)(a1 + 28);
      LODWORD(v41) = 0;
      v18 = *(_QWORD *)(a3 + 8);
      if ( v17 )
      {
        v19 = 0;
        v37 = HIDWORD(v41);
        v20 = 0;
        do
        {
          v23 = *(_QWORD *)(v18 + 8LL * v15);
          if ( v20 < v37 )
          {
            v21 = (char *)ptr;
          }
          else
          {
            v37 *= 2;
            v21 = (char *)sub_186B270(8LL * v37);
            v20 = v41;
            v24 = (char *)ptr;
            if ( (_DWORD)v41 )
            {
              if ( (unsigned int)(v41 - 1) <= 2 || v21 == (char *)ptr + 8 )
              {
                v30 = 0;
                v31 = 8LL * (unsigned int)v41;
                do
                {
                  *(_QWORD *)&v21[v30] = *(_QWORD *)&v24[v30];
                  v30 += 8;
                }
                while ( v30 != v31 );
              }
              else
              {
                v25 = 0;
                v26 = 16LL * ((unsigned int)v41 >> 1);
                do
                {
                  *(__m128i *)&v21[v25] = _mm_loadu_si128((const __m128i *)&v24[v25]);
                  v25 += 16;
                }
                while ( v26 != v25 );
                if ( (v20 & 1) != 0 )
                  *(_QWORD *)&v21[8 * (v20 & 0xFFFFFFFE)] = *(_QWORD *)&v24[8 * (v20 & 0xFFFFFFFE)];
              }
            }
            if ( v24 && v24 != v42 )
            {
              sub_186B220(v24);
              v20 = v41;
            }
            v17 = *(_DWORD *)(a1 + 28);
            ptr = v21;
            HIDWORD(v41) = v37;
            v18 = *(_QWORD *)(a3 + 8);
          }
          v22 = v20;
          ++v19;
          ++v20;
          ++v15;
          *(_QWORD *)&v21[8 * v22] = v23;
          LODWORD(v41) = v20;
        }
        while ( v19 < v17 );
      }
      else
      {
        v21 = (char *)ptr;
      }
      v27 = v15++;
      sub_1349120(v34, v21, *(_QWORD *)(v18 + 8 * v27));
      ++v36;
    }
    while ( v36 < *(_DWORD *)(a1 + 24) );
  }
  v39 = 1;
  v38 = v32;
  v28 = sub_15DCAD0(v33[0], 0, 0);
  sub_15D0DF0(&v38);
  if ( ptr != v42 && ptr )
    sub_186B220(ptr);
  return v28;
}

