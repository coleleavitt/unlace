unsigned __int64 __fastcall sub_3F0680(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  int v5; // ebp
  unsigned __int16 v6; // ax
  int v8; // r13d
  unsigned __int8 v10; // r11
  __int64 v11; // rax
  int v12; // ebp
  int v13; // edx
  int v14; // ebx
  __int64 v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // r9
  __int64 v18; // rdx
  signed int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r13d
  int v23; // eax
  unsigned int v25; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 v26; // [rsp+10h] [rbp-78h]
  unsigned int v27; // [rsp+18h] [rbp-70h]
  unsigned __int8 v28; // [rsp+1Ch] [rbp-6Ch]
  unsigned __int8 v29[16]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v30[2]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v5 = *(unsigned __int16 *)(a1 + 890);
  v32 = __readfsqword(0x28u);
  if ( (((_WORD)v5 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC6Au, a2, a5);
LABEL_30:
    BUG();
  }
  v6 = *(_WORD *)(a1 + 48);
  v8 = a2;
  if ( v6 <= 0x1F5u )
  {
    if ( v6 > 0x1F3u )
    {
      v25 = 12;
      v10 = v6 == 500;
      goto LABEL_5;
    }
    if ( v6 == 431 )
    {
LABEL_21:
      v25 = 0;
      v10 = 0;
      goto LABEL_5;
    }
    if ( v6 <= 0x1AFu )
    {
      if ( v6 != 71 )
      {
        if ( v6 > 0x47u )
        {
          if ( v6 == 72 )
            goto LABEL_21;
          if ( v6 != 430 )
            goto LABEL_25;
        }
        else if ( v6 != 69 )
        {
          if ( v6 == 70 )
            goto LABEL_21;
          goto LABEL_25;
        }
      }
      v25 = 0;
      v10 = 1;
      goto LABEL_5;
    }
LABEL_25:
    if ( !under_debugger )
      sub_37E160(0xCC6Bu, a2, a5);
    goto LABEL_30;
  }
  if ( (unsigned __int16)(v6 - 502) > 1u )
    goto LABEL_25;
  v25 = 13;
  v10 = v6 == 502;
LABEL_5:
  v11 = *(_QWORD *)(a1 + 832);
  v12 = 2 * v5;
  v13 = *(_DWORD *)(v11 + 80);
  v14 = 2 * v13 * a4;
  v15 = (unsigned int)(v14 + *(_DWORD *)(v11 + 616));
  v16 = *(_DWORD *)(v11 + 612) + v14;
  v17 = **(int **)(v11 + 696);
  v27 = v15;
  if ( (_DWORD)v17 == (_DWORD)a2 || (_DWORD)v17 == a3 )
  {
    v26 = v10;
    a2 = 3;
    v15 = a1;
    sub_1D1F50(a1, 3u, v13, 0, 0x3BEA45E214ADDC55LL, v17, 0);
    v11 = *(_QWORD *)(a1 + 832);
    v10 = v26;
  }
  v18 = *(_QWORD *)(v11 + 760);
  if ( !v18
    || (v15 = a1,
        v28 = v10,
        v19 = *(_DWORD *)(*(_QWORD *)(v11 + 752) + 4 * v18 - 4),
        *(_QWORD *)(v11 + 760) = v18 - 1,
        a2 = *(unsigned __int16 *)(a1 + 890),
        *(_QWORD *)&a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(v19)).m128i_u64[0],
        sub_3EDDF0((_QWORD *)a1, a2, v12, v8, v19, v10),
        v20 = *(_QWORD *)(a1 + 832),
        (v21 = *(_QWORD *)(v20 + 760)) == 0) )
  {
    sub_3E5460(a5, v15, a2);
  }
  v22 = *(_DWORD *)(*(_QWORD *)(v20 + 752) + 4 * v21 - 4);
  *(_QWORD *)(v20 + 760) = v21 - 1;
  sub_3EDDF0((_QWORD *)a1, *(unsigned __int16 *)(a1 + 890), v12, a3, v22, v28);
  sub_3EAB70(a1, 0xEu, v12, v19, v22, v19, 0);
  sub_3E8540(*(_QWORD *)(a1 + 832), v22);
  if ( v25 )
    sub_3EAB70(a1, v25, v12, *(int *)(*(_QWORD *)(a1 + 832) + 616LL), v19, v19, 0);
  *(_DWORD *)v29 = 1;
  *(double *)&v29[4] = a5;
  v23 = *(unsigned __int16 *)(a1 + 890);
  v30[0] = 1;
  v31 = v27;
  v30[1] = v23;
  sub_3EB6F0((_QWORD *)a1, 10, v29, nullptr, (unsigned __int8 *)v30);
  v31 = v16;
  sub_3EB6F0((_QWORD *)a1, 11, v29, nullptr, (unsigned __int8 *)v30);
  sub_3E8540(*(_QWORD *)(a1 + 832), v19);
  sub_3EE280(a1, *(unsigned __int16 *)(a1 + 890), v27);
  sub_3EE280(a1, *(unsigned __int16 *)(a1 + 890), v16);
  sub_118BA0((__int64)v30);
  sub_118BA0((__int64)v29);
  return v32 - __readfsqword(0x28u);
}
