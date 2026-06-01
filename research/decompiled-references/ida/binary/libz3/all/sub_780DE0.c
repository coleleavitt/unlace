void __fastcall sub_780DE0(__int64 a1, const __m128i **a2, __int64 a3, double a4)
{
  int v4; // r8d
  int v5; // r9d
  __int64 *v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  __m128i *v9; // rdi
  __m128i *v12; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v13[8]; // [rsp+18h] [rbp-80h] BYREF
  __int64 (__fastcall **v14)(int, int, int, int, int, int, int, char); // [rsp+20h] [rbp-78h]
  __m128i *v15; // [rsp+28h] [rbp-70h]
  __m128i *v16; // [rsp+30h] [rbp-68h]
  __int64 *v17; // [rsp+38h] [rbp-60h]
  _BYTE v18[16]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v19[9]; // [rsp+50h] [rbp-48h] BYREF

  v12 = (__m128i *)(*a2)->m128i_i64[0];
  sub_1858590(v13, a1 + 24);
  v15 = v12;
  v16 = v12;
  v14 = &off_1C544D8;
  v17 = nullptr;
  sub_11456C0((unsigned int)v18, (_DWORD)v12, a1 + 24, 0, v4, v5);
  sub_77CE90(v19);
  *(_QWORD *)(a1 + 16) = &v12;
  sub_780100(&v12, a2, a3, a4);
  sub_1142D80(*(_QWORD *)(a1 + 16) + 48LL, a1 + 32);
  *(_QWORD *)(a1 + 16) = 0;
  nullsub_374();
  sub_1144B60(v18);
  v6 = v17;
  v14 = &off_1C544D8;
  if ( v17 )
  {
    v7 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
    if ( (unsigned __int64)v17 >= v7 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = v16;
          if ( (*(_DWORD *)(v8 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v6 >= v7 )
          goto LABEL_8;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( (unsigned __int64)v6 < v7 );
LABEL_8:
    v6 = v17;
    if ( v17 )
LABEL_9:
      sub_186B220(v6 - 1);
  }
  sub_18572D0(v13);
}

