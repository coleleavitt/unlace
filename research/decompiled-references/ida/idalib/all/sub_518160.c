__int64 __fastcall sub_518160(__int64 *a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rax
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r13d
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 *v13; // rbx
  __int64 v14; // r14
  unsigned __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // r15
  __int64 *v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // rax
  unsigned __int64 *v22; // rax
  unsigned __int64 *v23; // r15
  unsigned __int64 *v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  char *v28; // r8
  __int64 v29; // rax
  char *v30; // [rsp+8h] [rbp-70h]
  __int64 v31[3]; // [rsp+10h] [rbp-68h] BYREF
  char v32; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v5 = *a1;
  v33 = __readfsqword(0x28u);
  v7 = sub_505D70(*(_QWORD *)(v5 + 1672) + 1624LL, a3);
  if ( !v7 )
LABEL_17:
    sub_387D20(1336, a3, v8, v9);
  v10 = *((unsigned __int8 *)a1 + 152);
  if ( !(_BYTE)v10 )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v11 = a2 - *(_DWORD *)(a1[1] + 68);
  if ( v11 >= a1[5] )
    sub_5144F0();
  v12 = v11 << 6;
  *(_DWORD *)(a1[4] + v12 + 56) = a2;
  v13 = (__int64 *)(a1[4] + v12);
  v14 = v7[a2 - *(_DWORD *)(a1[1] + 68) + 7];
  v15 = sub_5168B0((unsigned __int64 **)v13, a3);
  v8 = v13[1];
  if ( v15 != (unsigned __int64 *)(*v13 + 33 * v8) )
  {
    v8 = *v15;
    if ( a3 >= *v15 && a3 < v15[1] )
    {
      v16 = (__int64 *)sub_5168B0((unsigned __int64 **)v13, a3);
      v17 = v16;
      if ( v18 == v16 || a3 < *v16 || (v19 = v16[1], a3 == *v16) || a3 >= v19 )
      {
        sub_516950((__int64)v13, a3);
      }
      else
      {
        sub_5154D0(*((unsigned int *)v13 + 14), *v16, v19, a3);
        v17[1] = a3;
        *((_BYTE *)v17 + 32) = 1;
      }
      v20 = sub_5168B0((unsigned __int64 **)v13, a3);
      v8 = v13[1];
      if ( v20 == (unsigned __int64 *)(*v13 + 33 * v8) )
        goto LABEL_16;
      v8 = *v20;
    }
    if ( a4 > v8 )
      a4 = v8;
  }
LABEL_16:
  if ( a3 >= a4 )
    goto LABEL_17;
  v22 = sub_5168B0((unsigned __int64 **)v13, a3);
  v23 = v22;
  if ( v22 != v24 )
  {
    v25 = *v22;
    if ( a3 >= v25 || v25 < a4 )
      goto LABEL_17;
  }
  v26 = *((unsigned int *)v13 + 14);
  v31[0] = a3;
  v31[1] = a4;
  v31[2] = v14;
  v32 = 3;
  sub_514A20(v26, v31, 183);
  v27 = v13[1];
  v28 = (char *)v23 - *v13;
  if ( v13[2] < (unsigned __int64)(v27 + 1) )
  {
    v30 = (char *)v23 - *v13;
    v29 = qvector_reserve(v13, *v13, v27 + 1, 33);
    v28 = v30;
    *v13 = v29;
    v23 = (unsigned __int64 *)&v30[v29];
    v27 = v13[1];
  }
  memmove((char *)v23 + 33, v23, 33 * v27 - (_QWORD)v28);
  *((_BYTE *)v23 + 24) = 0;
  *(_OWORD *)v23 = 0;
  v23[2] = 0;
  *((_BYTE *)v23 + 32) = 0;
  v13[3] = (__int64)v23;
  ++v13[1];
  *v23 = a3;
  v23[1] = a4;
  v23[2] = v14;
  *((_BYTE *)v23 + 24) = 3;
  *(_BYTE *)(v13[3] + 32) = 1;
  return v10;
}
