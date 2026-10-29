unsigned __int64 __fastcall sub_9584E0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  __int64 v5; // r12
  unsigned int v6; // edi
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  __int64 v10; // rsi
  bool v11; // di
  char v12; // cl
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // r15
  unsigned int v16; // ebp
  __int64 v17; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rsi
  _BYTE *v26; // rdi
  char v27; // dl
  _DWORD *v28; // rsi
  __int64 v29; // rax
  __int64 v31; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+28h] [rbp-90h]
  int v36; // [rsp+38h] [rbp-80h]
  unsigned int v37; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v38; // [rsp+5Ch] [rbp-5Ch] BYREF
  __int64 v39; // [rsp+60h] [rbp-58h] BYREF
  __int64 v40; // [rsp+68h] [rbp-50h]
  unsigned __int64 v41; // [rsp+78h] [rbp-40h]

  v5 = a1 + 64;
  v6 = a4[3];
  v41 = __readfsqword(0x28u);
  v7 = a4[1] - a4[2];
  v37 = v6;
  v31 = *(_QWORD *)(a1 + 8);
  v8 = a4[4];
  v9 = 64;
  if ( v6 <= 0x40 )
    v9 = v6;
  v39 = 0xFFFFFFFFLL;
  v10 = (1LL << v8) - 1;
  if ( v8 )
  {
    v11 = v8 <= v9;
    v12 = v9 - v8;
    if ( v11 )
      v10 <<= v12;
  }
  v40 = v10;
  if ( a2 < a3 )
  {
    v36 = ~(-1 << v7);
    v13 = a1;
    v14 = a2;
    v15 = v13;
    while ( 1 )
    {
      v38 = 0;
      v16 = 0;
      v34 = sub_9582A0(&v39, v10, v14, a3 - v14, v5, (int *)&v38);
      if ( v38 )
      {
        v17 = v15;
        v18 = v14;
        v19 = v5;
        v20 = v17;
        do
        {
          v21 = *(_QWORD *)(v19 + 8LL * v16);
          if ( v37 + a2 <= v18 + v21 )
          {
            v22 = v18 + v21 - v37;
            v23 = sub_903510(v22, v37, 0);
            v24 = a4[2];
            v25 = (unsigned int)v23 & v36;
            v26 = (_BYTE *)(v25 + *(_QWORD *)(v20 + 56));
            v27 = *v26 + 1;
            v28 = (_DWORD *)(*(_QWORD *)(v20 + 40) + 8 * ((unsigned __int8)*v26 + (v25 << v24)));
            v28[1] = HIDWORD(v23);
            *v28 = v22 - v31;
            *v26 = ((1 << v24) - 1) & v27;
          }
          ++v16;
        }
        while ( v38 > v16 );
        v29 = v20;
        v5 = v19;
        v14 = v18;
        v15 = v29;
      }
      v14 += v34;
      if ( a3 <= v14 )
        break;
      v10 = v40;
    }
  }
  return __readfsqword(0x28u) ^ v41;
}
