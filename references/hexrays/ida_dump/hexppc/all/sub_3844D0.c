unsigned __int64 __fastcall sub_3844D0(__int64 a1, __int64 *a2, __int64 *a3, __int64 **a4, __int64 a5, char a6)
{
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // r12
  size_t v20; // r8
  size_t v21; // r9
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v29; // [rsp+10h] [rbp-108h]
  unsigned __int64 v30; // [rsp+10h] [rbp-108h]
  unsigned __int64 v31; // [rsp+10h] [rbp-108h]
  size_t v33; // [rsp+20h] [rbp-F8h]
  size_t v34; // [rsp+28h] [rbp-F0h]
  __int64 v35; // [rsp+38h] [rbp-E0h] BYREF
  __int128 v36; // [rsp+40h] [rbp-D8h] BYREF
  void *src; // [rsp+50h] [rbp-C8h]
  __int128 v38; // [rsp+58h] [rbp-C0h]
  __int64 v39; // [rsp+68h] [rbp-B0h]
  __int128 v40; // [rsp+70h] [rbp-A8h]
  _OWORD v41[3]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-68h]
  int v43; // [rsp+B8h] [rbp-60h]
  __int64 v44; // [rsp+C0h] [rbp-58h]
  char v45; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v46; // [rsp+D8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( a4[1] )
  {
    *a3 += a5;
    v10 = 1;
    v11 = **a4;
    v35 = 0;
    copy_tinfo_t(&v35, v11 + 48);
LABEL_4:
    if ( a6 )
      goto LABEL_6;
LABEL_5:
    v12 = *a3;
    if ( *a3 )
    {
      while ( 1 )
      {
LABEL_6:
        src = nullptr;
        v39 = 0;
        v42 = 1;
        v43 = -1;
        v44 = 0;
        v45 = 0;
        v36 = 0;
        v38 = 0;
        v40 = 0;
        v41[0] = 0;
        if ( (get_tinfo_property(v35, 2) & 0x3F) == 0x1D )
        {
          if ( v10 >= (unsigned __int64)a4[1] )
            break;
          v13 = (*a4)[v10++];
          v14 = *(unsigned int *)(v13 + 56);
        }
        else
        {
          v14 = *a3;
        }
        *(_QWORD *)&v36 = v14;
        if ( (unsigned int)find_tinfo_udt_member(&v36, v35, 2) == -1 )
          break;
        v15 = a2[1];
        v16 = 2;
        if ( v15 )
          v16 = v15-- + 1;
        v17 = *a2;
        if ( a2[2] < v16 )
        {
          v29 = v16;
          v25 = qvector_reserve(a2, v17, v16, 1);
          *a2 = v25;
          v16 = v29;
          v17 = v25;
        }
        a2[1] = v16;
        *(_BYTE *)(v17 + v15) = 46;
        *(_BYTE *)(*a2 + v15 + 1) = 0;
        v18 = v38;
        v19 = a2[1];
        if ( (unsigned __int64)v38 <= 1 )
        {
          v23 = 2;
          if ( v19 )
            v23 = v19-- + 1;
          v24 = *a2;
          if ( a2[2] < v23 )
          {
            v30 = v23;
            v26 = qvector_reserve(a2, v24, v23, 1);
            *a2 = v26;
            v23 = v30;
            v24 = v26;
          }
          a2[1] = v23;
          *(_BYTE *)(v24 + v19) = 63;
          *(_BYTE *)(*a2 + v19 + 1) = 0;
        }
        else
        {
          v20 = v38 - 1;
          v21 = v38 - 1;
          if ( v19 )
          {
            --v19;
            v21 = v20 + v19;
            v18 = v38 + v19;
          }
          v22 = *a2;
          if ( a2[2] < v18 )
          {
            v34 = v38 - 1;
            v33 = v21;
            v31 = v18;
            v27 = qvector_reserve(a2, v22, v18, 1);
            v20 = v34;
            v21 = v33;
            *a2 = v27;
            v22 = v27;
            v18 = v31;
          }
          a2[1] = v18;
          *(_BYTE *)(v22 + v21) = 0;
          memcpy((void *)(v19 + *a2), src, v20);
        }
        *a3 -= (unsigned __int64)v36 >> 3;
        copy_tinfo_t(&v35, v41);
        if ( (get_tinfo_property(v35, 2) & 0x2F) != 0xD )
          break;
        clear_tinfo_t(v41);
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39);
        }
        if ( !src )
          goto LABEL_4;
        *(_QWORD *)&v38 = 0;
        qfree(src);
        if ( !a6 )
          goto LABEL_5;
      }
      clear_tinfo_t(v41);
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
      if ( src )
      {
        *(_QWORD *)&v38 = 0;
        qfree(src);
      }
      v12 = *a3;
    }
    *a3 = v12 - a5;
    clear_tinfo_t(&v35);
  }
  return v46 - __readfsqword(0x28u);
}
