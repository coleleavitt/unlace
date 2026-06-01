unsigned __int64 __fastcall sub_3CE5F0(_QWORD *a1, _QWORD *a2, __int64 *a3, int a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  char *v12; // rdi
  unsigned __int64 *v13; // rbp
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r12
  int v16; // edx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // esi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 range; // rax
  unsigned __int64 *v26; // [rsp+0h] [rbp-D8h]
  unsigned __int64 *v27; // [rsp+8h] [rbp-D0h]
  __int64 v28; // [rsp+10h] [rbp-C8h]
  int v29[2]; // [rsp+18h] [rbp-C0h]
  _QWORD *v30; // [rsp+20h] [rbp-B8h]
  _QWORD *v31; // [rsp+28h] [rbp-B0h]
  __int64 v32; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v34; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-80h]
  int v37; // [rsp+60h] [rbp-78h]
  void *ptr; // [rsp+70h] [rbp-68h] BYREF
  __int128 v39; // [rsp+78h] [rbp-60h]
  __int64 v40; // [rsp+88h] [rbp-50h]
  int v41; // [rsp+90h] [rbp-48h]
  unsigned __int64 v42; // [rsp+98h] [rbp-40h]

  v4 = *a3;
  v5 = a3[1];
  v31 = a2;
  HIDWORD(v28) = a4;
  v42 = __readfsqword(0x28u);
  v39 = 0;
  ptr = nullptr;
  v40 = 0;
  v41 = -1;
  if ( v4 >= v5 )
    return v42 - __readfsqword(0x28u);
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 16);
  *((__m128i *)ptr + v39) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v5);
  v12 = (char *)ptr;
  v13 = (unsigned __int64 *)ptr;
  *(_QWORD *)&v39 = v39 + 1;
  if ( 16LL * (_QWORD)v39 )
  {
    LODWORD(v32) = BYTE4(v28) & 1;
    v27 = &v35;
    v26 = &v34;
    while ( 1 )
    {
      v14 = *v13;
      v34 = 0;
      *(_QWORD *)v29 = 0;
      v15 = v14;
      v30 = (_QWORD *)v31[3];
      if ( v14 < v13[1] )
        break;
LABEL_23:
      v13 += 2;
      if ( v13 == (unsigned __int64 *)&v12[16 * (_QWORD)v39] )
        goto LABEL_24;
    }
    while ( 1 )
    {
      if ( v14 == v15 )
      {
        v16 = v32;
        if ( (_DWORD)v32 )
        {
          do
          {
            v21 = v34;
            v22 = v34 + v15;
            if ( v34 )
            {
              v35 = v15;
              v36 = v34 + v15;
              rangeset_t_add(
                (_DWORD)a1 + 1160,
                (int)v27,
                v16,
                v9,
                v10,
                v11,
                (int)v26,
                v27,
                v28,
                v29[0],
                (int)v30,
                (int)v31,
                v32);
              *(_QWORD *)v29 = v22;
            }
            v23 = *a3;
            v34 = v13[1] - v21 - v15;
            v24 = sub_3BEBC0(a1, v23, v22, v26);
            v14 = v24;
          }
          while ( !v21 && v24 == v15 );
        }
      }
      v17 = sub_3BE900(a1, v15, SBYTE4(v28));
      v11 = v17;
      if ( (v17 & 0x1FF) != 0x100 )
        goto LABEL_11;
      if ( a1[146] )
      {
        v33 = v17;
        HIDWORD(v32) = v17;
        range = rangeset_t_find_range(a1 + 145, v15);
        v11 = HIDWORD(v32);
        v17 = v33;
        if ( range )
          break;
      }
LABEL_12:
      v11 &= 0xFFFFFu;
      if ( v11 == 512 )
        goto LABEL_7;
      if ( (v17 & 0x600) == 0x200 )
        v17 &= 0xFFFFFu;
      v18 = v17;
      LOBYTE(v18) = 0;
      if ( (v17 & 0x100) == 0 )
        v17 = v18;
      v19 = v17;
      v20 = v17 & 0x400;
      if ( (v17 & 0x400) != 0 )
      {
        HIDWORD(v32) = v17;
        v19 = v17;
        v20 = get_item_end(v15, (unsigned int)v17, v17, v9) - v15;
LABEL_21:
        v37 = v19;
        v35 = v15;
        v36 = v20;
        v30 = sub_3CD760(v31, v30, (__int64)v27);
        if ( ++v15 >= v13[1] )
        {
LABEL_22:
          v12 = (char *)ptr;
          goto LABEL_23;
        }
      }
      else
      {
        if ( (v17 & 0xFFFFFCFF) != 0 )
          goto LABEL_21;
        if ( (v17 & 0x100) != 0 )
        {
          LODWORD(v9) = v29[0];
          if ( v15 >= *(_QWORD *)v29 )
            goto LABEL_21;
        }
LABEL_7:
        if ( ++v15 >= v13[1] )
          goto LABEL_22;
      }
    }
    v11 = v33 & 0xFFFFFEFF;
LABEL_11:
    if ( !v11 )
      goto LABEL_7;
    goto LABEL_12;
  }
LABEL_24:
  if ( v12 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v12);
  }
  return v42 - __readfsqword(0x28u);
}
