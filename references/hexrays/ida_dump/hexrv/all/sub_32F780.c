__int64 __fastcall sub_32F780(__int64 *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  unsigned int v8; // r14d
  __int64 tinfo_size; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r14
  _QWORD *v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // [rsp+0h] [rbp-88h]
  __int64 v23; // [rsp+18h] [rbp-70h]
  unsigned __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int128 v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v25 = 0;
  v26 = 0;
  sub_32F410(&v25, a2, a3, 0, 3);
  v6 = v26;
  v7 = v25;
  if ( !(_QWORD)v26 )
  {
    v8 = 0;
    if ( !v25 )
      return v8;
    goto LABEL_3;
  }
  tinfo_size = get_tinfo_size(0, *a2, 0);
  v11 = tinfo_size + 1;
  v24 = tinfo_size;
  if ( a4 >= tinfo_size + 1 )
  {
LABEL_20:
    v8 = 0;
    goto LABEL_21;
  }
  v21 = v6;
  v12 = 0;
  v23 = v7 + 56;
  v13 = (_QWORD *)(v7 + 56);
  do
  {
    if ( (get_tinfo_property(*v13, 2) & 0xF) == 0xB || (v14 = get_tinfo_size(0, *v13, 0), v14 < a4) || v14 >= v11 )
    {
      ++v12;
      v13 += 8;
      if ( a4 >= v11 )
        break;
      continue;
    }
    v11 = v14;
    v21 = v12;
    v13 += 8;
    ++v12;
    if ( a4 >= v14 )
      break;
  }
  while ( v12 < v6 );
  if ( v21 >= v6 )
    goto LABEL_20;
  if ( v11 == a4 )
  {
    if ( a1 )
    {
LABEL_18:
      v15 = *a1;
      v16 = v7 + (v21 << 6);
      *a1 = *(_QWORD *)(v16 + 56);
      *(_QWORD *)(v16 + 56) = v15;
      goto LABEL_19;
    }
    v8 = 1;
    if ( !v7 )
      return v8;
LABEL_23:
    v17 = v23;
    v18 = 0;
    do
    {
      clear_tinfo_t(v17);
      v19 = *(_QWORD *)(v17 - 24);
      if ( v19 )
      {
        *(_QWORD *)(v17 - 16) = 0;
        qfree(v19);
      }
      v20 = *(_QWORD *)(v17 - 48);
      if ( v20 )
      {
        *(_QWORD *)(v17 - 40) = 0;
        qfree(v20);
      }
      ++v18;
      v17 += 64;
    }
    while ( v6 != v18 );
LABEL_3:
    qfree(v7);
    return v8;
  }
  if ( a5 == 1 || v11 >= v24 )
    goto LABEL_20;
  if ( a1 )
    goto LABEL_18;
LABEL_19:
  v8 = 1;
LABEL_21:
  if ( v7 )
  {
    v23 = v7 + 56;
    goto LABEL_23;
  }
  return v8;
}
