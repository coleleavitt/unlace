unsigned __int64 __fastcall sub_3E5300(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  _QWORD *v7; // rax
  __int128 v9; // kr00_16
  _QWORD *v10; // rdi
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  char v17; // al
  _QWORD *v18; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r10
  __int64 *v23; // rbx
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r12
  unsigned __int64 *v27; // rbp
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-A0h]
  _QWORD *v31; // [rsp+10h] [rbp-98h]
  unsigned __int64 v32; // [rsp+20h] [rbp-88h]
  __int64 v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-78h]
  __int64 v35; // [rsp+38h] [rbp-70h]
  unsigned __int64 v36; // [rsp+40h] [rbp-68h] BYREF
  char v37; // [rsp+48h] [rbp-60h]
  __int128 v38; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v7 = *(_QWORD **)(a2 + 1672);
  v39 = __readfsqword(0x28u);
  v37 = 0;
  v36 = -1;
  v38 = 0;
  v31 = v7;
  sub_630CA0(*v7, 26, &v38, 16);
  v9 = v38;
  v10 = *(_QWORD **)(a2 + 1672);
  if ( *(_BYTE *)(a1 + 72) == 100 )
    v11 = sub_40F780(v10, &v36);
  else
    v11 = sub_3E1CA0(v10, (__int64)&v36, a4);
  while ( v11 )
  {
    while ( 1 )
    {
      v12 = a3[1];
      v13 = *a3;
      if ( a3[2] < (unsigned __int64)(v12 + 1) )
      {
        v20 = qvector_reserve(a3, v13, v12 + 1, 24);
        v12 = a3[1];
        *a3 = v20;
        v13 = v20;
      }
      v14 = v13 + 24 * v12;
      *(_QWORD *)v14 = -1;
      *(_BYTE *)(v14 + 8) = 0;
      v15 = v36;
      *(_BYTE *)(v14 + 16) = 1;
      ++a3[1];
      *(_QWORD *)v14 = v15;
      v16 = v36;
      *(_BYTE *)(v14 + 8) = v37;
      v17 = v16 >= (unsigned __int64)v9 && v16 < *((_QWORD *)&v9 + 1);
      if ( !v17 )
      {
        v17 = is_mapped(v16);
        if ( v17 )
          v17 = (get_flags_ex(v36, 4) & 0x1000) != 0;
      }
      *(_BYTE *)(v14 + 16) = v17;
      v18 = *(_QWORD **)(a2 + 1672);
      if ( *(_BYTE *)(a1 + 72) == 100 )
        break;
      if ( !(unsigned __int8)sub_3E1E80(v18, &v36, a4) )
        goto LABEL_11;
    }
    v11 = sub_410770(v18, &v36, a4);
  }
LABEL_11:
  if ( *(_BYTE *)(a1 + 72) == 100 )
  {
    v21 = sub_3BDD60(v31, a4);
    v22 = a3[1];
    if ( v22 )
    {
      v33 = a1;
      v23 = a3;
      v24 = a3[1];
      v32 = v21;
      v25 = 24 * v22;
      v35 = a2;
      v34 = a4;
      do
      {
        v26 = *v23;
        v30 = v25;
        v25 -= 24;
        v27 = (unsigned __int64 *)(*v23 + v25);
        v28 = *v27;
        *(_QWORD *)&v38 = v28;
        if ( v28 >= (unsigned __int64)v9 && v28 < *((_QWORD *)&v9 + 1) )
        {
          v29 = sub_3BDD60(v31, v28);
          if ( !(unsigned __int8)netnode_charval(v29, v32, 68)
            || (unsigned int)sub_42DD50(*(_QWORD *)(v35 + 1672), v38) == 7 )
          {
            if ( (unsigned __int8)sub_492510(*(_QWORD *)(v33 + 32), &v38, *(unsigned int *)(v33 + 12)) )
            {
              sub_411DE0(v31, v34, *v27, 1);
              sub_4111A0((_DWORD)v31);
              *v27 = v38;
            }
            else
            {
              memmove((void *)(v26 + v25), (const void *)(v26 + v30), *v23 + 24 * v23[1]-- - (_QWORD)v27 - 24);
            }
          }
        }
        --v24;
      }
      while ( v24 );
    }
  }
  return v39 - __readfsqword(0x28u);
}
