_QWORD *__fastcall sub_1F16BB0(_QWORD *a1, _QWORD **a2, __int64 a3)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ebp
  int v9; // ebx
  __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rsi
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v30; // [rsp+0h] [rbp-78h]
  __int64 *v31; // [rsp+8h] [rbp-70h]
  _DWORD *v32; // [rsp+10h] [rbp-68h]
  __int64 v33; // [rsp+20h] [rbp-58h]
  __int64 v34[8]; // [rsp+38h] [rbp-40h] BYREF

  v32 = a2 + 3;
  v31 = (__int64 *)(a2 + 4);
  v5 = sub_1F16500(a2[1], (__int64)a2[2], (__int64 *)a2 + 4, (_DWORD *)a2 + 6);
  v33 = v5;
  v6 = *((unsigned int *)a2 + 6);
  *((_DWORD *)a2 + 6) = v6 + 1;
  v7 = a2[4][v6];
  if ( (_DWORD)v7 )
  {
    v8 = v7;
    v9 = 0;
    do
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        v10 = *((unsigned int *)a2 + 6);
        v11 = a2[1];
        v12 = (__int64)a2[2];
        *((_DWORD *)a2 + 6) = v10 + 1;
        v13 = a2[4][v10];
        v14 = sub_1EE13A0((__int64)v11, v12, v31, v32);
        v19 = sub_1EDB980(v11, v14, v15, v16, v17, v18);
        if ( (*(_BYTE *)(v19 + 28) & 0x7Fu) - 59 > 2 )
        {
          v5 = *(_QWORD *)(v19 + 48);
        }
        else
        {
          v30 = v19;
          v23 = sub_A7A9D0((__int64)*a2, v19, v19, v20, v21, v22);
          v19 = v30;
          v5 = v23;
        }
        sub_A4F680(v34, v19 & 0xFFFFFFFFFFFFFFFBLL | (4LL * ((_DWORD)v13 != 0)));
        v24 = v34[0];
      }
      else
      {
        v27 = sub_A72040(*a2, v5);
        v28 = *((unsigned int *)a2 + 6);
        v5 = *(_QWORD *)(v27 + 32);
        *((_DWORD *)a2 + 6) = v28 + 1;
        v24 = LODWORD(a2[4][v28]);
      }
      v25 = *(unsigned int *)(a3 + 8);
      if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v25 + 1, 8);
        v25 = *(unsigned int *)(a3 + 8);
      }
      ++v9;
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v25) = v24;
      v26 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = v26;
    }
    while ( v8 != v9 );
  }
  else
  {
    v26 = *(unsigned int *)(a3 + 8);
  }
  sub_A4F6B0(a1, *(_QWORD *)a3, v26, v33);
  return a1;
}
