__int64 __fastcall sub_478C80(
        __int64 a1,
        unsigned __int64 *a2,
        signed int a3,
        signed int a4,
        __int64 a5,
        unsigned __int64 a6,
        double a7,
        __m128 a8)
{
  unsigned int v8; // r13d
  char *v13; // rax
  void *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // rcx
  __int64 *v19; // r15
  char v20; // dl
  __int64 v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 *v27; // [rsp+10h] [rbp-1E8h]
  int v29[2]; // [rsp+18h] [rbp-1E0h]
  void *ptr; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 v31; // [rsp+38h] [rbp-1C0h]
  int v32[4]; // [rsp+50h] [rbp-1A8h] BYREF
  int v33[2]; // [rsp+60h] [rbp-198h]
  int v34[2]; // [rsp+68h] [rbp-190h]
  __int64 v35; // [rsp+70h] [rbp-188h]
  char v36; // [rsp+78h] [rbp-180h] BYREF
  _QWORD v37[8]; // [rsp+1B8h] [rbp-40h] BYREF

  v8 = 0;
  v37[0] = __readfsqword(0x28u);
  if ( *(unsigned __int16 *)(a5 + 26) < a6 )
  {
    v27 = *(__int64 **)(a5 + 16);
    switch_dbctx(*(int *)(a1 + 4LL * a4 + 16));
    *(_QWORD *)v33 = -1;
    *(_QWORD *)v34 = 0;
    v13 = &v36;
    v35 = 0;
    *(_OWORD *)v32 = -1;
    do
    {
      *(_WORD *)v13 = 0;
      v13 += 40;
      *((_WORD *)v13 - 19) = 0;
      *((_WORD *)v13 - 18) = 0;
      *((_DWORD *)v13 - 2) = 0;
      *((_WORD *)v13 - 17) = 0;
      *((_OWORD *)v13 - 2) = 0;
      *((_QWORD *)v13 - 2) = 0;
    }
    while ( v37 != (_QWORD *)v13 );
    v8 = 0;
    if ( (unsigned int)decode_insn(v32, v27, v37, 0, 0, a6, 0.0) )
    {
      if ( HIWORD(v34[0]) == *(_WORD *)(a5 + 26) )
      {
        v8 = sub_46C590(a1, a4, (__int64)v32);
        if ( !(_BYTE)v8 )
        {
          if ( !under_debugger )
            interr(2490);
          goto LABEL_26;
        }
        sub_46A620(*(_DWORD *)(a1 + 4LL * a3 + 16), (__int64)v32);
        ptr = nullptr;
        *(_QWORD *)v29 = (char *)v27 + a6;
        v31 = 0;
        v14 = (void *)qvector_reserve(&ptr, 0, 1, 8);
        v16 = v31;
        v17 = a3;
        ptr = v14;
        v18 = v27;
        *((_QWORD *)v14 + v31) = v27;
        *(_QWORD *)&v31 = v31 + 1;
        v19 = (__int64 *)((char *)v27 + HIWORD(v34[0]));
        while ( (unsigned __int64)v19 < *(_QWORD *)v29 )
        {
          if ( !(unsigned int)decode_insn(v32, v19, v16, v18, v17, v15, 0.0) || (v20 = sub_3D6B00(v32), v21 = v31, !v20) )
          {
            if ( (_QWORD)v31 )
            {
              sub_476F80(a1, a3, a4, v19, 1, 0.0, a8);
              v23 = v31;
              goto LABEL_17;
            }
LABEL_22:
            if ( !under_debugger )
              interr(2493);
LABEL_26:
            BUG();
          }
          v22 = ptr;
          if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v31 + 1, 8);
            v22 = ptr;
            v21 = v31;
          }
          v22[v21] = v19;
          *(_QWORD *)&v31 = v31 + 1;
          v19 = (__int64 *)((char *)v19 + HIWORD(v34[0]));
          sub_46A620(*(_DWORD *)(a1 + 4 * (a3 + 4LL)), (__int64)v32);
        }
        v23 = v31;
        if ( !(_QWORD)v31 )
          goto LABEL_22;
LABEL_17:
        *a2 = sub_476F80(a1, a3, a4, *((__int64 **)ptr + v23 - 1), 1, 0.0, a8);
        v24 = (unsigned int)(v31 - 2);
        v25 = 8 * v24;
        if ( (int)v24 >= 0 )
        {
          do
          {
            sub_476F80(a1, a3, a4, *(__int64 **)((char *)ptr + v25), 1, 0.0, a8);
            LODWORD(v24) = v24 - 1;
            v25 -= 8;
          }
          while ( (_DWORD)v24 != -1 );
        }
        sub_476F80(a1, a3, a4, v27, 1, 0.0, a8);
        if ( ptr )
        {
          *(_QWORD *)&v31 = 0;
          qfree(ptr);
        }
      }
    }
  }
  return v8;
}
