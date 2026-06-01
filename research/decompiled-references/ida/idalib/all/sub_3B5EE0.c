__int64 __fastcall sub_3B5EE0(int a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 *v4; // r8
  int v6; // ebp
  __int64 v8; // r13
  int v9; // r15d
  int v10; // eax
  int v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  int v14; // r12d
  _QWORD *v15; // r9
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rbp
  __m128i **v19; // rax
  int v20; // eax
  __int64 (__fastcall ***bpt_kernel_interface)(); // rdi
  __int64 v23; // rax
  __m128i **v24; // r10
  __int64 v25; // rdx
  char v26; // al
  __m128i **v27; // r10
  _QWORD *v28; // r9
  __int64 *v29; // r8
  __int64 v30; // rax
  __int64 *v31; // [rsp+8h] [rbp-90h]
  _QWORD *v32; // [rsp+8h] [rbp-90h]
  __m128i **v33; // [rsp+8h] [rbp-90h]
  _QWORD *v34; // [rsp+8h] [rbp-90h]
  __m128i **v35; // [rsp+8h] [rbp-90h]
  _QWORD *v36; // [rsp+8h] [rbp-90h]
  __int64 *v37; // [rsp+8h] [rbp-90h]
  _QWORD *v38; // [rsp+8h] [rbp-90h]
  __int64 *v39; // [rsp+10h] [rbp-88h]
  _QWORD *v40; // [rsp+10h] [rbp-88h]
  __m128i **v41; // [rsp+10h] [rbp-88h]
  _QWORD *v42; // [rsp+10h] [rbp-88h]
  __int64 *v43; // [rsp+10h] [rbp-88h]
  __m128i **v44; // [rsp+10h] [rbp-88h]
  __int64 *v45; // [rsp+18h] [rbp-80h]
  unsigned int v46; // [rsp+20h] [rbp-78h]
  __m128i *v48; // [rsp+28h] [rbp-70h]
  __m128i *v49; // [rsp+30h] [rbp-68h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v51; // [rsp+48h] [rbp-50h]
  unsigned __int64 v52; // [rsp+58h] [rbp-40h]

  v4 = a3;
  v6 = 0;
  v52 = __readfsqword(0x28u);
  v8 = a2[1];
  v9 = v8;
  if ( (int)v8 > 0 )
  {
    while ( 1 )
    {
      v10 = compare_bpt_locs(*a2, *a2 + 16);
      if ( v10 )
        break;
      if ( (_DWORD)v8 == ++v6 )
      {
        v4 = a3;
        if ( !a3 )
          goto LABEL_40;
        v12 = a3[1];
        v13 = (int)v8;
        if ( v12 < (int)v8 )
          goto LABEL_14;
        if ( v12 == (int)v8 )
        {
LABEL_40:
          v14 = 0;
          v11 = 1;
          v15 = *(_QWORD **)(qword_2CCB598 + 1576);
          goto LABEL_21;
        }
        goto LABEL_31;
      }
    }
    v4 = a3;
    v11 = v10;
    if ( !v4 )
      goto LABEL_18;
    v12 = v4[1];
    v13 = (int)v8;
    if ( v12 >= (int)v8 )
    {
      if ( (int)v8 != v12 )
        v4[1] = (int)v8;
      if ( v10 > 0 )
      {
        v14 = 0;
      }
      else
      {
        v14 = v8 - 1;
        v9 = -1;
      }
      v15 = *(_QWORD **)(qword_2CCB598 + 1576);
      goto LABEL_21;
    }
    goto LABEL_15;
  }
  if ( a3 )
  {
    v12 = a3[1];
    v13 = (int)v8;
    if ( v12 >= (int)v8 )
    {
      if ( v12 != (int)v8 )
LABEL_31:
        v4[1] = v13;
      goto LABEL_32;
    }
LABEL_14:
    v11 = 1;
LABEL_15:
    v16 = *v4;
    if ( v4[2] < v13 )
    {
      v37 = v4;
      v30 = qvector_reserve(v4, v16, v13, 4);
      v4 = v37;
      v16 = v30;
      *v37 = v30;
      v12 = v37[1];
    }
    v31 = v4;
    memset((void *)(v16 + 4 * v12), 0, 4 * (v13 - v12));
    v4 = v31;
    v31[1] = v13;
LABEL_18:
    v14 = 0;
    if ( v11 <= 0 )
    {
      v14 = v8 - 1;
      v9 = -1;
    }
    v15 = *(_QWORD **)(qword_2CCB598 + 1576);
    goto LABEL_21;
  }
LABEL_32:
  if ( !(_DWORD)v8 )
    return 0;
  v11 = 1;
  v14 = 0;
  v15 = *(_QWORD **)(qword_2CCB598 + 1576);
LABEL_21:
  v46 = 0;
  do
  {
    v17 = 3;
    v18 = *a2 + 32LL * v14;
    if ( *(_DWORD *)(v18 + 12) && *(_DWORD *)(v18 + 28) )
    {
      v39 = v4;
      v32 = v15;
      v19 = (__m128i **)sub_3AF270(v18 - 32);
      v15 = v32;
      v4 = v39;
      if ( v19 == (__m128i **)(*v32 + 8LL * v32[1])
        || (v45 = v39,
            v40 = v32,
            v33 = v19,
            v20 = compare_bpt_locs((__int64)(*v19)[2].m128i_i64, v18),
            v15 = v40,
            v4 = v45,
            v20) )
      {
        v17 = 1;
      }
      else
      {
        v41 = v33;
        v34 = v15;
        bpt_kernel_interface = get_bpt_kernel_interface();
        v48 = (__m128i *)(v18 + 16);
        v23 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*bpt_kernel_interface)[35])(
                bpt_kernel_interface,
                v18 + 16);
        v15 = v34;
        v24 = v41;
        v4 = v45;
        v25 = v23;
        if ( v23 )
        {
          v17 = 2;
          if ( a4 )
          {
            ptr = nullptr;
            v51 = 0;
            sub_3B4800((__int64 *)(v25 + 32), (__int64 *)&ptr);
            sub_368890();
          }
        }
        else
        {
          v42 = v34;
          v35 = v24;
          v49 = *v24;
          v26 = must_journal(bpt_kernel_interface, v18 + 16, 0);
          v27 = v35;
          v28 = v42;
          v29 = v45;
          if ( v26 )
          {
            ptr = nullptr;
            v51 = 0;
            sub_3ABBE0((__int64 *)&ptr, (__m128i *)v49[2].m128i_i64);
            sub_3ABBE0((__int64 *)&ptr, v48);
            add_undo_record(197, ptr, v51);
            v28 = v42;
            v27 = v35;
            v29 = v45;
            if ( ptr )
            {
              v44 = v35;
              v38 = v28;
              *(_QWORD *)&v51 = 0;
              qfree(ptr);
              v29 = v45;
              v27 = v44;
              v28 = v38;
            }
          }
          v43 = v29;
          v36 = v28;
          sub_3AF3E0(v27, v18, v48, 0);
          ++v46;
          v15 = v36;
          v17 = 0;
          v4 = v43;
        }
      }
    }
    if ( v4 )
      *(_DWORD *)(*v4 + 4LL * v14) = v17;
    v14 += v11;
  }
  while ( v14 != v9 );
  return v46;
}
