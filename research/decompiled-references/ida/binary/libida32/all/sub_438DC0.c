__int64 __fastcall sub_438DC0(_QWORD *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v5; // rsi
  unsigned int v6; // r15d
  bool v7; // zf
  unsigned int v8; // eax
  unsigned int v9; // r12d
  bool v10; // dl
  __int64 result; // rax
  unsigned int v12; // ebx
  __int64 not_tail; // rsi
  __int64 v14; // r9
  __int16 v15; // ax
  __int16 v16; // bp
  __int64 v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // rsi
  __int16 v20; // ax
  __int16 v21; // ax
  int v22; // edx
  __int64 v23; // [rsp+8h] [rbp-50h]
  unsigned int segm_base; // [rsp+14h] [rbp-44h]
  unsigned int v25; // [rsp+18h] [rbp-40h]

  v5 = a3;
  v6 = *(_DWORD *)a2 & 0x404;
  if ( v6 )
  {
    if ( v6 != 4 )
    {
      v7 = v6 == 1024;
      v6 = 1;
      if ( !v7 )
        v6 = 8;
    }
  }
  else
  {
    v6 = 2;
  }
  v8 = *(_DWORD *)(a2 + 16);
  v25 = *(_DWORD *)(a2 + 8);
  v9 = v25 + v6 * *(unsigned __int16 *)(a2 + 4);
  if ( v25 < v8 )
  {
    v10 = v8 != -1;
    if ( v9 <= v8 )
      v8 = v25 + v6 * *(unsigned __int16 *)(a2 + 4);
    if ( v10 )
      v9 = v8;
  }
  result = sub_4EE820(a1 + 194, v5);
  v23 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(a2 + 1) & 2) != 0 )
      segm_base = *(_DWORD *)(a2 + 32);
    else
      segm_base = get_segm_base(result);
    if ( v25 < v9 )
    {
      v12 = v25;
      do
      {
        not_tail = v12;
        if ( (get_flags_ex(v12, 4) & 0x600) == 0x200 )
          not_tail = (unsigned int)prev_not_tail(v12);
        if ( !(unsigned __int8)is_problem_present(13, not_tail) )
        {
          v15 = sub_3B9AA0((__int64)a1, v12, 1);
          v16 = v15;
          if ( (v15 & 0x100) == 0 )
            goto LABEL_19;
          v17 = v15 & 0x600;
          if ( v17 == 1536 )
            goto LABEL_27;
          if ( v17 == 512 )
          {
            v21 = sub_3B9AA0((__int64)a1, v12, 4);
            v22 = v12;
            if ( (v21 & 0x600) == 0x200 )
              v22 = sub_3BD5D0((__int64)a1, v12);
            if ( v25 != v22 )
              goto LABEL_27;
          }
          if ( !a4 && (v16 & 0x1000) != 0 )
          {
LABEL_27:
            if ( v25 != v12 )
              goto LABEL_19;
          }
        }
        v18 = sub_437AB0(a1, (unsigned int *)a2, v12, segm_base, v23, v14);
        v19 = (get_flags_ex(v18, 4) & 0x600) == 0x200 ? (unsigned int)prev_not_tail(v18) : v18;
        if ( !(unsigned __int8)is_problem_present(13, v19) )
        {
          v20 = sub_3B9AA0((__int64)a1, v18, 1);
          if ( (v20 & 0x100) == 0 || (((v20 & 0x600) - 512LL) & 0xFFFFFFFFFFFFFC00LL) == 0 )
            goto LABEL_19;
        }
        if ( v18 < v9 )
        {
          if ( v18 >= v12 )
          {
            v12 = v25;
            v9 = v18;
            continue;
          }
          if ( v18 >= v25 )
            goto LABEL_19;
        }
        v12 += v6;
      }
      while ( v12 < v9 );
    }
    v12 = v9;
LABEL_19:
    result = (v12 - v25) / v6;
    if ( *(unsigned __int16 *)(a2 + 4) != (_DWORD)result )
      *(_WORD *)(a2 + 4) = result;
  }
  return result;
}

