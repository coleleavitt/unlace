__int64 __fastcall sub_11543A0(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r15
  _QWORD *v9; // rbx
  const __m128i **v10; // r15
  const __m128i **v11; // rbx
  const __m128i **v12; // r13
  unsigned __int64 v13; // r15
  const __m128i **v14; // rax
  const __m128i **v15; // r10
  const __m128i *v16; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // r15
  _QWORD *i; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v29; // [rsp+8h] [rbp-60h]
  __int64 *v30; // [rsp+18h] [rbp-50h]
  const __m128i *v31[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 5032) + 72LL))(*(_QWORD *)(a1 + 5032));
  if ( !v5 )
  {
    v27 = *(_QWORD *)(a2 + 176);
    v5 = operator new(0x148u);
    sub_2192F90(v5, v27);
  }
  LODWORD(v31[0]) = 1781;
  v30 = sub_10E2140();
  v6 = sub_2193060(v5, v31, 1);
  v7 = *(_QWORD *)(v5 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 != v9 )
  {
    while ( !*v8 || !(unsigned __int8)sub_2195AD0(*v8, 1781) )
    {
      if ( v9 == ++v8 )
        goto LABEL_7;
    }
    if ( v9 != v8 )
    {
      do
      {
        v18 = *(_QWORD *)(*v8 + 16LL);
        if ( !v18 )
          v18 = *v8;
        ++v8;
        *(_BYTE *)(v18 + 44) |= 1u;
        if ( v8 == v9 )
          break;
        while ( !*v8 || !(unsigned __int8)sub_2195AD0(*v8, 1781) )
        {
          if ( v9 == ++v8 )
            goto LABEL_30;
        }
      }
      while ( v9 != v8 );
LABEL_30:
      LODWORD(v31[0]) = 1781;
      v19 = sub_2193060(v5, v31, 1);
      v20 = *(_QWORD *)(v5 + 8);
      v21 = (_QWORD *)(v20 + 8LL * (unsigned int)v19);
      for ( i = (_QWORD *)(v20 + 8 * HIDWORD(v19)); i != v21; ++v21 )
      {
        if ( *v21 && (unsigned __int8)sub_2195AD0(*v21, 1781) )
          break;
      }
      while ( i != v21 )
      {
        v23 = *(_QWORD *)(*v21 + 16LL);
        if ( !v23 )
          v23 = *v21;
        ++v21;
        *(_BYTE *)(v23 + 44) |= 1u;
        if ( v21 == i )
          break;
        while ( !*v21 || !(unsigned __int8)sub_2195AD0(*v21, 1781) )
        {
          if ( i == ++v21 )
            goto LABEL_7;
        }
      }
    }
  }
LABEL_7:
  v10 = *(const __m128i ***)(a2 + 8);
  v11 = &v10[*(unsigned int *)(a2 + 16)];
  if ( v10 != v11 )
  {
    while ( !*v10 )
    {
      if ( v11 == ++v10 )
        goto LABEL_17;
    }
    v29 = v5;
    v12 = v10;
    v13 = a4;
    while ( 1 )
    {
      v16 = *v12;
      v31[0] = *v12;
      if ( (unsigned __int8)sub_114CF80(a1, a1, a2, a3, v13, v31[0]) || sub_1154300(v29, (__int64 *)v31) )
      {
        v14 = v12 + 1;
        if ( v11 == v12 + 1 )
          goto LABEL_16;
      }
      else
      {
        sub_21943B0(v29, v16);
        v14 = v12 + 1;
        if ( v11 == v12 + 1 )
          goto LABEL_16;
      }
      v15 = v12 + 2;
      if ( !v12[1] )
        break;
LABEL_12:
      v12 = v14;
    }
    while ( 1 )
    {
      v14 = v15;
      if ( v11 == v15 )
        break;
      if ( *v15++ )
        goto LABEL_12;
    }
LABEL_16:
    v5 = v29;
    a4 = v13;
  }
LABEL_17:
  if ( a4 )
  {
    sub_21940B0(v5, 2260);
    v24 = sub_2197640(v30, 2260);
    v26 = sub_2194D60(v5, 0, v24, v25, a3, a4);
    sub_21943B0(v5, v26);
  }
  return v5;
}

