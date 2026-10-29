__int64 __fastcall sub_130900(__int128 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r14
  __int64 v9; // rax
  unsigned int v11; // r10d
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r9d
  _BYTE *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // r15
  bool v21; // al
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // [rsp+8h] [rbp-90h]
  __int64 v26; // [rsp+10h] [rbp-88h]
  __int64 v27; // [rsp+10h] [rbp-88h]
  __int64 v28; // [rsp+28h] [rbp-70h]
  __int64 v29; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v30[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *((_QWORD *)&a1 + 1);
  v9 = *(_QWORD *)(a1 + 480);
  v30[3] = __readfsqword(0x28u);
  v25 = *(_QWORD *)(v9 + 112);
  sub_11F370((const __m128i *)a1, *((__int64 *)&a1 + 1), a2);
  sub_11F370((const __m128i *)a1, a3, a4);
  if ( (a5 & 8) != 0 || (unsigned __int8)sub_12E6A0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2, a3, a4, 0) )
  {
    sub_154E70(a1, *((_QWORD *)&a1 + 1), a2, a3, a4, a5);
  }
  else
  {
    if ( (unsigned __int8)sub_11D940((char *)a4, v30, 0) && !v30[0] )
    {
      v23 = -1;
      if ( *((_QWORD *)&a1 + 1) )
        v23 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL);
      sub_11E3A0((char *)a2, v25, 9, v23, 2 * *(_DWORD *)(a2 + 4));
      goto LABEL_4;
    }
    if ( *(_BYTE *)a4 != 4
      || !(unsigned __int8)sub_130590(
                             (const __m128i *)a1,
                             *((__int64 *)&a1 + 1),
                             a2,
                             a3,
                             *(_QWORD *)(a4 + 8),
                             *(_DWORD *)(a4 + 4)) )
    {
      *((_QWORD *)&a1 + 1) = a2;
      v29 = v6;
      v13 = sub_126F20(a1, (__int64)&v29, 1);
      if ( v13 )
      {
        if ( *(_DWORD *)(v13 + 68) == *(_DWORD *)(a2 + 4) && *(_DWORD *)v13 != 1 )
        {
          v28 = v13;
          if ( !sub_11CFF0((_BYTE *)v13, *(_QWORD *)(v25 + 96), 0, v14, v13, v15) )
          {
            if ( *(_DWORD *)v28 == 4 )
            {
              sub_121540((__int64)v30, (unsigned __int8 *)(v28 + 32));
              v27 = v29;
              if ( (unsigned __int8)sub_130900(a1, v29, (unsigned int)v30, a3, a4, a5)
                || (unsigned __int8)sub_12FCA0((const __m128i *)a1, v6, a2, v27, (__int64)v30)
                && (unsigned __int8)sub_12DCD0((const __m128i *)a1, a3, a4, v27, (__int64)v30) )
              {
                sub_11A5D0((char *)a2, (char *)v30);
                sub_11A960((__int64)v30);
                goto LABEL_4;
              }
              sub_11A960((__int64)v30);
            }
            else if ( *(_BYTE *)a4 == 4 )
            {
              v24 = *(_QWORD *)(a4 + 8);
              if ( *(_DWORD *)v24 == 11 && *(_BYTE *)(v24 + 32) == 4 )
              {
                v26 = *(_QWORD *)(a4 + 8);
                if ( sub_123690(*(unsigned __int8 **)(v24 + 40), v25, (unsigned int *)v28, 0) )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(v26 + 40) + 68LL) == *(_DWORD *)(a2 + 4) + *(_DWORD *)(a4 + 4) )
                  {
                    if ( a2 != v26 + 32 )
                    {
                      sub_11A960(a2);
                      sub_121540(a2, (unsigned __int8 *)(v26 + 32));
                    }
                    goto LABEL_4;
                  }
                }
              }
            }
          }
        }
      }
      *((_QWORD *)&a1 + 1) = a4;
      v29 = a3;
      v16 = (_BYTE *)sub_126F20(a1, (__int64)&v29, 1);
      v11 = 0;
      v20 = (__int64)v16;
      if ( !v16 )
        return v11;
      if ( *(_DWORD *)v16 == 1 )
        return v11;
      v21 = sub_11CFF0(v16, *(_QWORD *)(v25 + 96), 0, v17, v18, v19);
      v11 = 0;
      if ( v21 )
        return v11;
      v22 = sub_130590((const __m128i *)a1, v6, a2, v29, v20, *(_DWORD *)(a4 + 4));
      v11 = 0;
      if ( !v22 )
        return v11;
    }
  }
LABEL_4:
  if ( (a5 & 4) == 0 )
    sub_128630(a2, v25, *(_DWORD *)(a2 + 4), 2);
  return 1;
}
