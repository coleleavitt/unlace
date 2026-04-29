__int64 __fastcall sub_40E90(__int64 a1, _QWORD *a2, int a3)
{
  bool v4; // cf
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  int v8; // ecx
  __int64 v9; // r14
  __int64 tinfo_size; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  int v17; // r9d
  int v18; // edx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // [rsp+8h] [rbp-90h]
  int v24; // [rsp+Ch] [rbp-8Ch]
  unsigned __int64 v25; // [rsp+18h] [rbp-80h]
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h]
  int v30; // [rsp+40h] [rbp-58h]
  char tinfo_property; // [rsp+40h] [rbp-58h]
  __int64 v32; // [rsp+48h] [rbp-50h]
  _QWORD v33[9]; // [rsp+50h] [rbp-48h] BYREF

  v33[1] = __readfsqword(0x28u);
  v4 = (unsigned __int8)getinf_flag(3, 4) == 0;
  v5 = a2[1];
  v6 = (-(__int64)v4 & 0xFFFFFFFFFFFFFFFCLL) + 8;
  v25 = v6;
  if ( (int)v5 <= 0 )
  {
LABEL_23:
    a2[7] = a3;
    return 1;
  }
  v24 = 36;
  v23 = 3;
  v7 = 0;
  v32 = 8LL * (v6 != 4) + 8;
  v26 = 16 * (5LL * (unsigned int)(v5 - 1) + 5);
  v27 = -(int)v6;
  v28 = v4 ? 3 : 7;
  while ( 1 )
  {
    v9 = v7 + *a2;
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(v9 + 64), 0);
    v11 = tinfo_size;
    if ( tinfo_size == -1 )
      return 0;
    v12 = (tinfo_size + v28) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v27;
    v13 = v12 / v25;
    if ( (get_tinfo_property(*(_QWORD *)(v9 + 64), 2) & 0xF) != 9 )
    {
      if ( (unsigned int)(*(_DWORD *)(a1 + 288) - 5) > 1
        || (v15 = *(_QWORD *)(v9 + 64),
            v33[0] = 0,
            v33[0] = get_tinfo_property(v15, 18),
            tinfo_property = get_tinfo_property(v33[0], 2),
            clear_tinfo_t(v33),
            (tinfo_property & 0xF) != 9) )
      {
        if ( 11 - (int)v13 >= v23 )
        {
          if ( (_DWORD)v13 == 1 )
          {
            cleanup_argloc(v9);
            *(_DWORD *)v9 = 3;
            v8 = v11;
            *(_DWORD *)(v9 + 8) = v23;
          }
          else if ( (_DWORD)v13 == 2 && v32 == v11 )
          {
            v22 = v23 + 1;
            if ( (unsigned __int8)getinf_flag(3, 32) )
            {
              cleanup_argloc(v9);
              *(_DWORD *)v9 = 4;
              v8 = v11;
              *(_DWORD *)(v9 + 8) = v22 | (v23 << 16);
            }
            else
            {
              cleanup_argloc(v9);
              *(_DWORD *)v9 = 4;
              v8 = v11;
              *(_DWORD *)(v9 + 8) = v23 | (v22 << 16);
            }
          }
          else
          {
            sub_31B00(v9, v23, v12 / v25, v11, 0);
            v8 = v11;
          }
          goto LABEL_9;
        }
        goto LABEL_18;
      }
    }
    v14 = (v12 + 7) >> 3;
    if ( v24 + (int)v14 > 49 )
    {
      v24 = 49;
LABEL_18:
      cleanup_argloc(v9);
      *(_DWORD *)v9 = 1;
      v8 = v11;
      *(_QWORD *)(v9 + 8) = a3;
      a3 += v12;
      goto LABEL_9;
    }
    if ( (_DWORD)v14 == 1 )
    {
      cleanup_argloc(v9);
      v16 = v24;
      v17 = v24 + 1;
      v18 = 3;
      v8 = v11;
LABEL_22:
      *(_DWORD *)v9 = v18;
      *(_DWORD *)(v9 + 8) = v16;
      v24 = v17;
      goto LABEL_9;
    }
    if ( (_DWORD)v14 == 2 && v32 == v11 )
    {
      v20 = v24 + 1;
      if ( !(unsigned __int8)getinf_flag(3, 32) )
      {
        cleanup_argloc(v9);
        *(_DWORD *)v9 = 4;
        v8 = v11;
        v21 = v24 | (v20 << 16);
        v24 += 2;
        *(_DWORD *)(v9 + 8) = v21;
        goto LABEL_9;
      }
      cleanup_argloc(v9);
      v8 = v11;
      v17 = v24 + 2;
      v18 = 4;
      v16 = v20 | (v24 << 16);
      goto LABEL_22;
    }
    v30 = v24 + v14;
    sub_31B00(v9, v24, (v12 + 7) >> 3, v11, 1);
    v8 = v11;
    v24 = v30;
LABEL_9:
    v7 += 80;
    sub_408F0(v9, (__int64 *)(v9 + 64), v8);
    v23 += v13;
    if ( v26 == v7 )
      goto LABEL_23;
  }
}
