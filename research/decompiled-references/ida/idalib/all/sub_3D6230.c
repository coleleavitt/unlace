unsigned __int64 __fastcall sub_3D6230(__m128i *a1, __int64 *a2)
{
  unsigned __int64 v3; // rax
  __int64 *v4; // r12
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r15
  __int64 *v10; // rax
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r11
  __int64 *v15; // r12
  unsigned __int64 v16; // r15
  int v17[2]; // [rsp+8h] [rbp-1A0h]
  __int64 v18; // [rsp+10h] [rbp-198h]
  const __m128i *v19; // [rsp+18h] [rbp-190h]
  int v20[2]; // [rsp+20h] [rbp-188h]
  int v21[2]; // [rsp+20h] [rbp-188h]
  int v22[4]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v23; // [rsp+40h] [rbp-168h]
  int v24[2]; // [rsp+48h] [rbp-160h]
  __int128 v25; // [rsp+50h] [rbp-158h] BYREF
  __int64 v26; // [rsp+68h] [rbp-140h]
  int v27[2]; // [rsp+168h] [rbp-40h]

  *(_QWORD *)v27 = __readfsqword(0x28u);
  if ( (sub_3BE900(a1, (unsigned __int64)a2, 4) & 0x600) == 0x200 )
  {
    v3 = sub_3C2650(a1, (unsigned __int64)a2);
    v4 = (__int64 *)v3;
    if ( v3 != -1 && a2 != (__int64 *)v3 )
    {
      v5 = sub_3BE900(a1, v3, 0);
      if ( (v5 & 0x600) == 0x400 )
      {
        v6 = sub_3C9650(a1->m128i_i64, v4, v5, nullptr);
        v9 = get_item_end(v4, v4, v7, v8) - (_QWORD)v4;
        v10 = sub_3C9470(a1->m128i_i64, &v25, (unsigned __int64)v4, 0, v5);
        v18 = -1;
        v19 = (const __m128i *)v10;
        if ( v10 )
          v18 = *v10;
        *(_QWORD *)v24 = 0;
        *(_OWORD *)v22 = 0;
        sub_3D1350(a1, (unsigned __int64)v4, 4);
        if ( !v6 || v6 == v9 || (v11 = v9 / v6, v9 % v6) )
        {
          v23 = 0;
          *(_QWORD *)v24 = 0;
          *(_OWORD *)v22 = 0;
          sub_3D4400(
            a1->m128i_i64,
            v4,
            1024,
            (char *)((char *)v4 - (char *)a2),
            (void *)0xFFFFFFFFFFFFFFFFLL,
            (const __m128i *)v22);
          if ( v23 )
            ((void (__fastcall *)(int *, int *, __int64))v23)(v22, v22, 3);
          v23 = 0;
          *(_OWORD *)v22 = 0;
          *(_QWORD *)v24 = 0;
          sub_3D4400(
            a1->m128i_i64,
            a2,
            1024,
            (char *)(v9 + (char *)a2 - (char *)v4),
            (void *)0xFFFFFFFFFFFFFFFFLL,
            (const __m128i *)v22);
          if ( v23 )
            ((void (__fastcall *)(int *, int *, __int64))v23)(v22, v22, 3);
        }
        else
        {
          v12 = ((char *)a2 - (char *)v4) / v6;
          v13 = v12 * v6;
          v14 = v12;
          if ( (char *)a2 - (char *)v4 >= v6 )
          {
            *(_QWORD *)v20 = v11;
            v23 = 0;
            *(_QWORD *)v24 = 0;
            *(_OWORD *)v22 = 0;
            sub_3D4400(a1->m128i_i64, v4, v5, (char *)(v12 * v6), (void *)v18, (const __m128i *)v22);
            v11 = *(_QWORD *)v20;
            v14 = ((char *)a2 - (char *)v4) / v6;
            if ( v23 )
            {
              ((void (__fastcall *)(int *, int *, __int64))v23)(v22, v22, 3);
              v14 = ((char *)a2 - (char *)v4) / v6;
              v11 = *(_QWORD *)v20;
            }
            if ( v19 )
            {
              *(_QWORD *)v21 = v14;
              *(_QWORD *)v17 = v11;
              sub_3CA2F0(a1->m128i_i64, (__int64)v4, 0, v5, v19, 0);
              v14 = *(_QWORD *)v21;
              v11 = *(_QWORD *)v17;
            }
          }
          v15 = (__int64 *)((char *)v4 + v13);
          v16 = v11 - v14;
          if ( a2 != v15 )
          {
            v23 = 0;
            *(_QWORD *)v24 = 0;
            *(_OWORD *)v22 = 0;
            sub_3D4400(
              a1->m128i_i64,
              v15,
              1024,
              (char *)((char *)a2 - (char *)v15),
              (void *)0xFFFFFFFFFFFFFFFFLL,
              (const __m128i *)v22);
            if ( v23 )
              ((void (__fastcall *)(int *, int *, __int64))v23)(v22, v22, 3);
            *(_OWORD *)v22 = 0;
            v23 = 0;
            *(_QWORD *)v24 = 0;
            sub_3D4400(
              a1->m128i_i64,
              a2,
              1024,
              (char *)v15 + v6 - (_QWORD)a2,
              (void *)0xFFFFFFFFFFFFFFFFLL,
              (const __m128i *)v22);
            if ( v23 )
              ((void (__fastcall *)(int *, int *, __int64))v23)(v22, v22, 3);
            v15 = (__int64 *)((char *)v15 + v6);
            --v16;
          }
          if ( v16 )
          {
            v23 = 0;
            *(_QWORD *)v24 = 0;
            *(_OWORD *)v22 = 0;
            sub_3D4400(a1->m128i_i64, v15, v5, (char *)(v6 * v16), (void *)v18, (const __m128i *)v22);
            if ( v23 )
              ((void (__fastcall *)(int *, int *, __int64))v23)(v22, v22, 3);
            if ( v19 )
              sub_3CA2F0(a1->m128i_i64, (__int64)v15, 0, v5, v19, 0);
          }
        }
      }
      else
      {
        v26 = 0;
        v25 = 0;
        sub_3D1350(a1, (unsigned __int64)v4, 4);
      }
    }
  }
  return *(_QWORD *)v27 - __readfsqword(0x28u);
}
