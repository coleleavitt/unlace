__int64 __fastcall sub_387EB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  char v17; // bl
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int8 v29; // al
  __int64 v30; // [rsp+0h] [rbp-68h] BYREF
  __int128 v31; // [rsp+8h] [rbp-60h]
  __int64 v32; // [rsp+18h] [rbp-50h]
  __int128 v33; // [rsp+20h] [rbp-48h]
  int v34; // [rsp+30h] [rbp-38h]
  char v35; // [rsp+34h] [rbp-34h]
  unsigned __int64 v36; // [rsp+38h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 1 || (v2 = *(_QWORD *)(a1 + 8), *(_DWORD *)(v2 + 8) != 61) )
  {
    LODWORD(v6) = -1;
    return (unsigned int)v6;
  }
  v35 = 0x80;
  v34 = 0;
  v5 = *(_QWORD *)(v2 + 48);
  v30 = 0;
  v32 = 0;
  v31 = 0;
  v33 = 0;
  if ( !(unsigned __int8)get_tinfo_details(v5, 45, &v30) )
    goto LABEL_4;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(v15 + 24);
  v17 = *(_BYTE *)(v16 + 14);
  if ( *(_DWORD *)(v15 + 8) != 61 )
    sub_37F760(0.0, v16, v15);
  v18 = sub_250E30((__int64 *)v16, (_QWORD *)(v15 + 48));
  v19 = v31;
  v20 = v18;
  if ( !(_QWORD)v31 )
    goto LABEL_4;
  if ( (v35 & 7) != 0 )
  {
    v21 = 1 << ((v35 & 7) - 1);
  }
  else
  {
    v29 = getinf(61);
    v19 = v31;
    v21 = v29;
  }
  v22 = 8 * v21;
  v23 = v20;
  if ( v22 <= 63 )
  {
    v23 = v20 | -(1LL << v22);
    v20 &= (1LL << v22) - 1;
  }
  v24 = -56;
  if ( v19 != -1 )
    v24 = 56 * v19;
  v25 = v30 + v24;
  if ( v30 == v25 )
    goto LABEL_4;
  v26 = v30;
  while ( 1 )
  {
    v27 = *(_QWORD *)(v26 + 48);
    if ( v23 != v27 && v20 != v27 )
      goto LABEL_28;
    if ( !v17 )
      break;
    --v17;
LABEL_28:
    v26 += 56;
    if ( v25 == v26 )
      goto LABEL_4;
  }
  v28 = v26 - v30;
  v6 = 0x6DB6DB6DB6DB6DB7LL * (v28 >> 3);
  if ( v28 < 0 )
  {
LABEL_4:
    LODWORD(v6) = -1;
    goto LABEL_5;
  }
  if ( a2 )
    copy_tinfo_t(a2, *(_QWORD *)(a1 + 8) + 48LL);
LABEL_5:
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  v7 = v30;
  if ( v30 )
  {
    v8 = v31;
    if ( (_QWORD)v31 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = (__int64 *)(v7 + v9);
        v12 = *(_QWORD *)(v7 + v9 + 24);
        if ( v12 )
        {
          v11[4] = 0;
          qfree(v12);
        }
        v13 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v13);
        }
        ++v10;
        v7 = v30;
        v9 += 56;
      }
      while ( v8 != v10 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v7);
  }
  return (unsigned int)v6;
}
