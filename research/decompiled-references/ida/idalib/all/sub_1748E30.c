__int64 __fastcall sub_1748E30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        double a6)
{
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  char v20; // al
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // [rsp+18h] [rbp-60h]
  unsigned __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  char v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  char v28; // [rsp+38h] [rbp-40h]

  sub_17488A0((__int64)&v25, a2, a3, *a4, a6);
  if ( v26 )
  {
    v11 = 1;
    v12 = 1;
    if ( a5 > 1 )
    {
      do
      {
        while ( 1 )
        {
          sub_17488A0((__int64)&v27, a2, a3, a4[2 * v12], a6);
          if ( !v28 )
          {
            *(_BYTE *)(a1 + 8) = 0;
            return a1;
          }
          v14 = *(_QWORD **)(a2 + 248);
          v15 = v27;
          v27 = 0;
          v16 = v25;
          v25 = 0;
          v17 = v14[294];
          v24 = v15;
          v14[304] += 16LL;
          v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v19 = v18 + 16;
          if ( v14[295] < v18 + 16 || !v17 )
            break;
          v14[294] = v19;
          *(_QWORD *)v18 = v16;
          *(_QWORD *)(v18 + 8) = v15;
          v25 = v18 | 2;
          v12 = ++v11;
          if ( a5 <= v11 )
            goto LABEL_9;
        }
        v22 = sub_986170((__int64)(v14 + 294), 16, 16, 3, v13, v19);
        *(_QWORD *)v22 = v16;
        *(_QWORD *)(v22 + 8) = v24;
        v25 = v22 & 0xFFFFFFFFFFFFFFF8LL | 2;
        v12 = ++v11;
      }
      while ( v11 < a5 );
LABEL_9:
      v20 = v26;
      *(_BYTE *)(a1 + 8) = v26;
      if ( !v20 )
        return a1;
    }
    v21 = v25;
    *(_BYTE *)(a1 + 8) = 1;
    *(_QWORD *)a1 = v21;
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}
