__int64 __fastcall sub_220FBD0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char *v4; // kr00_8
  unsigned __int64 v5; // rcx
  _BYTE *v6; // rax
  unsigned __int64 v7; // r8
  signed __int64 v8; // rdx
  _QWORD *v9; // rdi
  unsigned __int64 v11; // r8
  char *v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // rsi
  const char *v15; // [rsp+8h] [rbp-B0h] BYREF
  char s[32]; // [rsp+10h] [rbp-A8h] BYREF
  time_t timer[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v18; // [rsp+40h] [rbp-78h]
  struct tm tp; // [rsp+50h] [rbp-68h] BYREF

  v2 = a1;
  timer[0] = a2 / 1000000000;
  localtime_r(timer, &tp);
  strftime(s, 0x14u, "%Y-%m-%d %H:%M:%S", &tp);
  v4 = &s[strlen(s)];
  v5 = *(_QWORD *)(a1 + 24);
  v7 = v5;
  v8 = v4 - s;
  v9 = *(_QWORD **)(a1 + 32);
  v6 = v9;
  if ( v4 - s <= v5 - (unsigned __int64)v9 )
  {
    if ( !v8 )
      goto LABEL_3;
    if ( (unsigned int)v8 >= 8 )
    {
      v11 = (unsigned __int64)(v9 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v9 = *(_QWORD *)s;
      *(_QWORD *)((char *)v9 + (unsigned int)v8 - 8) = *(_QWORD *)&s[(unsigned int)v8 - 8];
      v12 = (char *)v9 - v11;
      if ( (((_DWORD)v8 + (_DWORD)v12) & 0xFFFFFFF8) >= 8 )
      {
        v13 = 0;
        do
        {
          v14 = v13;
          v13 += 8;
          *(_QWORD *)(v11 + v14) = *(_QWORD *)(s - v12 + v14);
        }
        while ( v13 < (((_DWORD)v8 + (_DWORD)v12) & 0xFFFFFFF8) );
      }
      goto LABEL_10;
    }
    if ( (v8 & 4) != 0 )
    {
      *(_DWORD *)v9 = *(_DWORD *)s;
      *(_DWORD *)((char *)v9 + (unsigned int)v8 - 4) = *(_DWORD *)&s[(unsigned int)v8 - 4];
      v7 = *(_QWORD *)(v2 + 24);
      v9 = *(_QWORD **)(v2 + 32);
    }
    else if ( (_DWORD)v8 )
    {
      *(_BYTE *)v9 = s[0];
      if ( (v8 & 2) == 0 )
      {
LABEL_10:
        v7 = *(_QWORD *)(v2 + 24);
        v9 = *(_QWORD **)(v2 + 32);
        goto LABEL_11;
      }
      *(_WORD *)((char *)v9 + (unsigned int)v8 - 2) = *(_WORD *)&s[(unsigned int)v8 - 2];
      v7 = *(_QWORD *)(v2 + 24);
      v9 = *(_QWORD **)(v2 + 32);
    }
LABEL_11:
    v6 = (char *)v9 + v8;
    *(_QWORD *)(v2 + 32) = (char *)v9 + v8;
    if ( v7 > (unsigned __int64)v9 + v8 )
      goto LABEL_4;
LABEL_12:
    v2 = sub_227BA10(v2, 46);
    goto LABEL_5;
  }
  v2 = sub_227BF10(v2, s, v8);
  v6 = *(_BYTE **)(v2 + 32);
  v5 = *(_QWORD *)(v2 + 24);
LABEL_3:
  if ( v5 <= (unsigned __int64)v6 )
    goto LABEL_12;
LABEL_4:
  *(_QWORD *)(v2 + 32) = v6 + 1;
  *v6 = 46;
LABEL_5:
  v15 = "%.9lu";
  *(__m128 *)timer = _mm_loadh_ps((const double *)&v15);
  v18 = a2 % 1000000000;
  return sub_227C560(v2, timer);
}
