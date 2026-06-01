bool __fastcall sub_51A9E0(
        __int64 a1,
        _OWORD *a2,
        unsigned __int8 a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v7; // r14
  _BYTE *v8; // r13
  __int64 v10; // rbp
  _OWORD *v11; // rcx
  bool result; // al
  int v13; // ecx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r14
  void (__fastcall *v17)(_BYTE *, _BYTE *, _BYTE *); // rax
  void (__fastcall *v18)(_BYTE *, _BYTE *, _BYTE *); // rax
  int v19; // r12d
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rax
  char v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r15
  __m128 v29; // xmm0
  unsigned __int64 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+10h] [rbp-478h]
  __int64 v33; // [rsp+10h] [rbp-478h]
  int v34; // [rsp+18h] [rbp-470h]
  char v35; // [rsp+1Fh] [rbp-469h]
  __m128 v36; // [rsp+20h] [rbp-468h] BYREF
  __int64 v37; // [rsp+30h] [rbp-458h]
  char v38; // [rsp+38h] [rbp-450h]
  _BYTE v39[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v40; // [rsp+448h] [rbp-40h]

  v7 = a1;
  v8 = a5;
  v10 = *(_QWORD *)(a1 + 1768);
  v40 = __readfsqword(0x28u);
  v11 = *(_OWORD **)(v10 + 72);
  if ( v11 != (_OWORD *)-1LL )
  {
    if ( a3 != 83 || a2 != v11 )
      return 0;
    v18 = *(void (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(v10 + 96);
    if ( v18 )
    {
      a2 = &a5[a6];
      a1 = (__int64)a5;
      v8 = v39;
      v18(a5, &a5[a6], v39);
      v10 = *(_QWORD *)(v7 + 1768);
    }
    v34 = 0;
    v19 = *(_DWORD *)(v7 + 996);
    if ( *(_DWORD *)(v7 + 932) == 15 )
    {
      v20 = 6;
      if ( v19 != 32 )
        v20 = 0;
      v34 = v20;
    }
    if ( *(_DWORD *)(v7 + 1000) >= v19 )
    {
      while ( 1 )
      {
        if ( !*(_BYTE *)(v10 + 152) )
          goto LABEL_37;
        v21 = v19 - *(_DWORD *)(*(_QWORD *)(v10 + 8) + 68LL);
        if ( (unsigned __int64)v21 >= *(_QWORD *)(v10 + 40) )
          goto LABEL_36;
        v22 = (__int64)v21 << 6;
        *(_DWORD *)(*(_QWORD *)(v10 + 32) + v22 + 56) = v19;
        v23 = (_QWORD *)(*(_QWORD *)(v10 + 32) + v22);
        v24 = v19 + v34 - *(_DWORD *)(v7 + 996);
        v25 = v8[v24 + 144];
        v26 = *(_QWORD *)&v8[8 * v24 + 16];
        if ( v25 == 1 )
        {
          v27 = v23[1];
          if ( v27 )
          {
            a2 = (_OWORD *)(32 * v27);
            v28 = *v23 + 33 * v27 - 33;
            if ( *(_QWORD *)(v28 + 8) == *(_QWORD *)v8 )
            {
              v32 = v26;
              a1 = *(_QWORD *)(v7 + 1672) + 1624LL;
              v30 = sub_506150(a1);
              v26 = v32;
              v25 = 1;
              if ( !v30 )
              {
LABEL_35:
                v31 = *((_QWORD *)v8 + 1);
                *(_BYTE *)(v28 + 32) = 1;
                *(_QWORD *)(v28 + 8) = v31;
                goto LABEL_28;
              }
              while ( 1 )
              {
                a2 = (_OWORD *)*v30;
                if ( *v30 == *(_QWORD *)v8 )
                  break;
                v35 = v25;
                v33 = v26;
                a1 = *(_QWORD *)(v7 + 1672) + 1624LL;
                v30 = sub_505EB0(a1, (unsigned __int64)a2);
                v26 = v33;
                v25 = v35;
                if ( !v30 )
                  goto LABEL_35;
              }
            }
          }
        }
        a2 = &v36;
        v37 = v26;
        v29 = _mm_loadh_ps((const double *)v8 + 1);
        a1 = (__int64)v23;
        v38 = v25;
        v36 = v29;
        sub_516A70(v23, &v36, 1, -1);
LABEL_28:
        if ( ++v19 > *(_DWORD *)(v7 + 1000) )
          return 1;
      }
    }
    return 1;
  }
  result = a3 <= 0x60u || *(_QWORD *)(v10 + 64) != (_QWORD)a2;
  if ( result )
    return 0;
  v13 = *(_DWORD *)(a1 + 996);
  v14 = v13 + a3 - 97;
  if ( v13 <= v14 && *(_DWORD *)(a1 + 1000) >= v14 )
  {
    if ( !*(_BYTE *)(v10 + 152) )
    {
LABEL_37:
      if ( !under_debugger )
        interr(1336);
      BUG();
    }
    a1 = (unsigned int)(v14 - *(_DWORD *)(*(_QWORD *)(v10 + 8) + 68LL));
    if ( (unsigned __int64)(int)a1 >= *(_QWORD *)(v10 + 40) )
LABEL_36:
      sub_5144F0(a1, a2);
    v15 = (__int64)(int)a1 << 6;
    *(_DWORD *)(*(_QWORD *)(v10 + 32) + v15 + 56) = v14;
    v16 = *(_QWORD *)(v10 + 32) + v15;
    v17 = *(void (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(v10 + 80);
    if ( v17 )
    {
      v8 = v39;
      v17(v39, a5, &a5[a6]);
    }
    sub_516A70(v16, v8, a7, a4);
    return 1;
  }
  return result;
}
