__int64 __fastcall sub_458B00(__int64 a1, int a2, int a3, unsigned int a4, int *a5)
{
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int **v12; // rdx
  unsigned int *v13; // rax
  int v14; // edx
  unsigned int v15; // ecx
  unsigned __int64 ***v16; // rdi
  unsigned __int64 *v17; // r12
  unsigned __int64 *v18; // rcx
  unsigned __int64 *v19; // rbp
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rsi
  unsigned int v24; // r14d
  __int64 (__fastcall ***v25)(_QWORD, __int64, _QWORD, _QWORD); // rdi
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // [rsp+0h] [rbp-98h]
  __int64 v32; // [rsp+8h] [rbp-90h]
  __int64 v33; // [rsp+10h] [rbp-88h]
  unsigned int v34; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  unsigned __int64 v37; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v38[3]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( !a2 )
  {
    v15 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v16 = *((unsigned __int64 ****)a5 + 1);
      *((_QWORD *)a5 + 1) = v16 + 1;
    }
    else
    {
      v16 = (unsigned __int64 ***)(*((_QWORD *)a5 + 2) + v15);
      *a5 = v15 + 8;
    }
    v17 = **v16;
    v18 = (*v16)[1];
    if ( v17 != &v17[(_QWORD)v18] )
    {
      v19 = &v17[(_QWORD)v18];
      v31 = (int)a4 + 4LL;
      v34 = a4;
      v33 = a3 + 6LL;
      v36 = (int)a4;
      do
      {
        v37 = *v17;
        v20 = *(_QWORD **)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4 * v31)) + 1480);
        v21 = sub_4586A0(v20, v37, 0, -1);
        v22 = v21;
        if ( v21 != -1 )
        {
          v23 = *(_QWORD *)(a1 + 8);
          v24 = v21;
          v25 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, _QWORD))(v23 + 56);
          if ( v25 )
          {
            v32 = v21;
            LODWORD(v21) = (**v25)(v25, v23, v34, (unsigned int)v21);
            v22 = v32;
          }
          v26 = (unsigned int)v21;
          if ( v22 != (unsigned int)v21 )
            v26 = (unsigned int)sub_4551E0(*(_QWORD *)(a1 + 8), v34, v24);
          v27 = sub_4586A0(v20, HIDWORD(v37), 2u, -1);
          v28 = v27;
          if ( v27 != -1 )
          {
            v29 = v27 + sub_458A90(v20, v27, 1);
            if ( HIDWORD(v37) >= v29 )
              v28 = v29;
            if ( v26 < v28 )
            {
              v37 = __PAIR64__(v28, v26);
              v30 = *(_QWORD *)(a1 + 8 * v33 + 8);
              v38[0] = v26;
              v38[1] = v28;
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v30 + 104LL))(
                v30,
                *(_QWORD *)(a1 + 8 * v36 + 56),
                v38);
              sub_467910(*(_QWORD *)(a1 + 8), &v37, (unsigned int)a3, v34);
            }
          }
        }
        ++v17;
      }
      while ( v19 != v17 );
    }
    return v39 - __readfsqword(0x28u);
  }
  if ( a2 != 3 )
    return v39 - __readfsqword(0x28u);
  v10 = *a5;
  v11 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)*a5 > 0x2F )
  {
    v12 = *((unsigned int ***)a5 + 1);
    *((_QWORD *)a5 + 1) = v12 + 1;
  }
  else
  {
    v12 = (unsigned int **)(*((_QWORD *)a5 + 2) + v10);
    *a5 = v10 + 8;
  }
  v13 = *v12;
  v14 = 1;
  if ( a3 )
    v14 = -(a3 != 1);
  return sub_457210(v11, a3, v14, *v13);
}

