__int64 __fastcall sub_9EE120(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v7; // ecx
  _QWORD *v8; // r14
  _DWORD *v9; // rax
  unsigned __int8 v10; // cl
  __int64 v11; // rax
  unsigned int v13; // r14d
  bool v14; // r15
  _DWORD *v15; // rsi
  __int64 v16; // r13
  char *v17; // rax
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // eax
  _QWORD *v22; // r9
  unsigned __int8 v23; // bl
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // [rsp+8h] [rbp-100h]
  _QWORD *v30; // [rsp+8h] [rbp-100h]
  __int64 v31; // [rsp+10h] [rbp-F8h]
  __int64 v32; // [rsp+18h] [rbp-F0h]
  unsigned int v33; // [rsp+2Ch] [rbp-DCh]
  __int64 v34; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h]
  _QWORD v38[23]; // [rsp+50h] [rbp-B8h] BYREF

  v4 = a2;
  if ( a4 )
  {
    if ( a3 == a2 )
    {
      ptr = &dword_0 + 1;
      v37 = 0;
      v23 = sub_98B380(a3);
      v38[0] = 1;
      v38[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v38);
      BYTE4(v38[0]) &= ~1u;
      LODWORD(v38[0]) = 1;
      v4 = sub_27B900(a1 + 344, (int)&ptr, v23, v24, v25, v26);
      sub_25A130((char *)&ptr);
      ptr = (void *)v4;
      if ( v4 )
        ++*(_DWORD *)(v4 + 8);
      sub_98C750((_QWORD *)(a1 + 1368), &ptr);
    }
    else
    {
      ptr = v38;
      v37 = 0x1000000000LL;
      v7 = 0;
      if ( *(_WORD *)(a2 + 4) )
      {
LABEL_4:
        v8 = ptr;
      }
      else
      {
        v13 = 0;
        do
        {
          v14 = v13 < a4;
          v15 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
          if ( !v15 || *v15 != 5 || v15[1] != 9 )
            break;
          if ( v13 >= a4 )
            goto LABEL_20;
          v21 = *(_DWORD *)(v4 + 24);
          v14 = 1;
          v33 = v21;
          if ( v21 > 1 )
          {
            v22 = (_QWORD *)(v4 + 32);
            v32 = v4 + 8LL * (v21 - 2) + 40;
            do
            {
              v14 = v13 < a4;
              v35 = *v22;
              if ( a3 == v35 && v13 < a4 )
              {
                v14 = ++v13 < a4;
              }
              else
              {
                v31 = a3;
                v30 = v22;
                sub_9EDC60((__int64)&ptr, &v35);
                a3 = v31;
                v22 = v30;
              }
              ++v22;
            }
            while ( (_QWORD *)v32 != v22 );
          }
          v4 = *(_QWORD *)(v4 + 8LL * (v33 - 1) + 32);
        }
        while ( !*(_WORD *)(v4 + 4) );
        if ( a3 == v4 && v14 )
          goto LABEL_6;
LABEL_20:
        v7 = v37;
        if ( (unsigned int)v37 < HIDWORD(v37) )
          goto LABEL_4;
        v29 = a3;
        v16 = (unsigned int)(2 * HIDWORD(v37));
        v17 = (char *)sub_186B270(8 * v16);
        v7 = v37;
        v18 = ptr;
        v8 = v17;
        a3 = v29;
        if ( (_DWORD)v37 )
        {
          if ( (unsigned int)(v37 - 1) <= 2 || v17 == (char *)ptr + 8 )
          {
            v27 = 0;
            v28 = 8LL * (unsigned int)v37;
            do
            {
              v8[v27 / 8] = v18[v27 / 8];
              v27 += 8LL;
            }
            while ( v28 != v27 );
          }
          else
          {
            v19 = 0;
            v20 = 16LL * ((unsigned int)v37 >> 1);
            do
            {
              *(__m128i *)&v8[v19 / 8] = _mm_loadu_si128((const __m128i *)&v18[v19 / 8]);
              v19 += 16LL;
            }
            while ( v20 != v19 );
            if ( (v7 & 1) != 0 )
              v8[v7 & 0xFFFFFFFE] = v18[v7 & 0xFFFFFFFE];
          }
        }
        if ( v18 != v38 && v18 )
        {
          sub_186B220(v18);
          v7 = v37;
          a3 = v29;
        }
        ptr = v8;
        HIDWORD(v37) = v16;
      }
      v8[v7] = v4;
      LODWORD(v37) = v7 + 1;
LABEL_6:
      v9 = *(_DWORD **)(sub_15D1F10(a3) + 24);
      if ( v9 )
      {
        v10 = 0;
        if ( *v9 == 5 )
          v10 = v9[1] == 1;
      }
      else
      {
        v10 = 0;
      }
      v11 = sub_99D6C0(a1, v37, (__int64 *)ptr, v10);
      v34 = v11;
      v4 = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      sub_98C750((_QWORD *)(a1 + 1368), &v34);
      if ( ptr != v38 && ptr )
        sub_186B220(ptr);
    }
  }
  return v4;
}

