unsigned __int64 __fastcall sub_12C760(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  int v5; // r13d
  bool v6; // zf
  int v7; // r12d
  __int64 v8; // rbx
  bool v9; // sf
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // dl
  unsigned __int8 v14; // al
  char v15; // al
  __int16 v16; // dx
  __int16 v17; // ax
  int v18; // edx
  int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int8 *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // [rsp+10h] [rbp-70h]
  unsigned __int8 v31; // [rsp+10h] [rbp-70h]
  unsigned __int64 *v32; // [rsp+18h] [rbp-68h]
  __int64 v33; // [rsp+18h] [rbp-68h]
  unsigned __int64 v34; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  __int64 v36; // [rsp+38h] [rbp-48h]
  unsigned __int64 v37; // [rsp+48h] [rbp-38h]

  v4 = (__int64)a2;
  v5 = -(int)a4;
  v30 = a3;
  if ( (int)a4 > 0 )
    v5 = a4;
  v6 = *(_BYTE *)a1 == 4;
  v37 = __readfsqword(0x28u);
  v7 = a4;
  if ( !v6 )
    goto LABEL_4;
  a3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)(*(_DWORD *)a3 - 12) > 1 )
    goto LABEL_4;
  if ( *(_BYTE *)(a3 + 48) == 2 )
  {
    v23 = (unsigned __int8 *)(a3 + 32);
    v33 = a3 + 48;
  }
  else
  {
    if ( *(_BYTE *)(a3 + 32) != 2 )
      goto LABEL_4;
    v23 = (unsigned __int8 *)(a3 + 48);
    v33 = a3 + 32;
  }
  a2 = &v34;
  v24 = sub_11FD80((char *)v33, &v34, 0);
  a4 = v24;
  if ( (_BYTE)v24 )
  {
    if ( *(_BYTE *)a1 == 4 && (v29 = *(_DWORD **)(a1 + 8), *v29 == 13) )
    {
      a3 = (unsigned int)v7;
      if ( (_DWORD *)v33 == v29 + 12 )
        a3 = (unsigned int)-v7;
      else
        a4 = 0;
    }
    else
    {
      a3 = (unsigned int)v7;
      a4 = 0;
    }
    if ( (int)a3 <= 0 )
    {
      if ( v34 >= v5 )
        goto LABEL_22;
    }
    else if ( !__CFADD__(v5, v34) )
    {
LABEL_22:
      v31 = a4;
      v25 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v33 + 8) + 16LL) + (int)a3, *(unsigned int *)(v33 + 4), 0);
      if ( v25 || v31 )
      {
        *(__m128i *)(*(_QWORD *)(v33 + 8) + 16LL) = _mm_unpacklo_epi64(
                                                      (__m128i)(unsigned __int64)v25,
                                                      (__m128i)(unsigned __int64)v25);
      }
      else
      {
        sub_123A40((__int64)&v35, v23, v26, v31);
        sub_11CDA0(a1);
        sub_123A40(a1, (unsigned __int8 *)&v35, v27, v28);
        sub_11CDA0((__int64)&v35);
      }
      return v37 - __readfsqword(0x28u);
    }
  }
LABEL_4:
  v36 = 0;
  v35 = 0xFFFFFFFF00000000LL;
  v8 = j__qalloc_or_throw(80, (__int64)a2, a3, a4);
  v32 = (unsigned __int64 *)(v8 + 32);
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0;
  sub_330970(v8, v30);
  v6 = v7 == 0;
  v9 = v7 < 0;
  v10 = v8 + 32;
  LOBYTE(v35) = 4;
  v36 = v8;
  *(_DWORD *)v8 = (v9 || v6) + 12;
  if ( a1 != v8 + 32 )
  {
    sub_11CDA0(v10);
    sub_123A40(v10, (unsigned __int8 *)a1, v11, v12);
  }
  sub_120A10(v8 + 48, v4, v5, *(_DWORD *)(a1 + 4), -1, 0);
  HIDWORD(v35) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(v8 + 68) = HIDWORD(v35);
  sub_15BC70(v8, v4, 0, 0, 0, 0, 0);
  if ( *(_DWORD *)v8 == 4 || *(_DWORD *)v8 == 67 && *(_DWORD *)(v8 + 36) == *(_DWORD *)(v8 + 68) )
  {
    v13 = *(_BYTE *)(v8 + 32);
  }
  else
  {
    v13 = 4;
    v32 = &v35;
  }
  v14 = *(_BYTE *)a1;
  *(_BYTE *)a1 = v13;
  *(_BYTE *)v32 = v14;
  v15 = *(_BYTE *)(a1 + 1);
  *(_BYTE *)(a1 + 1) = *((_BYTE *)v32 + 1);
  v16 = *((_WORD *)v32 + 1);
  *((_BYTE *)v32 + 1) = v15;
  v17 = *(_WORD *)(a1 + 2);
  *(_WORD *)(a1 + 2) = v16;
  v18 = *((_DWORD *)v32 + 1);
  *((_WORD *)v32 + 1) = v17;
  v19 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v18;
  v20 = v32[1];
  *((_DWORD *)v32 + 1) = v19;
  v21 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v20;
  v32[1] = v21;
  sub_11CDA0((__int64)&v35);
  return v37 - __readfsqword(0x28u);
}
