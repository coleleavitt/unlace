unsigned __int64 __fastcall sub_276070(char *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __m128i v12; // xmm0
  char *v13; // rax
  char *v14; // r10
  char *v15; // r11
  char *v16; // rax
  __m128i v17; // xmm0
  char *v18; // r13
  int v19; // eax
  __m128i v20; // xmm0
  unsigned __int64 v21; // rax
  unsigned __int64 v23; // rdx
  char *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  __int64 v30; // [rsp+8h] [rbp-90h]
  __int64 v31; // [rsp+10h] [rbp-88h]
  unsigned __int64 *v32; // [rsp+20h] [rbp-78h]
  char *v33; // [rsp+20h] [rbp-78h]
  char *v34; // [rsp+20h] [rbp-78h]
  char *v35; // [rsp+28h] [rbp-70h]
  __int64 (__fastcall **v36)(); // [rsp+30h] [rbp-68h] BYREF
  int v37; // [rsp+38h] [rbp-60h]
  __m128i v38; // [rsp+40h] [rbp-58h]
  unsigned __int64 v39; // [rsp+50h] [rbp-48h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( a4 && a5 )
  {
    v7 = *(_QWORD *)(a6 + 32);
    if ( a4 + a5 == 2 )
    {
      v25 = *(_QWORD *)a2;
      if ( *(_QWORD *)a2 < v7 )
      {
        v26 = *(_QWORD *)a1;
        v27 = **(_QWORD **)(a6 + 24);
        v28 = -1;
        if ( v26 < v7 )
          v28 = *(_QWORD *)(v27 + 8 * v26);
        if ( *(_QWORD *)(v27 + 8 * v25) < v28 )
        {
          *(_QWORD *)a1 = v25;
          *(_QWORD *)a2 = v26;
        }
      }
    }
    else
    {
      v12 = _mm_loadu_si128((const __m128i *)(a6 + 16));
      v37 = *(_DWORD *)(a6 + 8);
      v36 = diffpos_sorting_strategy_t___vtable;
      v39 = v7;
      if ( a4 > a5 )
      {
        v30 = a4 / 2;
        v23 = *(_QWORD *)&a1[8 * (a4 / 2)];
        v34 = &a1[8 * (a4 / 2)];
        v38 = v12;
        v24 = (char *)sub_2727C0(a2, a3, v23, (__int64)&v36);
        v15 = v34;
        v14 = v24;
        v31 = (v24 - a2) >> 3;
      }
      else
      {
        v38 = v12;
        v31 = a5 / 2;
        v32 = (unsigned __int64 *)&a2[8 * (a5 / 2)];
        v13 = (char *)sub_272730(a1, (__int64)a2, *v32, (__int64)&v36);
        v14 = (char *)v32;
        v15 = v13;
        v30 = (v13 - a1) >> 3;
      }
      v35 = v14;
      v33 = v15;
      v16 = sub_272D20(v15, a2, v14);
      v17 = _mm_loadu_si128((const __m128i *)(a6 + 16));
      v18 = v16;
      LODWORD(v16) = *(_DWORD *)(a6 + 8);
      v36 = diffpos_sorting_strategy_t___vtable;
      v38 = v17;
      v37 = (int)v16;
      v39 = *(_QWORD *)(a6 + 32);
      sub_276070(a1, v33, v18, v30, v31, &v36);
      v19 = *(_DWORD *)(a6 + 8);
      v20 = _mm_loadu_si128((const __m128i *)(a6 + 16));
      v36 = diffpos_sorting_strategy_t___vtable;
      v37 = v19;
      v21 = *(_QWORD *)(a6 + 32);
      v38 = v20;
      v39 = v21;
      sub_276070(v18, v35, a3, a4 - v30, a5 - v31, &v36);
    }
  }
  return v40 - __readfsqword(0x28u);
}
