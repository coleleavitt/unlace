unsigned __int64 __fastcall sub_4F7DE0(_QWORD *a1)
{
  void *v2; // rdi
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebp
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned __int8 v11; // bl
  unsigned int v12; // r13d
  unsigned int v13; // ebx
  int v14; // ebp
  unsigned int v15; // eax
  _QWORD *v16; // rdi
  unsigned __int64 v17; // r8
  unsigned int v18; // ebp
  __int64 v19[2]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  int v21[4]; // [rsp+18h] [rbp-50h]
  int v22[2]; // [rsp+28h] [rbp-40h]
  int v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+38h] [rbp-30h]
  int v25; // [rsp+40h] [rbp-28h]
  int v26; // [rsp+48h] [rbp-20h]
  __int64 v27; // [rsp+50h] [rbp-18h]

  *(_QWORD *)v22 = __readfsqword(0x28u);
  *(_OWORD *)v21 = 0;
  ptr = nullptr;
  if ( sub_614760(*a1, &ptr, 84) <= 0 )
    goto LABEL_2;
  *(__m128i *)v19 = _mm_unpacklo_epi64(
                      (__m128i)(unsigned __int64)ptr,
                      (__m128i)((unsigned __int64)ptr + *(_QWORD *)v21));
  v4 = (unsigned __int16)unpack_dw(v19, (char *)ptr + *(_QWORD *)v21);
  if ( (unsigned __int16)v4 != 0xFFFF )
    goto LABEL_6;
  if ( v19[0] >= (unsigned __int64)v19[1] )
  {
    v4 = unpack_dd(v19);
LABEL_6:
    v5 = *a1;
LABEL_7:
    v6 = v4;
    if ( v4 > 0 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v5 + 1568) + 24LL);
        if ( v7 >= v6 )
          break;
        if ( v19[0] >= (unsigned __int64)v19[1] )
          goto LABEL_11;
        v8 = unpack_dd(v19);
        if ( v19[0] >= (unsigned __int64)v19[1] )
          goto LABEL_21;
        v9 = unpack_dd(v19);
        if ( !(unsigned __int8)sub_4F7C20(*(_QWORD **)(*a1 + 1568LL), v8, v9) )
          sub_82BC50(
            "duplicate selector (%a, base %a)\n",
            v19[0],
            v19[1],
            (int)ptr,
            v21[0],
            v21[2],
            v22[0],
            v23,
            v24,
            v25,
            v26,
            v27);
        v5 = *a1;
      }
    }
    else
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v5 + 1568) + 24LL);
    }
LABEL_9:
    if ( v6 != v7 || v19[0] < (unsigned __int64)v19[1] )
      goto LABEL_11;
    goto LABEL_2;
  }
  v11 = *(_BYTE *)v19[0]++;
  v4 = unpack_dd(v19);
  if ( v11 > 2u )
  {
    sub_82BC50(
      "unknown selector format: %u\n",
      v19[0],
      v19[1],
      (int)ptr,
      v21[0],
      v21[2],
      v22[0],
      v23,
      v24,
      v25,
      v26,
      v27);
    v2 = ptr;
    if ( ptr )
      goto LABEL_3;
    return *(_QWORD *)v22 - __readfsqword(0x28u);
  }
  v5 = *a1;
  v6 = v4;
  v7 = *(_QWORD *)(*(_QWORD *)(*a1 + 1568LL) + 24LL);
  if ( v11 != 2 || v4 <= 0 )
    goto LABEL_7;
  if ( v7 >= v4 )
    goto LABEL_9;
  v12 = 0;
  v13 = 0;
  while ( v19[0] < (unsigned __int64)v19[1] )
  {
    v14 = unpack_dd(v19);
    if ( v19[0] >= (unsigned __int64)v19[1] )
    {
LABEL_21:
      v10 = *(_QWORD *)(*(_QWORD *)(*a1 + 1568LL) + 24LL);
      goto LABEL_22;
    }
    v15 = unpack_dd(v19);
    v5 = *a1;
    v16 = *(_QWORD **)(*a1 + 1568LL);
    if ( v14 )
    {
      v12 += v15;
      v13 += v14;
      v15 = 1;
LABEL_36:
      v18 = v13 + v15;
      while ( 1 )
      {
        if ( !(unsigned __int8)sub_4F7C20(v16, v13, v12) )
          sub_82BC50(
            "duplicate selector (%a, base %a)\n",
            v19[0],
            v19[1],
            (int)ptr,
            v21[0],
            v21[2],
            v22[0],
            v23,
            v24,
            v25,
            v26,
            v27);
        v5 = *a1;
        v16 = *(_QWORD **)(*a1 + 1568LL);
        if ( v13 + 1 == v18 )
          break;
        ++v13;
      }
      v7 = v16[3];
      goto LABEL_44;
    }
    v7 = v16[3];
    v17 = v15 + v7;
    if ( v15 >= v17 || v6 < v17 )
      goto LABEL_9;
    if ( v15 )
    {
      ++v13;
      goto LABEL_36;
    }
LABEL_44:
    if ( v7 >= v6 )
      goto LABEL_9;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v5 + 1568) + 24LL);
LABEL_22:
  if ( v10 != v6 )
LABEL_11:
    sub_82BC50(
      "error while restoring selectors from database\n",
      v19[0],
      v19[1],
      (int)ptr,
      v21[0],
      v21[2],
      v22[0],
      v23,
      v24,
      v25,
      v26,
      v27);
LABEL_2:
  v2 = ptr;
  if ( ptr )
  {
LABEL_3:
    *(_QWORD *)v21 = 0;
    qfree(v2);
  }
  return *(_QWORD *)v22 - __readfsqword(0x28u);
}

