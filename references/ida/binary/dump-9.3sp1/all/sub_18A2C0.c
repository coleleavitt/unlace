__int64 __fastcall sub_18A2C0(const __m128i *a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // r15d
  __int64 i; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // r15d
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int32 v24; // eax
  __int64 v25; // [rsp-10h] [rbp-160h]
  __int64 v26; // [rsp+10h] [rbp-140h]
  unsigned __int8 *v27; // [rsp+10h] [rbp-140h]
  unsigned __int8 *v28; // [rsp+18h] [rbp-138h]
  __int64 v29; // [rsp+20h] [rbp-130h]
  unsigned __int8 *v30; // [rsp+28h] [rbp-128h]
  __int64 v31; // [rsp+30h] [rbp-120h]
  __int64 v32; // [rsp+48h] [rbp-108h]
  _QWORD v33[2]; // [rsp+70h] [rbp-E0h] BYREF
  _QWORD v34[2]; // [rsp+80h] [rbp-D0h] BYREF
  _QWORD v35[2]; // [rsp+90h] [rbp-C0h] BYREF
  _QWORD v36[2]; // [rsp+A0h] [rbp-B0h] BYREF
  _QWORD v37[2]; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v38[2]; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v39[4]; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v40; // [rsp+F0h] [rbp-60h] BYREF
  int v41; // [rsp+F8h] [rbp-58h]
  __int64 v42; // [rsp+100h] [rbp-50h] BYREF
  __int64 v43; // [rsp+108h] [rbp-48h]
  unsigned __int64 v44; // [rsp+118h] [rbp-38h]

  v3 = a1[4].m128i_i64[0];
  v44 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v14 = *(_QWORD *)(a2 + 24);
    v41 = 0;
    v11 = 0;
    v40 = v14;
    if ( (sub_137670(v3, (__int64)&v40) & 7) != 0 )
      return v11;
    v3 = a1[4].m128i_i64[0];
  }
  v4 = 0;
  v32 = *(_QWORD *)(v3 + 1504);
  sub_124680((__int64)v38, (__int64)a1, a2, 1u);
  if ( *(_BYTE *)(a2 + 64) == 8 )
    v4 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + 284LL);
  for ( i = sub_1229D0(*(_QWORD *)(a2 + 16)); ; i = sub_1229D0(*(_QWORD *)(v8 + 16)) )
  {
    v8 = i;
    if ( !i )
      goto LABEL_14;
    v9 = 0;
    if ( *(_BYTE *)(v8 + 64) == 8 )
      v9 = *(_DWORD *)(*(_QWORD *)(v8 + 72) + 284LL);
    if ( v4 == v9 )
      break;
    sub_127A20((__int64)&v40, (__int64)a1, v8, 1, v6, v7);
    if ( (unsigned __int8)sub_64780(&v40, v38) )
    {
      v10 = v42;
LABEL_11:
      if ( v10 )
      {
        v43 = 0;
        qfree(v10);
      }
      qfree(v40);
LABEL_14:
      v11 = 0;
      goto LABEL_15;
    }
    v13 = sub_318470(&v42, v39);
    v10 = v42;
    if ( v13 )
      goto LABEL_11;
    if ( v42 )
    {
      v43 = 0;
      qfree(v42);
    }
    qfree(v40);
  }
  v15 = a1[4].m128i_i64[0];
  if ( *(_QWORD *)(*(_QWORD *)(v15 + 1344) + 8LL) )
  {
    v20 = *(_QWORD *)(v8 + 24);
    v41 = 0;
    v40 = v20;
    if ( (sub_137670(v15, (__int64)&v40) & 7) != 0 )
      goto LABEL_14;
  }
  v33[1] = 0;
  v33[0] = 0xFFFFFFFF00000000LL;
  v34[0] = 0xFFFFFFFF00000000LL;
  v35[0] = 0xFFFFFFFF00000000LL;
  v36[0] = 0xFFFFFFFF00000000LL;
  v16 = *(_QWORD *)(a2 + 72);
  v34[1] = 0;
  v31 = v16;
  v17 = *(_QWORD *)(v16 + 24);
  v35[1] = 0;
  v36[1] = 0;
  v30 = (unsigned __int8 *)(v17 + 160);
  if ( !sub_183840((_BYTE *)(v17 + 160)) )
    goto LABEL_28;
  v26 = *(_QWORD *)(v8 + 72);
  v28 = (unsigned __int8 *)(*(_QWORD *)(v26 + 24) + 160LL);
  v29 = *(_QWORD *)(v26 + 24);
  sub_125180((__int64)v33, *(unsigned __int8 **)(v31 + 24));
  sub_123A40((__int64)v37, v28, v18, v19);
  sub_183B80(&v40, v32, *(_QWORD *)(v8 + 24), v29, (__int64)v37, 1, 1);
  sub_125180((__int64)v34, (unsigned __int8 *)&v40);
  sub_11CDA0((__int64)&v40);
  sub_11CDA0((__int64)v37);
  if ( !(unsigned __int8)sub_12EA80(v32, a1, v8, (__int64)v33, v8, (__int64)v34, 0) )
    goto LABEL_28;
  v27 = (unsigned __int8 *)(*(_QWORD *)(v26 + 24) + 80LL);
  sub_125180((__int64)v35, (unsigned __int8 *)(*(_QWORD *)(v31 + 24) + 80LL));
  if ( v4 == 5 )
  {
    sub_123A40((__int64)v37, v28, v21, v22);
    sub_183B80(&v40, v32, *(_QWORD *)(v8 + 24), (__int64)v27, (__int64)v37, 1, 1);
    sub_125180((__int64)v36, (unsigned __int8 *)&v40);
    sub_11CDA0((__int64)&v40);
    sub_11CDA0((__int64)v37);
  }
  else
  {
    sub_123A40((__int64)&v40, v27, v21, v22);
    sub_125180((__int64)v36, (unsigned __int8 *)&v40);
    sub_11CDA0((__int64)&v40);
  }
  v11 = sub_12EA80(v32, a1, v8, (__int64)v35, v8, (__int64)v36, 0);
  if ( (_BYTE)v11 )
  {
    sub_123A40((__int64)&v40, v30, v23, v25);
    sub_183B80(v37, v32, *(_QWORD *)(v8 + 24), (__int64)v28, (__int64)&v40, 1, 0);
    sub_11CDA0((__int64)&v40);
    if ( !LOBYTE(v37[0]) )
    {
      if ( !under_debugger )
        sub_383060(51449);
      BUG();
    }
    sub_11CA10((char *)v28, (char *)v37);
    sub_11D5A0(a2);
    v24 = a1[1].m128i_i32[2];
    BYTE1(v24) &= ~2u;
    LOBYTE(v24) = v24 | 0x80;
    a1[1].m128i_i32[2] = v24;
    sub_189DE0(v32, (__int64)a1, v8, *(_QWORD *)(v29 + 168));
    sub_11CDA0((__int64)v37);
  }
  else
  {
LABEL_28:
    v11 = 0;
  }
  sub_11CDA0((__int64)v36);
  sub_11CDA0((__int64)v35);
  sub_11CDA0((__int64)v34);
  sub_11CDA0((__int64)v33);
LABEL_15:
  if ( v39[0] )
  {
    v39[1] = 0;
    qfree(v39[0]);
  }
  qfree(v38[0]);
  return v11;
}
