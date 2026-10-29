__int64 __fastcall sub_456BF0(int *a1, __int64 *a2, unsigned int a3)
{
  bool v3; // r15
  __int64 v7; // r14
  _QWORD *v8; // r13
  __int64 v9; // rax
  const char *v10; // rcx
  int v11; // eax
  bool v12; // zf
  const char *v13; // rdx
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  int aflags; // eax
  unsigned int v19; // esi
  unsigned int v20; // ecx
  unsigned int v21; // esi
  int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rsi
  unsigned int v25; // ecx
  __int64 v26; // rdx
  const char *v28; // rdx
  int v29; // eax
  const char *v30; // rdx
  int v31; // [rsp+8h] [rbp-60h]
  unsigned int v32; // [rsp+1Ch] [rbp-4Ch]
  int v33; // [rsp+20h] [rbp-48h] BYREF
  int v34; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v35 = __readfsqword(0x28u);
  v7 = qword_2CA1698;
  v8 = *(_QWORD **)(qword_2CA1698 + 1480);
  v31 = *a1;
  v9 = sub_5AFCE0(v8);
  if ( v9 )
  {
    v10 = haystack;
    if ( *((_QWORD *)a1 + 5) )
      v10 = *((const char **)a1 + 4);
    v3 = (v31 & 0x20) != 0;
    sub_622540(v8, v9, a3, v10);
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v11 = sub_3B90A0(v8, a3);
    v12 = *((_QWORD *)a1 + 2) == 0;
    v13 = haystack;
    v33 = v11;
    if ( !v12 )
      v13 = *((const char **)a1 + 1);
    if ( !(unsigned __int8)sub_79BD70(&v33, v7, v13, 0) )
    {
      v28 = haystack;
      if ( *((_QWORD *)a1 + 2) )
        v28 = *((const char **)a1 + 1);
      sub_79BBF0(&v34, v7, v28, 0, 0);
      v29 = sub_3B9110(v8, v34);
      if ( v29 != -1 )
      {
        v32 = v29;
        v34 = sub_3B90A0(v8, v29);
        sub_79BD70(&v34, v7, &byte_22CD811, 0);
        sub_4B4560(v8, v32);
        v30 = haystack;
        if ( *((_QWORD *)a1 + 2) )
          v30 = *((const char **)a1 + 1);
        if ( !(unsigned __int8)sub_79BD70(&v33, v7, v30, 0) )
        {
          if ( !under_debugger )
            interr(2199);
          BUG();
        }
      }
    }
    v14 = a3;
    v15 = v8;
    if ( (*a1 & 3) != 2 )
      goto LABEL_10;
  }
  else
  {
    v34 = sub_3B90A0(v8, a3);
    sub_79BD70(&v34, v7, &byte_22CD811, 0);
    v14 = a3;
    v15 = v8;
    if ( (*a1 & 3) != 2 )
    {
LABEL_10:
      sub_4B43A0(v15, v14);
      goto LABEL_11;
    }
  }
  sub_4B4410(v15, v14);
LABEL_11:
  sub_4B7AB0(v8, a3, (*(_BYTE *)a1 & 4) != 0);
  v16 = *a2;
  v17 = *a2;
  BYTE1(v17) = BYTE1(*a2) & 0x3F;
  *a2 = v17;
  if ( !v3 )
  {
    if ( (*a1 & 1) != 0 )
    {
      BYTE1(v17) |= 0x40u;
      *a2 = v17;
      if ( (*a1 & 3u) - 2 <= 1 )
      {
        BYTE1(v16) |= 0xC0u;
        *a2 = v16;
        aflags = get_aflags(a3);
LABEL_34:
        v19 = aflags & 0xFFFFBFFF;
        goto LABEL_15;
      }
    }
    else if ( (*a1 & 3) != 0 )
    {
      BYTE1(v17) |= 0x80u;
      *a2 = v17;
      aflags = get_aflags(a3);
      goto LABEL_34;
    }
    aflags = get_aflags(a3);
    goto LABEL_34;
  }
  BYTE1(v17) |= 0x40u;
  *a2 = v17;
  if ( (*a1 & 3u) - 2 <= 1 )
  {
    BYTE1(v16) |= 0xC0u;
    *a2 = v16;
  }
  aflags = get_aflags(a3);
  v19 = aflags | 0x4000;
LABEL_15:
  v20 = v19;
  v21 = v19 & 0xFFFFFFFB;
  v22 = v20 | 4;
  if ( (*a1 & 8) != 0 )
    v21 = v22;
  v23 = v21;
  v24 = v21 & 0xFFFFFFF7;
  v25 = v23 | 8;
  v26 = *a1 & 0x10;
  if ( (_DWORD)v26 )
    v24 = v25;
  if ( aflags == (_DWORD)v24 )
    return v35 - __readfsqword(0x28u);
  else
    return set_aflags(a3, v24, v26);
}

