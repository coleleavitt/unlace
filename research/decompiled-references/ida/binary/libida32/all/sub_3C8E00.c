unsigned __int64 __fastcall sub_3C8E00(__int64 a1, _QWORD *a2, unsigned int *a3, int a4)
{
  __int64 v4; // rbp
  unsigned int v5; // eax
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  char *v12; // rdi
  unsigned int *v13; // rbp
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  int v16; // edx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // esi
  int v20; // eax
  __int64 v21; // r13
  unsigned int v22; // r15d
  unsigned int v23; // esi
  unsigned int v24; // eax
  __int64 range; // rax
  int v26; // [rsp-8h] [rbp-C8h]
  __int64 *v27; // [rsp+0h] [rbp-C0h]
  unsigned int *v28; // [rsp+8h] [rbp-B8h]
  int v29; // [rsp+10h] [rbp-B0h]
  unsigned int v30; // [rsp+14h] [rbp-ACh]
  void *v31; // [rsp+18h] [rbp-A8h]
  _QWORD *v32; // [rsp+20h] [rbp-A0h]
  __int64 v33; // [rsp+28h] [rbp-98h]
  unsigned __int64 v34; // [rsp+30h] [rbp-90h]
  __int64 v35; // [rsp+40h] [rbp-80h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-78h] BYREF
  int v37; // [rsp+4Ch] [rbp-74h]
  int v38; // [rsp+50h] [rbp-70h]
  void *ptr; // [rsp+58h] [rbp-68h] BYREF
  __int128 v40; // [rsp+60h] [rbp-60h]
  __int64 v41; // [rsp+70h] [rbp-50h]
  int v42; // [rsp+78h] [rbp-48h]
  unsigned __int64 v43; // [rsp+80h] [rbp-40h]

  v4 = *(_QWORD *)a3;
  v32 = a2;
  v29 = a4;
  v43 = __readfsqword(0x28u);
  v5 = a3[1];
  v40 = 0;
  ptr = nullptr;
  v41 = 0;
  v42 = -1;
  if ( *a3 >= v5 )
    return v43 - __readfsqword(0x28u);
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 8);
  *((_QWORD *)ptr + v40) = v4;
  v12 = (char *)ptr;
  *(_QWORD *)&v40 = v40 + 1;
  v13 = (unsigned int *)ptr;
  if ( 8LL * (_QWORD)v40 )
  {
    LODWORD(v33) = v29 & 1;
    v28 = &v36;
    while ( 1 )
    {
      v14 = *v13;
      v35 = 0;
      v30 = 0;
      v15 = v14;
      v31 = (void *)v32[3];
      v27 = &v35;
      if ( v14 < v13[1] )
        break;
LABEL_23:
      v13 += 2;
      if ( v13 == (unsigned int *)&v12[8 * (_QWORD)v40] )
        goto LABEL_24;
    }
    while ( 1 )
    {
      if ( v14 == v15 )
      {
        v16 = v33;
        if ( (_DWORD)v33 )
        {
          do
          {
            v21 = v35;
            v22 = v15 + v35;
            if ( v35 )
            {
              v36 = v15;
              v37 = v15 + v35;
              rangeset_t_add(
                a1 + 1152,
                (int)v28,
                v16,
                v9,
                v10,
                v11,
                v26,
                v27,
                (__int64)v28,
                v29,
                (int)v31,
                (int)v32,
                v33);
              v30 = v22;
            }
            v23 = *a3;
            v35 = v13[1] - v15 - v21;
            v24 = sub_3B9D40(a1, v23, v22, (unsigned __int64 *)v27);
            v14 = v24;
          }
          while ( !v21 && v24 == v15 );
        }
      }
      v17 = sub_3B9AA0(a1, v15, v29);
      v11 = v17;
      if ( (v17 & 0x1FF) != 0x100 )
        goto LABEL_11;
      if ( *(_QWORD *)(a1 + 1160) )
      {
        v34 = v17;
        HIDWORD(v33) = v17;
        range = rangeset_t_find_range(a1 + 1152, v15);
        v11 = HIDWORD(v33);
        v17 = v34;
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
      if ( (v17 & 0x400) != 0 )
      {
        HIDWORD(v33) = v17;
        v19 = v17;
        v20 = get_item_end(v15, (unsigned int)v17, v17, v9) - v15;
LABEL_21:
        v38 = v19;
        v36 = v15;
        v37 = v20;
        v31 = sub_3C8070(v32, (__int64)v31, (__int64)v28);
        if ( ++v15 >= v13[1] )
        {
LABEL_22:
          v12 = (char *)ptr;
          goto LABEL_23;
        }
      }
      else
      {
        v20 = v17 & 0xFFFFFCFF;
        if ( (v17 & 0xFFFFFCFF) != 0 )
        {
          v20 = 0;
          goto LABEL_21;
        }
        if ( (v17 & 0x100) != 0 )
        {
          LODWORD(v9) = v30;
          if ( v15 >= v30 )
            goto LABEL_21;
        }
LABEL_7:
        if ( ++v15 >= v13[1] )
          goto LABEL_22;
      }
    }
    v11 = v34 & 0xFFFFFEFF;
LABEL_11:
    if ( !v11 )
      goto LABEL_7;
    goto LABEL_12;
  }
LABEL_24:
  if ( v12 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v12);
  }
  return v43 - __readfsqword(0x28u);
}

