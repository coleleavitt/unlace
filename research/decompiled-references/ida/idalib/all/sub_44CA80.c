__int64 __fastcall sub_44CA80(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  bool v12; // dl
  __int64 result; // rax
  unsigned __int64 v14; // rbx
  __int64 not_tail; // rsi
  __int64 v16; // r9
  __int16 v17; // ax
  __int16 v18; // bp
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  __int16 v22; // ax
  __int16 v23; // ax
  __int64 v24; // rdx
  __int64 v25; // [rsp+0h] [rbp-58h]
  unsigned __int64 segm_base; // [rsp+8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+10h] [rbp-48h]

  v6 = *(_DWORD *)a2 & 0x404;
  if ( v6 )
  {
    if ( v6 == 4 )
    {
      v7 = 4;
    }
    else if ( v6 == 1024 )
    {
      v6 = 1;
      v7 = 1;
    }
    else
    {
      v6 = 8;
      v7 = 8;
    }
  }
  else
  {
    v6 = 2;
    v7 = 2;
  }
  v8 = *(_QWORD *)(a2 + 8);
  v9 = v6 * (unsigned int)*(unsigned __int16 *)(a2 + 4);
  v10 = *(_QWORD *)(a2 + 24);
  v11 = v8 + v9;
  if ( v8 < v10 )
  {
    v12 = v10 != -1;
    if ( v11 <= v10 )
      v10 = v11;
    if ( v12 )
      v11 = v10;
  }
  result = sub_505D70(a1 + 203, a3);
  v25 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(a2 + 1) & 2) != 0 )
      segm_base = *(_QWORD *)(a2 + 56);
    else
      segm_base = get_segm_base(result);
    v27 = v7;
    if ( v8 < v11 )
    {
      v14 = v8;
      do
      {
        not_tail = v14;
        if ( (get_flags_ex(v14, 4) & 0x600) == 0x200 )
          not_tail = prev_not_tail(v14);
        if ( !(unsigned __int8)is_problem_present(13, not_tail) )
        {
          v17 = sub_3BE900(a1, v14, 1);
          v18 = v17;
          if ( (v17 & 0x100) == 0 )
            goto LABEL_19;
          v19 = v17 & 0x600;
          if ( v19 == 1536 )
            goto LABEL_27;
          if ( v19 == 512 )
          {
            v23 = sub_3BE900(a1, v14, 4);
            v24 = v14;
            if ( (v23 & 0x600) == 0x200 )
              v24 = sub_3C2650(a1, v14);
            if ( v8 != v24 )
              goto LABEL_27;
          }
          if ( !a4 && (v18 & 0x1000) != 0 )
          {
LABEL_27:
            if ( v8 != v14 )
              goto LABEL_19;
          }
        }
        v20 = sub_44B830(a1, (unsigned int *)a2, v14, segm_base, v25, v16);
        v21 = (get_flags_ex(v20, 4) & 0x600) == 0x200 ? prev_not_tail(v20) : v20;
        if ( !(unsigned __int8)is_problem_present(13, v21) )
        {
          v22 = sub_3BE900(a1, v20, 1);
          if ( (v22 & 0x100) == 0 || (((v22 & 0x600) - 512LL) & 0xFFFFFFFFFFFFFC00LL) == 0 )
            goto LABEL_19;
        }
        if ( v20 < v11 )
        {
          if ( v20 >= v14 )
          {
            v14 = v8;
            v11 = v20;
            continue;
          }
          if ( v20 >= v8 )
            goto LABEL_19;
        }
        v14 += v27;
      }
      while ( v14 < v11 );
    }
    v14 = v11;
LABEL_19:
    result = (v14 - v8) / v27;
    if ( *(unsigned __int16 *)(a2 + 4) != (_DWORD)result )
      *(_WORD *)(a2 + 4) = result;
  }
  return result;
}
