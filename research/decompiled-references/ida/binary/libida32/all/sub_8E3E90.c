unsigned __int64 __fastcall sub_8E3E90(_QWORD *a1, _DWORD *a2, unsigned __int8 *a3, unsigned __int64 a4, _DWORD *a5)
{
  unsigned __int64 result; // rax
  __int64 v8; // r8
  unsigned int v9; // edi
  __int64 v10; // r10
  __int64 v11; // rdx
  int *v12; // rdx
  __int64 v13; // rcx
  int v14; // r11d
  int v15; // esi
  __int64 v16; // rcx
  unsigned __int8 *v17; // rdx
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // r8
  __int64 v22; // rcx
  __int16 v23; // dx
  char *v24; // r9
  char *v25; // r8
  __int64 v26; // r10
  unsigned __int16 v27; // dx
  unsigned int v28; // edi
  __int64 *v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // [rsp+10h] [rbp-1C0h] BYREF
  unsigned int v34; // [rsp+14h] [rbp-1BCh] BYREF
  __int128 v35; // [rsp+18h] [rbp-1B8h] BYREF
  __int64 v36; // [rsp+28h] [rbp-1A8h]
  int v37; // [rsp+30h] [rbp-1A0h]
  __int128 v38; // [rsp+38h] [rbp-198h] BYREF
  __int64 v39; // [rsp+48h] [rbp-188h]
  int v40; // [rsp+50h] [rbp-180h]
  int v41; // [rsp+58h] [rbp-178h] BYREF
  int v42; // [rsp+5Ch] [rbp-174h] BYREF
  unsigned __int8 v43[264]; // [rsp+98h] [rbp-138h] BYREF
  unsigned __int64 v44; // [rsp+1A0h] [rbp-30h]

  v44 = __readfsqword(0x28u);
  v33 = 0;
  v34 = 0;
  result = sub_8DCF40(v43, 0x100u, (__int64)&v41, &v34, &v33, a3, a4);
  if ( result > 0xFFFFFFFFFFFFFF88LL )
    return result;
  v8 = v33;
  *a5 = v41 != 0;
  if ( (unsigned int)v8 > 0xC )
    return -44;
  v9 = v34;
  if ( *a2 + 1 < v34 )
    return -48;
  v10 = v34 - 1;
  BYTE5(v38) = 0;
  WORD3(v38) = 0;
  LOBYTE(v38) = v8;
  *(_DWORD *)((char *)&v38 + 1) = (unsigned __int8)(v34 - 1);
  v11 = v38;
  *a2 = v10;
  *a1 = v11;
  if ( (_DWORD)v8 )
  {
    v12 = &v42;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = *v12;
      *v12++ = v14;
      v14 += v15 << v13;
      if ( (_DWORD)v8 - 1 == v13 )
        break;
      ++v13;
    }
  }
  v16 = 0;
  if ( !v9 )
  {
    v36 = 0;
    v35 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    if ( !(_DWORD)v8 )
      return result;
LABEL_13:
    v20 = (unsigned int)(v8 - 1);
    v21 = 2 * v8;
    v22 = 0;
    v23 = 0;
    v24 = (char *)&v38 + v21;
    v25 = (char *)&v35 + v21;
    v26 = 2 * ~v20;
    do
    {
      *(_WORD *)&v24[v22] = v23;
      v27 = *(_WORD *)&v25[v22] + v23;
      v22 -= 2;
      v23 = v27 >> 1;
    }
    while ( v22 != v26 );
    if ( !v9 )
      return result;
    goto LABEL_16;
  }
  do
  {
    a1[v16 + 1] = v43[v16] != 0 ? (unsigned __int8)(v8 + 1 - v43[v16]) : 0;
    ++v16;
  }
  while ( v9 > (unsigned int)v16 );
  v36 = 0;
  v17 = (unsigned __int8 *)(a1 + 1);
  v18 = (__int64)&a1[v10 + 2];
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v35 = 0;
  v38 = 0;
  do
  {
    v19 = *v17;
    v17 += 8;
    ++*((_WORD *)&v35 + v19);
  }
  while ( (unsigned __int8 *)v18 != v17 );
  if ( (_DWORD)v8 )
    goto LABEL_13;
LABEL_16:
  v28 = 0;
  do
  {
    v29 = &a1[v28 + 1];
    v30 = *v29;
    v31 = (unsigned __int8)*v29;
    v32 = *((unsigned __int16 *)&v38 + v31);
    *((_WORD *)&v38 + v31) = v32 + 1;
    if ( v31 )
      *v29 = v30 | (v32 << (64 - (unsigned __int8)v31));
    ++v28;
  }
  while ( v34 > v28 );
  return result;
}

